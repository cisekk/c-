//---------------------------------------------------------------------------

#ifndef sortowanieH
#define sortowanieH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *LabNazwa;
        TLabel *LabPodpis;
        TButton *ButMenu;
        TLabel *LabMetoda;
        TButton *ButSam;
        TButton *ButLosowe;
        TLabel *LabIle;
        TEdit *Edit1;
        TButton *ButOk;
        TLabel *LabWprowadzone;
        TLabel *LabPodaj;
        TButton *Button1;
        TButton *ButSort;
        TButton *ButWynik;
        TButton *ButPowrot;
        TLabel *LabIleLos;
        void __fastcall ButMenuClick(TObject *Sender);
        void __fastcall ButSamClick(TObject *Sender);
        void __fastcall ButOkClick(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall ButSortClick(TObject *Sender);
        void __fastcall ButPowrotClick(TObject *Sender);
        void __fastcall ButLosoweClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
