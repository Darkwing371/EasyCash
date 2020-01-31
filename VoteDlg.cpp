// VoteDlg.cpp : implementation file
//

#include "stdafx.h"
#include "easycash.h"
#include "VoteDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVoteDlg dialog


CVoteDlg::CVoteDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CVoteDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CVoteDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CVoteDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CVoteDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CVoteDlg, CDialog)
	//{{AFX_MSG_MAP(CVoteDlg)
	ON_LBN_DBLCLK(IDC_LISTE, OnDblclkListe)
	ON_LBN_SELCHANGE(IDC_LISTE, OnSelchangeListe)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVoteDlg message handlers

static char *vote[] = {
	"* Kontennamen sollten sich in den Einstellungen einfacher �ndern lassen",
	"Bessere Organisation der Spalten im Journal",
	"Darstellung der Buchungstexte auf dem Bildschirm wird bei langen Buchungstexten zu klein",
	"*spezielle Konten (z.B. f�r Einfurumsatzsteuerkonto) mit Ber�cksichtigung im Formular",
	"*Split-Buchung bei beschr�nkt absetzbarer VST (z.B. KFZ-Kosten, Bewirtungskosten) (obsolet nach EU-Urteil)",
	"Optional eine einzige laufende Nummer f�r Einnahmen und Ausgaben",
	"*AFA-Split (f�r Anlageverm�gen, das in der 2. Jahresh�lfte gebucht wird)",
	"Beim Ausdrucken des Konten-Journals Wiederholung des Kopfes nach Seitenwechsel",
	"es sollte mehr als nur je hundert Einnahmen- und Ausgaben-Konten geben",
	"Einfacher USt-Voranmeldungsdruck ohne Formular",
	"Rechte Maustaste Funktion 'Buchung in Dauerbuchungen �bernehmen'",
	"Rechte Maustaste Funktion 'Buchung kopieren'",
	"Im Buchen-Dialog die letzte Buchung �ber 'hot key' in die Felder holen",
	"*Erstellungsdatum bei der E/�-Liste",
	"* Bildlaufleiste rechts sollte weniger grob reagieren",
	"* Druck des Orginal-Formulars optional ausschaltbar",
	"* Eine eigene Spalte f�r die Belegnummer reservieren",
	"Fahrtenbuchmodul",
	"Fahrtenbuchmodul �ber Palm-Organizer",
	"Reisekostenmodul",
	"Reisekostenmodul �ber Palm-Organizer",
	"'Externer' Buchungsdialog �ber Palm-Organizer",
	"Knopf f�r Druckvorschau in die Werkzeugleiste",
	"Sortieren der Buchungspresets wie bei E/A-Konten",
	"Hilfefunktion �ber F1",
	"*Drucken von einzelnen Konten",
	"Nachr�cken des Journales beim Buchen, so das immer die aktuelle Zeile erscheint",
	"Auto-complete bei Buchungs-Beschreibung",
	"Buchungspresets um einen Buchungsbetrag erweitern",
	"* &-Zeichen bei den Buchungstexten erm�glichen :-/",
	"*Per Doppelklick im Journal gleich in den �nderungsmodus gehen",
	"Ein Filter f�r das Journal, damit man in der Anzeige auch z.B. nur den lfd. Monat anzeigen kann",
	"Endsumme Umsatzsteuervoranmeldung auf volle 10 Pfennig runden",
	"M�glichkeit im Journal schnell zu den Enden der einzelnen Konten zu springen",
	"Druckdatum f�r Einnahmen/�berschussliste",
	"Name etc. bei Einnahmen/�berschussliste f�r jede Seite wiederholen",
	"Funktion 'Sicherungskopie auf Diskette' oben in der Werkzeugleiste",
	"Eine 'Lern'-Taste im Buchen-Dialog zur schnellen �bernahme in die Preset-Liste",
	"Historie-Liste zur schnellen Reproduktion der letzten 10 Buchungstexte",
	"Journal-Filter nach MwSt.-S�tzen",
	"Ein monatlich verdichteter Bericht/Statistik",
	"Wahlweise Eingabe von Nettobetr�gen beim Buchen",
	"*Schriftgr��e ver�nderbar machen",
	"Andere Symbole f�r die Kn�pfe im Buchen-Dialog (Vorschl�ge oder gar fertige Designs sind willkommen)",
	"Allgemein w�ren h�bschere und farbenfrohere Kn�pfe von Vorteil",
	"Steuernummer auf E/�-Rechnung und auch den Journalen",
	"Passwortschutz der ECT-Datei",
	"Dauerbuchungen 'w�chentlich' erm�glichen",
	"Suchfunktion nach Belegnummer, Datum oder im Buchungstext",
	"editierbare Kopf-/Fu�zeile f�r die Ausdrucke",
	"Budgetplanung pro Konto inkl. Diagramm",
	"Verbesserung des Ausdruck-Layouts (z.B. Fettschrift, Grauschattierungen der Zwischensummen",
	"Auff�hrung der Gesamtsummen im Buchungsjournal nach Konten, d.h. Summe Einnahmen und Summe Ausgaben",
	"* Das Datum nach einer Buchung soll optional beibehalten werden f�r die n�chste Buchung",
	"Aufforderung zum Anlegen eines Datenverzeichnisses beim Erststart",
	"Druck: eine Abschreibungsliste inkl. bereits vorhandene Wirtschaftsg�ter + Anschaffungen des Jahres 2000",
	"Druck: Verzeichnis mit geringwertigen Wirtschaftsg�tern",
	"Druck: Ansparr�cklagen",
	"Druck: Liste der nichtabnutzbaren WG des Anlageverm�gens",
	"Neutrale Konten z.B. f�r Geldtransit oder Kapitalanlagen",
	"Aufteilung des Datums in Belegdatum und Buchungsdatum",
	"* hot keys (Tastenk�rzel) f�r 'Einnahmen buchen' und 'Ausgaben buchen' (* mit Alt-E/Alt-A!)",
	"Offene Posten Liste/Zahlungsmodul",
	"Zusammenfassung bestimmter Konten zu einer Kontengruppe",
	"Buchungen in verschiedenen W�hrungen",
	"Extrapolation der Einnahmen/Ausgaben f�r das ganze Jahr in einem Statistik-Modul",
	"Hinweis auf �ndern/L�schen im Journal mit rechter Maustaste",
	"Rohgewinn pro Quartal, Monat, Jahr",
	"* Umsatzsteuervorauszahlungssoll (d.h. USt-Zahlungen an das Finanzamt) beim UmStVor.-Druck ber�cksichtigen",
	"Zeile 'Privatentnahmen' unter die E/�-Rechnung",
	"Grafische Aufarbeitung der Zahlen.",
	"Finanzkonten einbauen (zur Kontrolle)",
	"*Kontenrahmen-Schablonen f�r verschiedne Berufe (obsolet mit dem E�R-Formular ab 2004)",
	"Seite einrichten (bedruckbaren Bereich festlegen)",
	"Optional pers�nlichen Daten im Druck-Buchungsjournal einf�gen",
	"Beim Exportieren der Daten sollte nach einem Verzeichnis und Namen fragen",
	"Feld 'Telefon' bei den Einstellungen der Pers�nlichen Daten",
	"Laufende Buchungsnummern benutzerdefiniert machen (z.B. E01, A00001, 003)",
	"Verschiedene Belegarten sollen verschiedene Buchungsnummern erzeugen (z.B. Kontoauszug=K05, Rechn.=R14)",
	"Statistik: Jahresvergleich, Proporz",
	"Steuersatz f�r nicht-USt-Abzugsberechtigte im Programm und im Journal-Ausdruck ausblenden",
	"Internationale Postadressen ber�cksichtigen",
	"Degressive Abschreibung",
	"Bei �nderungen im Journal k�nnte ein 'N�chste'- bzw. 'Vorhergehende'-Knopf die entspr. Buchung aufrufen",
	"* ELSTER-Interface als Modul einbinden (direkte elektronische Schnittstelle zum Finanzamt)",
	NULL
};

