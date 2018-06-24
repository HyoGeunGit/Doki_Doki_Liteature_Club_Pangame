//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.Types.hpp>
#include <System.ImageList.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Media.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TGlyph *Image_Title;
	TImageList *ImageList1;
	TButton *Button1;
	TButton *Button2;
	TGlyph *BackGround;
	TRectangle *Rectangle1;
	TLabel *Label1;
	TEdit *Edit1;
	TButton *Name_Button;
	TGlyph *character;
	TRectangle *Rectangle2;
	TLabel *Char_Text_Index;
	TRectangle *Rectangle3;
	TLabel *Char_Text_Name;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TTimer *Timer1;
	TPanel *Panel1;
	TLabel *Label2;
	TMediaPlayer *MediaPlayer1;
	TGlyph *natsuki;
	TGlyph *monika;
	TGlyph *yuri;
	TTimer *Timer2;
	TButton *Button8;
	TLabel *Label3;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Name_ButtonClick(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
