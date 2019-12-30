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
        TLabel *LabPodpis;
        TButton *ButMenu;
        TLabel *LabMetoda;
        TButton *ButSam;
        TButton *ButLosowe;
        TEdit *Edit1;
        TButton *ButOk;
        TLabel *LabWprowadzone;
        TButton *ButOk2;
        TButton *ButSort;
        TButton *ButWynik;
        TButton *ButPowrot;
        TButton *ButOk3;
        void __fastcall ButMenuClick(TObject *Sender);
        void __fastcall ButSamClick(TObject *Sender);
        void __fastcall ButOkClick(TObject *Sender);
        void __fastcall ButOk2Click(TObject *Sender);
        void __fastcall ButSortClick(TObject *Sender);
        void __fastcall ButPowrotClick(TObject *Sender);
        void __fastcall ButLosoweClick(TObject *Sender);
        void __fastcall ButOk3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
