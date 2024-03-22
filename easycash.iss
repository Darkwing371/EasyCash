; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

[Setup]
AppName=EasyCash&Tax
AppVerName=EasyCash&Tax 2.52
DiskSpanning=no
AppPublisher=tm
AppPublisherURL=http://www.easyct.de
AppSupportURL=http://www.easyct.de
AppUpdatesURL=http://www.easyct.de
DefaultDirName={pf}\EasyCash&Tax
UsePreviousAppDir=yes
DefaultGroupName=EasyCash
OutputBaseFilename=ECTSetup
OutputDir=.\EasyCash 
MinVersion=5.0
LicenseFile=.\LIZENZ.txt
SignTool=winsdk81sha1   ; dual sign the 
SignTool=winsdk81sha256 ; installer
;Menu -> Tools -> Configure Sign Tool...
;winsdk81sha1: "C:\Program Files (x86)\Windows Kits\8.1\bin\x86\signtool.exe" sign /p mysecretpw /f C:\My\Path\To\cert.p12 /t http://timestamp.comodoca.com $f
;winsdk81sha256:  "C:\Program Files (x86)\Windows Kits\8.1\bin\x86\signtool.exe" sign /p mysecretpw /f C:\My\Path\To\cert.p12 /tr http://timestamp.comodoca.com /fd sha256 /td sha256 /as $f

[Languages]
Name: de; MessagesFile: compiler:Languages\German.isl

[Types]
Name: BRDFormular; Description: EasyCash&Tax mit deutschen Formularen
Name: ATFormular; Description: EasyCash&Tax mit �sterreichischem Formular

[Components]
Name: BRDFormular; Types: BRDFormular; Description: deutsche Formulare
Name: ATFormular; Types: ATFormular; Description: �sterreichisches Formular

[Tasks]
Name: desktopicon; Description: Create a &desktop icon; GroupDescription: Additional icons:; MinVersion: 4,4

[Files]
;Source: "C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\redist\x86\Microsoft.VC90.CRT\msvcm90.dll"; DestDir: {app};
;Source: "C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\redist\x86\Microsoft.VC90.CRT\msvcp90.dll"; DestDir: {app};
;Source: "C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\redist\x86\Microsoft.VC90.CRT\msvcr90.dll"; DestDir: {app};
;Source: "C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\redist\x86\Microsoft.VC90.ATL\atl90.dll"; DestDir: {app};
;Source: "C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\redist\x86\Microsoft.VC90.MFC\mfc90.dll"; DestDir: {app};
;Source: "C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\redist\x86\Microsoft.VC90.MFCLOC\MFC90DEU.dll"; DestDir: {app};
;Source: "C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\redist\x86\Microsoft.VC90.OPENMP\vcomp90.dll"; DestDir: {app};      
Source: D:\Work\EasyCash\Systemdateien\vcredist_x86.exe; DestDir: {tmp}; Flags: dontcopy;   
;-> [Run] !!

