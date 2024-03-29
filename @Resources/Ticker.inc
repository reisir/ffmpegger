[TickerStyle]
X=#TickerPadding#R
Y=r
W=
StringAlign=Left
FontColor=#AccentColor#
; SolidColor=#BackgroundFill#
SolidColor=0,0,0,0
MeasureName=TickerText
Container=MeterCurrentSongContainer
DynamicVariables=1

[TickerText]
Measure=String
String=#NowPlayingText#
RegExpSubstitute=1
Substitute=#FileNameSubstitute#

[Ticker]
Measure=Calc
Formula=Counter % ([dummy:W] + #TickerPadding#)
DynamicVariables=1

[MeterTickerBackground]
Meter=Image
MeterStyle=TitleStyle
; SolidColor=#BackgroundFill#
SolidColor=0,0,0,0
X=r
Y=R

[dummy]
Meter=String
MeterStyle=TitleStyle | TickerStyle
FontColor=0,0,0,0
X=0
Y=0

[MeterCurrentSongContainer]
Meter=Image
MeterStyle=TitleStyle
W=(#TotalWidth# - #TickerEdge# * 2)
X=([MeterTickerBackground:X] + #TickerEdge#)
Y=([MeterTickerBackground:Y])
DynamicVariables=1

[Ticker1]
Meter=String
X=(-[Ticker])
MeterStyle=TitleStyle | TickerStyle
[Ticker3]
Meter=String
MeterStyle=TitleStyle | TickerStyle
[Ticker4]
Meter=String
MeterStyle=TitleStyle | TickerStyle
[Ticker5]
Meter=String
MeterStyle=TitleStyle | TickerStyle
[Ticker6]
Meter=String
MeterStyle=TitleStyle | TickerStyle
[Ticker7]
Meter=String
MeterStyle=TitleStyle | TickerStyle
[Ticker8]
Meter=String
MeterStyle=TitleStyle | TickerStyle
