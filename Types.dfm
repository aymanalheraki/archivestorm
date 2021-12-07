object FTypes: TFTypes
  Left = 0
  Top = 0
  BiDiMode = bdLeftToRight
  BorderStyle = bsDialog
  Caption = 'Documents Types Management'
  ClientHeight = 255
  ClientWidth = 271
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  ParentBiDiMode = False
  Position = poMainFormCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 5
    Top = 167
    Width = 260
    Height = 41
    BevelInner = bvRaised
    BevelOuter = bvLowered
    BiDiMode = bdRightToLeft
    ParentBiDiMode = False
    TabOrder = 0
    object txtName: TAdvEdit
      Left = 56
      Top = 11
      Width = 129
      Height = 19
      DefaultHandling = True
      EmptyTextStyle = []
      ShowError = True
      ReturnIsTab = True
      LabelCaption = 'T.Name'
      LabelPosition = lpLeftCenter
      LabelFont.Charset = DEFAULT_CHARSET
      LabelFont.Color = clMaroon
      LabelFont.Height = -11
      LabelFont.Name = 'Tahoma'
      LabelFont.Style = []
      Lookup.Font.Charset = DEFAULT_CHARSET
      Lookup.Font.Color = clWindowText
      Lookup.Font.Height = -11
      Lookup.Font.Name = 'Arial'
      Lookup.Font.Style = []
      Lookup.Separator = ';'
      BiDiMode = bdLeftToRight
      ParentBiDiMode = False
      Color = clWindow
      Ctl3D = False
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxLength = 120
      ParentCtl3D = False
      ParentFont = False
      TabOrder = 0
      Text = ''
      Visible = True
      Version = '3.4.2.2'
    end
    object btnSave: TAeroButton
      Left = 191
      Top = 8
      Width = 58
      Height = 23
      ImageIndex = 1
      Images = ImageList1
      ImagePos = ipRight
      Version = '1.0.0.1'
      Caption = #1581#1601#1592
      Enabled = False
      TabOrder = 1
      OnClick = btnSaveClick
    end
  end
  object Panel2: TPanel
    Left = 5
    Top = 214
    Width = 260
    Height = 36
    BevelInner = bvRaised
    BevelOuter = bvLowered
    BiDiMode = bdRightToLeft
    ParentBiDiMode = False
    TabOrder = 1
    object btnAddNew: TAeroButton
      Left = 6
      Top = 3
      Width = 113
      Height = 28
      ImageIndex = 3
      Images = ImageList1
      Version = '1.0.0.1'
      Caption = 'Add New Type'
      TabOrder = 0
      OnClick = btnAddNewClick
    end
    object btnExit: TAeroButton
      Left = 181
      Top = 3
      Width = 71
      Height = 28
      ImageIndex = 2
      Images = ImageList1
      Version = '1.0.0.1'
      Caption = 'Cancel'
      TabOrder = 1
      OnClick = btnExitClick
    end
  end
  object tSG: TAdvStringGrid
    Left = 4
    Top = 7
    Width = 261
    Height = 154
    Cursor = crDefault
    BiDiMode = bdLeftToRight
    ColCount = 3
    Ctl3D = True
    DrawingStyle = gdsClassic
    RowCount = 4
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRowSelect]
    ParentBiDiMode = False
    ParentCtl3D = False
    ParentShowHint = False
    ScrollBars = ssBoth
    ShowHint = True
    TabOrder = 2
    OnClick = tSGClick
    HoverRowCells = [hcNormal, hcSelected]
    OnGetCellCursor = tSGGetCellCursor
    OnDblClickCell = tSGDblClickCell
    HintShowCells = True
    HintShowLargeText = True
    HintShowSizing = True
    ActiveCellFont.Charset = DEFAULT_CHARSET
    ActiveCellFont.Color = clWindowText
    ActiveCellFont.Height = -11
    ActiveCellFont.Name = 'Tahoma'
    ActiveCellFont.Style = [fsBold]
    Bands.Active = True
    Bands.PrimaryColor = 14024661
    ColumnSize.Stretch = True
    ColumnSize.StretchColumn = 1
    ControlLook.FixedGradientHoverFrom = 15000287
    ControlLook.FixedGradientHoverTo = 14406605
    ControlLook.FixedGradientHoverMirrorFrom = 14406605
    ControlLook.FixedGradientHoverMirrorTo = 13813180
    ControlLook.FixedGradientHoverBorder = 12033927
    ControlLook.FixedGradientDownFrom = 14991773
    ControlLook.FixedGradientDownTo = 14991773
    ControlLook.FixedGradientDownMirrorFrom = 14991773
    ControlLook.FixedGradientDownMirrorTo = 14991773
    ControlLook.FixedGradientDownBorder = 14991773
    ControlLook.DropDownHeader.Font.Charset = DEFAULT_CHARSET
    ControlLook.DropDownHeader.Font.Color = clWindowText
    ControlLook.DropDownHeader.Font.Height = -11
    ControlLook.DropDownHeader.Font.Name = 'Tahoma'
    ControlLook.DropDownHeader.Font.Style = []
    ControlLook.DropDownHeader.Visible = True
    ControlLook.DropDownHeader.Buttons = <>
    ControlLook.DropDownFooter.Font.Charset = DEFAULT_CHARSET
    ControlLook.DropDownFooter.Font.Color = clWindowText
    ControlLook.DropDownFooter.Font.Height = -11
    ControlLook.DropDownFooter.Font.Name = 'Tahoma'
    ControlLook.DropDownFooter.Font.Style = []
    ControlLook.DropDownFooter.Visible = True
    ControlLook.DropDownFooter.Buttons = <>
    Filter = <>
    FilterDropDown.Font.Charset = DEFAULT_CHARSET
    FilterDropDown.Font.Color = clWindowText
    FilterDropDown.Font.Height = -11
    FilterDropDown.Font.Name = 'Tahoma'
    FilterDropDown.Font.Style = []
    FilterDropDown.TextChecked = 'Checked'
    FilterDropDown.TextUnChecked = 'Unchecked'
    FilterDropDownClear = '(All)'
    FilterEdit.TypeNames.Strings = (
      'Starts with'
      'Ends with'
      'Contains'
      'Not contains'
      'Equal'
      'Not equal'
      'Clear')
    FixedRowHeight = 22
    FixedFont.Charset = DEFAULT_CHARSET
    FixedFont.Color = clWindowText
    FixedFont.Height = -11
    FixedFont.Name = 'Tahoma'
    FixedFont.Style = [fsBold]
    FloatFormat = '%.2f'
    GridImages = ImageList1
    HoverButtons.Buttons = <>
    HoverButtons.Position = hbLeftFromColumnLeft
    HTMLSettings.ImageFolder = 'images'
    HTMLSettings.ImageBaseName = 'img'
    Look = glStandard
    PrintSettings.DateFormat = 'dd/mm/yyyy'
    PrintSettings.Font.Charset = DEFAULT_CHARSET
    PrintSettings.Font.Color = clWindowText
    PrintSettings.Font.Height = -11
    PrintSettings.Font.Name = 'Tahoma'
    PrintSettings.Font.Style = []
    PrintSettings.FixedFont.Charset = DEFAULT_CHARSET
    PrintSettings.FixedFont.Color = clWindowText
    PrintSettings.FixedFont.Height = -11
    PrintSettings.FixedFont.Name = 'Tahoma'
    PrintSettings.FixedFont.Style = []
    PrintSettings.HeaderFont.Charset = DEFAULT_CHARSET
    PrintSettings.HeaderFont.Color = clWindowText
    PrintSettings.HeaderFont.Height = -11
    PrintSettings.HeaderFont.Name = 'Tahoma'
    PrintSettings.HeaderFont.Style = []
    PrintSettings.FooterFont.Charset = DEFAULT_CHARSET
    PrintSettings.FooterFont.Color = clWindowText
    PrintSettings.FooterFont.Height = -11
    PrintSettings.FooterFont.Name = 'Tahoma'
    PrintSettings.FooterFont.Style = []
    PrintSettings.PageNumSep = '/'
    SearchFooter.Color = clBtnFace
    SearchFooter.FindNextCaption = 'Find &next'
    SearchFooter.FindPrevCaption = 'Find &previous'
    SearchFooter.Font.Charset = DEFAULT_CHARSET
    SearchFooter.Font.Color = clWindowText
    SearchFooter.Font.Height = -11
    SearchFooter.Font.Name = 'Tahoma'
    SearchFooter.Font.Style = []
    SearchFooter.HighLightCaption = 'Highlight'
    SearchFooter.HintClose = 'Close'
    SearchFooter.HintFindNext = 'Find next occurrence'
    SearchFooter.HintFindPrev = 'Find previous occurrence'
    SearchFooter.HintHighlight = 'Highlight occurrences'
    SearchFooter.MatchCaseCaption = 'Match case'
    SearchFooter.ResultFormat = '(%d of %d)'
    SelectionColor = clHighlight
    SelectionTextColor = clHighlightText
    ShowDesignHelper = False
    SortSettings.DefaultFormat = ssAutomatic
    VAlignment = vtaCenter
    Version = '8.2.4.1'
    ColWidths = (
      64
      44
      149)
    RowHeights = (
      22
      22
      22
      22)
  end
  object ImageList1: TImageList
    Left = 37
    Top = 112
    Bitmap = {
      494C010104000801680110001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000002000000001002000000000000020
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FAFAFA05ECECEC13E3E3
      E31CE2E2E21DE5E5E51AE9E9E916EEEEEE11F4F4F40BFBFBFB04FEFEFE010000
      000000000000000000000000000000000000000000000000000000000000CBCB
      CB34CFCFCF30F7F7F708FEFEFE01000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FCFCFC03F6F6F609F7F7
      F708F7F7F708F7F7F708F7F7F708F7F7F708F7F7F708F7F7F708F7F7F708F7F7
      F708F7F7F708FCFCFC030000000000000000000000006569BAC7707EE0FC6A6D
      BEA2000000000000000000000000000000000000000000000000000000000000
      000000000000FDFDFE020000000000000000FEFEFE01E9E9E916BDBDBD42A0A0
      A05F9F9F9F60A5A5A55AADADAD52B6B6B649C4C4C43BD3D3D32CDFDFDF20E8E8
      E817EFEFEF10F6F6F609FCFCFC03000000000000000000000000CAB0A386FADE
      D1FFF9D1BBFFF8B48DFFDEA888ED9B8D819DA19E9C69DDDDDD22F1F1F10E0000
      00000000000000000000000000000000000000000000F2F2F20D8D8D8D7C8989
      897D8989897D8989897D8989897D8989897D8989897D8989897D8989897D8989
      897D8A8A8A7DC4C4C43B0000000000000000B9B9DC487A83E6FF6A80FFFF263C
      D9FCEBEBF5140000000000000000000000000000000000000000000000000000
      00007677C48B8688D97A0000000000000000F7F7F708656465A4524345E44A3B
      3DE64E4446DB5E5B5BD05B5A5AC05C5C5CA87878788A8D8D8D729B9B9B64AAAA
      AA55B9B9B946CACACA35E3E3E31CF8F8F80700000000E8E5E41DED9D78F5FFFE
      FFFFFFFEFFFFFFE9DBFFE6A999FF313BCFFFDCA794FDA78F7FBE9A908A8FC8C8
      C837E4E4E41BFEFEFE01000000000000000000000000F0F0F00FFFFFFFFFEEEE
      EEFFEEEEEEFFEEEEEEFFEEEEEEFFEEEEEEFFEEEEEEFFEEEEEEFFEEEEEEFFEEEE
      EEFFF2F2F2FFA7A7A77B0000000000000000A0A0D3644D54DEFF2536EBFF0A1F
      D9FEE2E3F21D000000000000000000000000000000000000000000000000DCDC
      ED230D15BFF8B1B1DE4F0000000000000000E5E5E51A3A3437F4714F55FF6645
      4AFF786367FFB38D90FFA77D82FFBDB8B8FF959090FB6B6868EA574B4BD4544E
      4FBC5F5F5FA087878778B9B9B946ECECEC1300000000E79371E6FAE7DFFFFDF2
      EDFFFFC0A5FF538FFBFF285EFEFF1245FFFF0C42FEFFFFFFFFFFFEFDFCFFDBA2
      95FF5E58BEFF998E82A4E9E9E9160000000000000000F0F0F00FFFFFFFFFE7E7
      E8FFE7E7E8FFE7E7E8FFE7E7E8FFE7E7E8FFE7E7E8FFE7E7E8FFE7E7E8FFE7E7
      E8FFEAEAEBFFA7A7A7790000000000000000E9E9F3161418BFFB060EDBFF0412
      D8FF7B7CC2860000000000000000000000000000000000000000000000002B33
      BAD91821C1EE000000000000000000000000CDCDCD324B3E41FA775257FF6A46
      4BFF826D70FF816568FF917477FFDDDADAFFD7D4D3FFCDC8C7FFAE8185FF533A
      3FFF222225FF323132D6A6A6A659E6E6E61900000000ED9979FFFFFFFEFFFDF2
      EDFFFFBEA3FF7EBDFEFF80BBFCFF1B4FFFFF1B4FFFFF8A8AD1FFF9C6ADFF0532
      EFFF0035FFFF3C4196D8B5B5B54A0000000000000000F0F0F00FFFFFFFFFE8E8
      E9FFE8E8E9FFE8E8E9FFE8E8E9FFE8E8E9FFE8E8E9FFE8E8E9FFE8E8E9FFE8E8
      E9FFEBEBECFFA7A7A779000000000000000000000000595AB9A60002CFFF0309
      D8FF070EC0FBD9D9EB2600000000000000000000000000000000797BC5880C21
      DFFF9B9CD265000000000000000000000000B8B8B847604A4FFE80565BFF7149
      4FFF907C7EFF524749FF7D7173FFE7E6E5FFDAD8D7FFCBC8C7FF836669FF4332
      37FF332E31FF312F31DDAAAAAA55E8E8E81700000000F8DFD5FFFFF7F1FFFFF7
      F2FFFFFBF7FFD89F9EFF6A96E4FF5992FCFF2D64FEFF275EFEFF2258FEFF154B
      FFFF1042FFFF0137FFFF4851B6C00000000000000000F0F0F00FFFFFFFFFA8A8
      A8FFD9D9D9FFA8A8A8FFA8A8A8FFB9B9B9FFA8A8A8FFB8B8B8FFA8A8A8FFBDBD
      BDFFECECECFFA7A7A779000000000000000000000000FDFDFD021D1EAFE30001
      D0FF0106D5FF2226B1DF000000000000000000000000A9A9D3570C28E5FF2633
      BEDF00000000000000000000000000000000A9A8A85A76585DFF885A60FF784A
      50FF886669FF7E7172FF9F9697FFDDD8D8FFDBD8D8FFCDCACAFF544548FF3A2D
      31FF3A3034FF3B3939D0B0B0B04FEBEBEB14EFEBE918FDF6F4FFFFF3EAFFFFF6
      F0FFFFF7F2FFFDC8B0FFB28BA4FF427AFEFF346AFEFF3268FEFF2C62FEFF1E53
      FDFF164BFFFF686CAE9EF1F1F10E0000000000000000F0F0F00FFFFFFFFFAAAA
      AAFFE7E7E7FFAAAAAAFFD8D8D8FFADADADFFC5C5C5FFBCBCBCFFAAAAAAFFAAAA
      AAFFEEEEEEFFA7A7A77900000000000000000000000000000000E8E8F3171011
      B4EF0000D1FF0103CEFF595BB8A700000000B1B1D84F0A1ED3FC0B25DFFED1D1
      E62E00000000000000000000000000000000A19D9E6F856167FF8F5960FF9073
      79FF9DA6ABFF9AA1A6FF8D8D92FF7D7B7FFF7F787CFF7B7175FF443A3EFF402F
      33FF403135FF444142C5B6B6B649EEEEEE11E3AC9B83FFF7F1FFFFEDE0FFFFF0
      E7FFFFF3EAFFFFC6AAFF8F73A8FF548EFEFF5089FEFF457CFEFF3D74FEFF2B63
      FFFF424990C9FDFDFD02000000000000000000000000F0F0F00FFFFFFFFFAAAA
      AAFFAAAAAAFFE7E7E7FFAAAAAAFFAAAAAAFFE7E7E7FFAAAAAAFFC9C9C9FFD9D9
      D9FFEFEFEFFFA7A7A7790000000000000000000000000000000000000000E2E2
      F11D1415B4EC0000D2FF0101C4FF4D4DB7B4060DC2FB0514E1FF6E70BD930000
      0000000000000000000000000000000000009892948592686EFF965D63FFB9C4
      C7FFD2FFFFFFC6FFFFFFBCFCFFFFB3F6FCFFA8EEF5FF9BE0E7FF94D7DEFF7AA8
      AEFF45373BFF514D4EBCBBBBBB44F1F1F10EDD8F78ADFFF2E5FFFFEADAFFFFEF
      E1FFFDDBCAFF5156BFFF4F8AFCFF5F98FEFF5B94FEFF4C84FEFF427AFEFF3066
      FEFF2552ECFCDADADA25000000000000000000000000F0F0F00FFFFFFFFF8B8B
      8CFFB1B1B1FFABABACFFABABACFFCACACBFFABABACFFD9D9D9FFABABACFFABAB
      ACFFF0F0F1FFA7A7A77900000000000000000000000000000000000000000000
      0000F5F5FA0A2C2CB0D50001CCFF0000CCFF0103D1FF3638B2CB000000000000
      00000000000000000000000000000000000085808195A47278FFA1656BFFC7D3
      D7FFCFF5F7FFC4E8EAFFC1EAEDFFBBE9EDFFB6EAEEFFB2F0F5FFAFF9FFFFA3F3
      F5FF4F4447FF575555B0C2C2C23DF4F4F40BD9B4AA63FBBE99FFF9B18EFFFCC6
      ADFFFDB999FF75B1F8FF86C1FDFF77B3FDFF659EF7FF73ADF5FF79B4FDFF356C
      FEFF2C62FEFF2B3CB0E59E9E9F610000000000000000F0F0F00FFFFFFFFF61CD
      ACFF02623CFFACACACFFACACACFFCACACAFFABABACFFBFBFBFFFACACACFFBBBB
      BBFFEDEDEDFFA2A2A27900000000000000000000000000000000000000000000
      0000E2E2F21D3235B7D00207CFFF0103D2FF0001C9FF7677C18A000000000000
      0000000000000000000000000000000000007F7678A8B27980FFAB6C73FFD4E1
      E4FFDAFBFDFFD2F4F7FFCDF4F7FFC9F5F9FFC3F6FAFFBCF0F4FFB8F1F6FFA5DD
      E3FF544347FF5D5C5CA3C8C8C837F7F7F70800000000FFF8F2FFFDE7D9FFEA8D
      6AFFEC8C6CFF7C75B3FF88C8FFFF6087DDFFA6A0C9FF7E72B1FF66A4FEFF3A71
      FEFF2C62FEFF184DFEFF414796C800000000FAFAFA05DCDCDC23EAEAEAFF39BF
      95FF05683DFFAEAEAFFFA2A2A3FFEFEFF0FFE5E5E5FFDBDBDCFFDBDBDCFFD5D5
      D5FFC5C5C6FFB9B9B95900000000000000000000000000000000000000007174
      CA920E1DD0FA0717E4FF0510DEFF0D12BAF30406C0FC0608CCFF6061BDA10000
      0000000000000000000000000000000000007E6F72BDC18188FFB4747BFFE0EB
      EEFFDAF0F2FFD3EBECFFCFEBECFFCAEAEBFFC5EAEDFFC1EAEEFFBFF1F5FFAAD3
      D8FF523D40FE6A6A6A95CFCFCF30FAFAFA0500000000F7F7F709FFE8D5D1FFFB
      F7FFEFA686FFFFE3CBFFFFE7CDFFFFE6D3FFFFE7D5FFFDD0BAFFE49C8DFF2860
      FFFF1D52FDFFAAAAC158FDFDFD020000000068A3859D096E3FFF096E3FFF2CC4
      9CFF096E3FFF096E3FFF096E3FFFF1F1F1FFE0E0E1FFA8A8A9FF868686FF8989
      89FFBBBBBBDE000000000000000000000000000000009A9BD2714F58D1EC3D57
      F7FF1D3CFAFF0D26F0FF1820BFEBEBEBF514C3C4E43C191BBDED2325D4FF494A
      BACAF9F9FC06000000000000000000000000837073CCCE868EFFC37F86FFE9F5
      F6FFE5F9FAFFE0F6F7FFDCF5F7FFD6F3F5FFD0F1F3FFCBF0F3FFCBF9FCFFAFCA
      CFFF52393EFC79797986D6D6D629FCFCFC030000000000000000EDECEB17FFFF
      FFFFF7BE9DFFFFDCBFFFFFDCC3FFFFE2C9FFFFE4CEFFFFF0E3FFF8B297FF3F55
      D4CB8788B87E0000000000000000000000000D7640FF3CD5B7FF3CD5B7FF14C8
      A1FF2ED1AFFF3CD5B7FF64E2CDFFF1F1F2FFDEDEDFFFC4C4C4FFFFFFFFFFD6D6
      D6E8000000000000000000000000000000008487D0E6A2ABF7FF8D9DFFFF6A7F
      FFFF3A55F9FF313BC0D6EFEFF7100000000000000000FDFDFE025B5BBEAE3F40
      D1FE494AC3F4A1A2D5650000000000000000917479DFB2737AFFB07F85FFF1F6
      F7FFE2EDEDFFDEEBECFFDAEAECFFD7EBECFFD4ECEDFFD0EAECFFD4F9FBFFAABC
      C0FF4C3337F89D9D9D63E2E2E21DFEFEFE01000000000000000000000000E9E9
      E954F6B694FFFDF2EAFFFFECDBFFFFD7B8FFFFD8BAFFFFEFE3FFEB9C83FFEFEF
      EF100000000000000000000000000000000000000000F0F0F00FFFFFFFFF3DE0
      C8FF107C41FFF3F3F4FFF3F3F4FFF0F0F1FFDADADAFFC6C6C7FFE3E3E3FF0000
      0000000000000000000000000000000000008688CCD8B6BBF5FFA3ACFBFF6972
      E0FA7678C898000000000000000000000000000000000000000000000000C7C7
      E5385455C1D46061CCFA5A5ABCDBACADD954A77F85F1AE6F76FFB48D91FFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFFFFFFF2FFFFFFEEFFFFFFF0FFFFFFAAAE
      B0FF493739E2CFCFCF30F4F4F40B000000000000000000000000000000000000
      0000DDBDB365D85633FFE27F64FFF7E1DAFFFEF4EAFFFFF2E7FFE9967CFFEFEF
      EF100000000000000000000000000000000000000000F4F4F40BFFFFFFFF3EE8
      D4FF138242FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE5E5E4FF000000000000
      000000000000000000000000000000000000DEDEEF259091D1C3999DE2DF9495
      D27F000000000000000000000000000000000000000000000000000000000000
      0000EDEDF7127C7DC8986062C4DE8383CA84847174C6A3797EDAAA9597D8B0B3
      B2D99C9E9EC79A9B9BBE9A9B9CBF979899BD949595A7969797A4959595A88F89
      8A92CBCBCB34F7F7F708FEFEFE01000000000000000000000000000000000000
      000000000000000000000000000000000000E4DAD62CE0876EB7DE7355DEFEFE
      FE01000000000000000000000000000000000000000000000000000000001586
      43FF74B78F960000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000200000000100010000000000000100000000000000000000
      000000000000000000000000FFFFFF0000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000FFFF801FE1FF80038FFB0001C01F8003
      07F300008003800307E300008001800307E700008001800383C7000080018003
      838F000000018003C10F000000038003E01F000000038003F03F000000018003
      F03F000080010003E01F00008001000780070000C007000F01830000E00F801F
      07E00001F00F803F0FF00001FF0FE7FF00000000000000000000000000000000
      000000000000}
  end
end
