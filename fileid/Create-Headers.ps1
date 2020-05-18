$dt = [DateTime]::Now
$header = @"
// magic.h
// Generated on: $dt

#pragma once
#include "common.hpp"
#include "details.hpp"

namespace magic {

"@ 

$list = @"
std::vector<common::MagicInfo*> list;
void initList() {

"@

([xml](gc .\data.xml -raw)).Items.item | % {
   $magicStr = $_."#text"
   $magic = $magicStr.Split(',')
   $name = $_.shortname
   $offset = if ($_.offset -ne $null) { $_.offset } else { 0 }
   $extra =   if ($_.extra -ne $null) { $_.extra } else { "nullptr" }

   #If its not in the format we want/need (e.g. 0x45,0x46,0x47)
   if ($magicStr -notmatch "^(0x[0-9A-Fa-f]{2},?)+$" ) {
		#Convert to hex array from string
		$magic = ([System.Text.Encoding]::ASCII.GetBytes($magic) | % { [String]::Format("0x{0:X2}",$_)})
        $magicStr = $magic -join ','
   }

   $header += "unsigned char magic_" + $name + "[" + $magic.Count + "] = {" + $magicStr + "};" +[Environment]::NewLine
   $list += '	list.push_back(new common::MagicInfo("'+ $_.extension +'", "'+ $_.name +'", "' + $_.version + '", '+ $offset +', ' + $magic.Count +', magic_' + $name +', '+ $extra +'));' + [Environment]::NewLine

}
$list += "}}"

$outFile = ".\magic.h"
$header | Set-Content $outFile
$list | Add-Content $outFile