BOOL CVoteDlg::OnInitDialog() 
{
	char buffer[1000];

	CDialog::OnInitDialog();
	
	((CListBox *)GetDlgItem(IDC_LISTE))->ResetContent();
	
	for (int i = 0; vote[i]; i++)
	{
		sprintf(buffer, "%d   %s", 0, vote[i]);
		((CListBox *)GetDlgItem(IDC_LISTE))->AddString(buffer);
		((CListBox *)GetDlgItem(IDC_LISTE))->SetItemData(i, 0L);
	}

	return TRUE;  
}

void CVoteDlg::OnOK() 
{
	char buffer[300];
	char buffer2[500];
	BOOL bOk = FALSE;

	int n = ((CListBox *)GetDlgItem(IDC_LISTE))->GetCount();
	buffer[n] = '\0';
	for (int i = 0; i < n; i++)
	{
		if ((buffer[i] = '0'+(char)((CListBox *)GetDlgItem(IDC_LISTE))->GetItemData(i)) != '0') bOk = TRUE;
	}

	if (!bOk)
	{
		AfxMessageBox("Es sind noch �berhaupt keine Piorit�ten f�r die Weiterentwicklung hochgesetzt worden. Dazu bitte die einzelnen Elemente der Liste doppelklicken!");
		return;
	}

	sprintf(buffer2, "mailto:mielket@gmx.de?subject=ECT-Vote2_%s&body=x", buffer+40);

	n = (int)ShellExecute(m_hWnd, "open", buffer2, NULL, ".", SW_SHOWNORMAL);
	if (n <= 32)
	{
		AfxMessageBox("Es gab ein kleines Problem mit dem E-Mail Programm auf diesem Rechner. \
Die Erweiterungsvorschl�ge konnten leider nicht verschickt werden.", MB_ICONSTOP);
		return;
	}

	buffer[40] = '\0';
	sprintf(buffer2, "mailto:mielket@gmx.de?subject=ECT-Vote1_%s&body=x", buffer);

	n = (int)ShellExecute(m_hWnd, "open", buffer2, NULL, ".", SW_SHOWNORMAL);
	if (n <= 32)
	{
		AfxMessageBox("Es gab ein kleines Problem mit dem E-Mail Programm auf diesem Rechner. \
Die Erweiterungsvorschl�ge konnten leider nicht verschickt werden.", MB_ICONSTOP);
		return;
	}
	else
	{
		AfxMessageBox("Die Erweiterungsvorschl�ge wurden verschickt. Im Postausgang (oder unter gesendete E-Mails) des E-Mail Programms m�ssten sich jetzt zwei Mails an mich befinden. Nach Erhalt werde ich sie zusammen mit denen anderer Nutzer statistisch auswerten. Vielen Dank!", MB_ICONINFORMATION);
	}

	CDialog::OnOK();
}

void CVoteDlg::OnDblclkListe() 
{
	int n = ((CListBox *)GetDlgItem(IDC_LISTE))->GetCurSel();
	int prio = (int)((CListBox *)GetDlgItem(IDC_LISTE))->GetItemData(n);
	if (prio >= 9) prio = 0; else prio++;

	char buffer[1000];
	sprintf(buffer, "%d   %s", prio, vote[n]);
	GetDlgItem(IDC_LISTE)->SetRedraw(FALSE);
	((CListBox *)GetDlgItem(IDC_LISTE))->DeleteString (n);
	((CListBox *)GetDlgItem(IDC_LISTE))->InsertString(n, buffer);
	((CListBox *)GetDlgItem(IDC_LISTE))->SetItemData(n, (DWORD)prio);
	((CListBox *)GetDlgItem(IDC_LISTE))->SetCurSel(n);
	GetDlgItem(IDC_LISTE)->SetRedraw();
}

void CVoteDlg::OnSelchangeListe() 
{
	int n = ((CListBox *)GetDlgItem(IDC_LISTE))->GetCurSel();
	SetDlgItemText(IDC_TEXT, vote[n]);
}
