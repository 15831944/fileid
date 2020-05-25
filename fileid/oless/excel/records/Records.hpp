#pragma once
#include "Record.hpp"

#include "FormulaRecord.hpp"
#include "EOFRecord.hpp"
#include "CalcCountRecord.hpp"
#include "CalcModeRecord.hpp"
#include "CalcPrecisionRecord.hpp"
#include "CalcRefModeRecord.hpp"
#include "CalcDeltaRecord.hpp"
#include "CalcIterRecord.hpp"
#include "ProtectRecord.hpp"
#include "PasswordRecord.hpp"
#include "HeaderRecord.hpp"
#include "FooterRecord.hpp"
#include "ExternSheetRecord.hpp"
#include "LblRecord.hpp"
#include "WinProtectRecord.hpp"
#include "VerticalPageBreaksRecord.hpp"
#include "HorizontalPageBreaksRecord.hpp"
#include "NoteRecord.hpp"
#include "SelectionRecord.hpp"
#include "Date1904Record.hpp"
#include "ExternNameRecord.hpp"
#include "LeftMarginRecord.hpp"
#include "RightMarginRecord.hpp"
#include "TopMarginRecord.hpp"
#include "BottomMarginRecord.hpp"
#include "PrintRowColRecord.hpp"
#include "PrintGridRecord.hpp"
#include "FilePassRecord.hpp"
#include "FontRecord.hpp"
#include "PrintSizeRecord.hpp"
#include "ContinueRecord.hpp"
#include "Window1Record.hpp"
#include "BackupRecord.hpp"
#include "PaneRecord.hpp"
#include "CodePageRecord.hpp"
#include "PlsRecord.hpp"
#include "DConRecord.hpp"
#include "DConRefRecord.hpp"
#include "DConNameRecord.hpp"
#include "DefColWidthRecord.hpp"
#include "XCTRecord.hpp"
#include "CRNRecord.hpp"
#include "FileSharingRecord.hpp"
#include "WriteAccessRecord.hpp"
#include "ObjRecord.hpp"
#include "UncalcedRecord.hpp"
#include "CalcSaveRecalcRecord.hpp"
#include "TemplateRecord.hpp"
#include "IntlRecord.hpp"
#include "ObjProtectRecord.hpp"
#include "ColInfoRecord.hpp"
#include "GutsRecord.hpp"
#include "WsBoolRecord.hpp"
#include "GridSetRecord.hpp"
#include "HCenterRecord.hpp"
#include "VCenterRecord.hpp"
#include "BoundSheet8Record.hpp"
#include "BoundSheet5Record.hpp"
#include "WriteProtectRecord.hpp"
#include "CountryRecord.hpp"
#include "HideObjRecord.hpp"
#include "SortRecord.hpp"
#include "PaletteRecord.hpp"
#include "SyncRecord.hpp"
#include "LPrRecord.hpp"
#include "DxGColRecord.hpp"
#include "FnGroupNameRecord.hpp"
#include "FilterModeRecord.hpp"
#include "BuiltInFnGroupCountRecord.hpp"
#include "AutoFilterInfoRecord.hpp"
#include "AutoFilterRecord.hpp"
#include "SclRecord.hpp"
#include "SetupRecord.hpp"
#include "ScenManRecord.hpp"
#include "SCENARIORecord.hpp"
#include "SxViewRecord.hpp"
#include "SxvdRecord.hpp"
#include "SXVIRecord.hpp"
#include "SxIvdRecord.hpp"
#include "SXLIRecord.hpp"
#include "SXPIRecord.hpp"
#include "DocRouteRecord.hpp"
#include "RecipNameRecord.hpp"
#include "MulRkRecord.hpp"
#include "MulBlankRecord.hpp"
#include "MmsRecord.hpp"
#include "SXDIRecord.hpp"
#include "SXDBRecord.hpp"
#include "SXFDBRecord.hpp"
#include "SXDBBRecord.hpp"
#include "SXNumRecord.hpp"
#include "SxBoolRecord.hpp"
#include "SxErrRecord.hpp"
#include "SXIntRecord.hpp"
#include "SXStringRecord.hpp"
#include "SXDtrRecord.hpp"
#include "SxNilRecord.hpp"
#include "SXTblRecord.hpp"
#include "SXTBRGIITMRecord.hpp"
#include "SxTbpgRecord.hpp"
#include "ObProjRecord.hpp"
#include "SXStreamIDRecord.hpp"
#include "DBCellRecord.hpp"
#include "SXRngRecord.hpp"
#include "SxIsxoperRecord.hpp"
#include "BookBoolRecord.hpp"
#include "DbOrParamQryRecord.hpp"
#include "ScenarioProtectRecord.hpp"
#include "OleObjectSizeRecord.hpp"
#include "XFRecord.hpp"
#include "InterfaceHdrRecord.hpp"
#include "InterfaceEndRecord.hpp"
#include "SXVSRecord.hpp"
#include "MergeCellsRecord.hpp"
#include "BkHimRecord.hpp"
#include "MsoDrawingGroupRecord.hpp"
#include "MsoDrawingRecord.hpp"
#include "MsoDrawingSelectionRecord.hpp"
#include "PhoneticInfoRecord.hpp"
#include "SxRuleRecord.hpp"
#include "SXExRecord.hpp"
#include "SxFiltRecord.hpp"
#include "SxDXFRecord.hpp"
#include "SxItmRecord.hpp"
#include "SxNameRecord.hpp"
#include "SxSelectRecord.hpp"
#include "SXPairRecord.hpp"
#include "SxFmlaRecord.hpp"
#include "SxFormatRecord.hpp"
#include "SSTRecord.hpp"
#include "LabelSstRecord.hpp"
#include "ExtSSTRecord.hpp"
#include "SXVDExRecord.hpp"
#include "SXFormulaRecord.hpp"
#include "SXDBExRecord.hpp"
#include "RRDInsDelRecord.hpp"
#include "RRDHeadRecord.hpp"
#include "RRDChgCellRecord.hpp"
#include "RRTabIdRecord.hpp"
#include "RRDRenSheetRecord.hpp"
#include "RRSortRecord.hpp"
#include "RRDMoveRecord.hpp"
#include "RRFormatRecord.hpp"
#include "RRAutoFmtRecord.hpp"
#include "RRInsertShRecord.hpp"
#include "RRDMoveBeginRecord.hpp"
#include "RRDMoveEndRecord.hpp"
#include "RRDInsDelBeginRecord.hpp"
#include "RRDInsDelEndRecord.hpp"
#include "RRDConflictRecord.hpp"
#include "RRDDefNameRecord.hpp"
#include "RRDRstEtxpRecord.hpp"
#include "LRngRecord.hpp"
#include "UsesELFsRecord.hpp"
#include "DSFRecord.hpp"
#include "CUsrRecord.hpp"
#include "CbUsrRecord.hpp"
#include "UsrInfoRecord.hpp"
#include "UsrExclRecord.hpp"
#include "FileLockRecord.hpp"
#include "RRDInfoRecord.hpp"
#include "BCUsrsRecord.hpp"
#include "UsrChkRecord.hpp"
#include "UserBViewRecord.hpp"
#include "UserSViewBeginRecord.hpp"
#include "UserSViewBegin_ChartRecord.hpp"
#include "UserSViewEndRecord.hpp"
#include "RRDUserViewRecord.hpp"
#include "QsiRecord.hpp"
#include "SupBookRecord.hpp"
#include "Prot4RevRecord.hpp"
#include "CondFmtRecord.hpp"
#include "CFRecord.hpp"
#include "DValRecord.hpp"
#include "DconBinRecord.hpp"
#include "TxORecord.hpp"
#include "RefreshAllRecord.hpp"
#include "HLinkRecord.hpp"
#include "LelRecord.hpp"
#include "CodeNameRecord.hpp"
#include "SXFDBTypeRecord.hpp"
#include "Prot4RevPassRecord.hpp"
#include "ObNoMacrosRecord.hpp"
#include "DvRecord.hpp"
#include "Excel9FileRecord.hpp"
#include "RecalcIdRecord.hpp"
#include "EntExU2Record.hpp"
#include "DimensionsRecord.hpp"
#include "BlankRecord.hpp"
#include "NumberRecord.hpp"
#include "LabelRecord.hpp"
#include "BoolErrRecord.hpp"
#include "StringRecord.hpp"
#include "RowRecord.hpp"
#include "IndexRecord.hpp"
#include "ArrayRecord.hpp"
#include "DefaultRowHeightRecord.hpp"
#include "TableRecord.hpp"
#include "Window2Record.hpp"
#include "RKRecord.hpp"
#include "StyleRecord.hpp"
#include "BigNameRecord.hpp"
#include "FormatRecord.hpp"
#include "ContinueBigNameRecord.hpp"
#include "ShrFmlaRecord.hpp"
#include "HLinkTooltipRecord.hpp"
#include "WebPubRecord.hpp"
#include "QsiSXTagRecord.hpp"
#include "DBQueryExtRecord.hpp"
#include "ExtStringRecord.hpp"
#include "TxtQryRecord.hpp"
#include "QsirRecord.hpp"
#include "QsifRecord.hpp"
#include "RRDTQSIFRecord.hpp"
#include "BOFRecord.hpp"
#include "OleDbConnRecord.hpp"
#include "WOptRecord.hpp"
#include "SXViewExRecord.hpp"
#include "SXTHRecord.hpp"
#include "SXPIExRecord.hpp"
#include "SXVDTExRecord.hpp"
#include "SXViewEx9Record.hpp"
#include "ContinueFrtRecord.hpp"
#include "RealTimeDataRecord.hpp"
#include "ChartFrtInfoRecord.hpp"
#include "FrtWrapperRecord.hpp"
#include "StartBlockRecord.hpp"
#include "EndBlockRecord.hpp"
#include "StartObjectRecord.hpp"
#include "EndObjectRecord.hpp"
#include "CatLabRecord.hpp"
#include "YMultRecord.hpp"
#include "SXViewLinkRecord.hpp"
#include "PivotChartBitsRecord.hpp"
#include "FrtFontListRecord.hpp"
#include "SheetExtRecord.hpp"
#include "BookExtRecord.hpp"
#include "SXAddlRecord.hpp"
#include "CrErrRecord.hpp"
#include "HFPictureRecord.hpp"
#include "FeatHdrRecord.hpp"
#include "FeatRecord.hpp"
#include "DataLabExtRecord.hpp"
#include "DataLabExtContentsRecord.hpp"
#include "CellWatchRecord.hpp"
#include "FeatHdr11Record.hpp"
#include "Feature11Record.hpp"
#include "DropDownObjIdsRecord.hpp"
#include "ContinueFrt11Record.hpp"
#include "DConnRecord.hpp"
#include "List12Record.hpp"
#include "Feature12Record.hpp"
#include "CondFmt12Record.hpp"
#include "CF12Record.hpp"
#include "CFExRecord.hpp"
#include "XFCRCRecord.hpp"
#include "XFExtRecord.hpp"
#include "AutoFilter12Record.hpp"
#include "ContinueFrt12Record.hpp"
#include "MDTInfoRecord.hpp"
#include "MDXStrRecord.hpp"
#include "MDXTupleRecord.hpp"
#include "MDXSetRecord.hpp"
#include "MDXPropRecord.hpp"
#include "MDXKPIRecord.hpp"
#include "MDBRecord.hpp"
#include "PLVRecord.hpp"
#include "Compat12Record.hpp"
#include "DXFRecord.hpp"
#include "TableStylesRecord.hpp"
#include "TableStyleRecord.hpp"
#include "TableStyleElementRecord.hpp"
#include "StyleExtRecord.hpp"
#include "NamePublishRecord.hpp"
#include "NameCmtRecord.hpp"
#include "SortDataRecord.hpp"
#include "ThemeRecord.hpp"
#include "GUIDTypeLibRecord.hpp"
#include "FnGrp12Record.hpp"
#include "NameFnGrp12Record.hpp"
#include "MTRSettingsRecord.hpp"
#include "CompressPicturesRecord.hpp"
#include "HeaderFooterRecord.hpp"
#include "CrtLayout12Record.hpp"
#include "CrtMlFrtRecord.hpp"
#include "CrtMlFrtContinueRecord.hpp"
#include "ForceFullCalculationRecord.hpp"
#include "ShapePropsStreamRecord.hpp"
#include "TextPropsStreamRecord.hpp"
#include "RichTextStreamRecord.hpp"
#include "CrtLayout12ARecord.hpp"
#include "UnitsRecord.hpp"
#include "ChartRecord.hpp"
#include "SeriesRecord.hpp"
#include "DataFormatRecord.hpp"
#include "LineFormatRecord.hpp"
#include "MarkerFormatRecord.hpp"
#include "AreaFormatRecord.hpp"
#include "PieFormatRecord.hpp"
#include "AttachedLabelRecord.hpp"
#include "SeriesTextRecord.hpp"
#include "ChartFormatRecord.hpp"
#include "LegendRecord.hpp"
#include "SeriesListRecord.hpp"
#include "BarRecord.hpp"
#include "LineRecord.hpp"
#include "PieRecord.hpp"
#include "AreaRecord.hpp"
#include "ScatterRecord.hpp"
#include "CrtLineRecord.hpp"
#include "AxisRecord.hpp"
#include "TickRecord.hpp"
#include "ValueRangeRecord.hpp"
#include "CatSerRangeRecord.hpp"
#include "AxisLineRecord.hpp"
#include "CrtLinkRecord.hpp"
#include "DefaultTextRecord.hpp"
#include "TextRecord.hpp"
#include "FontXRecord.hpp"
#include "ObjectLinkRecord.hpp"
#include "FrameRecord.hpp"
#include "BeginRecord.hpp"
#include "EndRecord.hpp"
#include "PlotAreaRecord.hpp"
#include "Chart3dRecord.hpp"
#include "PicFRecord.hpp"
#include "DropBarRecord.hpp"
#include "RadarRecord.hpp"
#include "SurfRecord.hpp"
#include "RadarAreaRecord.hpp"
#include "AxisParentRecord.hpp"
#include "LegendExceptionRecord.hpp"
#include "ShtPropsRecord.hpp"
#include "SerToCrtRecord.hpp"
#include "AxesUsedRecord.hpp"
#include "SBaseRefRecord.hpp"
#include "SerParentRecord.hpp"
#include "SerAuxTrendRecord.hpp"
#include "IFmtRecordRecord.hpp"
#include "PosRecord.hpp"
#include "AlRunsRecord.hpp"
#include "BRAIRecord.hpp"
#include "SerAuxErrBarRecord.hpp"
#include "ClrtClientRecord.hpp"
#include "SerFmtRecord.hpp"
#include "Chart3DBarShapeRecord.hpp"
#include "FbiRecord.hpp"
#include "BopPopRecord.hpp"
#include "AxcExtRecord.hpp"
#include "DatRecord.hpp"
#include "PlotGrowthRecord.hpp"
#include "SIIndexRecord.hpp"
#include "GelFrameRecord.hpp"
#include "BopPopCustomRecord.hpp"
#include "Fbi2Record.hpp"
