;---------------------------------------------------------------------
; MEASURES

[Variables]
@include=#@#Measures\Music.inc
CurrentPlayer=#MusicPlayer#

;---------------------------------------------------------------------
; METERS

[Background]
Meter=IMAGE
MeterStyle=Style#Variant#Background

[IconBack]
Meter=IMAGE
MeterStyle=Style#Variant#Icon | StyleMusicIconBack

[Icon]
Meter=IMAGE
MeterStyle=Style#Variant#Icon | StyleMusicIcon
MeasureName=MeasureCover
LeftMouseUpAction=!CommandMeasure "MeasureMediaPlayer" "PlayPause"
ToolTipText=Click to pause, or resume playback if paused.

[Track]
Meter=STRING
MeterStyle=Style#Variant#Text
MeasureName=MeasureTrack
LeftMouseUpAction=!CommandMeasure "MeasureMediaPlayer" "PlayPause"
ToolTipText=Click to pause, or resume playback if paused.

[Artist]
Meter=STRING
MeterStyle=Style#Variant#Label
MeasureName=MeasureArtist
Text="%1"