Source: .\Release\EasyCT.exe; DestDir: {app}; Flags: ignoreversion
Source: .\Release\ECTIFace.dll; DestDir: {app}; Flags: ignoreversion  
Source: .\Release\EasyCTXP.dll; DestDir: {app}; Flags: ignoreversion
Source: .\Release\EasyCTX.ocx; DestDir: {app}; Flags: regserver restartreplace  
Source: .\tipps.txt; DestDir: {app}; Flags: ignoreversion             
Source: .\Release\ECTUpdater.exe; DestDir: {app}; Flags: ignoreversion
Source: D:\Work\CrashRpt\bin\CrashSender1402.exe; DestDir: {app}; Flags: ignoreversion
Source: D:\Work\CrashRpt\bin\crashrpt_lang.ini; DestDir: {app}; Flags: ignoreversion
Source: D:\Work\CrashRpt\bin\dbghelp.dll; DestDir: {app}; Flags: ignoreversion 
Source: D:\Work\EasyCash\Doc\PDF-Anleitungen\ECT-Doku_Michael.pdf; DestDir: {app}; Flags: ignoreversion
;___USt deutsch___
Source: D:\Work\EasyCash\UST\D-2022\ust-d-2022.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2022\ust-d-2022-1.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2022\ust-d-2022-2.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2022\ust-d-2022-3.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2022\ust-d-2022-4.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2022\ust-d-2022-5.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2022\ust-d-2022-6.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2023\ust-d-2023.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2023\ust-d-2023-1.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2023\ust-d-2023-2.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2023\ust-d-2023-3.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2023\ust-d-2023-4.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2023\ust-d-2023-5.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2023\ust-d-2023-6.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular  
Source: D:\Work\EasyCash\UST\D-2024\ust-d-2024.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2024\ust-d-2024-1.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2024\ust-d-2024-2.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2024\ust-d-2024-3.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2024\ust-d-2024-4.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2024\ust-d-2024-5.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UST\D-2024\ust-d-2024-6.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular   
;___UVA deutsch___
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-1.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-2.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular   
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-3.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-01.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-02.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-03.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-04.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-05.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-06.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-07.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-08.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-09.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-10.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-11.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-12.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-q1.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-q2.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-q3.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\UVA\D-2024\uva-d-2024-q4.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
;___E�R deutsch___
Source: D:\Work\EasyCash\EUeR\2022\EUeR-d-2022.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\EUeR\2022\EUeR-d-2022-1.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\EUeR\2022\EUeR-d-2022-2.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\EUeR\2022\EUeR-d-2022-3.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular  
Source: D:\Work\EasyCash\EUeR\2022\EUeR-d-2022-4.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular    
Source: D:\Work\EasyCash\EUeR\2023\EUeR-d-2023.ecf; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\EUeR\2023\EUeR-d-2023-1.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\EUeR\2023\EUeR-d-2023-2.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
Source: D:\Work\EasyCash\EUeR\2023\EUeR-d-2023-3.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular  
Source: D:\Work\EasyCash\EUeR\2023\EUeR-d-2023-4.png; DestDir: {app}; Flags: ignoreversion; Components: BRDFormular
;___USt �sterr.___
Source: D:\Work\EasyCash\UST\AT-2022\U1-at-2022.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UST\AT-2022\U1-at-2022-1.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UST\AT-2022\U1-at-2022-2.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UST\AT-2022\U1-at-2022-3.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UST\AT-2023\U1-at-2023.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UST\AT-2023\U1-at-2023-1.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UST\AT-2023\U1-at-2023-2.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UST\AT-2023\U1-at-2023-3.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular    
;___UVA �sterr.___
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-1.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-2.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-3.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-4.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-01.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-02.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-03.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-04.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-05.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-06.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-07.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-08.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-09.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-10.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-11.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-12.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-q1.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-q2.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-q3.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\UVA\AT-2024\U30-AT-2024-q4.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
;___Einnahmen-Ausgaben-Rechnung �sterr.___
Source: D:\Work\EasyCash\EUeR\AT-2022\E1a-AT-2022.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2022\E1a-AT-2022-1.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2022\E1a-AT-2022-2.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2022\E1a-AT-2022-3.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2022\E1a-AT-2022-4.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular    
Source: D:\Work\EasyCash\EUeR\AT-2022\E1a-AT-2022-5.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular  
Source: D:\Work\EasyCash\EUeR\AT-2022\E1a-K-AT-2022.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2022\E1a-K-AT-2022-1.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2022\E1a-K-AT-2022-2.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2022\E1a-K-AT-2022-3.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular  
Source: D:\Work\EasyCash\EUeR\AT-2022\E6a-AT-2022.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2022\E6a-AT-2022-1.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular       
Source: D:\Work\EasyCash\EUeR\AT-2022\E6a-AT-2022-2.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular        
Source: D:\Work\EasyCash\EUeR\AT-2022\E6a-AT-2022-3.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2022\E6a-AT-2022-4.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2022\E6a-AT-2022-5.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular    
Source: D:\Work\EasyCash\EUeR\AT-2023\E1a-AT-2023.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2023\E1a-AT-2023-1.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2023\E1a-AT-2023-2.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2023\E1a-AT-2023-3.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular    
Source: D:\Work\EasyCash\EUeR\AT-2023\E1a-AT-2023-4.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular  
Source: D:\Work\EasyCash\EUeR\AT-2023\E1a-AT-2023-5.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular  
Source: D:\Work\EasyCash\EUeR\AT-2023\E1a-K-AT-2023.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2023\E1a-K-AT-2023-1.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2023\E1a-K-AT-2023-2.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2023\E1a-K-AT-2023-3.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular   
Source: D:\Work\EasyCash\EUeR\AT-2023\E6a-AT-2023.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2023\E6a-AT-2023-1.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular       
Source: D:\Work\EasyCash\EUeR\AT-2023\E6a-AT-2023-2.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular        
Source: D:\Work\EasyCash\EUeR\AT-2023\E6a-AT-2023-3.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2023\E6a-AT-2023-4.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2023\E6a-AT-2023-5.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular  
Source: D:\Work\EasyCash\EUeR\AT-2023\K2a-AT-2023.ecf; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2023\K2a-AT-2023-1.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular       
Source: D:\Work\EasyCash\EUeR\AT-2023\K2a-AT-2023-2.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular        
Source: D:\Work\EasyCash\EUeR\AT-2023\K2a-AT-2023-3.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2023\K2a-AT-2023-4.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular
Source: D:\Work\EasyCash\EUeR\AT-2023\K2a-AT-2023-5.png; DestDir: {app}; Flags: ignoreversion; Components: ATFormular

