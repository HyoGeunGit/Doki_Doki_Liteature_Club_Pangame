//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
String MainCharName;//주인공 이름
int i=0,k=0,c=0,d=0;//버튼용
int N,M,Y,S;//캐릭터별 호감변수
int hyomuk=0;//시작 타이머값
String Log1="자자 장난은 그만하고 새 부원에게 자기소게부터 하자!!";
String Log2="일단 나부터.... 나는 송정우라고해!";
String Log3="이 문예부의 부장이야! 모르는게 있으면 뭐든 물어봐!";
String Log4="어... 잘부탁해!!";
String Log5="저...저는 순호라고 해요!!";
String Log6="음....... 앞으로 잘부탁드려요!!";
String Log7="그래! 앞으로 잘부탁해!";
String Log8="나는 송정우...";
String Log9="진지하게 부활동 참여 안하면 퇴부시킬꺼니까 진지하게 참여하라고!!";
String Log10="....응";
String Log11="(나츠키라는 녀석... 좀....)";
String Log12="(어쩌다 이런일에 참여하게됬지...)";
String Log13="나... 시써본적 한번도 없는데...";
String Log14="아자아자!!";
String Log15;
String Log16;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{   //타이틀
	ShowMessage("Warning!!15세 미만의 어린이나 심신미약자, 정신이 불안정한 사람은 이 게임을 하시면 안됩니다");
	ShowMessage("ps:// 그녀들을 절데로 자극하지 마십시오...");
	Image_Title->ImageIndex=0;
	Button1->Visible=false;
	Button2->Visible=false;
	Button1->BringToFront();
	Button2->BringToFront();
	"\a";
	Rectangle1->Visible=true;
   //	MediaPlayer1->FileName="C:\\Users\\Hyogeun\\Desktop\\두근두근 문예부.cpp\\mp3\\_먭렐_먭렐 臾몄삁遺! OST - Dreams Of Love and Literature.mp3";
   //	MediaPlayer1->Play();

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Name_ButtonClick(TObject *Sender)
{
	//이름
	MainCharName=Edit1->Text;
	if (MainCharName=="히오스"||MainCharName=="히어로즈 오브 더 스톰") {
	Rectangle1->Visible=false;
	BackGround->ImageIndex=11;
	while (1)
	ShowMessage("☆공허의유산☆♚♚히어로즈 오브 더 스☆톰♚♚가입시$$전원 카드팩☜☜뒷면100%증정※ ♜월드오브 워크래프트♜펫 무료증정￥ 특정조건 §§디아블로3§§★공허의 유산★초상화획득기회@@@  ☆공허의유산☆♚♚히어로즈 오브 더 스☆톰♚♚가입시$$전원 카드팩☜☜뒷면100%증정※ ♜월드오브 워크래프트♜펫 무료증정￥ 특정조건 §§디아블로3§");
	}
	if (MainCharName=="왕렬쌤") {
	Rectangle1->Visible=false;
	BackGround->ImageIndex=13;
	while (1)
	ShowMessage("갓렬쌤 만세!!!");
	}
	Rectangle1->Visible=false;
	Edit1->Visible=false;
	Name_Button->Visible=false;
	BackGround->ImageIndex=2;
	ShowMessage("저장중......");
	ShowMessage("완료!!");
	character->BringToFront();
	Rectangle2->Visible=true;
	Button3->Visible=true;
   //	MediaPlayer1->FileName="C:\\Users\\Hyogeun\\Desktop\\두근두근 문예부.cpp\\mp3\\02 Ohayou Sayori!.mp3";
	//MediaPlayer1->Play();
	Char_Text_Index->Text=MainCharName+"!!!! 기다려어어어!!!";
	k=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
	//선택: 예
   //	MediaPlayer1->FileName="C:\\Users\\Hyogeun\\Desktop\\두근두근 문예부.cpp\\mp3\\05 Play With Me.mp3";
   //	MediaPlayer1->Play();
	Button6->Visible=false;
	Button7->Visible=false;
	Rectangle2->Visible=true;
	Button3->Visible=true;
	Button4->Visible=true;
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text="진짜?!?! 와!!! 고마워!!!!!!";
	k=9;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	// 대화
	character->ImageIndex=3;
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text="하아...하아... 겨우따라잡았네!!";
	Button4->Visible=true;
	Button4->BringToFront();
	if (i==1) {
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text="니 속도에 맞춰주면 지각을 해서가 아닐까?";
	k++;
	Button4->Visible=true;
	}
	if (i==3) {
		Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text="'덜렁이에 문제가 아주 많은 녀석이다...'";
	Button4->Visible=true;
	k++;
	}
	if (i==4) {
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text="그게....오늘도 늦잠을 자버렸지뭐야? 헤헤....";
	k++;
	}
	if (i==5) {
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text="오! 벌써 교문앞이야!! 어서 들어가자!!";
	k++;
	Button4->Visible=true;
	}
	if (i==6) {
	character->ImageIndex=0;
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text="됬다... 말을 말자...";
	k++;
	Button4->Visible=true;
	}
	if (i==7) {
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text="";
	Rectangle2->Visible=false;
	Button3->Visible=false;
	Button4->Visible=false;
	character->ImageIndex=0;
	ShowMessage("이미지: 교실이 해금되었습니다!");
	BackGround->ImageIndex=4;
	Rectangle2->Visible=true;
	Button4->Visible=true;
	Button3->Visible=true;
	k++;
	}
	if (i==8) {
   //	MediaPlayer1->FileName="C:\\Users\\Hyogeun\\Desktop\\두근두근 문예부.cpp\\mp3\\08 My Feelings.mp3";
   //	MediaPlayer1->Play();
	Char_Text_Index->Text="";
	ShowMessage("이 게임은 현실성따위 개나줘버려서 지금 수업이 끝났습니다!!!!!!!!!!");
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text=MainCharName+"...저기.... ";
	k++;
	Button4->Visible=true;
	}
	if (i==9) {
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text=MainCharName+"... 갑작스레 정말 미안한데.... 우리 동아리에..."+
	"부원이 없어서.. 폐부 위기에 빠졌어.. ";
	k++;
	Button4->Visible=true;
	}
	if (i==10) {
	Rectangle2->Visible=false;
	Button3->Visible=false;
	Button4->Visible=false;
	Button6->Visible=true;
	Button7->Visible=true;
	}
	if (i==11) {
	character->ImageIndex=3;
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text="얘들아!!!!!!! 우리 폐부 안당해도 되!! 내가 부원을 구해왔어!!";
	Button4->Visible=true;
	k=10;
	}
	if (i==12) {
	yuri->ImageIndex=6;
	natsuki->ImageIndex=7;
	Char_Text_Name->Text="송정우,순호";
	Char_Text_Index->Text="순호:정말인가요?송정우:에? 남자야?";
	Button4->Visible=true;
	k=11;
	}
	if (i==13) {
	Char_Text_Name->Text="송정우";
	Char_Text_Index->Text="아무리 그래도 입부시험도 없고... 거기에 문예부는 자질이 있어야하는거잖아?!";
	k=12;
	Button4->Visible=true;
	}
	if (i==14) {
	Char_Text_Name->Text="순호";
	Char_Text_Index->Text="ㅇㅈ하는 부분이에요....";
	k=13;
	Button4->Visible=true;
	}
	if (i==15) {
	yuri->ImageIndex=0;
	character->ImageIndex=0;
	natsuki->ImageIndex=0;
	Char_Text_Name->Text="송정우";
	Char_Text_Index->Text="일단 나부터.... 나는 송정우라고해!";
	k=14;
	Button4->Visible=true;
	}
	if (i==16) {
	yuri->ImageIndex=0;
	character->ImageIndex=0;
	natsuki->ImageIndex=0;
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text=Log4;
	k=15;
	Button4->Visible=true;
	}
	if (i==17) {
	yuri->ImageIndex=6;
	character->ImageIndex=0;
	natsuki->ImageIndex=0;
	monika->ImageIndex=0;
	Char_Text_Name->Text="순호";
	Char_Text_Index->Text=Log6;
	k=16;
	Button4->Visible=true;
	}
	if (i==18) {
	yuri->ImageIndex=0;
	character->ImageIndex=0;
	natsuki->ImageIndex=7;
	monika->ImageIndex=0;
	Char_Text_Name->Text="송정우";
	Char_Text_Index->Text=Log8;
	k=17;
	Button4->Visible=true;
	}
	if (i==19) {
	yuri->ImageIndex=0;
	character->ImageIndex=0;
	natsuki->ImageIndex=7;
	monika->ImageIndex=0;
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text=Log11;
	k=18;
	Button4->Visible=true;
	}
	if (i==20) {
	yuri->ImageIndex=6;
	character->ImageIndex=3;
	natsuki->ImageIndex=7;
	monika->ImageIndex=8;
	Char_Text_Name->Text="송정우";
	Char_Text_Index->Text="잠깐 창민아! 아직 우리 '그거' 전달 안했잖아;;";
	Button4->Visible=false;
	k=20;
	Button4->Visible=true;
	}
	if (i==21) {
	yuri->ImageIndex=6;
	character->ImageIndex=3;
	natsuki->ImageIndex=7;
	monika->ImageIndex=8;
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text="그거...?";
	k=20;
	Button4->Visible=true;
	}
	if (i==22) {
	yuri->ImageIndex=6;
	character->ImageIndex=3;
	natsuki->ImageIndex=7;
	monika->ImageIndex=8;
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text="그거...?";
	k=21;
	Button4->Visible=true;
	}
	if (i==23) {

	yuri->ImageIndex=6;
	character->ImageIndex=3;
	natsuki->ImageIndex=7;
	monika->ImageIndex=8;
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text=Log12;
	k=22;
	Button4->Visible=true;
	}
	if (i==24) {
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text="괜찮아!! 나도 하는걸!! 아자아자"+MainCharName+"!!";
	k=23;
	Button4->Visible=true;
	}
	if (i==25) {
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text="(하아.... 일이 어떻게 이렇게된거야...)";
	k=24;
	Button4->Visible=true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	//대화
	Char_Text_Index->Text="왜이렇게 빨리가는거야?!";
	i=1;
	Button4->Visible=false;
	if (k==1) {
	Char_Text_Index->Text="'이녀석은 내 소꿒친구 이창민...'";
	Button4->Visible=false;
	i=3;
	}
	if (k==2) {
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text="그래서 오늘은 왜늦은건데?";
	i=4;
	Button4->Visible=false;
	}
	if (k==3) {
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text="그러니까 좀 일찍자고 일찍 일어나라고!!";
	i=5;
	Button4->Visible=false;
	}
	if (k==4) {
	Char_Text_Name->Text=MainCharName;
	character->ImageIndex=0;
	Char_Text_Index->Text="너... 내말 하나도 안들었지...";
	i=6;
	Button4->Visible=false;
	}
	if (k==5) {
	Char_Text_Name->Text=MainCharName;
	character->ImageIndex=0;
	Char_Text_Index->Text="그냥 교실로 올라가자....";
	i=7;
	Button4->Visible=false;
	}
	if (k==6) {
	Char_Text_Name->Text=MainCharName;
	character->ImageIndex=0;
	Char_Text_Index->Text="하아.... 오늘도 노잼인 수업을 하겠구먼.....";
	i=8;

	Button4->Visible=false;
	}
	if (k==7) {
	Char_Text_Name->Text=MainCharName;
	character->ImageIndex=0;
	Char_Text_Index->Text="뭐야";
	i=9;
	Button4->Visible=false;
	}
	if (k==8) {
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text="그... 우리 동아리에 들어와 줄 수있어?";
	i=10;
	Button4->Visible=false;
	}
	if (k==9) {
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text="그럼 지금당장 우리 동아리실로 가자!!";
	i=11;
	Button4->Visible=false;
	character->Position->X=280;
	ShowMessage("동아리부이미지가 해금되었습니다!!");
	BackGround->ImageIndex=9;
   //	MediaPlayer1->FileName="C:\\Users\\Hyogeun\\Desktop\\두근두근 문예부.cpp\\mp3\\06 Poem Panic!.mp3";
   //	MediaPlayer1->Play();
	character->ImageIndex=0;
	Button4->Visible=false;
	}
	if (k==10) {
	monika->ImageIndex=8;
	Char_Text_Name->Text="김예현";
	character->ImageIndex=3;
	Char_Text_Index->Text="뭐? 그게 정말이야?";
	i=12;
	Button4->Visible=false;
	}
	if (k==11) {
	Char_Text_Name->Text="순호";
	Char_Text_Index->Text="그래도 폐부를 면하다니... 다행이네요.....";
	i=13;
	Button4->Visible=false;
	}
	if (k==12) {
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text="우리가 언제부터 그런걸 따졌다고ㅋㅋㅋ";
	i=14;
	Button4->Visible=false;
	}
	if (k==13) {
	yuri->ImageIndex=0;
	character->ImageIndex=0;
	natsuki->ImageIndex=0;
	Char_Text_Name->Text="송정우";
	Char_Text_Index->Text=Log1;
	i=15;
	Button4->Visible=false;
	}
	if (k==14) {
	yuri->ImageIndex=0;
	character->ImageIndex=0;
	natsuki->ImageIndex=0;
	Char_Text_Name->Text="송정우";
	Char_Text_Index->Text=Log3;
	i=16;
	Button4->Visible=false;
	}
	if (k==15) {
	yuri->ImageIndex=6;
	character->ImageIndex=0;
	natsuki->ImageIndex=0;
	monika->ImageIndex=0;
	Char_Text_Name->Text="순호";
	Char_Text_Index->Text=Log5;
	i=17;
	Button4->Visible=false;
	}
	if (k==16) {
	yuri->ImageIndex=6;
	character->ImageIndex=0;
	natsuki->ImageIndex=0;
	monika->ImageIndex=0;
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text=Log7;
	i=18;
	Button4->Visible=false;
	}
	if (k==17) {
	yuri->ImageIndex=0;
	character->ImageIndex=0;
	natsuki->ImageIndex=7;
	monika->ImageIndex=0;
	Char_Text_Name->Text="송정우";
	Char_Text_Index->Text=Log9;
	i=19;
	Button4->Visible=false;
	}
	if (k==18) {
	yuri->ImageIndex=0;
	character->ImageIndex=0;
	natsuki->ImageIndex=7;
	monika->ImageIndex=0;
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text="....응";
	k=19;
	Button4->Visible=false;
	}
	if (k==19) {
	yuri->ImageIndex=6;
	character->ImageIndex=3;
	natsuki->ImageIndex=7;
	monika->ImageIndex=8;
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text="잘됬네 "+MainCharName+" 친구들이 많이생겼어!!";
	i=20;
	Button4->Visible=false;
	}
	if (k==20) {
	yuri->ImageIndex=6;
	character->ImageIndex=3;
	natsuki->ImageIndex=7;
	monika->ImageIndex=8;
	Char_Text_Name->Text="이창민";
	Char_Text_Index->Text="아;; 맞다맞다...헤헤... 미안해ㅠㅠ";
	i=22;
	Button4->Visible=false;
	}
	if (k==21) {
	Char_Text_Name->Text="송정우";
	Char_Text_Index->Text="응! 우리부는 문예부니까.... 다음 동아리시간까지 시를 써오기로 했어!";
	i=23;
	Button4->Visible=false;

	}
	if (k==22) {
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text=Log13;
	i=24;
	Button4->Visible=false;
	}
	if (k==23) {
	Char_Text_Name->Text="송정우";
	Char_Text_Index->Text="기대할게 "+MainCharName+"!!!";
	i=25;
	Button4->Visible=false;
	}
	if (k==24) {
	yuri->ImageIndex=0;
	character->ImageIndex=0;
	natsuki->ImageIndex=0;
	monika->ImageIndex=0;
	Char_Text_Name->Text=MainCharName;
	Char_Text_Index->Text="일단 이렇게 된거 시한번 제데로 써보자!!!!!! 앞으로 핑크빛 인생 시작이닷!!";
	i=26;
	BackGround->ImageIndex=10;
	Button4->Visible=false;
	ShowMessage("시를 써서 히로인들의 호감도를 올려보자!!");
	Timer2->Enabled;
	Rectangle2->Visible=false;
	Button3->Visible=false;
	Button4->Visible=false;
   //	MediaPlayer1->FileName="C:\\Users\\Hyogeun\\Desktop\\두근두근 문예부.cpp\\mp3\\13 Your Reality (Credits).mp3";
   //	MediaPlayer1->Play();
	ShowMessage("아쉽게도 배타버전이 끝났습니다..... 다음을 기대해주세요!!! 도키도키 문예부!");
	Button8->Visible=true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
	//선택: 아니요
  //	MediaPlayer1->FileName="C:\\Users\\Hyogeun\\Desktop\\두근두근 문예부.cpp\\mp3\\ochiba.mp3";
  //	MediaPlayer1->Play();
	Button6->Visible=false;
	Button7->Visible=false;
	Button3->Visible=false;
	Button4->Visible=false;
	character->Position->X=8;
	character->Position->Y=-16;
	character->ImageIndex=5;
	BackGround->ImageIndex=12;
	Rectangle2->Visible=false;
	ShowMessage("너가...동아리에...가입을 안해서... 폐부가 됬고..");
	ShowMessage("그것때문에... 그 충격에... 이창민이 죽었어...");
	ShowMessage("이기적인 자식...");
	Close();

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	//timer로 인터벌을 줘서 시작 로고 뜨게함
	hyomuk++;
	if (hyomuk==7) {
	Panel1->Visible=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormShow(TObject *Sender)
{
   //	MediaPlayer1->FileName="C:\\Users\\Hyogeun\\Desktop\\두근두근 문예부.cpp\\mp3\\두근두근 문예부! OST - Doki Doki Literature Club! (Main Theme).mp3";
   //	MediaPlayer1->Play();
}
//---------------------------------------------------------------------------





