object FUsersAdd: TFUsersAdd
  Left = 0
  Top = 0
  BiDiMode = bdLeftToRight
  BorderStyle = bsDialog
  Caption = 'Add New User Form'
  ClientHeight = 219
  ClientWidth = 336
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  ParentBiDiMode = False
  Position = poOwnerFormCenter
  DesignSize = (
    336
    219)
  PixelsPerInch = 96
  TextHeight = 13
  object RzGroupBox1: TRzGroupBox
    Left = 5
    Top = 3
    Width = 324
    Height = 180
    TabOrder = 0
    object Label7: TLabel
      Left = 56
      Top = 39
      Width = 52
      Height = 13
      Caption = 'User Name'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMaroon
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Pitch = fpFixed
      Font.Style = []
      ParentFont = False
    end
    object Label4: TLabel
      Left = 56
      Top = 62
      Width = 50
      Height = 13
      Caption = 'UserLogID'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMaroon
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Pitch = fpFixed
      Font.Style = []
      ParentFont = False
    end
    object Label8: TLabel
      Left = 21
      Top = 83
      Width = 85
      Height = 13
      Caption = 'UserLogPassword'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMaroon
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Pitch = fpFixed
      Font.Style = []
      ParentFont = False
    end
    object Label9: TLabel
      Left = 22
      Top = 102
      Width = 28
      Height = 13
      BiDiMode = bdRightToLeft
      Caption = 'Notes'
      Color = clBtnFace
      Font.Charset = ARABIC_CHARSET
      Font.Color = clMaroon
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Pitch = fpFixed
      Font.Style = []
      ParentBiDiMode = False
      ParentColor = False
      ParentFont = False
    end
    object Label1: TLabel
      Left = 96
      Top = 17
      Width = 11
      Height = 13
      Caption = 'ID'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clMaroon
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Pitch = fpFixed
      Font.Style = []
      ParentFont = False
    end
    object txtuserFullName: TEdit
      Left = 112
      Top = 36
      Width = 166
      Height = 19
      Ctl3D = False
      MaxLength = 40
      ParentCtl3D = False
      TabOrder = 0
    end
    object txtuserLogID: TEdit
      Left = 112
      Top = 58
      Width = 89
      Height = 19
      Alignment = taCenter
      Ctl3D = False
      MaxLength = 25
      ParentCtl3D = False
      TabOrder = 1
    end
    object txtuserLogPassword: TEdit
      Left = 112
      Top = 80
      Width = 89
      Height = 19
      Alignment = taCenter
      Ctl3D = False
      MaxLength = 15
      NumbersOnly = True
      ParentCtl3D = False
      TabOrder = 2
    end
    object txtuserNotes: TMemo
      Left = 112
      Top = 102
      Width = 178
      Height = 69
      Ctl3D = False
      MaxLength = 1000
      ParentCtl3D = False
      ScrollBars = ssVertical
      TabOrder = 3
    end
    object txtuserID: TEdit
      Left = 112
      Top = 14
      Width = 89
      Height = 19
      Alignment = taCenter
      Color = clWhite
      Ctl3D = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clTeal
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxLength = 100
      ParentCtl3D = False
      ParentFont = False
      ReadOnly = True
      TabOrder = 4
      Text = '** '#1580#1583#1610#1583' **'
    end
  end
  object btnSave: TAeroButton
    Left = 184
    Top = 187
    Width = 71
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
    Left = 257
    Top = 187
    Width = 71
    Height = 28
    ImageIndex = 1
    Images = ImageList3
    Version = '1.0.0.1'
    Anchors = [akTop, akRight]
    Caption = 'Cancel'
    TabOrder = 2
    OnClick = btnExitClick
  end
  object chkuserActive: TRzCheckBox
    Left = 27
    Top = 196
    Width = 49
    Height = 15
    Caption = 'Active'
    Checked = True
    State = cbChecked
    TabOrder = 3
  end
  object ImageList3: TImageList
    Left = 264
    Top = 85
    Bitmap = {
      494C010102000800500010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000001000000001002000000000000010
      00000000000000000000000000000000000000000000FAFAFA05ECECEC13E3E3
      E31CE2E2E21DE5E5E51AE9E9E916EEEEEE11F4F4F40BFBFBFB04FEFEFE010000
      000000000000000000000000000000000000000000000000000000000000CBCB
      CB34CFCFCF30F7F7F708FEFEFE01000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FEFEFE01E9E9E916BDBDBD42A0A0
      A05F9F9F9F60A5A5A55AADADAD52B6B6B649C4C4C43BD3D3D32CDFDFDF20E8E8
      E817EFEFEF10F6F6F609FCFCFC03000000000000000000000000CAB0A386FADE
      D1FFF9D1BBFFF8B48DFFDEA888ED9B8D819DA19E9C69DDDDDD22F1F1F10E0000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000F7F7F708656465A4524345E44A3B
      3DE64E4446DB5E5B5BD05B5A5AC05C5C5CA87878788A8D8D8D729B9B9B64AAAA
      AA55B9B9B946CACACA35E3E3E31CF8F8F80700000000E8E5E41DED9D78F5FFFE
      FFFFFFFEFFFFFFE9DBFFE6A999FF313BCFFFDCA794FDA78F7FBE9A908A8FC8C8
      C837E4E4E41BFEFEFE0100000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000E5E5E51A3A3437F4714F55FF6645
      4AFF786367FFB38D90FFA77D82FFBDB8B8FF959090FB6B6868EA574B4BD4544E
      4FBC5F5F5FA087878778B9B9B946ECECEC1300000000E79371E6FAE7DFFFFDF2
      EDFFFFC0A5FF538FFBFF285EFEFF1245FFFF0C42FEFFFFFFFFFFFEFDFCFFDBA2
      95FF5E58BEFF998E82A4E9E9E916000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CDCDCD324B3E41FA775257FF6A46
      4BFF826D70FF816568FF917477FFDDDADAFFD7D4D3FFCDC8C7FFAE8185FF533A
      3FFF222225FF323132D6A6A6A659E6E6E61900000000ED9979FFFFFFFEFFFDF2
      EDFFFFBEA3FF7EBDFEFF80BBFCFF1B4FFFFF1B4FFFFF8A8AD1FFF9C6ADFF0532
      EFFF0035FFFF3C4196D8B5B5B54A000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000B8B8B847604A4FFE80565BFF7149
      4FFF907C7EFF524749FF7D7173FFE7E6E5FFDAD8D7FFCBC8C7FF836669FF4332
      37FF332E31FF312F31DDAAAAAA55E8E8E81700000000F8DFD5FFFFF7F1FFFFF7
      F2FFFFFBF7FFD89F9EFF6A96E4FF5992FCFF2D64FEFF275EFEFF2258FEFF154B
      FFFF1042FFFF0137FFFF4851B6C0000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000A9A8A85A76585DFF885A60FF784A
      50FF886669FF7E7172FF9F9697FFDDD8D8FFDBD8D8FFCDCACAFF544548FF3A2D
      31FF3A3034FF3B3939D0B0B0B04FEBEBEB14EFEBE918FDF6F4FFFFF3EAFFFFF6
      F0FFFFF7F2FFFDC8B0FFB28BA4FF427AFEFF346AFEFF3268FEFF2C62FEFF1E53
      FDFF164BFFFF686CAE9EF1F1F10E000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000A19D9E6F856167FF8F5960FF9073
      79FF9DA6ABFF9AA1A6FF8D8D92FF7D7B7FFF7F787CFF7B7175FF443A3EFF402F
      33FF403135FF444142C5B6B6B649EEEEEE11E3AC9B83FFF7F1FFFFEDE0FFFFF0
      E7FFFFF3EAFFFFC6AAFF8F73A8FF548EFEFF5089FEFF457CFEFF3D74FEFF2B63
      FFFF424990C9FDFDFD0200000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009892948592686EFF965D63FFB9C4
      C7FFD2FFFFFFC6FFFFFFBCFCFFFFB3F6FCFFA8EEF5FF9BE0E7FF94D7DEFF7AA8
      AEFF45373BFF514D4EBCBBBBBB44F1F1F10EDD8F78ADFFF2E5FFFFEADAFFFFEF
      E1FFFDDBCAFF5156BFFF4F8AFCFF5F98FEFF5B94FEFF4C84FEFF427AFEFF3066
      FEFF2552ECFCDADADA2500000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000085808195A47278FFA1656BFFC7D3
      D7FFCFF5F7FFC4E8EAFFC1EAEDFFBBE9EDFFB6EAEEFFB2F0F5FFAFF9FFFFA3F3
      F5FF4F4447FF575555B0C2C2C23DF4F4F40BD9B4AA63FBBE99FFF9B18EFFFCC6
      ADFFFDB999FF75B1F8FF86C1FDFF77B3FDFF659EF7FF73ADF5FF79B4FDFF356C
      FEFF2C62FEFF2B3CB0E59E9E9F61000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000007F7678A8B27980FFAB6C73FFD4E1
      E4FFDAFBFDFFD2F4F7FFCDF4F7FFC9F5F9FFC3F6FAFFBCF0F4FFB8F1F6FFA5DD
      E3FF544347FF5D5C5CA3C8C8C837F7F7F70800000000FFF8F2FFFDE7D9FFEA8D
      6AFFEC8C6CFF7C75B3FF88C8FFFF6087DDFFA6A0C9FF7E72B1FF66A4FEFF3A71
      FEFF2C62FEFF184DFEFF414796C8000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000007E6F72BDC18188FFB4747BFFE0EB
      EEFFDAF0F2FFD3EBECFFCFEBECFFCAEAEBFFC5EAEDFFC1EAEEFFBFF1F5FFAAD3
      D8FF523D40FE6A6A6A95CFCFCF30FAFAFA0500000000F7F7F709FFE8D5D1FFFB
      F7FFEFA686FFFFE3CBFFFFE7CDFFFFE6D3FFFFE7D5FFFDD0BAFFE49C8DFF2860
      FFFF1D52FDFFAAAAC158FDFDFD02000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000837073CCCE868EFFC37F86FFE9F5
      F6FFE5F9FAFFE0F6F7FFDCF5F7FFD6F3F5FFD0F1F3FFCBF0F3FFCBF9FCFFAFCA
      CFFF52393EFC79797986D6D6D629FCFCFC030000000000000000EDECEB17FFFF
      FFFFF7BE9DFFFFDCBFFFFFDCC3FFFFE2C9FFFFE4CEFFFFF0E3FFF8B297FF3F55
      D4CB8788B87E0000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000917479DFB2737AFFB07F85FFF1F6
      F7FFE2EDEDFFDEEBECFFDAEAECFFD7EBECFFD4ECEDFFD0EAECFFD4F9FBFFAABC
      C0FF4C3337F89D9D9D63E2E2E21DFEFEFE01000000000000000000000000E9E9
      E954F6B694FFFDF2EAFFFFECDBFFFFD7B8FFFFD8BAFFFFEFE3FFEB9C83FFEFEF
      EF10000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000A77F85F1AE6F76FFB48D91FFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFFFFFFF2FFFFFFEEFFFFFFF0FFFFFFAAAE
      B0FF493739E2CFCFCF30F4F4F40B000000000000000000000000000000000000
      0000DDBDB365D85633FFE27F64FFF7E1DAFFFEF4EAFFFFF2E7FFE9967CFFEFEF
      EF10000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000847174C6A3797EDAAA9597D8B0B3
      B2D99C9E9EC79A9B9BBE9A9B9CBF979899BD949595A7969797A4959595A88F89
      8A92CBCBCB34F7F7F708FEFEFE01000000000000000000000000000000000000
      000000000000000000000000000000000000E4DAD62CE0876EB7DE7355DEFEFE
      FE01000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000100000000100010000000000800000000000000000000000
      000000000000000000000000FFFFFF00801FE1FF000000000001C01F00000000
      0000800300000000000080010000000000008001000000000000800100000000
      0000000100000000000000030000000000000003000000000000000100000000
      000080010000000000008001000000000000C007000000000000E00F00000000
      0001F00F000000000001FF0F0000000000000000000000000000000000000000
      000000000000}
  end
end