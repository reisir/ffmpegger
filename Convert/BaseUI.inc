[BaseShape]
Meter=Shape
Shape=Rectangle #Padding#, 0, #Width#, (#Height# + #Padding# * 2) | Extend Defaults, Style 
Shape2=Rectangle 0, #Padding#, (#Width# + #Padding# * 2), #Height# | Extend Defaults, Style
Shape3=Rectangle (#Padding# / 2), (#Padding# / 2), (#Width# + #Padding#), (#Height# + #Padding#) | Extend Defaults, Style
Shape4=Combine Shape | Union Shape2 | Union Shape3
Defaults=StrokeWidth 0 
Style=Fill Color c6c5c6

[FillStyle]
Shape=Rectangle 0,0,(#Width# + #Padding# * 2),(#Height# + #Padding# * 2) | Extend Defaults, Style 
Defaults=StrokeWidth 0 
Container=BaseShape

[BewelTop]
Meter=Shape
MeterStyle=FillStyle
Style=Fill LinearGradient GrayToGray
GrayToGray=#GradientAngle# | #GradientStartColor# ; 0.0 | #GradientStartColor# ; (0.5 - #GradientPercentage#) | #GradientMiddleColor# ; (0.4999999999999 - #GradientPercentage#) | #GradientMiddleColor# ; 0.5 | #GradientMiddleColor# ; (0.500000000001 + #GradientPercentage#) | #GradientEndColor# ; (0.5 + #GradientPercentage#) | #GradientEndColor# ; 1.0

[Outline]
Meter=Shape
MeterStyle=FillStyle | BaseShape
Defaults=StrokeWidth (#Padding#) | Stroke Color 0,0,0
Style=Fill Color 0,0,0,0

[Panel]
Meter=Shape 
Shape=Rectangle (#Padding# * 1.5), (#Padding# * 1), (#Width# - (#Padding# * 1)), (#Height# - (#Padding#  * 0)) | Extend Defaults, Style
Shape2=Rectangle (#Padding# * 1), (#Padding# * 1.5), (#Width# - (#Padding# * 0)), (#Height# - (#Padding#  * 1)) | Extend Defaults, Style
Shape4=Combine Shape | Union Shape2
Defaults=StrokeWidth 0 
Style=Fill Color c6c5c6
MeterStyle=FillStyle