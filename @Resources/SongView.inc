[MeterSongListTitle]
Meter=String
Text=Songs :)
MeterStyle=TitleStyle

[SongListBackground]
Meter=Shape
Shape=Rectangle 0,0, #TotalWidth#, #TotalHeight# | Extend Defaults
Defaults=StrokeWidth 0
Y=R

[SongListStartAnchor]
Meter=Image
X=#FCPadding#
Y=(#FCPaddingVertical#)r

[IncludeFileMeasures]
@IncludeFileChildMeasures=#@#Generated\FileChildMeasures.inc
[IncludeFileStringMeasures]
@IncludeFileStringMeasures=#@#Generated\FileChildStringMeasures.inc
[IncludeFileMeters]
@IncludeFileChildMeters=#@#Generated\FileChildMeters.inc

; [SongListEndAnchor]
; Meter=String
; Text=Open songs folder
; MeterStyle=TitleStyle
; Y=((#FCPaddingVertical# * 2))R
; LeftMouseUpAction=["#SongsFolder#"]

; Factories

[MeasureFileChildFactory]
Measure=Script
ScriptFile=#@#Factory\Factory.lua
IncFile=#@#Generated\FileChildMeasures.inc
Number=#Songs#
SectionName=MeasureFileChild{%% + 1}
Option0=Measure
Value0=Plugin
Option1=Plugin
Value1=FileView
Option2=Path
Value2=[*#FileViewMeasure#*]
Option3=Type
Value3=FileName
Option4=Index
Value4={%% + 1}
Option5=Group
Value5=FileChild
Option6=OnUpdateAction
Value6=[!UpdateMeasure "MeasureFileChildString{%% + 1}"]

[MeasureFileChildStringFactory]
Measure=Script
ScriptFile=#@#Factory\Factory.lua
IncFile=#@#Generated\FileChildStringMeasures.inc
Number=#Songs#
SectionName=MeasureFileChildString{%% + 1}
Option0=Measure
Value0=String
Option1=String
Value1=[*MeasureFileChild{%% + 1}*]
Option2=RegExpSubstitute
Value2=1
Option3=Substitute
Value3=#*FileNameSubstitute*#
Option4=OnUpdateAction
Value4=[!UpdateMeter "MeterFileChild{%% + 1}"][!Redraw]
Option5=DynamicVariables
Value5=1

[MeterFileChildFactory]
Measure=Script
ScriptFile=#@#Factory\Factory.lua
IncFile=#@#Generated\FileChildMeters.inc
Number=#Songs#
SectionName=MeterFileChild{%% + 1}
Option0=Meter
Value0=String
Option1=MeasureName
Value1=MeasureFileChildString{%% + 1}
Option2=MeterStyle
Value2=FileChildStyle
Option3=LeftMouseUpAction
Value3=#*ConvertAction*#[!Delay 200][!CommandMeasure "FFMPEG" "Convert MeasureFileChild{%% + 1}"]
