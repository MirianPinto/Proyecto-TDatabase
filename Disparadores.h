#pragma once
#include "CrearDisparadores.h"
#include "EliminarDisparador.h"
#include "DDLDisparador.h"
#include "ModificarDisparador.h"

namespace Proyecto_TDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	using namespace System::Data::Odbc;
	using namespace Proyecto_TDatabase;

	/// <summary>
	/// Resumen de Disparadores
	/// </summary>
	public ref class Disparadores : public System::Windows::Forms::Form
	{
	public:
		Disparadores(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
		}


		String^ user;
		String^ pas;
		String^ acces;
	private: System::Windows::Forms::Button^ CD;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	public:

		Form^ Opciones;

		Disparadores(Form^ opciones, String^ users, String^ pass)
		{
			user = users;
			pas = pass;
			Opciones = opciones;

			if (users->CompareTo("Admin-Mirian") == 0 && pass->CompareTo("georgina") == 0)
			{
				acces = "";
			}
			else
			{
				acces = "\"Admin-Mirian\".";
			}
			InitializeComponent();
		}



	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~Disparadores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CD = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(256, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Disparadores::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(43, 211);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(537, 277);
			this->dataGridView1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 36);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Regresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Disparadores::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(238, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Disparadores";
			// 
			// CD
			// 
			this->CD->Location = System::Drawing::Point(455, 13);
			this->CD->Name = L"CD";
			this->CD->Size = System::Drawing::Size(132, 53);
			this->CD->TabIndex = 4;
			this->CD->Text = L"Crear Disparador";
			this->CD->UseVisualStyleBackColor = true;
			this->CD->Click += gcnew System::EventHandler(this, &Disparadores::CD_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(455, 72);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 53);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Eliminar Disparador";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Disparadores::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(455, 135);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 54);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Modificar DIsparador";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Disparadores::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 112);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 46);
			this->button5->TabIndex = 7;
			this->button5->Text = L"DDL";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Disparadores::button5_Click);
			// 
			// Disparadores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(619, 512);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->CD);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"Disparadores";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Disparadores";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void ConnectionDB()
		{
			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "select trigname from "+ acces + "sys.SYSTRIGGERS ";
				cmd->ExecuteNonQuery();

				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;
				CON->Close();



				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		ConnectionDB();

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		Opciones->Show();


	}
private: System::Void CD_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	CrearDisparadores^ cp = gcnew CrearDisparadores(this, user, pas);
	cp->Show();


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	
		this->Visible = false;
		EliminarDisparador^ cp = gcnew EliminarDisparador(this, user, pas);
	 cp->Show();

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Visible = false;
	DDLDisparador^ cp = gcnew DDLDisparador(this, user, pas);
	cp->Show();

	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	
		this->Visible = false;
		ModificarDisparador^ cp = gcnew ModificarDisparador(this, user, pas);
	cp->Show();

}
};
}