[Registry]
Root: HKCU; Subkey: Software\Tools; Flags: uninsdeletekeyifempty
Root: HKCU; Subkey: Software\Tools\EasyCash; Flags: uninsdeletekey
Root: HKCU; Subkey: Software\Tools\EasyCash; ValueType: string; ValueName: InstallPath; ValueData: {app}     
Root: HKCU; Subkey: "Software\Thomas Mielke Softwareentwicklung"; Flags: uninsdeletekeyifempty
Root: HKCU; Subkey: "Software\Thomas Mielke Softwareentwicklung\EasyCash"; Flags: uninsdeletekeyifempty
Root: HKCU; Subkey: "Software\Thomas Mielke Softwareentwicklung\EasyCash"; ValueType: string; ValueName: InstallPath; ValueData: {app}

[Icons]
Name: {group}\EasyCash&Tax; Filename: {app}\EasyCT.exe
Name: {group}\Dokumentation zu EasyCash&Tax; Filename: {app}\ECT-Doku_Michael.pdf
Name: {userdesktop}\EasyCash&Tax; Filename: {app}\EasyCT.exe; MinVersion: 4,4; Tasks: desktopicon

[Run]
;Filename: {tmp}\vcredist_x86.exe; Parameters: "/q:a /c:""VCREDI~3.EXE /q:a /c:""""msiexec /i vcredist.msi /qn"""" """; Flags: runhidden shellexec waituntilterminated;
Filename: {app}\EasyCT.exe; Description: Launch EasyCash&Tax; Flags: nowait postinstall skipifsilent

[Code]

function CheckProcessRunning( aProcName,
                              aProcDesc: string ): boolean;
var
  ShellResult: boolean;
  ResultCode: integer;
  cmd: string;
  sl: TStringList;
  f: string;
  d: string;
begin
  cmd := 'for /f "delims=," %%i ' + 
         'in (''tasklist /FI "IMAGENAME eq ' + aProcName + '" /FO CSV'') ' + 
         'do if "%%~i"=="' + aProcName + '" exit 1'; 
  f := 'CheckProc.cmd';
  d := AddBackSlash( ExpandConstant( '{tmp}' ));
  sl := TStringList.Create;
  sl.Add( cmd );
  sl.Add( 'exit /0' );
  sl.SaveToFile( d + f );
  sl.Free;
  Result := true;
  while ( Result ) do
  begin
    ResultCode := 1;
    ShellResult := Exec( f,
                         '',
                         d, 
                         SW_HIDE, 
                         ewWaitUntilTerminated, 
                         ResultCode );
    Result := ResultCode > 0;
    if Result and 
       ( MsgBox( aProcDesc + ' ist noch aktiv. Das Programm muss beendet werden, um fortzufahren.'#13#10#13#10 + 
                 'Bitte wechseln Sie zu dem Programm, schlie�en Sie es und dr�cken auf OK. Im Zweifelsfall den Windows Task Manager starten (�ber die Tastaturkombination Strg-Alt-Entf) und dort den Prozess "' + aProcName + '" beenden. ', 
                 mbConfirmation, 
                 MB_OKCANCEL ) <> IDOK ) then
      Break;
  end;
  DeleteFile( d + f );
end;

// Perform some initializations.  Return False to abort setup
function InitializeSetup: Boolean;
begin
  // Do not use any user defined vars in here such as {app}
  Result := not ( CheckProcessRunning( 'EasyCT.exe',      'EasyCash&Tax' ));
end;


function InitializeUninstall: Boolean;
begin
  Result := not ( CheckProcessRunning( 'EasyCT.exe',      'EasyCash&Tax' ));
end;

// Installation der VC Laufzeitumgebung

function IsRuntimeInstalled: Boolean;
begin
  Result := False;
  // TODO: here will be a statement that will check whether the runtime is installed
  // and return True if so; see e.g. http://stackoverflow.com/q/11137424/960757
end;
 
function PrepareToInstall(var NeedsRestart: Boolean): string;
var
  ExitCode: Integer;
begin
  // if the runtime is not already installed
  if not IsRuntimeInstalled then
  begin
    // extract the redist to the temporary folder
    ExtractTemporaryFile('vcredist_x86.exe');
    // run the redist from the temp folder; if that fails, return from this handler the error text
    if not Exec(ExpandConstant('{tmp}\vcredist_x86.exe'), '/q:a /c:"VCREDI~3.EXE /q:a /c:""msiexec /i vcredist.msi /qn"" "', '', SW_SHOW, ewWaitUntilTerminated, ExitCode) then
    begin
      // return the error text
      Result := 'Setup failed to install VC++ runtime. Exit code: ' + IntToStr(ExitCode);
      // exit this function; this makes sense only if there are further prerequisites to install; in this
      // particular example it does nothing because the function exits anyway, so it is pointless here
      Exit;
    end;
  end;
end;