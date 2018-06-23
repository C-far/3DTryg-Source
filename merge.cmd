@ECHO OFF

SET FILE_NAME=3DTryg
COLOR 9F
TITLE %FILE_NAME% Merge

IF EXIST "%CD%\%FILE_NAME%.inc" DEL /Q /A "%CD%\%FILE_NAME%.inc"
IF EXIST "%CD%\errors.log" DEL /Q /A "%CD%\errors.log"

FOR /F "tokens=*" %%s IN ('TYPE "%CD%\%FILE_NAME%.lst"') DO CALL :MERGE %%s

COPY /Y "%CD%\%FILE_NAME%.inc" "%CD%\..\SAMP\include\ADM\%FILE_NAME%.inc" > nul
PAUSE
GOTO :eof

:MERGE
IF "%~1" == "import"	CALL :IMPORT "%~2"
IF "%~1" == "write"		ECHO %~2 >> "%CD%\%FILE_NAME%.inc"
IF "%~1" == "rule"		CALL :RULE "%~2"
IF "%~1" == "endrule"	CALL :ENDRULE
GOTO :eof

:RULE
IF NOT EXIST "%CD%\rules\%~1.txt" GOTO :eof
TYPE "%CD%\rules\%~1.txt" >> "%CD%\%FILE_NAME%.inc"
ECHO. >> "%CD%\%FILE_NAME%.inc"
ECHO. >> "%CD%\%FILE_NAME%.inc"
GOTO :eof

:ENDRULE
ECHO #endif >> "%CD%\%FILE_NAME%.inc"
ECHO. >> "%CD%\%FILE_NAME%.inc"
GOTO :eof

:IMPORT
SET BUFFER=%~1
IF "%BUFFER:~0,1%" == "#" GOTO :eof
IF "%~1" == "" GOTO :eof

IF NOT EXIST "%CD%\%~1" (
	ECHO Error load module: "%~1"
	ECHO Error "%~1" >> "%CD%\errors.log"
	GOTO :eof
)
ECHO Merge %~1
TYPE "%CD%\%~1" >> "%CD%\%FILE_NAME%.inc"
ECHO. >> "%CD%\%FILE_NAME%.inc"
ECHO. >> "%CD%\%FILE_NAME%.inc"
GOTO :eof