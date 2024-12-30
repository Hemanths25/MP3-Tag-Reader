
typedef enum{
    e_success,
    e_failure
} Status;


typedef struct _mp3Info{
    char* file_name;
    FILE* mp3_pointer;
    char* edit_name;
    char edit_type;
    char* tag_name;
    int len;
    char new_file_name[20];
    int new_or_not;
    FILE* copy_pointer;
} mp3Info;


Status less_arguments();
void help_menu();
Status validate(mp3Info *MP3INFO);
int conv_little(int num);
Status select_tag_to_edit(mp3Info *MP3INFO);
Status open_mp3_file(mp3Info *MP3INFO);
Status check_ID3(FILE* fptr);
Status check_version(FILE* fptr);
Status skip_header(FILE* fptr);
Status tag_read(mp3Info *MP3INFO);
Status changes_to_new_existing(mp3Info *MP3INFO);
Status open_copy_file(mp3Info *MP3INFO);
Status copy_header(mp3Info *MP3INFO);
int write_size(mp3Info *MP3INFO);
Status write_new_data(mp3Info *MP3INFO);
Status tag_edit(mp3Info *MP3INFO);
Status copy_remaining(mp3Info *MP3INFO);
Status copy_to_src(mp3Info *MP3INFO);
Status view(mp3Info *MP3INFO);
Status edit(mp3Info *MP3INFO);
Status Type_Operation(char* argv,mp3Info *MP3INFO);
Status view(mp3Info *MP3INFO);
Status open_mp3_file(mp3Info *MP3INFO);
Status open_copy_file(mp3Info *MP3INFO);
Status edit(mp3Info *MP3INFO);
