[Variables]
CurrentSong=aldn - green eyes.mp3

; Refresh #ROOTCONFIG# twice after changing this
Songs=8

; Global settings
BackgroundFill=ffffff
AccentColor=fea801

; AudioLevelBeta settings
; Refresh #ROOTCONFIG#\Play twice after changing this
Bands=(#TotalWidth# / 5)
Attack=0
Decay=0
Smoothing=1
FreqMin=20
FreqMax=12000

; Title settings
TitleHeight=58

; Ticker settings
TickerEdge=0
TickerPadding=8
NowPlayingText=#CurrentSong#
FileNameSubstitute="(.*)\..*?$":"\1"

; Visualizer settings
VisVerticalOffset=(-#TitleHeight#)
VisPaddingVertical=0
VisPaddingHorizontal=0
VisHeight=90
VisBarColor=fea801
VisBarFill=f7f7f700
VisBackgroundFill=ffffff00

; FileChild settings
FCFontSize=14
FCPadding=8
FCPaddingVertical=4
FCMaxWidth=(#TotalWidth# - (#FCPadding# * 4))
FCMaxWidthGrow=16
TotalHeight=(((#FCFontSize# * 1.8 + (#FCPaddingVertical# * 4)) * #Songs#) + #FCPaddingVertical# * 3)
TotalWidth=380

; Actions
SongsFolder=#@#Songs\
Play=[Play "#@#play.wav"]
Stop=[PlayStop]
ConvertAction=[PlayStop][!ActivateConfig #ROOTCONFIG#\Convert]
ConvertFinishAction=[!Delay 250][!DeactivateConfig][!ActivateConfig #ROOTCONFIG#\Play][!Refresh #ROOTCONFIG#\Play]
Rebuild=[!CommandMeasure "MeterBandFactory" "Initialize()"]
RefreshFileList=[!CommandMeasure "MeasureSongFolder" "Update"]
ScrollUp=[!CommandMeasure "MeasureSongFolder" "IndexUp"][!UpdateMeasureGroup FileChild]
ScrollDown=[!CommandMeasure "MeasureSongFolder" "IndexDown"][!UpdateMeasureGroup FileChild]
