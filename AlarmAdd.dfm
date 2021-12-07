object FAlarmAdd: TFAlarmAdd
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Add Alarm'
  ClientHeight = 181
  ClientWidth = 254
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poOwnerFormCenter
  OnCreate = FormCreate
  OnShow = FormShow
  DesignSize = (
    254
    181)
  PixelsPerInch = 96
  TextHeight = 13
  object RzGroupBox1: TRzGroupBox
    Left = 16
    Top = 8
    Width = 225
    Height = 55
    BiDiMode = bdLeftToRight
    Caption = 'Current Date'
    ParentBiDiMode = False
    TabOrder = 0
    object lblCurrentDate: TLabel
      Left = 20
      Top = 19
      Width = 181
      Height = 25
      Alignment = taCenter
      AutoSize = False
      BiDiMode = bdRightToLeftNoAlign
      Color = 14869218
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clHotLight
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentBiDiMode = False
      ParentColor = False
      ParentFont = False
      Transparent = False
      Layout = tlCenter
    end
  end
  object btnSave: TAeroButton
    Left = 124
    Top = 145
    Width = 54
    Height = 28
    ImageIndex = 0
    Images = ImageList3
    Version = '1.0.0.1'
    Anchors = [akTop, akRight]
    Caption = 'Save'
    TabOrder = 1
    OnClick = btnSaveClick
  end
  object btnExit: TAeroButton
    Left = 181
    Top = 145
    Width = 68
    Height = 28
    ImageIndex = 2
    Images = ImageList3
    Version = '1.0.0.1'
    Anchors = [akTop, akRight]
    Caption = 'Cancel'
    TabOrder = 2
    OnClick = btnExitClick
  end
  object AeroButton1: TAeroButton
    Left = 8
    Top = 145
    Width = 97
    Height = 28
    ImageIndex = 3
    Images = ImageList3
    Version = '1.0.0.1'
    Anchors = [akTop, akRight]
    Caption = 'Remove Alarm'
    TabOrder = 3
    OnClick = AeroButton1Click
  end
  object AdvGroupBox1: TAdvGroupBox
    Left = 15
    Top = 64
    Width = 226
    Height = 70
    BiDiMode = bdLeftToRight
    Caption = 'Alarm Time'
    ParentBiDiMode = False
    ParentCtl3D = True
    TabOrder = 4
    object dtpAlarm: TAdvDateTimePicker
      Left = 57
      Top = 29
      Width = 106
      Height = 22
      BiDiMode = bdLeftToRight
      Date = 41265.000000000000000000
      Format = 'yyyy/MM/dd'
      Time = 41265.000000000000000000
      Color = clSilver
      DoubleBuffered = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Tahoma'
      Font.Pitch = fpFixed
      Font.Style = []
      Font.Quality = fqClearType
      Kind = dkDate
      ParentBiDiMode = False
      ParentDoubleBuffered = False
      ParentFont = False
      TabOrder = 0
      TabStop = True
      BorderStyle = bsSingle
      Ctl3D = True
      DateTime = 41265.000000000000000000
      Version = '1.3.0.0'
      LabelPosition = lpRightCenter
      LabelFont.Charset = DEFAULT_CHARSET
      LabelFont.Color = clMaroon
      LabelFont.Height = -11
      LabelFont.Name = 'Tahoma'
      LabelFont.Style = []
    end
  end
  object ImageList3: TImageList
    Left = 4
    Top = 62
    Bitmap = {
      494C0101040008007C0010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
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
      00000000000000000000000000000000000000000000FAFAFA05ECECEC13E3E3
      E31CE2E2E21DE5E5E51AE9E9E916EEEEEE11F4F4F40BFBFBFB04FEFEFE010000
      0000000000000000000000000000000000000000000000000000000000000000
      0000FEFEFE01F9F9F906F4F4F40BF3F3F30CE7E7E718D1D1D12EC7C7C738CECE
      CE31DFDFDF20F2F2F20DFDFDFD0200000000000000000000000000000000CBCB
      CB34CFCFCF30F7F7F708FEFEFE01000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000D5D6DB306065819F0010
      59FF101C56EFD5D6DB300000000000000000FEFEFE01E9E9E916BDBDBD42A0A0
      A05F9F9F9F60A5A5A55AADADAD52B6B6B649C4C4C43BD3D3D32CDFDFDF20E8E8
      E817EFEFEF10F6F6F609FCFCFC03000000000000000000000000FEFEFE01F7F7
      F708E6E6E619D0D0D02FC4C4C43BBEBEBE41A19D9B72958C859E7676778E8282
      827FA2A2A25DCCCCCC33F1F1F10EFEFEFE010000000000000000CAB0A386FADE
      D1FFF9D1BBFFF8B48DFFDEA888ED9B8D819DA19E9C69DDDDDD22F1F1F10E0000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000D6D7DD30001887FF293364FFB8B8
      B8FF434C73FF001DA4FF00105BFF00000000F7F7F708656465A4524345E44A3B
      3DE64E4446DB5E5B5BD05B5A5AC05C5C5CA87878788A8D8D8D729B9B9B64AAAA
      AA55B9B9B946CACACA35E3E3E31CF8F8F807FEFEFE01F5F5F50AE3E3E31CCBCB
      CB34A5A4A46A918F8FAF777778919E887FC1E8D6BEF4BFD5AAFF9B9381FF7562
      5EE8746D6EA4A5A5A55AE0E0E01FFCFCFC0300000000E8E5E41DED9D78F5FFFE
      FFFFFFFEFFFFFFE9DBFFE6A999FF313BCFFFDCA794FDA78F7FBE9A908A8FC8C8
      C837E4E4E41BFEFEFE0100000000000000000000000000000000000000000000
      000000000000000000000000000000000000575F81AF2D386DFFDBDBDBFF787E
      9CFF001EA7FF001DA3FF001C9EFF00000000E5E5E51A3A3437F4714F55FF6645
      4AFF786367FFB38D90FFA77D82FFBDB8B8FF959090FB6B6868EA574B4BD4544E
      4FBC5F5F5FA087878778B9B9B946ECECEC13F5F5F50AD2D2D22DA3A2A26CB1B0
      B0CBDDDCDBFFB0AEACFFAA8577FAF6C9A9FF7F9875FF2FAE3EFF51B057FFC6D1
      A9FFC0A69BEBAFACA961E2E2E21DFCFCFC0300000000E79371E6FAE7DFFFFDF2
      EDFFFFC0A5FF538FFBFF285EFEFF1245FFFF0C42FEFFFFFFFFFFFEFDFCFFDBA2
      95FF5E58BEFF998E82A4E9E9E916000000000000000000000000000000000000
      00000000000000000000000000000000000000177FFFF9F9F9FF8C93B3FF022A
      E3FF0122BAFFFFFFFFFF001B97FF00000000CDCDCD324B3E41FA775257FF6A46
      4BFF826D70FF816568FF917477FFDDDADAFFD7D4D3FFCDC8C7FFAE8185FF533A
      3FFF222225FF323132D6A6A6A659E6E6E619DCDCDC42C8C8C8D4E9E8E8FFF2F2
      F1FFE8E7E7FFC4C2C1FFA96E58FF2B495EFF287AB4FF3687A8FF53A947FFC0D1
      9DFFE8D7C3D3E2DBD73BF6F6F609FEFEFE0100000000ED9979FFFFFFFEFFFDF2
      EDFFFFBEA3FF7EBDFEFF80BBFCFF1B4FFFFF1B4FFFFF8A8AD1FFF9C6ADFF0532
      EFFF0035FFFF3C4196D8B5B5B54A000000000000000000000000F1F6F91070A2
      BB9F5198BCBF157DB4FF1084C1FF0E80BEFF0B207EFF636D9AFF1131C6FF1434
      C8FF949BBBFFC7CAD9FF0321ADFF00000000B8B8B847604A4FFE80565BFF7149
      4FFF907C7EFF524749FF7D7173FFE7E6E5FFDAD8D7FFCBC8C7FF836669FF4332
      37FF332E31FF312F31DDAAAAAA55E8E8E817D5D5D4C6F4F3F3FFEEEEEDFFE9E8
      E7FFE4E3E2FFD7D5D4FFBEB4B1FF7D7172FF5D5960FF9D7C6DFFE0B8A1FFAF98
      8FA9D2D2D22DFCFCFC03000000000000000000000000F8DFD5FFFFF7F1FFFFF7
      F2FFFFFBF7FFD89F9EFF6A96E4FF5992FCFF2D64FEFF275EFEFF2258FEFF154B
      FFFF1042FFFF0137FFFF4851B6C00000000000000000208CBDFF1DADECFF3FAA
      D9FF62AFCFFFA3C5CEFFBDC5BEFFC1CBC6FF92A7B8FF4261F4FF445ED9FFFDFD
      FDFFCFD2E3FF3753D7FF2239A4FF00000000A9A8A85A76585DFF885A60FF784A
      50FF886669FF7E7172FF9F9697FFDDD8D8FFDBD8D8FFCDCACAFF544548FF3A2D
      31FF3A3034FF3B3939D0B0B0B04FEBEBEB14D1CFCEC6EAE9E9FFE5E4E3FFDFDE
      DDFFE3E1E1FFDBDAD9FFD3D1D0FFCBC8C7FFB8A39CFF976C66FF8F8381FF8C8C
      8C73D9D9D926000000000000000000000000EFEBE918FDF6F4FFFFF3EAFFFFF6
      F0FFFFF7F2FFFDC8B0FFB28BA4FF427AFEFF346AFEFF3268FEFF2C62FEFF1E53
      FDFF164BFFFF686CAE9EF1F1F10E000000000000000020A5DEFF27ACE4FFC8B9
      A4FFD9C9B2FFEAD9C0FFEEDCC3FFEFDDC4FFEDDBC2FF4457AFFF6179E8FF5E71
      CBFF5E73D4FF4155B4FFA7ADCA6000000000A19D9E6F856167FF8F5960FF9073
      79FF9DA6ABFF9AA1A6FF8D8D92FF7D7B7FFF7F787CFF7B7175FF443A3EFF402F
      33FF403135FF444142C5B6B6B649EEEEEE11CCCCCBC5E1E0DFFFDBDAD9FFDBD9
      D8FFEDECECFFE0A996FFC5613EFFCAA497FFD1CFCEFFC7C5C4FFADABA9FF8E8E
      8E71DADADA25000000000000000000000000E3AC9B83FFF7F1FFFFEDE0FFFFF0
      E7FFFFF3EAFFFFC6AAFF8F73A8FF548EFEFF5089FEFF457CFEFF3D74FEFF2B63
      FFFF424990C9FDFDFD020000000000000000000000002DB9EDFF5F94A2FFBFB0
      98FF746951FFF9E6CCFFFDEACFFFFEEBD1FFD5C5ABFFECDBC1FFE8D7BEFF099C
      EAFF4B8DB2BF0000000000000000000000009892948592686EFF965D63FFB9C4
      C7FFD2FFFFFFC6FFFFFFBCFCFFFFB3F6FCFFA8EEF5FF9BE0E7FF94D7DEFF7AA8
      AEFF45373BFF514D4EBCBBBBBB44F1F1F10EC1BFBEA6DCDBDAFFE0DFDEFFEDE6
      E6FFE6C3B8FFFAA27DFFEF8964FFD56740FFC46D4EFFCDB6ADFFBDBBBAFF9898
      9867DFDFDF20000000000000000000000000DD8F78ADFFF2E5FFFFEADAFFFFEF
      E1FFFDDBCAFF5156BFFF4F8AFCFF5F98FEFF5B94FEFF4C84FEFF427AFEFF3066
      FEFF2552ECFCDADADA2500000000000000000000000032BDEDFF6B939AFFE6D5
      BCFFCCBDA3FFF3E0C7FFFFEED6FFD8CAB3FF584F37FFF5E3C9FFEDDBC2FF0C9E
      EAFF196F9CFF69542DEF000000000000000085808195A47278FFA1656BFFC7D3
      D7FFCFF5F7FFC4E8EAFFC1EAEDFFBBE9EDFFB6EAEEFFB2F0F5FFAFF9FFFFA3F3
      F5FF4F4447FF575555B0C2C2C23DF4F4F40BC3C2C184C0BEBDFFD6BFB9FFE9B0
      99FFFEC9A2FFFEC49EFFFCB28CFFF89C78FFE9805BFFCD5D35FFBDBBBAF7B6B6
      B649EDEDED12000000000000000000000000D9B4AA63FBBE99FFF9B18EFFFCC6
      ADFFFDB999FF75B1F8FF86C1FDFF77B3FDFF659EF7FF73ADF5FF79B4FDFF356C
      FEFF2C62FEFF2B3CB0E59E9E9F6100000000000000003DC6EEFF87948DFFE8D7
      BEFFF3E1C7FFD8C9B0FF584F39FF9E9480FFFFF0DAFFF8E6CBFFEFDDC4FF12A3
      EBFF147AAFFF7F612AFF00000000000000007F7678A8B27980FFAB6C73FFD4E1
      E4FFDAFBFDFFD2F4F7FFCDF4F7FFC9F5F9FFC3F6FAFFBCF0F4FFB8F1F6FFA5DD
      E3FF544347FF5D5C5CA3C8C8C837F7F7F708E4E4E450E9E9E8F1EBCCBAFFDDA5
      8CFFF3A885FFFDC09AFFFECAA3FFFDC09AFFFBAC87FFEFBFACFFACABAAABDDDD
      DD22FBFBFB0400000000000000000000000000000000FFF8F2FFFDE7D9FFEA8D
      6AFFEC8C6CFF7C75B3FF88C8FFFF6087DDFFA6A0C9FF7E72B1FF66A4FEFF3A71
      FEFF2C62FEFF184DFEFF414796C8000000000000000046C9EFFF86928BFFE6D5
      BCFFF1DFC5FFFFEDD3FF645B44FFFBEDD8FFFFEED7FFF6E4CAFFECDBC2FF14A5
      EBFF167DB2FF876B38FF00000000000000007E6F72BDC18188FFB4747BFFE0EB
      EEFFDAF0F2FFD3EBECFFCFEBECFFCAEAEBFFC5EAEDFFC1EAEEFFBFF1F5FFAAD3
      D8FF523D40FE6A6A6A95CFCFCF30FAFAFA0500000000F7F7F787FDE4D5FFFFE9
      D7FFE7CBB7FFDD9F84FFFCB08AFFFEC59EFFFBDDC7FFC6C5C4DCDEDEDE21F8F8
      F8070000000000000000000000000000000000000000F7F7F709FFE8D5D1FFFB
      F7FFEFA686FFFFE3CBFFFFE7CDFFFFE6D3FFFFE7D5FFFDD0BAFFE49C8DFF2860
      FFFF1D52FDFFAAAAC158FDFDFD0200000000000000005BCFF1FF6D8A8CFFD8C9
      B1FFE5D4BBFFF4E2C8FF94886FFFFBE8CEFFF8E5CBFFEAD9C0FFE1D0B8FF18A8
      EBFF1982B6FF000000000000000000000000837073CCCE868EFFC37F86FFE9F5
      F6FFE5F9FAFFE0F6F7FFDCF5F7FFD6F3F5FFD0F1F3FFCBF0F3FFCBF9FCFFAFCA
      CFFF52393EFC79797986D6D6D629FCFCFC0300000000FAF7F583FEEEE1FFFFF8
      F2FFFFEFE2FFFFEDDFFFA4887CC6B6A79FD1CAC9C981F0F0F00FFBFBFB040000
      0000000000000000000000000000000000000000000000000000EDECEB17FFFF
      FFFFF7BE9DFFFFDCBFFFFFDCC3FFFFE2C9FFFFE4CEFFFFF0E3FFF8B297FF3F55
      D4CB8788B87E0000000000000000000000000000000065D2F2FF6F979CFFCDBF
      A8FFDBCBB3FFEAD9C0FFBFB097FFF0DEC5FFEDDCC2FFE1D1B8FFD6C6AFFF1AA9
      EBFF459AC4CF000000000000000000000000917479DFB2737AFFB07F85FFF1F6
      F7FFE2EDEDFFDEEBECFFDAEAECFFD7EBECFFD4ECEDFFD0EAECFFD4F9FBFFAABC
      C0FF4C3337F89D9D9D63E2E2E21DFEFEFE0100000000FEF8F330FBE1CAC2FFED
      DEFFFFFAF5FFFFF9F4FFB3A29888D1D1D12EF8F8F80700000000000000000000
      000000000000000000000000000000000000000000000000000000000000E9E9
      E954F6B694FFFDF2EAFFFFECDBFFFFD7B8FFFFD8BAFFFFEFE3FFEB9C83FFEFEF
      EF10000000000000000000000000000000000000000079D7F3FF6BBAD2FFAEA2
      8FFFBAAD99FFCEBFA9FFD3C4ADFFD4C5AEFFCFC0AAFFB8AA96FF669CACFF1B9E
      D9FF9FC7DB70000000000000000000000000A77F85F1AE6F76FFB48D91FFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFFFFFFF2FFFFFFEEFFFFFFF0FFFFFFAAAE
      B0FF493739E2CFCFCF30F4F4F40B00000000000000000000000000000000FEF1
      E850FDE1CBE1FFF0E3FFDFD2C85EEBEBEB14FDFDFD0200000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000DDBDB365D85633FFE27F64FFF7E1DAFFFEF4EAFFFFF2E7FFE9967CFFEFEF
      EF1000000000000000000000000000000000000000009BE1F6FF86DBF4FF689E
      ADFF6C969DFF7C8E8BFF89938BFF7D8F8CFF678D92FF3A9ABCFF28AEE4FF2F91
      BEEFF1F7F910000000000000000000000000847174C6A3797EDAAA9597D8B0B3
      B2D99C9E9EC79A9B9BBE9A9B9CBF979899BD949595A7969797A4959595A88F89
      8A92CBCBCB34F7F7F708FEFEFE01000000000000000000000000000000000000
      000000000000FEEFE350FAFAFA05FDFDFD020000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000E4DAD62CE0876EB7DE7355DEFEFE
      FE01000000000000000000000000000000000000000000000000FCFEFE30D3F1
      FAAFBDEBF9BF90DDF4FF7AD5EFFF62C5E3FF56BCDDFF7DC0D9AFACD3E4700000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000200000000100010000000000000100000000000000000000
      000000000000000000000000FFFFFF0000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000801FF001E1FFFF830001C000C01FFF01
      000000008003FF01000000008001FF01000000008001C0010000000380018001
      0000000700018001000000070003800700000007000380030000000700018003
      00000007800180030000800F800180070000801FC00780070000807FE00F8007
      0001E07FF00F80070001F8FFFF0FC01F00000000000000000000000000000000
      000000000000}
  end
end
