// getprogramversion.h : header file
//
// Diese Datei ist Bestandteil von EasyCash&Tax, der freien E�R-Fibu
//
// Copyleft (GPLv3) 2020  Thomas Mielke
// 
// Dies ist freie Software; Sie d�rfen sie unter den Bedingungen der 
// GNU General Public License, wie von der Free Software Foundation 
// ver�ffentlicht, weiterverteilen und/oder modifizieren; entweder gem�� 
// Version 3 der Lizenz oder (nach Ihrer Option) jeder sp�teren Version.
//
// Diese Software wird in der Hoffnung weiterverbreitet, dass sie n�tzlich 
// sein wird, jedoch OHNE IRGENDEINE GARANTIE, auch ohne die implizierte 
// Garantie der MARKTREIFE oder der VERWENDBARKEIT F�R EINEN BESTIMMTEN ZWECK.
// Mehr Details finden Sie in der GNU Lesser General Public License.
//
// Sie sollten eine Kopie der GNU General Public License Version 3 zusammen mit 
// dieser Software erhalten haben; falls nicht, schreiben Sie an die Free 
// Software Foundation, Inc., 51 Franklin St, 5th Floor, Boston, MA 02110, USA. 

/*	$Header:   D:/pvcsarch/easycash/getprogramversion.h_v   1.29   Feb 15 2007 06:34:10   tmielke  $
*
*	Beschreibung: GetProgramVerion header file
*	
*	Die erste g�ltige Versionsnummer aus den Resourcen einer MFC-Applikation holen:
*	
*	$Log:   D:/pvcsarch/easycash/getprogramversion.h_v  $
* 
*    Rev 1.29   Feb 15 2007 06:34:10   tmielke
* v1.31
* 
*    Rev 1.28   Feb 05 2007 05:05:38   tmielke
* v1.30 E�R2006 + UVA2007 + Dauerbuchungen Features + Bugfixes
* 
*    Rev 1.27   Feb 03 2006 02:29:18   tmielke
* v1.29
* 
*    Rev 1.26   Jan 19 2006 13:49:10   tmielke
* v1.28 -- Bugfixes
* 
*    Rev 1.25   Jan 16 2006 09:52:28   tmielke
* v1.26 E�R-Formular, Bugfix
* 
*    Rev 1.24   Dec 10 2005 12:09:42   tmielke
* v1.24: neuer Formelrechner und DSA-Messagebox
* 
*    Rev 1.23   Dec 07 2005 05:32:58   tmielke
* v1.22
* 
*    Rev 1.22   Nov 21 2005 20:19:24   tmielke
* v1.21 ActiveX Plugin Schnittstelle
* 
*    Rev 1.21   Jun 21 2005 23:40:28   tmielke
* v1.19
* 
*    Rev 1.20   Jan 20 2005 15:17:26   tmielke
* v1.18:
* Die Bemessungsgrundlage bei der Umsatzsteuervoranmeldung wird jetzt vom vollen Euro-Betrag berechnet.
* Die Textfarbe und entspr. die Fensterhintergrundfarbe werden nun aus den Windows-Einstellungen �bernommen.
* Die Zeilenbreite im Journal wird nun dynamisch an die Fensterbreite angepasst. 
* MWSt und Belegnummernspalten im Journal werden nur dann angezeigt, wenn entsprechend relevante Buchungen gemacht wurden. 
* Schon ausgef�hrte Dauerbuchungen k�nnen jetzt nachtr�glich ge�ndert und nochmal ausgef�hrt werden, indem das 'Ausgef�hrt Bis'-Datum zur�ckgesetzt wird. Die alten Buchungseintr�ge im Journal m�ssen allerdings von Hand gel�scht werden. Ich hoffe, damit wird der Mechanismus transparenter.
* Dauerbuchungen sind jetzt auch in 2-monatlichen Intervallen m�glich.
* Die Eingabe von Buchungspresets mit einer AfA-Dauer von 0 Jahren wird jetzt unterbunden.
* Einen Fehler beseitigt, der in seltenen F�llen f�r einen Absturz beim Aufruf der Dauerbuchungen verantwortlich war.
* Die Anrechnung der festgesetzten Sondervorauszahlung f�r Dauerfristverl�ngerung (Feld 39) im deutschen USt-Voranmeldungsformular bzw. Sonstige Berichtigungen (Feld 90) im �sterreischischen Formular wird jetzt ber�cksichtigt.
* Feld 43 Der USt-Voranmeldung (Weitere Steuerfreie Ums�tze mit Vorsteuerabzug) wird jetzt unterst�tzt.
* Steuerfreie Ums�tze ohne Vorsteuerabzug wurden bei der Anlage UR der Einkommensteuererkl�rung vergessen.
* Knopf f�r die Seitenansicht in der Werkzeugleiste.
* Es gibt zwei weitere Nummernkreise f�r Buchungsnummern. Aktivierbar durch Dr�cken von 'B' oder 'K' im Belegnummernfeld.
* 
* 
*    Rev 1.19   Mar 25 2004 02:59:50   tmielke
* v1.17
* 
*    Rev 1.18   Feb 27 2004 21:13:18   tmielke
* v1.16
* 
*    Rev 1.17   Feb 08 2004 06:40:28   tmielke
* v1.16 alpha 3
* 
*    Rev 1.16   Feb 04 2002 17:42:16   tmielke
* v1.14
* 
*    Rev 1.15   Jan 07 2002 14:23:58   tmielke
* v1.13
* Seitenwechsel zw. Einnahmen und Ausgaben
* UmSt-Vorauszahlungen werden f�r UmSt-Erkl. gemerkt
* 
*    Rev 1.14   Oct 17 2001 19:54:44   tmielke
* v1.12a
* 
*    Rev 1.13   Oct 09 2001 07:51:00   tmielke
* v1.12
* 
*    Rev 1.12   15 May 2001 08:21:30   tmielke
* v1.11
* 
*    Rev 1.11   22 Jan 2001 02:43:38   tmielke
* v1.10
* 
*    Rev 1.10   21 Dec 2000 02:07:36   tmielke
* Letzte Version vor Umstellung auf DS60
* 
*    Rev 1.9   30 Sep 2000 18:03:26   tmielke
* v1.9
* 
*    Rev 1.8   19 Jun 2000 01:35:02   tmielke
* v1.8
* 
*    Rev 1.7   03 Apr 2000 01:27:38   tmielke
* v1.7b
* 
*    Rev 1.6   18 Mar 2000 11:36:16   tmielke
* v1.7
* 
*    Rev 1.5   17 Mar 2000 05:36:26   tmielke
* v1.6 �sterr./schweitzer Version
* 
*    Rev 1.4   28 Jan 2000 03:10:38   tmielke
* v1.5
* 
*    Rev 1.3   27 Jan 2000 19:53:56   tmielke
* v1.4
* 
*    Rev 1.2   04 Dec 1999 15:01:12   tmielke
* v1.4
* 
*    Rev 1.1   18 Nov 1999 02:31:44   tmielke
* v1.3 UmSt-Erkl�rung und E/�-Rechnung
* 
*    Rev 1.0   18 Nov 1999 02:30:08   tmielke
* Initial Check In
* 
*    Rev 1.10   07 Jun 1999 18:36:58   tmielke
* Multi Language Version
* 
*    Rev 1.9   05 Apr 1999 09:39:34   tmielke
* Nachtrag v1.32
* 
*    Rev 1.8   05 Apr 1999 08:14:26   tmielke
* Info-Screen Logo ver�ndert
* Website www.bpsgmbh.de/trs als hotlink in der hilfebox
* E-Mail support@bpsgmbh.de als hotlink in der hilfebox
* 
*    Rev 1.7   22 Mar 1999 16:26:28   tmielke
* v1.31 Letzte-Aufnahme-Button und Logo
* 
*    Rev 1.6   20 Mar 1999 18:52:32   tmielke
* v1.3
* 
*    Rev 1.5   18 Mar 1999 13:27:32   tmielke
* v0.8 - Demoversion fertig gemacht
* 
*    Rev 1.4   03 Mar 1999 13:40:24   tmielke
* Version Label v0.6
* 
*    Rev 1.3   03 Mar 1999 10:54:52   tmielke
* zur Sicherheit eingecheckt
* 
*    Rev 1.0   02 Mar 1999 10:01:36   tmielke
* GetProgramVersion eingebaut.
* 
* 
*/

extern void GetProgramVerion(HMODULE hExe, VS_FIXEDFILEINFO *vs);
