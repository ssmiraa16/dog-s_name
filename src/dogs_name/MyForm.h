#pragma once

namespace Dogs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::RadioButton^ female;
	private: System::Windows::Forms::RadioButton^ male;


	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::RadioButton^ white;
	private: System::Windows::Forms::RadioButton^ black;
	private: System::Windows::Forms::RadioButton^ red;
	private: System::Windows::Forms::RadioButton^ grey;
	private: System::Windows::Forms::RadioButton^ brown;





	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::RadioButton^ fluffy;
	private: System::Windows::Forms::RadioButton^ smooth;



	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::RadioButton^ spotted;
	private: System::Windows::Forms::RadioButton^ striped;
	private: System::Windows::Forms::RadioButton^ ton;



	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->female = (gcnew System::Windows::Forms::RadioButton());
			this->male = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->white = (gcnew System::Windows::Forms::RadioButton());
			this->black = (gcnew System::Windows::Forms::RadioButton());
			this->red = (gcnew System::Windows::Forms::RadioButton());
			this->grey = (gcnew System::Windows::Forms::RadioButton());
			this->brown = (gcnew System::Windows::Forms::RadioButton());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->fluffy = (gcnew System::Windows::Forms::RadioButton());
			this->smooth = (gcnew System::Windows::Forms::RadioButton());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->spotted = (gcnew System::Windows::Forms::RadioButton());
			this->striped = (gcnew System::Windows::Forms::RadioButton());
			this->ton = (gcnew System::Windows::Forms::RadioButton());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-11, -37);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1195, 633);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(36, 25);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1122, 56);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Добро пожаловать! Мы поможем подобрать кличку вашему питомцу! Ответьте, пожалуйст"
				L"а, на несколько вопросов:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(36, 106);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(189, 175);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Какой пол у вашего питомца\?";
			// 
			// female
			// 
			this->female->AutoSize = true;
			this->female->BackColor = System::Drawing::SystemColors::Window;
			this->female->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->female->Location = System::Drawing::Point(51, 166);
			this->female->Name = L"female";
			this->female->Size = System::Drawing::Size(101, 25);
			this->female->TabIndex = 3;
			this->female->TabStop = true;
			this->female->Text = L"женский";
			this->female->UseVisualStyleBackColor = false;
			this->female->Click += gcnew System::EventHandler(this, &MyForm::female_CheckedChanged_1);
			// 
			// male
			// 
			this->male->AutoSize = true;
			this->male->BackColor = System::Drawing::SystemColors::Window;
			this->male->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->male->Location = System::Drawing::Point(51, 222);
			this->male->Name = L"male";
			this->male->Size = System::Drawing::Size(101, 25);
			this->male->TabIndex = 4;
			this->male->TabStop = true;
			this->male->Text = L"мужской";
			this->male->UseVisualStyleBackColor = false;
			this->male->Click += gcnew System::EventHandler(this, &MyForm::male_CheckedChanged_1);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(288, 106);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(223, 258);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"Какой цвет преобладает в окрасе вашего питомца\?";
			// 
			// white
			// 
			this->white->AutoSize = true;
			this->white->BackColor = System::Drawing::SystemColors::Window;
			this->white->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->white->Location = System::Drawing::Point(312, 196);
			this->white->Name = L"white";
			this->white->Size = System::Drawing::Size(83, 25);
			this->white->TabIndex = 6;
			this->white->TabStop = true;
			this->white->Text = L"белый";
			this->white->UseVisualStyleBackColor = false;
			this->white->Click += gcnew System::EventHandler(this, &MyForm::white_CheckedChanged);
			// 
			// black
			// 
			this->black->AutoSize = true;
			this->black->BackColor = System::Drawing::SystemColors::Window;
			this->black->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->black->Location = System::Drawing::Point(313, 237);
			this->black->Name = L"black";
			this->black->Size = System::Drawing::Size(93, 25);
			this->black->TabIndex = 7;
			this->black->TabStop = true;
			this->black->Text = L"чёрный";
			this->black->UseVisualStyleBackColor = false;
			this->black->Click += gcnew System::EventHandler(this, &MyForm::black_CheckedChanged);
			// 
			// red
			// 
			this->red->AutoSize = true;
			this->red->BackColor = System::Drawing::SystemColors::Window;
			this->red->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->red->Location = System::Drawing::Point(313, 268);
			this->red->Name = L"red";
			this->red->Size = System::Drawing::Size(85, 25);
			this->red->TabIndex = 8;
			this->red->TabStop = true;
			this->red->Text = L"рыжий";
			this->red->UseVisualStyleBackColor = false;
			this->red->Click += gcnew System::EventHandler(this, &MyForm::red_CheckedChanged);
			// 
			// grey
			// 
			this->grey->AutoSize = true;
			this->grey->BackColor = System::Drawing::SystemColors::Window;
			this->grey->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grey->Location = System::Drawing::Point(313, 299);
			this->grey->Name = L"grey";
			this->grey->Size = System::Drawing::Size(82, 25);
			this->grey->TabIndex = 9;
			this->grey->TabStop = true;
			this->grey->Text = L"серый";
			this->grey->UseVisualStyleBackColor = false;
			this->grey->Click += gcnew System::EventHandler(this, &MyForm::grey_CheckedChanged);
			// 
			// brown
			// 
			this->brown->AutoSize = true;
			this->brown->BackColor = System::Drawing::SystemColors::Window;
			this->brown->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->brown->Location = System::Drawing::Point(313, 330);
			this->brown->Name = L"brown";
			this->brown->Size = System::Drawing::Size(132, 25);
			this->brown->TabIndex = 10;
			this->brown->TabStop = true;
			this->brown->Text = L"коричневый";
			this->brown->UseVisualStyleBackColor = false;
			this->brown->Click += gcnew System::EventHandler(this, &MyForm::brown_CheckedChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(576, 106);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(228, 147);
			this->textBox4->TabIndex = 11;
			this->textBox4->Text = L"Какой тип шерсти у вашего питомца\?";
			// 
			// fluffy
			// 
			this->fluffy->AutoSize = true;
			this->fluffy->BackColor = System::Drawing::SystemColors::Window;
			this->fluffy->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fluffy->Location = System::Drawing::Point(593, 166);
			this->fluffy->Name = L"fluffy";
			this->fluffy->Size = System::Drawing::Size(114, 25);
			this->fluffy->TabIndex = 12;
			this->fluffy->TabStop = true;
			this->fluffy->Text = L"пушистый";
			this->fluffy->UseVisualStyleBackColor = false;
			this->fluffy->Click += gcnew System::EventHandler(this, &MyForm::fluffy_CheckedChanged);
			// 
			// smooth
			// 
			this->smooth->AutoSize = true;
			this->smooth->BackColor = System::Drawing::SystemColors::Window;
			this->smooth->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->smooth->Location = System::Drawing::Point(593, 210);
			this->smooth->Name = L"smooth";
			this->smooth->Size = System::Drawing::Size(175, 25);
			this->smooth->TabIndex = 13;
			this->smooth->TabStop = true;
			this->smooth->Text = L"гладкошерстный";
			this->smooth->UseVisualStyleBackColor = false;
			this->smooth->CheckedChanged += gcnew System::EventHandler(this, &MyForm::smooth_CheckedChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(883, 106);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(233, 206);
			this->textBox5->TabIndex = 14;
			this->textBox5->Text = L"Какой окрас у вашего питомца\?";
			// 
			// spotted
			// 
			this->spotted->AutoSize = true;
			this->spotted->BackColor = System::Drawing::SystemColors::Window;
			this->spotted->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->spotted->Location = System::Drawing::Point(905, 166);
			this->spotted->Name = L"spotted";
			this->spotted->Size = System::Drawing::Size(122, 25);
			this->spotted->TabIndex = 15;
			this->spotted->TabStop = true;
			this->spotted->Text = L"пятнистый";
			this->spotted->UseVisualStyleBackColor = false;
			this->spotted->Click += gcnew System::EventHandler(this, &MyForm::spotted_CheckedChanged);
			// 
			// striped
			// 
			this->striped->AutoSize = true;
			this->striped->BackColor = System::Drawing::SystemColors::Window;
			this->striped->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->striped->Location = System::Drawing::Point(905, 210);
			this->striped->Name = L"striped";
			this->striped->Size = System::Drawing::Size(122, 25);
			this->striped->TabIndex = 16;
			this->striped->TabStop = true;
			this->striped->Text = L"полосатый";
			this->striped->UseVisualStyleBackColor = false;
			this->striped->Click += gcnew System::EventHandler(this, &MyForm::striped_CheckedChanged);
			// 
			// ton
			// 
			this->ton->AutoSize = true;
			this->ton->BackColor = System::Drawing::SystemColors::Window;
			this->ton->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ton->Location = System::Drawing::Point(905, 256);
			this->ton->Name = L"ton";
			this->ton->Size = System::Drawing::Size(135, 25);
			this->ton->TabIndex = 17;
			this->ton->TabStop = true;
			this->ton->Text = L"однотонный";
			this->ton->UseVisualStyleBackColor = false;
			this->ton->Click += gcnew System::EventHandler(this, &MyForm::ton_CheckedChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(27, 392);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(229, 29);
			this->textBox6->TabIndex = 18;
			this->textBox6->Text = L"Возможные клички:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 451);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 19;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 485);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 20;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 522);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 21;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 559);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 22;
			this->label4->Text = L"label4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1170, 584);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->ton);
			this->Controls->Add(this->striped);
			this->Controls->Add(this->spotted);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->smooth);
			this->Controls->Add(this->fluffy);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->brown);
			this->Controls->Add(this->grey);
			this->Controls->Add(this->red);
			this->Controls->Add(this->black);
			this->Controls->Add(this->white);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->male);
			this->Controls->Add(this->female);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void female_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
		String^ str = gcnew String("Альфа, Бэтти, Викки, Грэмми, Дуся, Ева, Жужа, Зося, Ирма, Кейси, Лекса, Мася, Ники, Рада, Соня, Тася, Умка, Челси, Шерри, Яся");
		if (this->female->Checked)
			label1->Text = " ";
		label1->Text = str;
	}
	private: System::Void male_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
		String^ str = gcnew String("Арчи, Барни, Вегас, Гуччи, Джейсон, Жак, Зевс, Икс, Кекс, Лакс, Макс, Оскар, Пират, Стич, Твикс, Фин, Хан, Чакс, Юлий, Янис");
		if (this->male->Checked)
			label1->Text = " ";
		label1->Text = str;
	}
	private: System::Void white_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ str = gcnew String("Белок, Белоснежка, Беляш, Зефир, Зефирка, Кефир, Милкис, Молоко, Пломбир, Снег, Снежок, Снежа, Облачко");
		if (this->white->Checked)
			label2->Text = " ";
		label2->Text = str;
	}
	private: System::Void black_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ str = gcnew String("Ворон, Багира, Блэки, Дарк, Крести, Найт, Пики, Сажа, Тёмка, Тучка, Тьма, Уголёк, Черныш");
		if (this->black->Checked)
			label2->Text = " ";
		label2->Text = str;
	}
	private: System::Void red_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ str = gcnew String("Апельсинка, Белка, Вася, Виски, Искра, Лис, Лисичка, Орэндж, Персик, Пламя, Симба, Тыковка, Файер");
		if (this->red->Checked)
			label2->Text = " ";
		label2->Text = str;
	}
	private: System::Void grey_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ str = gcnew String("Волчок, Гроза, Грэй, Дым, Дымка, Пар, Париж, Пепел, Сажа, Ток, Том, Туман, Тучка");
		if (this->grey->Checked)
			label2->Text = " ";
		label2->Text = str;
	}
	private: System::Void brown_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ str = gcnew String("Браун, Брауни, Бэар, Гризли, Кофи, Мишка, Тэдди, Чоко, Чокопай, Шоко, Шоколадка");
		if (this->brown->Checked)
			label2->Text = " ";
		label2->Text = str;
	}
	private: System::Void fluffy_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ str = gcnew String("Бубба, Йети, Клауди, Пух, Пушка, Пушинка, Пушок, Пушистик, Флаффи, Шар");
		if (this->fluffy->Checked)
			label3->Text = " ";
		label3->Text = str;
	}
	private: System::Void smooth_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ str = gcnew String("Бархат, Блеск, Пума, Шёлк");
		if (this->smooth->Checked)
			label3->Text = " ";
		label3->Text = str;
	}
	private: System::Void spotted_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ str = gcnew String("Лео, Леопард, Пятнышко, Палитра, Цветочек, Ягуар");
		if (this->spotted->Checked)
			label4->Text = " ";
		label4->Text = str;
	}
	private: System::Void striped_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ str = gcnew String("Зебра, Матроскин, Полоска, Полосатик, Тайгер, Тигра, Тигруля");
		if (this->striped->Checked)
			label4->Text = " ";
		label4->Text = str;
	}
	private: System::Void ton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->ton->Checked)
			label4->Text = " ";
	}
	};
}