#pragma once
#include <math.h>
#include <random>
#include <vector>
#include "randval.h"

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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^ startbutton;

	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^ problabel;
	private: System::Windows::Forms::TextBox^ probbox;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^ numofexpbox;

	private: System::Windows::Forms::Label^ numofexplabel;



	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^ task14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Y_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ n_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ n_idivn;
	private: System::Windows::Forms::Label^ label2;














	protected:
	private: System::ComponentModel::IContainer^  components;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->problabel = (gcnew System::Windows::Forms::Label());
			this->probbox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numofexpbox = (gcnew System::Windows::Forms::TextBox());
			this->numofexplabel = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->task14 = (gcnew System::Windows::Forms::PictureBox());
			this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Y_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->n_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->n_idivn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->task14))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(897, 102);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(6);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(13, 12);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// startbutton
			// 
			this->startbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startbutton->Location = System::Drawing::Point(19, 269);
			this->startbutton->Margin = System::Windows::Forms::Padding(5);
			this->startbutton->Name = L"startbutton";
			this->startbutton->Size = System::Drawing::Size(236, 45);
			this->startbutton->TabIndex = 1;
			this->startbutton->Text = L"Старт";
			this->startbutton->UseVisualStyleBackColor = true;
			this->startbutton->Click += gcnew System::EventHandler(this, &MyForm::startbutton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->number,
					this->Y_i, this->n_i, this->n_idivn
			});
			this->dataGridView1->Location = System::Drawing::Point(476, 188);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(503, 190);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(782, 534);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"a";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(829, 528);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 26);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// problabel
			// 
			this->problabel->AutoSize = true;
			this->problabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->problabel->Location = System::Drawing::Point(14, 217);
			this->problabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->problabel->Name = L"problabel";
			this->problabel->Size = System::Drawing::Size(189, 29);
			this->problabel->TabIndex = 5;
			this->problabel->Text = L"Вероятность p:";
			// 
			// probbox
			// 
			this->probbox->Location = System::Drawing::Point(359, 228);
			this->probbox->Margin = System::Windows::Forms::Padding(5);
			this->probbox->Name = L"probbox";
			this->probbox->Size = System::Drawing::Size(107, 26);
			this->probbox->TabIndex = 6;
			this->probbox->TextChanged += gcnew System::EventHandler(this, &MyForm::probbox_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(479, 612);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(510, 606);
			this->textBox3->Margin = System::Windows::Forms::Padding(5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(99, 26);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(19, 333);
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
			this->numofexpbox->Location = System::Drawing::Point(359, 192);
			this->numofexpbox->Margin = System::Windows::Forms::Padding(5);
			this->numofexpbox->Name = L"numofexpbox";
			this->numofexpbox->Size = System::Drawing::Size(107, 26);
			this->numofexpbox->TabIndex = 13;
			this->numofexpbox->TextChanged += gcnew System::EventHandler(this, &MyForm::numofexpbox_TextChanged);
			// 
			// numofexplabel
			// 
			this->numofexplabel->AutoSize = true;
			this->numofexplabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numofexplabel->Location = System::Drawing::Point(14, 188);
			this->numofexplabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->numofexplabel->Name = L"numofexplabel";
			this->numofexplabel->Size = System::Drawing::Size(345, 29);
			this->numofexplabel->TabIndex = 12;
			this->numofexplabel->Text = L"Количество экспериментов:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(853, 584);
			this->textBox5->Margin = System::Windows::Forms::Padding(5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(78, 26);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(825, 590);
			this->label5->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"a";
			// 
			// task14
			// 
			this->task14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"task14.Image")));
			this->task14->Location = System::Drawing::Point(-1, 0);
			this->task14->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->task14->Name = L"task14";
			this->task14->Size = System::Drawing::Size(999, 171);
			this->task14->TabIndex = 14;
			this->task14->TabStop = false;
			// 
			// number
			// 
			this->number->HeaderText = L"№";
			this->number->MinimumWidth = 6;
			this->number->Name = L"number";
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(197, 224);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 20);
			this->label2->TabIndex = 15;
			this->label2->Text = L"(через запятую)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(997, 649);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numofexpbox);
			this->Controls->Add(this->numofexplabel);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->probbox);
			this->Controls->Add(this->problabel);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//private: 
	//	double f1(double x){
	//		return sin(x);
	//	}

	//	double f2(double x) {
	//		return sin(2 * x);
	//	}



	private: System::Void startbutton_Click(System::Object^  sender, System::EventArgs^  e) {

		//GraphPane^ panel = zedGraphControl1->GraphPane;
		//panel->CurveList->Clear();
		//PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		//PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		// Интервал, где есть данные
		//double xmin = Convert::ToDouble(textBox1->Text);

		//Забираем вероятность и количество экспериментов из текстбоксов
		double probability = Convert::ToDouble(probbox->Text);
		double numofexp = Convert::ToDouble(numofexpbox->Text);

		std::vector<randval> randvalarr;
		randvalarr.push_back(randval(0));

		for (int i = 0; i < numofexp; i++) {

			double sum = 0;
			while (true) {
				double t = rand();
				double newt = t / RAND_MAX;
				if (newt >= probability) {
					sum++;
				}
				else
					break;
			}

			bool flag = false;
			for (randval &j : randvalarr) {
				if (j.getval() == sum) {
					j.incrementfrequency();
					flag = true;
				}
			}
			if (flag == false) {
				randvalarr.push_back(randval(sum));
			}
		}

		sort(randvalarr.begin(), randvalarr.end(), comp);

		//Печать в таблицу
		int k = 0;
		for (randval j : randvalarr) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[k]->Cells[0]->Value = k;
			dataGridView1->Rows[k]->Cells[1]->Value = j.getval();
			dataGridView1->Rows[k]->Cells[2]->Value = j.getfrequency();
			dataGridView1->Rows[k]->Cells[3]->Value = j.getfrequency() / numofexp;
			k++;
		}


		//double h = Convert::ToDouble(textBox3->Text);


		//double xmin_limit = xmin - 0.1;
		//double xmax_limit = xmax + 0.1;
