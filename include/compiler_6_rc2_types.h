
#ifndef COMPILER_6_RC2_TYPES_H_
	#define COMPILER_6_RC2_TYPES_H_
	#define FULL_STR 4096
	#define FULL_ID 64


	/*struct code {
		char global_code [FULL_STR];
		int count_code;
	};
	typedef struct code type_code;
	*/
	
	/* 	str_code.count_code = 0; */
	/* 	str_code.global_code[0]='\0'; */

	struct symbol_table{
				char label_id[FULL_ID];
				int type;
				char value_str[FULL_STR];
				int value_int;
				struct symbol_table * next_node;

	};
	typedef struct symbol_table type_symbol_table;
	
	
	
		
		
	type_symbol_table * new_Symbl_table_t(char * label_id,  int type, char * value_str, int value_int);
	void Insert_symbol_table(type_symbol_table ** symbl, char * label_id,  int type, char * value_str, int value_int);
	type_symbol_table *  Search_symbol_table(type_symbol_table * symbl, char * label_id);
	void Print_symbol_table (type_symbol_table * symbl);
	void Create_declaration_variable_asm();
	
	void Set_variable(char * label_id);
	void Read_variable(char *label_id);
	void Write_variable(char * label_id);
	void Expression (char * label_id, int type_term, int value );
	void Generate_string_format(int type_flag);
	//void Generate_string_format(char *label_id);
	int Generate_section_text(int flag);
	void  CreateProcess(char * input);
	void GenCommandStr(char * filename, char *nasm_cmd, char *gcc_cmd);
	void initAssemblyHeader();
	void finishAssembly();
	void saveAssemblyCode(char * filename);
	void yyerror(char *);
	int yylex(void);

#endif /*COMPILER_6_RC2_TYPES_H_*/
