#define SWITCHES_COLUMN_WIDTH	16

typedef struct
{
	int nr;
	char **text;
} help_t;

#define HELP_MAIN_MENU		0
#define HELP_ADD_FILE_OR_CMD	100
#define HELP_LIST_KEYBINDINGS	200
#define HELP_NEGATE_REGEXP	300
#define HELP_SWAP_WIN1		800
#define HELP_SWAP_WIN2		900
#define HELP_DELETE_WINDOW_DELETE_ALL_SUBWIN	1000
#define HELP_ASK_COLORS		1100
#define HELP_COLORS_FIELD_NR	1200
#define HELP_COLORS_FIELD_DELIMITER	1300
#define HELP_REGEXP_USAGE	1400
#define HELP_ADD_WINDOW_MERGE_SUBWIN	1500
#define HELP_ENTER_FILENAME_TO_MONITOR	1600
#define HELP_ENTER_CMD_TO_MONITOR	1700
#define HELP_ADD_WINDOW_REPEAT_INTERVAL	1800
#define HELP_FAILED_TO_START_TAIL	1900
#define HELP_MERGE_ANOTHER_WINDOW	2000
#define HELP_REGEXP_MENU	2100
#define HELP_ENTER_REGEXP	2200
#define HELP_ENTER_CMD		2300
#define HELP_COMPILE_REGEXP_FAILED	2400
#define HELP_SET_BUFFERING		2600
#define HELP_SET_BUFFERING_STORE_WHAT	2700
#define HELP_ENTER_NUMBER_OF_LINES_TO_STORE	2800
#define HELP_WINDOW_CLOSED	2900
#define HELP_WRITE_SCRIPT	3000
#define HELP_STATISTICS		3100
#define HELP_STATISTICS_POPUP	3150
#define HELP_SET_WINDOWSIZES	3200
#define HELP_SET_WINDOW_WIDTH	3300
#define HELP_SET_WINDOW_HEIGHT	3400
#define HELP_ASK_COLORS_SELECT_SCHEME	3500
#define HELP_DELETE_SELECT_WINDOW	3600
#define HELP_DELETE_SELECT_SUBWINDOW	3700
#define HELP_HIDE_WINDOW	3800
#define HELP_ADD_WINDOW_SELECT_MERGE_WINDOW	3900
#define HELP_TOGGLE_COLORS_SELECT_WINDOW	4000
#define HELP_TOGGLE_COLORS_SELECT_SUBWINDOW	4100
#define HELP_ENTER_REGEXP_SELECT_WINDOW	4200
#define HELP_ENTER_STRIPPER_SELECT_WINDOW	4250
#define HELP_ENTER_REGEXP_SELECT_SUBWINDOW	4300
#define HELP_ENTER_STRIPPER_SELECT_SUBWINDOW	4350
#define HELP_SET_BUFFERING_SELECT_WINDOW	4400
#define HELP_SET_WINDOW_HEIGHT_SELECT_WINDOW	4500
#define HELP_TERMINAL_MODE_SELECT_WINDOW	4600
#define HELP_SCROLLBACK_SAVEFILE	4700
#define HELP_SCROLLBACK_NO_MARK	4800
#define HELP_SCROLLBACK_HELP	4900
#define HELP_SCROLLBACK_SAVEFILE_ENTER_FILENAME	5100
#define HELP_SCROLLBACK_SELECT_WINDOW		5200
#define HELP_SCROLLBACK_EDIT_SEARCH_STRING	5300
#define HELP_ADD_FILE_FOLLOW_FILENAME	5500
#define HELP_ADD_FILE_DISPLAY_DIFF	5600
#define HELP_PAUSE_A_WINDOW		5700
#define HELP_ASK_COLORS_SELECT_COLOR	5800
#define HELP_SET_VERTICAL_SPLIT_N_WIN	5900
#define HELP_MANAGE_COLS		6000
#define HELP_WIPE_WINDOW		6100
#define HELP_SELECT_COLORSCHEMES	6200
#define HELP_SET_LINEWRAP		6300
#define HELP_REDIRECT_FAILED		6400
#define HELP_STRIPPER_TYPE		6500
#define HELP_STRIPPER_START_OFFSET	6600
#define HELP_STRIPPER_END_OFFSET	6700
#define HELP_STRIPPER_DELIMITER		6800
#define HELP_STRIPPER_COL_NR		6900
#define HELP_ERROR_WRITE_SCRIPT_CREATE_FILE	7000
#define HELP_COLUMN_WIDTH		7100
#define HELP_N_WIN_PER_COL		7200
#define HELP_SEND_SIGNAL_SELECT_WINDOW	7300
#define HELP_SEND_SIGNAL_WINDOW_SEND_TO_ALL_SUBWIN	7400
#define HELP_SEND_SIGNAL_SELECT_SUBWINDOW	7500
#define HELP_SEND_SIGNAL_FAILED	7600
#define HELP_SELECT_SIGNAL	7700
#define HELP_SCREENDUMP_SELECT_FILE	7800
#define HELP_SCREENDUMP_SELECT_WIN	7900
#define HELP_TRUNCATE_FILE_SELECT_WINDOW	8000
#define HELP_TRUNCATE_FILE_SELECT_SUBWINDOW	8100
#define HELP_TRUNCATE_AREYOUSURE	8200
#define HELP_TRUNCATE_FAILED	8300
#define HELP_TRUNCATE_ONLY_LOGFILES	8400
#define HELP_SELECT_COLOR_AND_ATTRIBUTES	8500
#define HELP_CANNOT_EDIT_COLOR	8600
#define HELP_EDIT_COLOR_EDIT	8700
#define HELP_EDIT_COLOR	8800
#define HELP_EDIT_COLOR_CHANGE_NAME	8900
#define HELP_HIDE_BUT_WINDOW	9000
#define HELP_SEARCH_IN_ALL_WINDOWS	9100
#define HELP_HIGHLIGHT_IN_ALL_WINDOWS	9200
#define HELP_SELECT_CONVERSIONSCHEMES	9300
#define HELP_SELECT_RESTART_WINDOW	9400
#define HELP_SELECT_RESTART_WINDOW_ALL	9500
#define HELP_SELECT_TERMINAL_EMULATION	9600
#define HELP_CLEAR_BUFFER	9700
#define HELP_HISTORY	9800

void show_help(int what_help);
void usage(void);