/*
		double ymin_limit = -1.0;
		double ymax_limit = 100.0;
*/
		// Список точек
		//int i = 0;
		//dataGridView1->Rows->Clear();
		//for (double x = xmin; x <= xmax; x += h)
		//{
		//	//Добавление на график
		//	f1_list->Add(x, f1(x));
		//	f2_list->Add(x, f2(x));
		//	//Печать в таблицу
		//	dataGridView1->Rows->Add();
		//	dataGridView1->Rows[i]->Cells[0]->Value = x; 			
		//	dataGridView1->Rows[i]->Cells[1]->Value = floor(f1(x) * 1000) / 1000;
		//	dataGridView1->Rows[i]->Cells[2]->Value = floor(f2(x) * 1000) / 1000;
		//	i++;
		//}
		//LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red,SymbolType::Plus);
		//LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Blue, SymbolType::None);

		// Устанавливаем интересующий нас интервал по оси X
		//panel->XAxis->Scale->Min = xmin_limit;
		//panel->XAxis->Scale->Max = xmax_limit;
/*
		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		//zedGraphControl1->AxisChange();
		// Обновляем график
		//zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	//GraphPane^ panel = zedGraphControl1->GraphPane;
	//double xmin = Convert::ToDouble(textBox5->Text);
	//double xmax = Convert::ToDouble(numofexpbox->Text);
	//// Устанавливаем интересующий нас интервал по оси X
	//panel->XAxis->Scale->Min = xmin;
	//panel->XAxis->Scale->Max = xmax;

	//// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	//// В противном случае на рисунке будет показана только часть графика, 
	//// которая умещается в интервалы по осям, установленные по умолчанию
	//zedGraphControl1->AxisChange();
	//// Обновляем график
	//zedGraphControl1->Invalidate();

}

private: System::Void numofexpbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void probbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
