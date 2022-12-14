#pragma once

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
	/// Resumen de ModificarVista
	/// </summary>
	public ref class ModificarVista : public System::Windows::Forms::Form
	{
	public:
		ModificarVista(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//
		}
		String^ user;
		String^ pas;
		String^ acces;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DomainUpDown^ vistas;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ Anterior;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	public:

		Form^ Opciones;

		ModificarVista(Form^ opciones, String^ users, String^ pass)
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
			Vistas1();

		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~ModificarVista()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->vistas = (gcnew System::Windows::Forms::DomainUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Anterior = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarVista::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(196, 343);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Alterar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModificarVista::button2_Click);
			// 
			// vistas
			// 
			this->vistas->Location = System::Drawing::Point(186, 108);
			this->vistas->Name = L"vistas";
			this->vistas->Size = System::Drawing::Size(134, 22);
			this->vistas->TabIndex = 2;
			this->vistas->SelectedItemChanged += gcnew System::EventHandler(this, &ModificarVista::vistas_SelectedItemChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(192, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Vista a alterar:";
			// 
			// Anterior
			// 
			this->Anterior->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Anterior->Location = System::Drawing::Point(49, 147);
			this->Anterior->Multiline = true;
			this->Anterior->Name = L"Anterior";
			this->Anterior->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Anterior->Size = System::Drawing::Size(395, 190);
			this->Anterior->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(366, 15);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(78, 37);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ModificarVista::dataGridView1_CellContentClick);
			// 
			// ModificarVista
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 410);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Anterior);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->vistas);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"ModificarVista";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ModificarVista";
			this->Load += gcnew System::EventHandler(this, &ModificarVista::ModificarVista_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//SELECT viewtext, viewname FROM sys.SYSVIEWs where vcreator = 'Admin-Mirian' and viewname = ;
		void Vistas2()
		{
			//dataGridView1->Visible = false;

			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "SELECT viewtext, viewname FROM sys.SYSVIEWs where vcreator = 'Admin-Mirian' and viewname = '" + vistas->Text+"'";
				cmd->ExecuteNonQuery();



				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;


				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {

						String^ s = row->Cells[0]->Value->ToString();


						Anterior->Text = s->Replace("create", "ALTER");
					}
				}


				CON->Close();
				//dataGridView1->Visible = true;
				//dataGridView1->DataSource = "";

				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

		void Vistas1()
		{
			//dataGridView1->Visible = false;

			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = "SELECT viewname FROM sys.SYSVIEWs where vcreator = 'Admin-Mirian'";
				cmd->ExecuteNonQuery();



				DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;


				for each (DataGridViewRow ^ row in dataGridView1->Rows)
				{
					if (row->Cells[0]->Value != nullptr) {
						vistas->Items->Add(row->Cells[0]->Value->ToString());
					}
				}


				CON->Close();
				//dataGridView1->Visible = true;
				//dataGridView1->DataSource = "";

				//MessageBox::Show("Connection successful", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

		void ModificarVistaa(String^ codigoELiminar)
		{
			String^ connString = "Dsn=TBD1;uid=" + user + ";pwd=" + pas;
			OdbcConnection^ CON = gcnew OdbcConnection(connString);
			try
			{
				CON->Open();
				OdbcCommand^ cmd = CON->CreateCommand();
				cmd->CommandType = CommandType::Text;

				cmd->CommandText = codigoELiminar;
				cmd->ExecuteNonQuery();

				/*DataTable^ dt = gcnew DataTable();
				OdbcDataAdapter^ dp = gcnew OdbcDataAdapter(cmd);
				dp->Fill(dt);
				dataGridView1->DataSource = dt;*/
				CON->Close();




				MessageBox::Show("Se modifico correctamente", "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message, "C++ Access Database Connector", MessageBoxButtons::OK, MessageBoxIcon::Error);
				CON->Close();
			}
		}

	private: System::Void ModificarVista_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Visible = false;
		Opciones->Show();

	}
	private: System::Void vistas_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e) {

		Vistas2();


	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	//String^ codigo = "ALTER VIEW \"Admin - Mirian\".\"" + vistas->Text + "\" (  ) AS " + nueva->Text + ";";


	ModificarVistaa(Anterior->Text);

}
};
}
