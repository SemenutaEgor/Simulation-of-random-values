#pragma once
#include <math.h>
#include <random>
#include <vector>
#include "randval.h"
#include <stdio.h>
#include <stdlib.h>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::Button^ startbutton;

	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ problabel;
	private: System::Windows::Forms::TextBox^ probbox;




	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ numofexpbox;

	private: System::Windows::Forms::Label^ numofexplabel;



	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::PictureBox^ task14;




	private: System::Windows::Forms::Label^ label2;






	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ varminussamplevir;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ samplemedian;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ samplespan;





























	private: System::Windows::Forms::Label^ signlevellabel;
	private: System::Windows::Forms::TextBox^ signlevelbox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Y_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ n_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ n_idivn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sigmai;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sigmain;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ theoreticalprobability;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ maxdisper;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ maxdiffofprob;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ criticallevel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ signlevel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ decision;
private: System::Windows::Forms::TextBox^ interbox;
private: System::Windows::Forms::Label^ interlabel;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ probinter;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ averexp;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ hi2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ hi2sum;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;










































































































	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->startbutton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Y_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->n_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->n_idivn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sigmai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sigmain = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->theoreticalprobability = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->maxdisper = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->maxdiffofprob = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->criticallevel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->signlevel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->decision = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->problabel = (gcnew System::Windows::Forms::Label());
			this->probbox = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numofexpbox = (gcnew System::Windows::Forms::TextBox());
			this->numofexplabel = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->task14 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->varminussamplevir = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->samplemedian = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->samplespan = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->signlevellabel = (gcnew System::Windows::Forms::Label());
			this->signlevelbox = (gcnew System::Windows::Forms::TextBox());
			this->interbox = (gcnew System::Windows::Forms::TextBox());
			this->interlabel = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->probinter = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->averexp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi2sum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->task14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(752, 301);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(6);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(707, 321);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// startbutton
			// 
			this->startbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startbutton->Location = System::Drawing::Point(1012, 133);
			this->startbutton->Margin = System::Windows::Forms::Padding(5);
			this->startbutton->Name = L"startbutton";
			this->startbutton->Size = System::Drawing::Size(447, 45);
			this->startbutton->TabIndex = 1;
			this->startbutton->Text = L"Старт";
			this->startbutton->UseVisualStyleBackColor = true;
			this->startbutton->Click += gcnew System::EventHandler(this, &MyForm::startbutton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(14) {
				this->number,
					this->Y_i, this->n_i, this->n_idivn, this->Sigmai, this->Sigmain, this->theoreticalprobability, this->Column1, this->Column2,
					this->maxdisper, this->maxdiffofprob, this->criticallevel, this->signlevel, this->decision
			});
			this->dataGridView1->Location = System::Drawing::Point(10, 186);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(707, 190);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// number
			// 
			this->number->HeaderText = L"№";
			this->number->MinimumWidth = 6;
			this->number->Name = L"number";
			this->number->Width = 125;
			// 
			// Y_i
			// 
			this->Y_i->HeaderText = L"y_i";
			this->Y_i->MinimumWidth = 6;
			this->Y_i->Name = L"Y_i";
			this->Y_i->ReadOnly = true;
			this->Y_i->Width = 135;
			// 
			// n_i
			// 
			this->n_i->HeaderText = L"n_i";
			this->n_i->MinimumWidth = 6;
			this->n_i->Name = L"n_i";
			this->n_i->ReadOnly = true;
			this->n_i->Width = 135;
			// 
			// n_idivn
			// 
			this->n_idivn->HeaderText = L"n_i/n";
			this->n_idivn->MinimumWidth = 6;
			this->n_idivn->Name = L"n_idivn";
			this->n_idivn->ReadOnly = true;
			this->n_idivn->Width = 135;
			// 
			// Sigmai
			// 
			this->Sigmai->HeaderText = L"Sigma(i)";
			this->Sigmai->MinimumWidth = 6;
			this->Sigmai->Name = L"Sigmai";
			this->Sigmai->Width = 125;
			// 
			// Sigmain
			// 
			this->Sigmain->HeaderText = L"Sigma(i)/n";
			this->Sigmain->MinimumWidth = 6;
			this->Sigmain->Name = L"Sigmain";
			this->Sigmain->Width = 125;
			// 
			// theoreticalprobability
			// 
			this->theoreticalprobability->HeaderText = L"P(y_i)";
			this->theoreticalprobability->MinimumWidth = 6;
			this->theoreticalprobability->Name = L"theoreticalprobability";
			this->theoreticalprobability->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"F(x) теор.";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"F(x) выб.";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// maxdisper
			// 
			this->maxdisper->HeaderText = L"max|F(x)выб. - F(x)теор.|";
			this->maxdisper->MinimumWidth = 6;
			this->maxdisper->Name = L"maxdisper";
			this->maxdisper->Width = 125;
			// 
			// maxdiffofprob
			// 
			this->maxdiffofprob->HeaderText = L"|n_i/n - P(y_i)|";
			this->maxdiffofprob->MinimumWidth = 6;
			this->maxdiffofprob->Name = L"maxdiffofprob";
			this->maxdiffofprob->Width = 150;
			// 
			// criticallevel
			// 
			this->criticallevel->HeaderText = L"Значение статистики Колмогорова-Смирнова";
			this->criticallevel->MinimumWidth = 6;
			this->criticallevel->Name = L"criticallevel";
			this->criticallevel->Width = 150;
			// 
			// signlevel
			// 
			this->signlevel->HeaderText = L"Уровень значимости  α";
			this->signlevel->MinimumWidth = 6;
			this->signlevel->Name = L"signlevel";
			this->signlevel->Width = 125;
			// 
			// decision
			// 
			this->decision->HeaderText = L"Решение";
			this->decision->MinimumWidth = 6;
			this->decision->Name = L"decision";
			this->decision->Width = 125;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(260, 626);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 26);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// problabel
			// 
			this->problabel->AutoSize = true;
			this->problabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->problabel->Location = System::Drawing::Point(1007, 38);
			this->problabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->problabel->Name = L"problabel";
			this->problabel->Size = System::Drawing::Size(156, 25);
			this->problabel->TabIndex = 5;
			this->problabel->Text = L"Вероятность p:";
			// 
			// probbox
			// 
			this->probbox->Location = System::Drawing::Point(1352, 38);
			this->probbox->Margin = System::Windows::Forms::Padding(5);
			this->probbox->Name = L"probbox";
			this->probbox->Size = System::Drawing::Size(107, 26);
			this->probbox->TabIndex = 6;
			this->probbox->TextChanged += gcnew System::EventHandler(this, &MyForm::probbox_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(359, 609);
			this->textBox3->Margin = System::Windows::Forms::Padding(5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(99, 26);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(14, 590);
			this->button2->Margin = System::Windows::Forms::Padding(5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(236, 45);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Zoom";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numofexpbox
			// 
			this->numofexpbox->Location = System::Drawing::Point(1352, 9);
			this->numofexpbox->Margin = System::Windows::Forms::Padding(5);
			this->numofexpbox->Name = L"numofexpbox";
			this->numofexpbox->Size = System::Drawing::Size(107, 26);
			this->numofexpbox->TabIndex = 13;
			this->numofexpbox->TextChanged += gcnew System::EventHandler(this, &MyForm::numofexpbox_TextChanged);
			// 
			// numofexplabel
			// 
			this->numofexplabel->AutoSize = true;
			this->numofexplabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numofexplabel->Location = System::Drawing::Point(1007, 9);
			this->numofexplabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->numofexplabel->Name = L"numofexplabel";
			this->numofexplabel->Size = System::Drawing::Size(281, 25);
			this->numofexplabel->TabIndex = 12;
			this->numofexplabel->Text = L"Количество экспериментов:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(260, 590);
			this->textBox5->Margin = System::Windows::Forms::Padding(5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(78, 26);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0";
			// 
			// task14
			// 
			this->task14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"task14.Image")));
			this->task14->Location = System::Drawing::Point(10, 7);
			this->task14->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->task14->Name = L"task14";
			this->task14->Size = System::Drawing::Size(999, 171);
			this->task14->TabIndex = 14;
			this->task14->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1153, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 20);
			this->label2->TabIndex = 15;
			this->label2->Text = L"(через запятую)";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn2,
					this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6,
					this->varminussamplevir, this->samplemedian, this->samplespan
			});
			this->dataGridView2->Location = System::Drawing::Point(752, 186);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(5);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(707, 104);
			this->dataGridView2->TabIndex = 16;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"En";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 125;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Xвыб.ср.";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"|En - Xвыб.ср.|";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 150;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Dn";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"S^2";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// varminussamplevir
			// 
			this->varminussamplevir->HeaderText = L"|Dn - S^2|";
			this->varminussamplevir->MinimumWidth = 6;
			this->varminussamplevir->Name = L"varminussamplevir";
			this->varminussamplevir->Width = 150;
			// 
			// samplemedian
			// 
			this->samplemedian->HeaderText = L"Me выб.";
			this->samplemedian->MinimumWidth = 6;
			this->samplemedian->Name = L"samplemedian";
			this->samplemedian->Width = 125;
			// 
			// samplespan
			// 
			this->samplespan->HeaderText = L"R выб.";
			this->samplespan->MinimumWidth = 6;
			this->samplespan->Name = L"samplespan";
			this->samplespan->Width = 125;
			// 
			// signlevellabel
			// 
			this->signlevellabel->AutoSize = true;
			this->signlevellabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->signlevellabel->Location = System::Drawing::Point(1007, 69);
			this->signlevellabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->signlevellabel->Name = L"signlevellabel";
			this->signlevellabel->Size = System::Drawing::Size(235, 25);
			this->signlevellabel->TabIndex = 18;
			this->signlevellabel->Text = L"Уровень значимости  α:\r\n";
			// 
			// signlevelbox
			// 
			this->signlevelbox->Location = System::Drawing::Point(1352, 68);
			this->signlevelbox->Margin = System::Windows::Forms::Padding(5);
			this->signlevelbox->Name = L"signlevelbox";
			this->signlevelbox->Size = System::Drawing::Size(107, 26);
			this->signlevelbox->TabIndex = 19;
			// 
			// interbox
			// 
			this->interbox->Location = System::Drawing::Point(1352, 97);
			this->interbox->Margin = System::Windows::Forms::Padding(5);
			this->interbox->Name = L"interbox";
			this->interbox->Size = System::Drawing::Size(107, 26);
			this->interbox->TabIndex = 20;
			// 
			// interlabel
			// 
			this->interlabel->AutoSize = true;
			this->interlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->interlabel->Location = System::Drawing::Point(1007, 97);
			this->interlabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->interlabel->Name = L"interlabel";
			this->interlabel->Size = System::Drawing::Size(243, 25);
			this->interlabel->TabIndex = 21;
			this->interlabel->Text = L"Количество интервалов:";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn7, this->probinter, this->averexp, this->hi2, this->hi2sum, this->Column3
			});
			this->dataGridView3->Location = System::Drawing::Point(10, 390);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(5);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(707, 190);
			this->dataGridView3->TabIndex = 22;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"№";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"n_i";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 135;
			// 
			// probinter
			// 
			this->probinter->HeaderText = L"p_i";
			this->probinter->MinimumWidth = 6;
			this->probinter->Name = L"probinter";
			this->probinter->Width = 125;
			// 
			// averexp
			// 
			this->averexp->HeaderText = L"среднее ожидаемое";
			this->averexp->MinimumWidth = 6;
			this->averexp->Name = L"averexp";
			this->averexp->Width = 125;
			// 
			// hi2
			// 
			this->hi2->HeaderText = L"(n_i - np_i)^2 / np_i";
			this->hi2->MinimumWidth = 6;
			this->hi2->Name = L"hi2";
			this->hi2->Width = 150;
			// 
			// hi2sum
			// 
			this->hi2sum->HeaderText = L"hi^2";
			this->hi2sum->MinimumWidth = 6;
			this->hi2sum->Name = L"hi2sum";
			this->hi2sum->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1466, 649);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->interlabel);
			this->Controls->Add(this->interbox);
			this->Controls->Add(this->signlevelbox);
			this->Controls->Add(this->signlevellabel);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numofexpbox);
			this->Controls->Add(this->numofexplabel);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->probbox);
			this->Controls->Add(this->problabel);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->startbutton);
			this->Controls->Add(this->task14);
			this->Controls->Add(this->zedGraphControl1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->task14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		double f1(double x) {
			return sin(x);
		}

		double f2(double x) {
			return sin(2 * x);
		}



	private: System::Void startbutton_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		//take the probability and the number of experiments from textboxes

		double probability = Convert::ToDouble(probbox->Text);
		double numofexp = Convert::ToDouble(numofexpbox->Text);

		std::vector<randval> randvalarr; //vector of random variables without repetitions
		std::vector<double> allrandvalarr; //vector of  all random variables 
		//randvalarr.push_back(randval(0));

		double sumofelements = 0; //summ of all elements

		if (numofexp == 1) {
			double sum = 0; //correct answers
			while (true) {
				double t = rand();
				double newt = t / RAND_MAX;
				if (newt >= probability) {
					sum++;
				}
				else
					break;
			}

			allrandvalarr.push_back(sum);
			sumofelements += sum; //add the value of the random variable to the total sum of the elements

			//fill the vector of random variables without repetitions

			bool flag = false;
			for (randval& j : randvalarr) {
				if (j.getval() == sum) {
					j.incrementfrequency();
					flag = true;
				}
			}
			if (flag == false) {
				randvalarr.push_back(randval(sum));
			}
		}
		else {
			for (int i = 1; i <= numofexp; i++) {

				double sum = 0; //correct answers
				while (true) {
					double t = rand();
					double newt = t / RAND_MAX;
					if (newt >= probability) {
						sum++;
					}
					else
						break;
				}

				allrandvalarr.push_back(sum);
				sumofelements += sum; //add the value of the random variable to the total sum of the elements

				//fill the vector of random variables without repetitions

				bool flag = false;
				for (randval& j : randvalarr) {
					if (j.getval() == sum) {
						j.incrementfrequency();
						flag = true;
					}
				}
				if (flag == false) {
					randvalarr.push_back(randval(sum));
				}
			}
		}

		sort(randvalarr.begin(), randvalarr.end(), comp);
		sort(allrandvalarr.begin(), allrandvalarr.end(), comp2);

		//form an array of probability values
		double accumulation = 0;
		for (randval& j : randvalarr) {
			accumulation += probability * pow((1 - probability), j.getval());
			j.setprob(accumulation);
		}

		//set theoretical PDF
		double container = 0;
		std::vector<double> ThPDF;
		ThPDF.push_back(container);
		for (int i = 1; i <= numofexp; i++) {
			container = 1 - pow((1 - probability), i);
			ThPDF.push_back(container);
		}

		//fill in the first table

		int k = 0;
		dataGridView1->Rows->Clear();
		double abscumfreq = 0;

		std::vector<double> diffofprobarr; //vector for differences of probabilities

		for (randval& j : randvalarr) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[k]->Cells[0]->Value = k; //number
			dataGridView1->Rows[k]->Cells[1]->Value = j.getval(); //value of a random variable (number of correct answers)
			dataGridView1->Rows[k]->Cells[2]->Value = j.getfrequency(); //absolute frequency
			dataGridView1->Rows[k]->Cells[3]->Value = j.getfrequency() / numofexp; //relative frequency
			abscumfreq += j.getfrequency();
			dataGridView1->Rows[k]->Cells[4]->Value = abscumfreq; //absolute cumulative frequency
			dataGridView1->Rows[k]->Cells[5]->Value = abscumfreq / numofexp; //relative cumulative frequency
			j.setrelcumfreq(abscumfreq / numofexp);
			dataGridView1->Rows[k]->Cells[6]->Value = probability * pow((1 - probability), j.getval()); //theoretical probability
			dataGridView1->Rows[k]->Cells[7]->Value = j.getprob(); //theoretical distribution function
			dataGridView1->Rows[k]->Cells[8]->Value = j.getrelcumfreq(); //sample distribution function

			diffofprobarr.push_back(abs(j.getfrequency() / numofexp - probability * pow((1 - probability), j.getval())));

			k++;
		}

		//calculate the measure of discrepancy between theoretical and sample distribution functions

		double maxdisper = 0;
		double tempdisper = 0;
		int counter = 1;
		for (randval& j : randvalarr) {
			tempdisper = abs(j.getrelcumfreq() - ThPDF[counter]);
			if (tempdisper > maxdisper) {
				maxdisper = tempdisper;
			}
			counter++;
		}

		dataGridView1->Rows[0]->Cells[9]->Value = maxdisper;

		double kolstat;
		kolstat = sqrt(numofexp) * maxdisper;
		
		dataGridView1->Rows[0]->Cells[11]->Value = kolstat;

		double signlevel = Convert::ToDouble(signlevelbox->Text);
		dataGridView1->Rows[0]->Cells[12]->Value = signlevel;

		//hypothesis decision by kolmogorov statistics

		if (kolstat > signlevel) {
			dataGridView1->Rows[0]->Cells[13]->Value = "Отвергаем";
		}
		else {
			dataGridView1->Rows[0]->Cells[13]->Value = "Принимаем";
		}

		//calculate the probability of hitting each interval
		
		double numofint = Convert::ToDouble(interbox->Text);

		std::vector<double> intervals(numofint, 0); //vector of intervals
		int it = 1;
		for (it; it <= numofint - 2; it++) {
			for (randval j : randvalarr) {
				if ((j.getval() < it) && (j.getval() >= it - 1)) {
					intervals[it] += j.getfrequency();
				}
			}
		}
		for (randval j : randvalarr) {
			if (j.getval() >= it - 1) {
				intervals[it] += j.getfrequency();
			}
		}


		//double inter = Convert::ToDouble(interbox->Text) - 1;
		//std::vector<double> interarr; //vector of signs in intervals
		//interarr.push_back(0);
		//randval checking; //??????????
		//std::vector<randval> intervals; //?????????
		//int intcounter = 1; //????????
		//intervals.push_back(randval(intcounter, 0)); 
		//intcounter++; 
		//if (inter <= randvalarr.size()) {
		//	int j = 0;
		//	for (int i = 0; i < inter - 1; i++) {
		//		checking = randvalarr[j];
		//		if (checking.getval() <= i) {
		//			interarr.push_back(checking.getfrequency());
		//			intervals.push_back(randval(intcounter, checking.getfrequency()));
		//			intervals.back().setprob(probability * pow((1 - probability), checking.getval()));
		//			intcounter++;
		//			j++;
		//		}
		//		else {
		//			interarr.push_back(0);
		//			intervals.push_back(randval(intcounter, 0));
		//			intcounter++;
		//		}
		//	}
		//	double tmp = 0;
		//	double tmpprob = 0;
		//	for (j; j < randvalarr.size(); j++) {
		//		tmp += randvalarr[j].getfrequency();
		//		tmpprob += probability * pow((1 - probability), randvalarr[j].getval());
		//	}
		//	interarr.push_back(tmp);
		//	intervals.push_back(randval(intcounter, tmp));
		//	intervals.back().setprob(tmpprob);
		//	intcounter++;
		//}
		//else {
		//	int j = 0;
		//	int i = 0;
		//	int temp = 0;
		//	double tempprob = 0;
		//	for (i = 0; i <= randvalarr.back().getval(); i++) {
		//		checking = randvalarr[j];
		//		if (checking.getval() <= i) {
		//			if (interarr.size() < inter) {
		//				interarr.push_back(checking.getfrequency());
		//				intervals.push_back(randval(intcounter, checking.getfrequency()));
		//				intervals.back().setprob(probability * pow((1 - probability), checking.getval()));
		//				intcounter++;
		//				j++;
		//			}
		//			else {
		//				temp += checking.getfrequency();
		//				tempprob += probability * pow((1 - probability), checking.getval());
		//				j++;
		//			}
		//		}
		//		else if (interarr.size() < inter) {
		//			interarr.push_back(0);
		//			intervals.push_back(randval(intcounter, 0));
		//			intcounter++;
		//		}
		//	}
		//	interarr.push_back(temp);
		//	intervals.push_back(randval(intcounter, temp));
		//	intervals.back().setprob(tempprob);
		//	intcounter++;
		//	for (i; i < inter - 1; i++) {
		//			interarr.push_back(0);
		//			intervals.push_back(randval(intcounter, 0));
		//			intcounter++;
		//	}
		//}

		std::vector<double> interprobarr;
		interprobarr.push_back(0);
		for (int i = 1; i <= intervals.size(); i++) {
			double tempsum = 0;
			for (randval m : randvalarr) {
				if ((m.getval() >= i) && (m.getval() < i + 1)) {
					tempsum += m.getprob();
				}
			}
			interprobarr.push_back(tempsum);
		}

		dataGridView3->Rows->Clear();
		int l = 0;
		double hi2 = 0;
		for (double j : intervals) {
			dataGridView3->Rows->Add();
			dataGridView3->Rows[l]->Cells[0]->Value = l+1; //number
			//dataGridView3->Rows[l]->Cells[1]->Value = interarr[l]; 
			//dataGridView3->Rows[l]->Cells[2]->Value = interprobarr[l];
			dataGridView3->Rows[l]->Cells[1]->Value = intervals[l];
			dataGridView3->Rows[l]->Cells[2]->Value = 0; /*intervals[l].getprob();*/
			dataGridView3->Rows[l]->Cells[3]->Value = 0;/*intervals[l].getprob() * numofexp;*/
			//if (intervals[l].getprob() != 0) {
			//	dataGridView3->Rows[l]->Cells[4]->Value = pow((intervals[l].getfrequency() - intervals[l].getprob() * numofexp), 2)
			//		/ intervals[l].getprob() * numofexp;
			//	hi2 += pow((intervals[l].getfrequency() - intervals[l].getprob() * numofexp), 2)
			//		/ intervals[l].getprob() * numofexp;
			//}
			//else {
			//	dataGridView3->Rows[l]->Cells[4]->Value = 0;
			//}

			l++;
		}

		dataGridView3->Rows[1]->Cells[5]->Value = 0;/*hi2;*/

		//deviation of the estimated probability from the theoretical

		double maxdiffofprob = *std::max_element(diffofprobarr.begin(), diffofprobarr.end());
		dataGridView1->Rows[0]->Cells[10]->Value = maxdiffofprob;
		//calculate the sample variance

		double samplemean = sumofelements / numofexp;//sample mean
		double tempsum = 0;  //temporary sum to add the differences between the elementsand the sample mean

		for (randval i : allrandvalarr) {
			tempsum += pow((i.getval() - samplemean), 2);
		}

		double samplevariance = 0;

		if (numofexp == 1) {
			samplevariance = 0;
		}
		else {
			samplevariance = tempsum / (numofexp - 1);
		}

		


		//calculate the sample median

		double samplemedian = 0;
		int n = 0;

		if (numofexp == 1) {
			samplemedian = allrandvalarr[0];
		}
		else {

			if (int(numofexp) % 2 == 0) {
				n = int(numofexp) / 2;
				samplemedian = (allrandvalarr[n] + allrandvalarr[n + 1]) / 2;
			}
			else {
				n = (int(numofexp) - 1) / 2;
				samplemedian = allrandvalarr[n];
			}
		}
		//fill in the second table

		dataGridView2->Rows->Clear();
		dataGridView2->Rows[0]->Cells[0]->Value = (1 - probability) / probability; //theoretical expectation
		dataGridView2->Rows[0]->Cells[1]->Value = samplemean; //sample mean
		dataGridView2->Rows[0]->Cells[2]->Value = abs((1 - probability) / probability - samplemean); //the modulus of the difference between the expectation and the sample mean
		dataGridView2->Rows[0]->Cells[3]->Value = (1 - probability) / pow(probability, 2); //variance
		dataGridView2->Rows[0]->Cells[4]->Value = samplevariance; //sample variance
		dataGridView2->Rows[0]->Cells[5]->Value = abs(((1 - probability) / pow(probability, 2)) - samplevariance); //the modulus of the difference between the variance and the sample variance
		dataGridView2->Rows[0]->Cells[6]->Value = samplemedian; //sample median
		dataGridView2->Rows[0]->Cells[7]->Value = allrandvalarr.back() - allrandvalarr.front(); //sample span

		double h = Convert::ToDouble(textBox3->Text);


		double xmin_limit = -1;
		double xmax_limit = randvalarr.back().getval() + 1;

		double ymin_limit = 0;
		double ymax_limit = 2;

		double xmin = -1;
		double xmax = numofexp + 1;

		// Список точек
		int i = 0;
		//dataGridView1->Rows->Clear();

	    //draw theoretical PDF
		f1_list->Add(-1, 0);
		f1_list->Add(0, 0);
		
		for (int i = 1; i <= numofexp; i++) {
			f1_list->Add(i - 1, ThPDF[i]);
			f1_list->Add(i, ThPDF[i]);
		}
		f1_list->Add(numofexp, ThPDF[numofexp]);
		f1_list->Add(numofexp + 1, ThPDF[numofexp]);

		//draw sample PDF
		double prevprob = 0;
		double prevrelcumfreq = 0;
		prevprob = randvalarr[0].getprob();
		f2_list->Add(randvalarr[0].getval(), 0);
		for (randval j : randvalarr) {
			//f1_list->Add(j.getval(), prevprob);
			//f1_list->Add(j.getval(), j.getprob());
			prevprob = j.getprob();
			f2_list->Add(j.getval(), prevrelcumfreq);
			f2_list->Add(j.getval(), j.getrelcumfreq());
			prevrelcumfreq = j.getrelcumfreq();
			//Печать в таблицу
			//dataGridView1->Rows->Add();
			//dataGridView1->Rows[i]->Cells[0]->Value = x; 			
			//dataGridView1->Rows[i]->Cells[1]->Value = floor(f1(x) * 1000) / 1000;
			//	dataGridView1->Rows[i]->Cells[2]->Value = floor(f2(x) * 1000) / 1000;
			//	i++;
		}
		f2_list->Add(numofexp + 1, randvalarr.back().getrelcumfreq());

		LineItem^ Curve1 = panel->AddCurve("F1(x) - theoretical", f1_list, Color::Red, SymbolType::Plus);
		LineItem^ Curve2 = panel->AddCurve("F2(x) - sample", f2_list, Color::Blue, SymbolType::None);

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
		/*
				// Устанавливаем интересующий нас интервал по оси Y
				panel->YAxis->Scale->Min = ymin_limit;
				panel->YAxis->Scale->Max = ymax_limit;
		*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		double xmin = Convert::ToDouble(textBox5->Text);
		double xmax = Convert::ToDouble(numofexpbox->Text);
		//Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin;
		panel->XAxis->Scale->Max = xmax;

		//Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		//В противном случае на рисунке будет показана только часть графика, 
	   // которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}

	private: System::Void numofexpbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void probbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	}
	; }