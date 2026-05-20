// *****************************************************************************
// FILE -- /usr/local/sce/ee/lib/crt0.s
// *****************************************************************************

_start();
_exit();
static _root();

// *****************************************************************************
// FILE -- src/dummyprintf.s
// *****************************************************************************

_dummyprintf();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/src/enddemo.c
// *****************************************************************************

void* EndDemoInit(void *parent_p);

Bool EndDemoIsActive();

Bool EndDemoIsStart();

static void enddemo_disp(EndDemoTask *task_p);

static void enddemo_callback_load_end(Uint32 serial_id, void *dst_p, void *void_task_p, Sint32 param2);
static void enddemo_del(EndDemoTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/src/game.c
// *****************************************************************************

void GameAddVarEdit();
void GameDeleteVarEdit();

static void game_draw(GWHWND hwnd);

static void create_window(GameTask *task);

static void cam_light_disp_func();

static void now_loading_set(void *task);
static void now_loading_del();

static Bool is_gameover();

static void sound_stop();

static void voice_entry(GameTask *task, int type);

static void draw_foreground_poly();

static void btask_delay_disp_with_mask(BlockTask *task);
static void btask_delay_disp(BlockTask *task);
static void btask_delay_delete(BlockTask *task, Bool mask_flag);
static void gtask_delay_disp(GameTask *task);
static void gtask_delay_delete(GameTask *task);
static void revenge_init(GameTask *task, GameStatus status);
static void revenge_disp(GameTask *task);
static void gameend_init(GameTask *task);
static void gameend_disp(GameTask *task);
static void gameover_init(GameTask *task);
static void movie_play_req(GameTask *task);
static Bool movie_play_go();
static Bool movie_play_is_end();
static void gameover_disp(GameTask *task);
static void gameclear_init(GameTask *task);

static void gameclear_disp(GameTask *task);

static void sh_init(GameTask *task, int sub_block_no);
static void sh_del(GameTask *task);
static void partition_release(GameTask *task);
static void block_sub_init(BlockTask2 *task);
static void block_sub_disp(BlockTask2 *task);

static void block_subtask_set(BlockTask *parent_task);

static void clp_entry_init(ClpEntryTask *task);
static void clp_entry_disp(ClpEntryTask *task);
static void clp_entry_del(ClpEntryTask *task);

static void* clp_set(GameTask *parent_task);

static void cb_mov(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 sub_block_no, Sint32 sub_sub_no);

static void cb_qa(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 qno);
static void cb_brk(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 brkno);
static void block_init(BlockTask *task, int block_no, int sub_block_no, Bool connected_block);
static Bool press_skip_button();

static void block_exec(BlockTask *task);

static void block_disp(BlockTask *task);

static void block_del(BlockTask *task);

static void game_set_config();

static void game_init(GameTask *task, int block_no, int sub_block_no, Bool connected_block);

static void game_exec(GameTask *task);
static void game_disp(GameTask *task);

static void game_del(GameTask *task);

static void check_player_costume(GameTask *task, int block_no);

void* GameInit(void *parent_task, int block_no, int sub_block_no);

void GameSetBlockData(GameBlockData *data);
static void load_init(LoadTask *task, int data_type, char *fname0, char *fname1, char *fname2);

static void load_disp(LoadTask *task);

static void load_disp_wait(LoadTask *task);

static void load_del(LoadTask *task);

static void* game_load_set(int data_type, char *fname0, char *fname1, char *fname2);

void* GameLoadReq_Mlt(char *fname);
void* GameLoadReq_Sh(char *fname);
void* GameLoadReq_Caption(char *fname);
void* GameLoadReq_CamNeo(char *fname);
void* GameLoadReq_Eff(char *fname);
void* GameLoadReq_Map(char **fname_tbl);

void* GameLoadReq_Capstm(char **fname_tbl, GameFileType type);

static void load_partition_init(LoadPartitionTask *task, GamePartitionInfo *info_tbl, int nb_tbl, int start_pno);
static void load_partition_disp(LoadPartitionTask *task);
static void load_partition_del(LoadPartitionTask *task);

void* GameLoadReq_Partition(GamePartitionInfo *info_tbl, int nb_tbl, int start_pno);

GameStatus GameGetStatus();
int GameGetBlockNo();
int GameGetSubBlockNo();
Float GameGetSubBlockBeat();
Sint32 GameGetSubBlockMovBeatNum(int sub_block_no);
void GameStartMoviePrep();
void GameEndMoviePrep();
void* GameGetRoundTaskPtr();
void* GameGetBlockTaskPtr();
void GameDelete();
void GameSetGameOverReq();
void GameSetGameOverReqEx(Float beat);

void GameSetContinueReq();

void GameSetRestartReq();

void GameSetGameEndReq();
void GameSetMaxBlock(int max_block);
static void game_load_entry(BlockTask *task, GameLoad *load_task);

static void game_load_delete(BlockTask *task, GameLoad *load_task);

GameLoad* GameLoadEntry();

void GameLoadDelete(GameLoad *task);
GameLoadStatus GameLoadGetStatus(GameLoad *task);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/src/sequence.c
// *****************************************************************************

static void seq_add_var_edit();
static void seq_del_var_edit();
void SeqResetGalaxy(SeqGalaxyType type);
Bool SeqIsGalaxy(SeqGalaxyType type);

void SeqCheckGalaxyCommand();

static void abort_by_softreset();
void* SeqStartModule(void *task, int block_no, int sub_block_no);
static Bool check_debug_mode();
static void tl_reinit(SeqTitleLoopTask *task);
static void tl_init(SeqTitleLoopTask *task, int mode);

static void check_child_for_next_round(SeqTitleLoopTask *task);

static void check_child(SeqTitleLoopTask *task, int next_mode);

static void title_module_load_req(SeqTitleLoopTask *task);

static int tl_func_logo_init(SeqTitleLoopTask *task);
static int tl_func_logo_loop(SeqTitleLoopTask *task);
static int tl_func_movie_init(SeqTitleLoopTask *task);
static int tl_func_movie_loop(SeqTitleLoopTask *task);
static int tl_func_title_init(SeqTitleLoopTask *task);
static int tl_func_title_wait(SeqTitleLoopTask *task);
static int tl_func_title_loop(SeqTitleLoopTask *task);
static int tl_func_load_init(SeqTitleLoopTask *task);
static int tl_func_load_loop(SeqTitleLoopTask *task);

static int tl_func_makuma_init(SeqTitleLoopTask *task);

static int tl_func_makuma_loop(SeqTitleLoopTask *task);
static int tl_func_memcheck_init(SeqTitleLoopTask *task);
static int tl_func_memcheck_loop(SeqTitleLoopTask *task);

static int tl_func_game_init(SeqTitleLoopTask *task);

static int tl_func_game_wait(SeqTitleLoopTask *task);
static int tl_func_game_loop(SeqTitleLoopTask *task);
static int tl_func_save_init(SeqTitleLoopTask *task);
static int tl_func_save_loop(SeqTitleLoopTask *task);
static int get_round_no(int round_no);

static int tl_func_cosroom_init(SeqTitleLoopTask *task);

static int tl_func_cosroom_loop(SeqTitleLoopTask *task);
static int tl_func_logo2_loop(SeqTitleLoopTask *task);
static void tl_delete_delay_disp(SeqTitleLoopTask *task);
static void tl_disp_wait_enddemo_end(SeqTitleLoopTask *task);
static void tl_disp_wait_enddemo_ready(SeqTitleLoopTask *task);
static void tl_disp(SeqTitleLoopTask *task);
static void tl_del(SeqTitleLoopTask *task);

static void* seq_title_loop_set(void *parent, int mode);

static void seq_init(SeqTask *task, void *parent);
static void seq_disp(SeqTask *task);

static void seq_disp_idle(SeqTask *task);

static void seq_del(SeqTask *task);

void* SeqSet(void *parent);

void SeqSetMessage(SeqMessage message);
SeqMessage SeqGetMessage();
Bool SeqIsDemo();
Float SeqGetDemoBeat();
void SeqSetGameMode(Bool flag);
void SeqSetParam(int p0, int p1, int p2);
void SeqGetParam(int *p0, int *p1, int *p2);
ModuleMenu SeqGetModuleNo();
Bool SeqIsPlay2();
SeqGamePlayMode SeqGetGamePlayMode();
void SeqSetGamePlayMode(SeqGamePlayMode mode);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/audirate.c
// *****************************************************************************

static void audi_draw(GWHWND hwnd);
static void create_window(AudiTask *task);

static void swap_buf(MarkBuf *buf0, MarkBuf *buf1);

static int mark_ctrl_entry(AudiTask *task, int cmd, int ticks);

static void make_disp_rate(AudiTask *task, int num_change);
static void check_heart_type(AudiTask *task);
static void set_heart_num(AudiTask *task);

static void mark_ctrl_exec(AudiTask *task);

static void chkq_exec(ChkQTask *task);
static void chkq_del_battle(ChkQTask *task);
static void chkq_del_boss(ChkQTask *task);

static void check_question_set(AudiTask *parent_task, Sint32 qno, Sint32 end_ticks);

static void check_heart_bonus(AudiTask *task);

static void cb_mov(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 sub_block_no, Sint32 sub_sub_no);

static void cb_btl(dgShSpy *handle, Sint32 start_beat, Sint32 sub_block_no);

static void cb_qa(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 qno);

static void cb_brk(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 brkno);

static void audi_init(AudiTask *task, AudiRateData *data);

static void indicate_init(AudiTask *task);

static void audi_exec(AudiTask *task);
static void audi_disp(AudiTask *task);
static void audi_disp_prep(AudiTask *task);
static void audi_del(AudiTask *task);

void* AudiRateSet(void *parent_task, AudiRateData *data);

void AudiRateNewRateReq();
void AudiRateHideRateReq(Bool flag);
Bool AudiRateIsMarkOn();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/bupflag.c
// *****************************************************************************

static dgBupDrive get_drive();

static void bup_flag_set_option_sound_mode_force(FlagData *data, Sint8 mode);

static void bup_flag_set_option_sound_mode(FlagData *data, Sint8 mode);
static void bup_flag_set_option_vib_mode(FlagData *data, Sint8 mode);
static void bup_flag_set_option_kashi_mode(FlagData *data, Sint8 mode);
static void bup_flag_set_option_dialogue_mode(FlagData *data, Sint8 mode);
static void bup_flag_set_option_voice_volume(FlagData *data, Sint8 mode);
static void bup_flag_set_option_music_volume(FlagData *data, Sint8 mode);

static void bup_flag_init_option_key_config(FlagData *data);

static void bup_flag_set_option_key_config(FlagData *data, Sint8 key, Sint8 port, Sint8 val);
static void bup_flag_init_option_all(FlagData *data);
void BupFlagSetOptionSoundMode(Sint8 mode);
void BupFlagSetOptionVibMode(Sint8 mode);
void BupFlagSetOptionKashiMode(Sint8 mode);
void BupFlagSetOptionDialogueMode(Sint8 mode);
void BupFlagSetOptionVoiceVolume(Sint8 mode);
void BupFlagSetOptionMusicVolume(Sint8 mode);
void BupFlagSetOptionKeyConfig(Sint8 key, Sint8 port, Sint8 val);
void BupFlagInitOption();
Sint8 BupFlagGetOptionDefaultSoundMode();
Sint8 BupFlagGetOptionDefaultVibMode();
Sint8 BupFlagGetOptionDefaultKashiMode();
Sint8 BupFlagGetOptionDefaultDialogueMode();
Sint8 BupFlagGetOptionDefaultVoiceVolume();
Sint8 BupFlagGetOptionDefaultMusicVolume();
Sint8 BupFlagGetOptionSoundMode();
Sint8 BupFlagGetOptionVibMode();
Sint8 BupFlagGetOptionKashiMode();
Sint8 BupFlagGetOptionDialogueMode();
Sint8 BupFlagGetOptionVoiceVolume();
Sint8 BupFlagGetOptionMusicVolume();
Sint8 BupFlagGetOptionKeyConfig(Sint8 key, Sint8 port);

void BupFlagFlushOptionKeyConfig(SeqGamePlayMode mode);

Uint32 BupFlagGetPlayTimeSec();
static int virtual_round(int round_no);
static int virtual_to_real_round(int round_no);
static Uint32 get_count(Uint32 count);
void BupFlagAddRoundPlayCount(int round_no, Uint32 count);
void BupFlagAddRoundClearNum(int round_no);
void BupFlagSetRoundMaxAudiRate(int round_no, Sint16 rate);
Sint16 BupFlagGetRoundMaxAudiRate(int round_no);
int BupFlagGetRoundClearNum(int round_no);

Uint32 BupFlagGetRoundPlayTimeSec(int round_no);

static void bup_flag_entry_catalog(FlagData *data, int no);
static void bup_flag_entry_costume(FlagData *data, int no);
static void bup_flag_entry_costume_item(FlagData *data, int no);
void BupFlagEntryCatalog(int no);
void BupFlagEntryCostume(int no);
void BupFlagEntryCostumeItem(int no);
Bool BupFlagIsEntryCatalog(int no);
Bool BupFlagIsEntryCostume(int no);
Bool BupFlagIsEntryCostumeItem(int no);

int BupFlagGetCostumeNum();

void* BupFlagGetTextAdvPtr();
Uint8* BupFlagGetVoiceHistoryPtr(int round_no);
void BupFlagEntrySecret(int round_no, int block_no, int secret_no);
Bool BupFlagIsEntrySecret(int round_no, int block_no, int secret_no);
static void bup_flag_init_other(FlagData *data);

Bool BupFlagIsExistPlayData_Ch5();

Bool BupFlagIsExistPlayData_Kpro();

void BupFlagInit();

void BupFlagReset();

void* BupFlagSetWarning_NoController(void *parent_task);

static void warn_init(WarnTask *task, dgBupDrive drive, int no, Sint8 *err);

static void warn_disp(WarnTask *task);

static void warn_del(WarnTask *task);

static void* warn_set_task(void *parent_task, dgBupDrive drive, int type, Sint8 *err);

void BupFlagSetCaptionHeader(dgCaptionHeader *h);
dgCaptionHeader* BupFlagGetCaptionHeader();

static void bup_draw(GWHWND hwnd);

static void create_window(BupDebugTask *task);

static void bup_disp(BupDebugTask *task);

void* BupFlagDebugSet(void *parent);

void* BupFlagDebugCheckMemory(void *parent_task, Uint32 prev, Uint32 current);

static void softreset_en_message(Bool flag);
static void softreset_en_push(BupTask *task, Bool flag);

static void softreset_en_pop(BupTask *task);

BupMcError bup_check_memcard(dgBupDrive drive);

static void bup_check_child(BupTask *task);
static void common_core_init(BupTask *task, BupTask *parent_task, BupProcType child_type, int warning_no, Bool softreset_enable);
static void common_core_del(BupTask *task);
static void cb_yes(void *ptr);
static void cb_no(void *ptr);

static void warning_core_init(BupTask *task);

static void warning_core_disp(BupTask *task);
static void warning_core_del(BupTask *task);

static BupTask* warning_core_set(BupTask *parent_task, int warning_no);

static void waitend_init(BupTask *task);
static void waitend_disp(BupTask *task);
static void waitend_delay_disp(BupTask *task);
static void waitend_del(BupTask *task);

static BupTask* waitend_set(BupTask *parent_task, int warning_no);

static void load_core_init(BupTask *task);
static void load_core_disp_waitend(BupTask *task);

static void load_core_disp(BupTask *task);

static void load_core_del(BupTask *task);

static BupTask* load_core_set(BupTask *parent_task);

static void save_core_init(BupTask *task);
static void save_core_disp(BupTask *task);
static void save_core_del(BupTask *task);

static BupTask* save_core_set(BupTask *parent_task);

static int warning_recover(BupTask *task);

static void format_core_init(BupTask *task);
static void format_core_disp(BupTask *task);
static void format_core_del(BupTask *task);

static BupTask* format_core_set(BupTask *parent_task);

static void load_reinit(BupTask *task);

static void load_disp(BupTask *task);
static void load_del(BupTask *task);

void* BupFlagLoadReq(void *parent_task, int vm_check_only_flag);

void* BupFlagLoadOnlyReq(void *parent_task);

static void save_reinit(BupTask *task);

static void save_disp(BupTask *task);
static void save_del(BupTask *task);

void* BupFlagSaveReq(void *parent_task);

static void* BupFlagSaveReqOnlyLoad(void *parent_task);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/camctrl.c
// *****************************************************************************

static int cam_stop_entry(CamCtrlTask *task, Sint32 start_frame);

static int cam_entry(CamCtrlTask *task, CamVar no, Sint32 start_frame, Sint32 bias_frame);

static void cam_entry_exec_sub(CamCtrlTask *task, CamVar *var_tbl, Sint32 start_frame);

static void cam_entry_exec(CamCtrlTask *task);

static void cam_res_entry(CamCtrlTask *task, CamCond *data, Sint32 frame, Sint32 biasframe);

static void cam_mov_entry(CamCtrlTask *task, CamData_Mov *mov_data, Sint32 start_beat);

static int is_key_only_dir(int qno);

static int is_key_only_ab(int qno);

static int is_exist_combo(int qno);

static int is_exist_shoot(int qno);

static void cam_qa_entry(CamCtrlTask *task, CamCond *data, Sint32 start_beat, Sint32 nb_change_beat, Sint32 nb_beat, int qno);

static void cam_brk_entry(CamCtrlTask *task, CamCond *data, Sint32 start_beat, Sint32 nb_beat);

static CamData_Mov* cam_get_mov_data(CamCtrlTask *task);

static CamData_Step* cam_get_step_data(CamCtrlTask *task);

static void cb_mov(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 sub_block_no, Sint32 sub_sub_no);

static void cb_btl(dgShSpy *handle, Sint32 start_beat, Sint32 sub_block_no);

static void cb_qa(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 qno);

static void cb_brk(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 brkno);

static void cb_del(dgShSpy *handle);

static void cam_draw(GWHWND hwnd);

static void create_window(CamCtrlTask *task);
static void cam_init(CamCtrlTask *task, CamData *data);
static void cam_exec(CamCtrlTask *task);
static void cam_disp(CamCtrlTask *task);
static void cam_del(CamCtrlTask *task);

void* CamCtrlSet(void *parent_task, CamData *data);

void CamCtrlSetBreakNo_Force(int brkno);

Bool CamCtrlIsReverseMotionLR(dgMathMatrix *mat);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/caption.c
// *****************************************************************************

static void init_kj(Caption *caption);
static void entry_str(Caption *caption);
static void release_str(Caption *caption);

static void make_poly(Caption *caption);

static void make_disp_x(Caption *caption);

Caption* CaptionCreate();

void CaptionDestroy(Caption *caption);
void CaptionSetScaleSize(Caption *caption, Float scale_x, Float scale_y);
void CaptionSetColor(Caption *caption, Uint32 color);
void CaptionSetGapSize(Caption *caption, int size_x, int size_y);
void CaptionSetFrameSize(Caption *caption, int size);
void CaptionSetShadeSize(Caption *caption, int size);
void CaptionSetBoldSize(Caption *caption, int size);
void CaptionSetCoord(Caption *caption, Float x, Float y, Float u, Float v);
void CaptionSetOoz(Caption *caption, Float ooz);
void CaptionSetStrSide(Caption *caption, CaptionSide side);
void CaptionSetStr(Caption *caption, char **tbl, int line_num);
void CaptionSetPolygonGapSize(Caption *caption, Float x, Float y);
void CaptionSetPolygonColor(Caption *caption, Uint32 color);
void CaptionCalcSize(Caption *caption);

void CaptionDraw(Caption *caption);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/captionctrl.c
// *****************************************************************************

static void caption_sub_init(CaptionSubTask *task, CaptionDataSub *data, Sint32 start_beat);

static void caption_sub_exec(CaptionSubTask *task);

static void caption_sub_disp(CaptionSubTask *task);
static void caption_sub_del(CaptionSubTask *task);

static void* caption_entry(CaptionCtrlTask *parent_task, CaptionDataSub *data, Sint32 start_beat);

static void caption_mov_entry(CaptionCtrlTask *task, Sint32 start_beat);
static void caption_qa_entry(CaptionCtrlTask *task, Sint32 start_beat, Sint32 qno);
static void caption_brk_entry(CaptionCtrlTask *task, Sint32 start_beat, Sint32 brkno);

static void cb_mov(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 sub_block_no, Sint32 sub_sub_no);

static void cb_btl(dgShSpy *handle, Sint32 start_beat, Sint32 sub_block_no);

static void cb_qa(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 qno);

static void cb_brk(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 brkno);

static void str_entry_sub(CaptionDataSub *data);

static void str_entry_all(Sint32 num, CaptionData *data);

static void str_release_sub(CaptionDataSub *data);

static void str_release_all(Sint32 num, CaptionData *data);
static void caption_init(CaptionCtrlTask *task, CaptionBlockData *data);
static void caption_exec(CaptionCtrlTask *task);
static void caption_disp(CaptionCtrlTask *task);
static void caption_del(CaptionCtrlTask *task);

void* CaptionCtrlSet(void *parent_task, CaptionBlockData *data);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/cds.c
// *****************************************************************************

CdsGridHandle* CdsCreateGridHandle(Sint32 grid_x, Sint32 grid_z, float scale_x, float scale_z);

void CdsDstroyGridHandle(CdsGridHandle *grid_h);
void CdsSetGridCenterPosition(CdsGridHandle *grid_h, dgMathVector3 *pos_p, dgMathAngle3 *ang_p);
void CdsSetGridCenterMatrix(CdsGridHandle *grid_h, dgMathMatrix *mat_p);

void CdsSetCenterPosition(dgMathVector3 *pos_p, dgMathAngle3 *ang_p);

void CdsSetCenterMatrix(dgMathVector3 *pos_p, dgMathMatrix *mat_p);

void CdsGetGridPosition(CdsGridHandle *grid_h, Sint8 index_x, Sint8 index_z, dgMathVector3 *pos_p, dgMathAngle3 *ang_p);

Bool CdsIsCutTime();

void CdsGetGridMatrix(CdsGridHandle *grid_h, Sint8 index_x, Sint8 index_z, dgMathMatrix *mat_p);

void* CdsCreateGridEditWindow(void *parent_p, CdsGridHandle *grid_h);

void* CdsInitManager(void *parent_p, CdsBreakTableData *break_data_p);

dgCharMotionData* CdsGetBreakMotion(Sint32 *index_p);

dgCharMotionData* CdsGetBreakMotionEnemy(Sint32 *index_p);

dgCharMotionData* CdsGetRegistedBreakMotion();

void CdsSetMtpHandle(MtpHandle *mtp_h);

void CdsSetBreakCallbackFunc(dgCharMotionData* (*callback_func_p)());
void CdsSetCdsLevelForce(dgShCdsLevel level);
void CdsResetCdsLevelForce();
Bool CdsIsControlledByAnotherModule();
Bool CdsIsActive();
Bool CdsIsReady();

Bool CdsGetPosition(dgMathVector3 *pos_p, dgMathAngle3 *ang_p, Sint32 index);

Bool CdsGetMatrix(dgMathMatrix *mat_p, Sint32 index);

void CdsGetCdsData(CdsMtpOption **option_pp, char **filename_pp);

Sint32 CdsGetMaxMember();

void CdsSetOption(CdsMtpOption *option_p);

Bool CdsIsPlayCds();

static void cds_man_exec(CdsManTask *task_p);

static void cds_man_disp(CdsManTask *task_p);

static void cds_load_mtp(CdsManTask *task_p);

static void cds_set_next_breakdata(CdsManTask *task_p);

static void cds_callback_brk(dgShSpy *spy_h, Sint32 start_beat, Sint32 nb_beat, Sint32 brk_no);

static void cds_set_timing(CdsManTask *parent_p, void (*func_p)(), float set_beat);

static void timing_exec(TimingTask *task_p);

static void gridedit_update_member(GridEditTask *task_p);

static void gridedit_disp(GridEditTask *task_p);

static void gridedit_disp_gindows(GWHWND wnd_h);

static void cds_man_del(CdsManTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/char_common.c
// *****************************************************************************

void* CharCommonInitPositionEditor();

CharCommonBasePositionData2* CharCommonEditRegistData(void *block_task_p, CharCommonBasePositionData2 *posdata_p, Sint32 round, Sint32 block);

static void* editor_malloc(size_t size);

static void editor_free(void *ptr);

static Sint32 count_posdata(CharCommonBasePositionData2 *posdata_p);

static Sint32 count_pl_posdata(PlayerBasePos *posdata_p);

static PlayerBasePos* copy_base_pos(PlayerBasePos *src_p);

static void copy_posdata(CharCommonBasePositionData2 *dst_p, CharCommonBasePositionData2 *src_p, Sint32 num);

static void* copy_plpos(void *dst_p, PlayerBasePos *pl_pos_p, Sint32 size);

static void edit_disp_cross(EditTask *task_p);

static void edit_round_move_cur_lr_stepno(EditTask *task_p, Sint32 x_add);

static void edit_round_move_cur_lr(EditTask *task_p);

static void edit_on_delkey(EditTask *task_p);

static void edit_on_spacekey(EditTask *task_p);

static void edit_move_with_shift(EditTask *task_p);

static void edit_disp(EditTask *task_p);

static void edit_round_del(EditRoundTask *task_p);
static void edit_del(PosEditTask *task_p);
static void save_posdata_disp(PosEditSaveTask *task_p);
static void save_posdata_del(PosEditSaveTask *task_p);
static void edit_round_create_window(EditTask *task_p);

static void varedit_callback_free(Bool flag);

static void varedit_callback_load(Bool flag);

static void varedit_callback_save(Bool flag);

static void edit_disp_sub(EditTask *task_p, PosEditCursor cur);

static void edit_disp_window(GWHWND wnd_h);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/char_common_inline.c
// *****************************************************************************

void* CharCommonEffectSet(void *parent_p, dgMathVector3 *pos_p, Sint32 type);

void* CharCommonEffectSetWithScale(void *parent_p, dgMathVector3 *pos_p, Sint32 type, float scale);

void* CharCommonEffectSet2(void *parent_p, dgMathVector3 *pos_p, Sint32 type, float beat);

void* CharCommonEffectSetFollow(void *parent_p, dgMathVector3 *pos_p, Sint32 type);

void CharCommonSetHideByPlayerSide(dgCharCtrl *char_ctrl_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/char_effect.c
// *****************************************************************************

CharEffHandle* CharEffectCreateHandle(void *parent_p, dgMathVector3 *foot_pos_p);

void CharEffectDestroyHandle(CharEffHandle *eff_h);
float CharEffectGetEffectBeat(CharEffectType eff_type);

void CharEffectSetEffect(CharEffHandle *eff_h, CharEffectType eff_type);

Bool CharEffectDrawWithEffect(CharEffHandle *eff_h, dgCharCtrl *char_ctrl_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/char_man.c
// *****************************************************************************

void* CharManInit(void *parent_p, CharRoundData *round_data_p);

void* CharManGetTaskPtr();
Bool CharManIsReady();
Bool CharManIsReadEnable();
Bool CharManIsSeqNext();
Bool CharManIsMotionNext();
Bool CharManGetBossMode();
int CharManGetShId();
float CharManGetLeftCurrentSequence();
float CharManGetSectionBeat();

dgCharMotionData* CharManGetMotionData(Sint32 *index_p);

dgCharMotionData* CharManGetDefaultMotionData();

CdsBreakLevel CharManGetSuccessBreakLevel();

CdsBreakLevel CharManGetBreakLevel();
CharManMoveMode CharManGetMoveMode();
Bool CharManIsWinBattle();
CharManBattleMode CharManGetBattleMode();
Sint32 CharManGetCombo();
void CharManSetBossMode(Bool boss_mode_flag);
void CharManSetCdsLvlTbl(CdsLvlTbl *tbl_p);

void CharManSetMoveMotion(Sint32 loop_iid, Sint32 finish_iid);

MtpHandle* CharManSetUhyahooMotion(Sint32 iid);

MtpHandle* CharManSetUhyahooMotionForce(Sint32 iid);

MtpHandle* CharManSetBattleMotion(Sint32 iid);

MtpHandle* CharManSetBattleMotionRequest(Sint32 iid);

void CharManSetBattleMtpHandle(MtpHandle *battle_mtp_h);

void CharManSetBattle(CharManBattleData *data_p);

void CharManSetDefaultLevelTable(CharManDefaultLevel type);
void CharManSetMoveNextBeat(float beat);
void CharManSetDebugMember(CharDebugMember **member_pp);
void CharManSetCommand();
void CharManDeleteCommand();
static void charman_disp_wait_readen(CharManTask *task_p);

static void charman_disp_init_wait(CharManTask *task_p);

static void charmna_set_battledata(CharManTask *task_p);

static void charman_exec(CharManTask *task_p);

static void charman_exec_normal(CharManTask *task_p);

static void charman_exec_defined_switch_move(CharManTask *task_p);

static void charman_exec_undefined_switch_move(CharManTask *task_p);

static dgCharMotionData* charman_get_current_motdata_p(CharManTask *task_p);

static MtpHandle* charman_get_current_motdata_p_for_mov(CharManTask *task_p);

static void charman_free_all_move_mtp(CharManTask *task_p);

static void charman_disp(CharManTask *task_p);

static void charman_del(CharManTask *task_p);

static void charman_set_finish_start_set_timing_disp(CharManTimingTask *task_p);

static void charman_set_finish_start(CharManTask *task_p);

static Sint32 charman_get_new_seqid(CharManTask *task_p, Sint32 cur_id);

static Bool charman_exec_set_seq_param(CharManTask *task_p);

static Bool charman_exec_next_seq_mov(CharManTask *task_p);

static Bool charman_exec_next_seq_btl(CharManTask *task_p);

static Bool charman_exec_next_seq_qa(CharManTask *task_p);

static Bool charman_exec_next_seq_brk(CharManTask *task_p);

static void charman_exec_next_seq_set_motion(CharManTask *task_p);

static void charman_exec_next_seq(CharManTask *task_p);

static void charman_set_debug_member(CharManTask *task_p);

static void charman_print_load_error(MtpHandle *mtp_h);

static int com_breaklevel(int argc, char **argv);

static int com_membernum(int argc, char **argv);

static int com_danceman(int argc, char **argv);

static int com_gakkibito(int argc, char **argv);

static int com_saveform(int argc, char **argv);

static int com_loadform(int argc, char **argv);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/clipcharacter.c
// *****************************************************************************

void* ClpCharSet(void *p, ClpDBCharPtr charptr);

void ClpCharResetMode(void *task);

static void _ClpCharAutoSLT(ClpCharTaskPtr t);

static void _clpchar_exec(ClpCharTaskPtr t);
static void _clpchar_disp(ClpCharTaskPtr t);

static void _clpchar_del(ClpCharTaskPtr t);

void ClpCharDelete(void *task, dgObjCtrl *oc);

static void _ClpCharEyeExec(ClpCharTaskPtr t);

static void _ClpCharDrawEye(ClpCharTaskPtr t);

static Bool _ClpCharCheckPadNotInput(ClpCharTaskPtr t);

Bool ClpCharCheckSleep(void *task);

void ClpCharDisableSleep(void *task);

void ClpCharEnableSleep(void *task);

static Bool _ClpCharCheckEyeForceCloseStat(ClpCharTaskPtr t);

Bool ClpCharCheckWink(void *task);

void ClpCharDisableWink(void *task);

void ClpCharEnableWink(void *task);

void ClpCharOnEyeForceClose(void *task, Bool justnow);

void ClpCharOffEyeForceClose(void *task, Bool justnow);

static void _ClpCharSetWinkTime(ClpCharTaskPtr t, Float time);
static void _ClpCharSetInputTime(ClpCharTaskPtr t, Float time, Float rate);

Bool ClpCharPlayWink(void *task, Sint32 winktype);

Bool ClpCharStopWink(void *task);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/clipdatabase.c
// *****************************************************************************

void* ClpDBInit(void *p);

static void _clpdb_exec(ClpDBTaskPtr t);
static void _clpdb_disp(ClpDBTaskPtr t);
static void _clpdb_del(ClpDBTaskPtr t);

static void _ClpDBExecLoad();

Bool ClpDBCheckLoadEndLp1All();

Bool ClpDBCheckLoadEndLp1(Uint32 serial);

static void _ClpDBAbortLpr(ClpDBTaskPtr t);

void ClpDBAbort();

static void _ClpDBFinish(ClpDBTaskPtr t);

Uint32 ClpDBSearchSerialCharnoPidIid(dgCharNo charno, Sint32 pid, Sint32 iid);

ClipLp1Ptr ClpDBSearchLp1CharnoPidIid(dgCharNo charno, Sint32 pid, Sint32 iid);

void ClpDBClearLipInfo(ClpDBInfoPtr info);

Sint32 ClpDBMakeLipInfoPidIid(ClpDBInfoPtr info, Sint32 pid, Sint32 iid);

void ClpDBFreeLp1Serial(Uint32 serial);

void ClpDBFreeLp1(ClipLp1Ptr p);

ClipLp1Ptr ClpDBGetLp1(Uint32 serial);

Sint32 ClpDBIsLp1(ClipLp1Ptr p);

Uint32 ClpDBEntryLp1(ClipLp1Ptr p, Sint32 blockno);

Uint32 ClpDBLoadIRLp1(char *fname, Sint32 blockno);

Uint32 ClpDBLoadFRLp1(char *fname, Sint32 blockno);

static ClpDBDataPtr _ClpDBGetListPtr();

static Sint32 _ClpDBGetListMax();

static ClpDBDataPtr _ClpDBGetListMaster();

static void _ClpDBSetListMaster(ClpDBDataPtr lst);
static Bool _ClpDBIsFreeStatList(Sint32 stat);
static void _ClpDBSetBusyStatList(Sint32 *stat);

static ClpDBDataPtr _ClpDBGetFreeList();

static ClpDBDataPtr _ClpDBSearchListLast();

static void _ClpDBAddListLast(ClpDBDataPtr lst);

static ClpDBDataPtr _ClpDBSearchListSerial(Uint32 serial);

static void _ClpDBDeleteList(ClpDBDataPtr lst);

ClpDBDataPtr ClpDBGetListPtrFromOrder(Sint32 no);

Sint32 ClpDBGetListEntryNum();

static Uint32 _ClpDBMakeListSerialID();

static void _ClpDBClearListOne(ClpDBDataPtr p);

static ClpDBDataPtr _ClpDBEntryList(Uint32 *serial);

Sint32 ClpDBEntryLpr(ClipLprPtr lpr, char *fname, Sint32 blockno);

static Sint32 _ClpDBLoadLprCore(ClipLprPtr lpr, char *fname, Sint32 blockno);

static void _ClpDBLoadEndCallbackLpr(Uint32 fid, void *dst, void *u_ptr, Sint32 u_idx);

Bool ClpDBCheckLoadEndLpr();

Bool ClpDBCheckLoadEndLipAll();

Bool ClpDBLoadIRLpr(char *fname, Sint32 blockno);

Sint32 ClpDBLoadFRLpr(char *fname, Sint32 blockno);

Sint32 ClpDBFreeLp1Block(Sint32 blockno);

static ClpDBCharPtr _ClpDBSearchCharPtr(dgCharNo charno);

static ClpDBCharPtr _ClpDBSearchActiveChar(dgCharNo charno);

void* ClpDBSearchActiveCharTaskPtr(dgCharNo charno);

static void _ClpDBClearCharAll(ClpDBTaskPtr t);

Bool ClpDBCheckExist(dgCharNo charno);
Bool ClpDBCheckActive(dgCharNo charno);

ClpDBCharPtr ClpDBGetCharPtrFromIndex(Sint32 no);

Sint32 ClpDBGetCharEntryNum();

static ClpDBCharPtr _ClpDBSearchFreeChar();

Bool ClpDBFirstEntryCharFR(dgCharNo charno, char *normal_motion, char *hard_motion, char *soft_motion, char *eye_motion);

Bool ClpDBEntryCharFRForDebug(dgCharNo charno, char *normal_motion, char *hard_motion, char *soft_motion, char *eye_motion);

Bool ClpDBFirstEntryCharFromMemory(dgCharNo charno, void *normal_motion, void *hard_motion, void *soft_motion, void *eye_motion);

Bool ClpDBCheckLoadEndCharMotionAll();

Bool ClpDBCheckLoadEndCharMotion(dgCharNo charno);

static Bool _ClpDBCheckLoadEndCharMotionCore(ClpDBCharPtr charptr);

Bool ClpDBFirstEntryCharIR(dgCharNo charno, char *normal_motion, char *hard_motion, char *soft_motion, char *eye_motion);

Bool ClpDBFreeChar(dgCharNo charno);

Bool ClpDBFirstEntryCharReference(dgCharNo charno, dgCharNo ref_charno);

static dgCharNo _ClpDBGetFakeCharNo();

dgCharNo ClpDBFirstEntryCharFakeReference(dgCharNo ref_charno);

void ClpDBActiveCharForce(void *p, dgCharNo charno, NJS_CNK_OBJECT *obj, dgObjCtrl *oc, dgCdbHandle cdb);

static dgShapeMotion* _ClpDbGetLipMotDef(ClpDBCharPtr charptr);

Bool ClpDBChangeModelType(dgCharNo charno, Sint32 change_type, dgObjCtrl *oc);

Bool ClpDBActiveCharEx(void *p, dgCharNo charno, dgObjCtrl *oc, Sint32 ref_modeltype);

Bool ClpDBSleepChar(dgCharNo charno, dgObjCtrl *oc);

Bool ClpDBReleasePose(dgCharNo charno, dgObjCtrl *oc);

Float ClpDBGetFrame(dgCharNo charno, ClipPat pat);

dgShapeMotion* ClpDBGetLipMotion(dgCharNo charno, Sint32 type);

dgShapeMotion* ClpDBGetEyeMotion(dgCharNo charno);

dgShapePose* ClpDBGetPose(dgCharNo charno, Sint32 type);

ClpDBCharPtr ClpDBGetActiveCharTask(dgCharNo charno);

static void _ClpDBFinishChar(ClpDBTaskPtr t);

static Bool _ClpDBFreeCharPtr(ClpDBCharPtr charptr);

void* ClpDBGetPlyPtr(dgCharNo charno);

void ClpDBSetCharPlyPtr(dgCharNo charno, void *task);

Sint32 ClpDBSwapCharNoLp1(Sint32 dstno, Sint32 srcno);

Sint32 ClpDBReturnCharNoLp1(Sint32 charno);

Sint32 ClpDBReturnCharNoLp1All();

Bool ClpDBMakeRefInfo(ClpDBRefInfoPtr info, dgCharNo charno);

Bool ClpDBOnPausePoseCalc(dgCharNo charno);

Bool ClpDBOffPausePoseCalc(dgCharNo charno);

Bool ClpDBCheckPausePoseCalc(dgCharNo charno);

Bool ClpDBIsPlayerUlala();

Bool ClpDBIsUlala(dgCharNo charno);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/clipdeb.c
// *****************************************************************************

void* ClpDebInit(void *p);

static void _clpdeb_exec(ClpDebTaskPtr t);
static void _clpdeb_disp(ClpDebTaskPtr t);
static void _clpdeb_del(ClpDebTaskPtr t);

static char* _ClpDebGet_CLPPLY_STAT(Sint32 i);

static char* _ClpDebGet_STM(Sint32 i);

static char* _ClpDebGet_LIPPAT(Sint32 i, ClipLp1Ptr lp1);

static char* _ClpDebGet_FADESTAT(Sint32 i);

static void _ClpDebWin_Ply(ClpDebInfoPtr w, ClpDebTaskPtr t);

static void _ClpDebWin_Char(ClpDebInfoPtr w, ClpDebTaskPtr t);

static void _ClpDebWin_Sub(ClpDebInfoPtr w, ClpDebTaskPtr t);

static void _ClpDebWin_LP1(ClpDebInfoPtr w, ClpDebTaskPtr t);

static void _ClpDebInputControl(ClpDebTaskPtr t);

static void _ClpDebOnOff(ClpDebTaskPtr t);

static void _ClpDebControlSubWin(ClpDebInfoPtr w);

static void _ClpDebControlMainWin(ClpDebInfoPtr w);

static void _ClpDebReleaseAll(ClpDebTaskPtr t);
static void _ClpDebDelete(ClpDebTaskPtr t, ClpDebInfoPtr wininfo);
static void _ClpDebPrintfFirst(ClpDebInfoPtr wininfo);

static void ClpDebGwWindowPrintf(ClpDebInfoPtr wininfo, char *buf, Sint32 y);

static void _ClpDebDrawLog(GWHWND hWnd, ClpDebInfoPtr wininfo);

static void _ClpDebDrawCommon(GWHWND hWnd);

static void _ClpDebDeleteCommon(GWHWND hWnd);

static void _ClpDebExecCommon(GWHWND hWnd);

static void _ClpDebPrintf(ClpDebInfoPtr wininfo, char *fmt);

static void _ClpDebClearInfo(ClpDebInfoPtr wininfo);
static void* _ClpDebGetTaskPtr(ClpDebInfoPtr wininfo);

static Bool _ClpDebCreate(ClpDebInfoPtr wininfo, ClpDebKind kind, char *caption, Sint32 x, Sint32 y, Sint32 w, Sint32 h, Sint32 b_w, Sint32 b_h, GWHWND parent, void *task, void (*drawfunc)());

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/clipmanager.c
// *****************************************************************************

void* ClpInit(void *p);

static void _clpman_exec(ClpManTaskPtr t);
static void _clpman_disp(ClpManTaskPtr t);
static void _clpman_del(ClpManTaskPtr t);
void ClpFinish();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/clipplayer.c
// *****************************************************************************

void ClpPlySetLipTimeOfs(Float time);
Float ClpPlyGetLipTimeOfs();
void ClpPlyStop(dgCharNo charno);
static void _ClpPlyStop(void *plytask);
void* ClpPlySet(void *p, Sint32 stm, ClipLp1Ptr lp1, void (*exec)(), void (*disp)());

void* ClpPlySetEx(void *p, Sint32 stm, ClipLp1Ptr lp1, dgCharNo charno, void (*exec)(), void (*disp)());

static void _clpply_exec(ClpPlyTaskPtr t);
static void _clpply_disp(ClpPlyTaskPtr t);
static void _clpply_del(ClpPlyTaskPtr t);
static void _ClpPlyDisp(ClpPlyTaskPtr t);

static Sint32 _ClpPlySearchNeerIndex(int start, int max, ClipDataPtr top, Float time, ClipLp1Ptr lp1);

static Float _ClpPlyGetStartTime(ClipDataPtr p, ClipLp1Ptr lp1);

static void _ClpPlyDrive(ClpPlyTaskPtr t);

static Sint32 _ClpPlyFadeTask(ClpPlyTaskPtr t, Float time);

static void _ClpPlyFadeCore(ClpPlyTaskPtr t);

static Sint32 _ClpPlyExecTrigger(ClpPlyTaskPtr t, Sint32 lipidx, Float time);

void* ClpPlySetModeVBLEx(void *p, dgCharNo disp_charno, dgCharNo charno, Sint32 pid, Sint32 iid, void (*exec)(), void (*disp)());

void* ClpPlySetModeVBLForUlala(void *p, dgCharNo disp_charno, dgCharNo charno, Sint32 pid, Sint32 iid, void (*exec)(), void (*disp)());

void* ClpPlySetModeVBL(void *p, dgCharNo charno, Sint32 pid, Sint32 iid, void (*exec)(), void (*disp)());

Sint32 ClpPlyGetStm(void *task);

Sint32 ClpPlyGetStat(void *task);

ClipLp1Ptr ClpPlyGetLp1(void *task);

Sint32 ClpPlyGetNowIdx(void *task);

Sint32 ClpPlyGetPreIdx(void *task);

Float ClpPlyGetEndTime(void *task);

Float ClpPlyGetBaseTime(void *task);

Float ClpPlyGetAlpha(void *task);

Float ClpPlyGetAlphaSpd(void *task);

Float ClpPlyGetAlphaMax(void *task);

Float ClpPlyGetFrame(void *task);

Sint32 ClpPlyGetFadeStat(void *task);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/clipstream.c
// *****************************************************************************

void* ClpStmInit(void *p);

static void _clpstm_exec(ClpStmTaskPtr t);
static void _clpstm_disp(ClpStmTaskPtr t);
static void _clpstm_del(ClpStmTaskPtr t);
static void _ClpStmInitWatchInfoOne(ClpStmWatchInfoPtr p, Sint32 stm);

static void _ClpStmInitWatchInfoAll();

static void _ClpStmWatcher(ClpStmTaskPtr t);

static void _ClpStmWatcherOne(ClpStmWatchInfoPtr p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/costume_cspr.c
// *****************************************************************************

static void cspr_init(CosRoomCspr *task, CosRoom *parent_task, int player_type, int item_type);

static void cspr_exec(CosRoomCspr *task);

static void cspr_disp(CosRoomCspr *task);

static void cspr_del(CosRoomCspr *task);

CosRoomCspr* CosRoomCsprSet(CosRoom *parent_task, int player_type, int item_type);

Bool CosRoomCsprInReq(CosRoomCspr *task, Float frame);

Bool CosRoomCsprOutReq(CosRoomCspr *task, Float frame);

void CosRoomCsprSetMode(CosRoomCspr *task, CosRoomCsprMode mode);

void CosRoomCsprChangeNum(CosRoomCspr *task, CosRoomCsprMode mode, int num, Float frame);

static void enable_select(CosRoomCspr *task, Bool flag, Float frame, int cell_type);

void CosRoomCsprEnableSelectCursol(CosRoomCspr *task, Bool flag, Float frame);
void CosRoomCsprEnableSelectAB(CosRoomCspr *task, Bool flag, Float frame);

void CosRoomCsprOpenWindow(CosRoomCspr *task, Float frame);

void CosRoomCsprCloseWindow(CosRoomCspr *task, Float frame);

Bool CosRoomCsprIsPerfectWindow(CosRoomCspr *task);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/costume_room.c
// *****************************************************************************

static void cosroom_draw(GWHWND hwnd);

static void create_window(CosRoom *task);

static void bgcol_init(BgColTask *task, Sint16 *from, Sint16 *to, Float frame);

static void bgcol_exec(BgColTask *task);

static void* bgcol_change_req(void *parent_task, Sint16 *from, Sint16 *to, Float frame);

static int pad_change_lr(CosRoom *task);

static int pad_change_ud(CosRoom *task);

static void mapobj_set_motion(CosRoomMapData *data, CosRoomObjType obj_type, mtnMotion *motion);

static void mapobj_exec_motion(CosRoomMapData *data, CosRoomObjType obj_type, Float frame);

static void mapobj_set_hide(CosRoomMapData *data, CosRoomObjType obj_type, int flag);
static Bool mapobj_is_hide(CosRoomMapData *data, CosRoomObjType obj_type);

static void mapobj_draw(CosRoomMapData *data, CosRoomObjType obj_type);

static void mapobj_init_oc(CosRoomMapData *data, CosRoomObjType obj_type, NJS_CNK_OBJECT *obj, dgOcDrawType draw_type);

static void mapobj_free_oc(CosRoom *task, CosRoomMapData *data, CosRoomObjType obj_type);

static void cb_elev(int param0);
static void cb_change_prio(int param0);

static void mapobj_init_elev_callback(CosRoom *task, CosRoomMapData *data);

static void mapdata_init(CosRoom *task, CosRoomMapData *data);
static void mapdata_free(CosRoom *task, CosRoomMapData *data);
static void mapdata_exec_motion(CosRoomMapData *data, Float frame);
static void mapdata_draw(CosRoomMapData *data);

static void mapdata_load_init(MapLoadTask *task, CosRoom *parent_task, CosRoomMapData *data, Sint32 *count);

static void mapdata_load_disp(MapLoadTask *task);
static void mapdata_load_del(MapLoadTask *task);

static void mapdata_load_req(CosRoom *parent_task, Sint32 *count);

static CosRoomItemType get_item_type_from_charno(dgCharNo no);

static CosRoomItemType get_limit_item_type(CosRoomItemType type);

static CosRoomItemType get_current_item_type(CosRoomCharData *data);
static void set_current_item_type(CosRoomCharData *data, CosRoomItemType type);
static dgCharNo get_item_charno(CosRoomItemType type);
static Bool is_select_player(PlayerType type);
static Bool is_select_item(CosRoomItemType type);

static void set_current_item(CosRoomCharData *data, dgCharCtrl *char_ctrl);

static PlayerType get_limit_player_type(PlayerType type);

static PlayerType get_next_player_type(CosRoomCharData *data);
static PlayerType get_current_player_type(CosRoomCharData *data);
static void set_next_player_type(CosRoomCharData *data, PlayerType type);
static void set_current_player_type(CosRoomCharData *data, PlayerType type);
static dgCharCtrl* get_player_charctrl(CosRoomCharData *data);
static Bool is_prepare_char(CosRoomCharData *data, PlayerType type);
static void set_current_player(CosRoomCharData *data);
static void chardata_one_free(CosRoom *task, CosRoomCharDataOne *data);

static void kj_init(MesTask *task);

static void mes_init(MesTask *task, CosRoom *parent_task, int no);

static void mes_disp(MesTask *task);

static void mes_del(MesTask *task);

static void* mes_set_task(CosRoom *parent_task, int type);

static int mes_get_item_textno(int type);

static int mes_get_player_textno(int type);

static void mes_cancel(CosRoom *task);
static void mes_change(CosRoom *task);
static void mes_change_type(CosRoom *task, int type);
static void otherdata_one_load_get(OtherLoadOneTask *task);
static void otherdata_one_load_readend(dgCharNo char_no, void *cdbh, void *ptr);
static void otherdata_one_load_init(OtherLoadOneTask *task, CosRoom *parent_task, CosRoomOtherDataOne *data, Sint32 *count);
static void otherdata_one_load_disp(OtherLoadOneTask *task);
static void otherdata_one_load_del(OtherLoadOneTask *task);

static void* otherdata_one_load_set(CosRoom *parent_task, CosRoomOtherDataOne *data, Sint32 *count);

static void* otherdata_one_load_req(CosRoom *task, int type, Sint32 *count);

static void otherdata_one_free(CosRoom *task, int type);

static void otherdata_free(CosRoom *task);

static void itemdata_one_load_get(ItemLoadOneTask *task);
static void itemdata_one_load_readend(dgCharNo char_no, void *cdbh, void *ptr);
static void itemdata_one_load_init(ItemLoadOneTask *task, CosRoom *parent_task, CosRoomItemDataOne *data, Sint32 *count);
static void itemdata_one_load_disp(ItemLoadOneTask *task);
static void itemdata_one_load_del(ItemLoadOneTask *task);

static void* itemdata_one_load_set(CosRoom *parent_task, CosRoomItemDataOne *data, Sint32 *count);

static void* itemdata_one_load_req(CosRoom *task, CosRoomItemType type, Sint32 *count);

static void itemdata_one_free(CosRoom *task, CosRoomItemType type);

static void itemdata_free(CosRoom *task);

static void chardata_one_load_get(CharLoadOneTask *task);
static void chardata_one_load_readend(dgCharNo char_no, void *cdbh, void *ptr);
static void chardata_one_load_init(CharLoadOneTask *task, CosRoom *parent_task, CosRoomCharDataOne *data, Sint32 *count);
static void chardata_one_load_disp(CharLoadOneTask *task);
static void chardata_one_load_del(CharLoadOneTask *task);

static void* chardata_one_load_set(CosRoom *parent_task, CosRoomCharDataOne *data, Sint32 *count);

static void chardata_one_load_readend_for_manager(dgCharNo char_no, void *cdbh, void *ptr);
static void chardata_one_load_init_for_manager(CharLoadOneTaskForManager *task, CosRoom *parent_task, PlayerType type, Sint32 *count);
static void chardata_one_load_del_for_manager(CharLoadOneTaskForManager *task);

static void* chardata_one_load_set_for_manager(CosRoom *parent_task, PlayerType type, Sint32 *count);

static void* chardata_one_load_req(CosRoom *task, PlayerType type, Sint32 *count);

static void chardata_exec_motion(CosRoomCharData *data);

static void chardata_draw(CosRoom *task, PlayerType type);

static void chardata_load_req(CosRoom *task, Sint32 *count);

static void chardata_free(CosRoom *task);

static void phase_set_frame(CosRoom *task, Float start_frame, Float end_frame, Float speed, Float cam_base_frame, CosRoomPhase phase_next_req);

static void phase_change(CosRoom *task);

static void cosroom_init_phase_load(CosRoom *task);

static void cosroom_exec_phase_load(CosRoom *task);

static void cosroom_init_phase_in(CosRoom *task);

static void cosroom_exec_phase_in(CosRoom *task);

static void cosroom_init_phase_out(CosRoom *task);

static void cosroom_exec_phase_out(CosRoom *task);

static void cosroom_init_phase_near(CosRoom *task);

static void cosroom_init_phase_far(CosRoom *task);

static void cosroom_init_phase_exit(CosRoom *task);

static void cosroom_exec_phase_exit(CosRoom *task);
static void cosroom_init_phase_select(CosRoom *task);

static void cosroom_exec_phase_select(CosRoom *task);

static void cosroom_init_phase_charchg(CosRoom *task);

static void cosroom_exec_phase_charchg(CosRoom *task);

static void cosroom_init_phase_check(CosRoom *task);
static void cosroom_exec_phase_check(CosRoom *task);
static void cosroom_init_phase_finish(CosRoom *task);

static void check_flag();

static void cosroom_init(CosRoom *task, CosRoomInitMode init_mode, int menu);

static void cosroom_exec(CosRoom *task);

static void cosroom_disp(CosRoom *task);

static void cosroom_del(CosRoom *task);

CosRoom* CosRoomSet(void *parent_task, CosRoomInitMode init_mode, ModuleMenu menu);

Bool CosRoomIsInitCharManager();
Bool CosRoomActive(CosRoom *task);
Bool CosRoomIsActive(CosRoom *task);
Bool CosRoomIsExitNow(CosRoom *task);
void CosRoomSetTextSpos(CosRoom *task, dgMathVector2 *lu_pos, dgMathVector2 *rd_pos);
Float CosRoomGetDltFrame(CosRoom *task);
dgTexInfo* CosRoomGetTexInfo(CosRoom *task);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/csprctrl.c
// *****************************************************************************

static CsprMoveVector1* move_data_new_v1(CsprCtrlVector1 *task, int tbl_num, CsprMoveVector1 *tbl);

static CsprMoveVector2* move_data_new_v2(CsprCtrlVector2 *task, int tbl_num, CsprMoveVector2 *tbl);

static void cspr_init_v1(CsprCtrlVector1 *task, int mode);

static void cspr_init_v2(CsprCtrlVector2 *task, int mode);

static void cspr_exec_v1(CsprCtrlVector1 *task);
static void cspr_exec_v2(CsprCtrlVector2 *task);
static void cspr_del_v1(CsprCtrlVector1 *task);
static void cspr_del_v2(CsprCtrlVector2 *task);

CsprCtrlVector1* CsprCtrlSetVector1(void *parent_task, dgMathVector1 *ptr, dgMathVector1 vec, Float frame, CsprCtrlFlag flag);

CsprCtrlVector1* CsprCtrlSetMultiVector1(void *parent_task, dgMathVector1 *ptr, int tbl_num, CsprMoveVector1 *tbl, CsprCtrlFlag flag);

CsprCtrlVector2* CsprCtrlSetVector2(void *parent_task, dgMathVector2 *ptr, dgMathVector2 vec, Float frame, CsprCtrlFlag flag);

CsprCtrlVector2* CsprCtrlSetMultiVector2(void *parent_task, dgMathVector2 *ptr, int tbl_num, CsprMoveVector2 *tbl, CsprCtrlFlag flag);

void CsprCtrlSetEndMarkVector1(CsprMoveVector1 *data);
void CsprCtrlSetEndMarkVector2(CsprMoveVector2 *data);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dance.c
// *****************************************************************************

void* DanceInit(void *parent_p, int seq_id, DanceBattleData *data_p);

int DanceGetQNo();

Bool DanceSetMemberAddBeat(float beat);

Bool DanceFinish();

void DanceTellDying(void *dance_task_p);
MtpHandle* DanceGetBattleMtpHandle();

void DanceSetBattleMtpHandle(MtpHandle *battle_mtp_h);

static void dance_create_child(DanceManTask *task_p);

static void dance_exec_before_battle(DanceManTask *task_p);

static void dance_exec_wait_add_member(DanceManTask *task_p);

static void dance_exec(DanceManTask *task_p);

static void dance_disp(DanceManTask *task_p);
static void dance_del(DanceManTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dance_enemy.c
// *****************************************************************************

void DanceEnemySetCallback(DanceEnemyCtrl *ctrl_p, DanceEnemyCallbackFunc *func_p, void *arg_p);

Sint32 DanceEnemySetMotionMask(DanceEnemyCtrl *ctrl_p, Sint32 mask);

DanceEnemyCtrl* DanceEnemyInitCtrl(void *parent_p, DanceCharacterInit *init_data_p, dgCharCtrl *char_ctrl_p);

Bool DanceEnemyGoMotion(DanceEnemyCtrl *ctrl_p);

dgCharMotionData* DanceEnemySetMotionData(DanceEnemyCtrl *ctrl_p, dgCharMotionData *motdata_p);

dgCharMotionData* DanceEnemyGetMotionData(DanceEnemyCtrl *ctrl_p);
float DanceEnemyGetSleChangeBeat(DanceEnemyCtrl *ctrl_p);
void DanceEnemyGetGridIndex(DanceEnemyCtrl *ctrl_p, Sint32 *grid_x_p, Sint32 *grid_z_p);
void DanceEnemySetGridIndex(DanceEnemyCtrl *ctrl_p, Sint32 grid_x, Sint32 grid_z);
void DanceEnemySetGridCenter(DanceEnemyCtrl *ctrl_p, dgMathVector3 *pos_p, dgMathAngle3 *ang_p);
void DanceEnemyCalcMotion(DanceEnemyCtrl *ctrl_p);
void DanceEnemyResetWalk(DanceEnemyCtrl *ctrl_p);
void DanceEnemySetMotionIndex(DanceEnemyCtrl *ctrl_p, Sint32 index);
void DanceEnemySetMotionFrame(DanceEnemyCtrl *ctrl_p, float frame);
Sint32 DanceEnemyGetMotionTotalFrame(DanceEnemyCtrl *ctrl_p);
DanceEnemyStatus DanceEnemyGetStatus(DanceEnemyCtrl *ctrl_p);
Sint32 DanceEnemyGetIndex(DanceEnemyCtrl *ctrl_p);
dgMathVector3* DanceEnemyGetPositionPtr(DanceEnemyCtrl *ctrl_p);
dgMathAngle3* DanceEnemyGetAnglePtr(DanceEnemyCtrl *ctrl_p);
void DanceEnemyGetPosition(DanceEnemyCtrl *ctrl_p, dgMathVector3 *pos_p, dgMathAngle3 *ang_p);
dgMathVector3* DanceEnemyGetCenterPositionPtr(DanceEnemyCtrl *ctrl_p);
Bool DanceEnemyIsAlive(DanceEnemyCtrl *ctrl_p);
DanceEnemyStatus DanceEnemyExecCommon(DanceEnemyCtrl *ctrl_p);
void DanceEnemyDispCommon(DanceEnemyCtrl *ctrl_p);

void* DanceEnemyInit(void *parent_p, DanceCharacterInit *init_data_p);

void DanceEnemySetPoseMotion(DanceEnemyCtrl *ctrl_p, dgCharMotionData *motdata_p, Sint32 index);
Bool DanceEnemyIsLooped(DanceEnemyCtrl *ctrl_p);
static void dance_exec_kairobo(DanceKairoboTask *task_p);
static void dance_disp_kairobo(DanceKairoboTask *task_p);
static void enemy_set_motion_index(DanceEnemyCtrl *ctrl_p, Sint32 index);
static Bool enemy_go_motion(DanceEnemyCtrl *ctrl_p);
static Bool enemy_go_motion_sle(DanceEnemyCtrl *ctrl_p);
static Sint32 enemy_go_motion_next(DanceEnemyCtrl *ctrl_p);
static void enemy_set_motion_frame(DanceEnemyCtrl *ctrl_p, float frame);

static void enemy_exec_demo(DanceEnemyCtrl *ctrl_p);

static void enemy_exec_wait(DanceEnemyCtrl *ctrl_p);

static void enemy_set_next_input(DanceEnemyCtrl *ctrl_p);

static void enemy_init_qa(DanceEnemyCtrl *ctrl_p);
static void enemy_exec_go_motion(DanceEnemyCtrl *ctrl_p);
static void enemy_exec_wait_qa(DanceEnemyCtrl *ctrl_p);

static void enemy_exec_qa(DanceEnemyCtrl *ctrl_p);

static void enemy_exec_break_wait(DanceEnemyCtrl *ctrl_p);
static void enemy_exec_pre_finish(DanceEnemyCtrl *ctrl_p);
static void enemy_exec_finish(DanceEnemyCtrl *ctrl_p);
static void enemy_del(DanceEnemyCtrl *ctrl_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dance_people.c
// *****************************************************************************

DancePeopleCtrl* DancePeopleInitCtrl(void *parent_p, DanceCharacterInit *init_data_p, dgCharCtrl *char_ctrl_p);

DancePeopleCtrl* DancePeopleInitCtrlCustom(void *parent_p, DanceCharacterInit *init_data_p, dgCharCtrl *char_ctrl_p);

DancePeopleStatus DancePeopleExecCommon(DancePeopleCtrl *ctrl_p);
void DancePeopleDispCommon(DancePeopleCtrl *ctrl_p);
void DancePeopleDrawCommon(DancePeopleCtrl *ctrl_p);
void DancePeopleSetPosition(DancePeopleCtrl *ctrl_p, dgMathVector3 *pos_p);

void* DancePeopleInit(void *parent_p, DanceCharacterInit *init_data_p);

static void dance_exec_people(PeopleTask *task_p);
static void dance_disp_people(PeopleTask *task_p);
void DancePeopleGetPosition(DancePeopleCtrl *ctrl_p, dgMathVector3 *pos_p, dgMathAngle3 *ang_p);
dgMathVector3* DancePeopleGetCenterPositionPtr(DancePeopleCtrl *ctrl_p);
static void people_exec_demo(DancePeopleCtrl *ctrl_p);

static void people_exec(DancePeopleCtrl *ctrl_p);

static void people_exec_rescue(DancePeopleCtrl *ctrl_p);
static void people_exec_lost(DancePeopleCtrl *ctrl_p);
static void people_disp_callback_rotate(int param0);
static void people_del(DancePeopleCtrl *ctrl_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_app.c
// *****************************************************************************

static int check_cable();
Bool dgAppInit();
void dgAppExit();
Bool dgAppChangeTVSetting(int type);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_audio.c
// *****************************************************************************

static void _dgAudioPrintCueInfo(dgAudioCuePtr cue, Sint32 emode);
static void _dgAudioDisplayControlDebugWindowInfoAll();

static dgAudioCuePtr _dgAudioSearchCue(Sint32 stm, Uint32 serial);

static dgAudioCuePtr _dgAudioDeleteCue(Sint32 stm, Uint32 serial);

static Uint32 _dgAudioGetSerialCue();

static dgAudioInfoPtr _dgAudioGetStm2Info(Sint32 stm);

static char* _dgAudioGetStreamName(Sint32 stm);

static void _dgAudioSetMusicReloadTime(dgAudioInfoPtr p);
static void _dgAudioSetTimeAdjustSw(Bool sw);
static void _dgAudioSetTimeMode();

static void _dgAudioEntryADXT(Sint32 stm, dgAudioCuePtr p, Bool wait);

static void _dgAudioDeleteTopCue(Sint32 stm);

static void _dgAudioClearAllCue(dgAudioInfoPtr p);

static void _dgAudioClearCue(dgAudioCuePtr p);
static void _dgAudioClearInfo(dgAudioInfoPtr p, Sint32 stm);
static void _dgAudioReClearInfo(dgAudioInfoPtr p);
static Float _dgAudioGetMusicReloadSec();

static void _dgAudioClearAllInfo();

static dgAudioCuePtr _dgAudioGetFreeCue(dgAudioCuePtr p);

static dgAudioCuePtr _dgAudioSearchLastCue(dgAudioCuePtr p);

static Sint32 _dgAudioSearchFreeVoiceStream();

static dgAudioCuePtr _dgAudioLinkCue(Sint32 stm);

Bool dgAudioOnPause(Sint32 stm);

Bool dgAudioOffPause(Sint32 stm);

Sint32 dgAudioPause(Sint32 stm);

void dgAudioSetPauseMode(Sint32 stm, Uint16 time, Bool pause_sw, Bool start_sw);

Uint32 dgAudioPlayAfs(Sint32 stm, Sint32 pid, Sint32 iid, Bool wait);

Bool dgAudioPlayNotSeamless(Sint32 stm, char *fname, Bool wait);

Bool dgAudioPlayNotSeamlessAfs(Sint32 stm, Sint32 pid, Sint32 iid, Bool wait);

Uint32 dgAudioPlay(Sint32 stm, char *fname, Bool wait);

void dgAudioEntryFuncMemCopy(void (*func)());

void dgAudioMemCopy(void *dst, void *src, Uint32 num);

void dgAudioOffEndlessLoop(Sint32 stm);

void dgAudioOnEndlessLoop(Sint32 stm);

void dgAudioEntryFuncMemSet(void (*func)());

void dgAudioEntryFuncMalloc(void* (*func)());

void dgAudioEntryFuncFree(void (*func)());

void* dgAudioMalloc(Uint32 size);

void dgAudioFree(void *ptr);

void dgAudioMemSet(void *dst, int data, Uint32 num);

void dgAudioInit();

void dgAudioSetLinkPauseWait(Sint32 cnt);

Sint32 dgAudioGetLinkPauseWait();

Bool dgAudioCreateAll();

Bool dgAudioCreate(Sint32 stm, Sint32 ch, Sint32 sfreq);

Sint32 dgAudioPlayVoiceCore(char *fname, Sint32 pid, Sint32 iid, Bool wait);

Uint32 dgAudioEntryAfsSpecify(Sint32 stm, Sint32 pid, Sint32 iid, Uint16 cmd, Uint16 para);

Uint32 dgAudioEntrySpecify(Sint32 stm, char *fname, Uint16 cmd, Uint16 para);

void dgAudioGo(Sint32 stm);

Bool dgAudioStart(Sint32 stm, Bool wait);

Uint16 dgAudioGetStat(Sint32 stm);

static void dgAudioExecLinkPause(Sint32 wait_cnt);

void dgAudioExecServer();

void dgAudioStop(Sint32 stm);

void dgAudioRelease(Sint32 stm);

Float dgAudioGetTime(Sint32 stm);

Uint32 dgAudioPlayLink(Sint32 stm, void *adr, Sint32 fmode, char *fname, Sint32 pid, Sint32 iid, ADXF adxf, Bool wait);

void dgAudioFinish();

Bool dgAudioDeleteCue(Sint32 stm, Uint32 serial);

Sint32 dgAudioGetEntryNum(Sint32 stm);

void dgAudioDisplayDebugWindowInfo(GWHWND hwnd);

Sint32 dgAudioGetVol(Sint32 stm);

Sint32 dgAudioSetVol(Sint32 stm, Sint32 vol);

Sint32 dgAudioGetMusicVol();
Sint32 dgAudioGetVoiceVol();

void dgAudioSetMusicVol(Sint32 db);

void dgAudioSetVoiceVol(Sint32 db);

void dgAudioDisplayDebugWindowInfoAll(GWHWND hwnd);

void dgAudioControlDebugWindowInfoAll();

Sint32 dgAudioSearchPlayStreamNoAfs(Sint32 pid, Sint32 iid);

Sint32 dgAudioGetNowPlayFileMode(Sint32 stm);

Bool dgAudioGetNowPlayPidIid(Sint32 stm, Sint32 *pid, Sint32 *iid);

char* dgAudioGetNowPlayFilename(Sint32 stm);

void* dgAudioGetADXT(Sint32 stm);

Bool dgAudioCheckPreloadJustLink(Sint32 stm);

Float dgAudioGetLinkBaseTime(Sint32 stm);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_backup.c
// *****************************************************************************

static void bup_draw(GWHWND hwnd);

static void create_window(BupDebugTask *task);
static void bup_disp(BupDebugTask *task);
static void bup_del(BupDebugTask *task);

void* dgBupDebugSet(void *parent);

static Sint32 cb_complete(Sint32 drive, Sint32 op, Sint32 stat, Uint32 param);

static Sint32 cb_progress(Sint32 drive, Sint32 op, Sint32 count, Sint32 max);

static void cb_init();

dgBupHandle* dgBupCreateForDebug(char *fname, Sint32 flag, void *save_data, Uint32 save_size);

dgBupHandle* dgBupCreate(char *fname, Sint32 flag, dgBupInitData *data);

void dgBupDestroy(dgBupHandle *h);
void dgBupInit(int max_caps, int max_drives, int use_drives);

void dgBupExit();

Bool dgBupIsBusy(dgBupDrive drive);
void dgBupSetConnectNew(Bool flag);
Bool dgBupIsConnectNew();
void dgBupSetAutoSave(Bool flag);
Bool dgBupIsAutoSave();

Bool dgBupIsExist(dgBupDrive drive);

Bool dgBupIsFormat(dgBupDrive drive);

int dgBupGetRemainBlock(dgBupDrive drive);

int dgBupGetError(dgBupDrive drive);

int dgBupAnalyze(void *ptr, void **save_data, Uint32 *save_size);

void* dgBupLoad(dgBupDrive drive, char *fname);

void* dgBupLoadReq(dgBupDrive drive, char *fname);

void dgBupFree(void *ptr);

static void make_bus_time(BUS_TIME *bus_time);

static Bool bup_save(dgBupDrive drive, dgBupHandle *h);

Bool dgBupSaveReq(dgBupDrive drive, dgBupHandle *h);

Bool dgBupSave(dgBupDrive drive, dgBupHandle *h);

Bool dgBupFormatReq(dgBupDrive drive);

Bool dgBupFormat(dgBupDrive drive);

dgBupReqCallback* dgBupSetReqCallback(dgBupReqCallback *func);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_binary.c
// *****************************************************************************

Uint32 dgBinGetCnk(Sint8 *ptr);

Uint32 dgBinIsCnk(Sint8 *ptr);

NJS_CNK_OBJECT* dgBinReadNj(NJS_TEXLIST **tlist, char *filename);

NJS_MOTION* dgBinReadNjm(char *filename);

NJS_MOTION* dgBinReadCameraNjm(char *filename);

void* dgBinRead(Sint8 *wbuff, Uint32 *fpos, Uint32 *ptype);

static void rel_to_abs_address(Sint32 *bin_ptr, Sint32 *pof_ptr);

dgBinRbInfo* dgBinReadRb(void *ptr, char *rb_filename, char *pof_filename, void *dir);

void dgBinFreeRb(dgBinRbInfo *info);

static void to_absolute(Uint32 *ptr, Uint32 *pof_ptr);

void* dgBinAbsoluteCnkBinary(Uint32 *ptr, Uint32 *pof_ptr);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_camdebug.c
// *****************************************************************************

static void set_eye(dgCamera *c, CamParam *param);

static void set_int(dgCamera *c, CamParam *param);

static void rot_to_cvec(dgMathVector3 *cvec, dgMathAngle2 *rot);

static void cam_to_param(CamParam *param, dgCamera *c);

static void init_param(CamParam *param);

static void init_camera_common(CamDebugTask *task, dgCamera *c);

static void init_camera_x(CamDebugTask *task, dgCamera *c);

static void init_camera_y(CamDebugTask *task, dgCamera *c);

static void init_camera_z(CamDebugTask *task, dgCamera *c);

static void init_camera_xyz(CamDebugTask *task, dgCamera *c);

static void camdebug_init(CamDebugTask *task);

static void camdebug_del(CamDebugTask *task);

void* dgCamDebugSet(void *parent_task);

static dgCamera* choice_camera(CamDebugTask *task);

static void cam_dolly(CamParam *param);

static void cam_orbit(CamParam *param);

static void cam_zoom(dgCamera *c);

static void cam_roll(dgCamera *c);

static void get_slide_value_z(Float *z);

static void get_slide_value_xy(Float *x, Float *y);

static void cam_slide_interest(dgCamera *c, dgMathVector3 *pos);

static void cam_slide(dgCamera *c, dgMathVector3 *vvec);

static void move_camera(CamDebugTask *task, dgCamera *c, dgCamera *dummy_c);

Bool dgCamDebugDisp();

void dgCamDebugSetPlayerCenterPosition(dgMathVector3 *pos);

void dgCamDebugSetSelectPosition(dgMathVector3 *pos);

void dgCamDebugLock(int flag);

void dgCamDebugGetCameraPosition(dgMathVector3 *pos);

void dgCamDebugGetInterestPosition(dgMathVector3 *pos);

dgMathAngle1 dgCamDebugGetRoll();
dgMathAngle1 dgCamDebugGetAngle();

void dgCamDebugSetCameraPosition(dgMathVector3 *pos);

void dgCamDebugSetInterestPosition(dgMathVector3 *pos);

void dgCamDebugSetRoll(dgMathAngle1 roll);
void dgCamDebugSetAngle(dgMathAngle1 ang);
dgMathAngle1 dgCamDebugModifyRoll(dgMathAngle1 angle);

dgMathAngle1 dgCamDebugModifyAngle(dgMathAngle1 angle);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_camedit.c
// *****************************************************************************

static int spline_get_no(int no);
static CamEditPoint* get_edit_point(CamEditTask *task);

static void draw_window(GWHWND hwnd);

static void create_window(CamEditTask *task);
static void yn_draw_window(GWHWND hwnd);
static void yn_create_window(CamEditTask *task);

static void set_camera(CamEditTask *task, dgCamera *c);

static void set_camera_from_point(CamEditPoint *point, dgCamera *c);
static int get_real_point_num(int num);
static void copy_point(CamEditPoint *dst, CamEditPoint *src, int num);
static void img_init(CamEditTask *task);

static void* img_get(CamEditTask *task, size_t size);

static void make_node_saveimg(CamEditTask *task, CamEditNode *dst, CamEditNode *src, Uint32 base);

static void make_seq_header_saveimg(CamEditTask *task, CamEditSeqHeader *dst, CamEditSeqHeader *src, Uint32 base);

static void absolute_saveimg(CamEditHeader *header);

static void camedit_editimg_to_saveimg(CamEditTask *task);

static void make_node_editimg(CamEditTask *task, CamEditNode *dst, CamEditNode *src);

static void make_seq_header_editimg(CamEditTask *task, CamEditSeqHeader *dst, CamEditSeqHeader *src);

static void camedit_saveimg_to_editimg(CamEditTask *task);

static dgBupHandle* bup_create(CamEditTask *task, Uint32 save_size);

static void file_load(CamEditTask *task);

static void check_ok(int stat);

static void file_save(CamEditTask *task);

static void text_callback(GWHWND hwnd);

static void fname_init(CamEditFnameTask *task, CamEditTask *parent_task, int no);

static void fname_disp(CamEditFnameTask *task);
static void fname_del(CamEditFnameTask *task);

static void get_fname_set_task(CamEditTask *parent_task, int no);

static void cam_get_eye(CamEditCamera *cam);

static Float get_distance(dgMathVector3 *p0, dgMathVector3 *p1);

static void camedit_init_cam_buffer(CamEditTask *task);

static void camedit_init(CamEditTask *task, int round_no, int block_no);

static void get_ctrlpoint_v(dgMathVector3 *dst, dgMathVector3 *p0, dgMathVector3 *p1, dgMathVector3 *p2, Float param);

static Float get_ctrlpoint_a(dgMathAngle1 p0, dgMathAngle1 p1, dgMathAngle1 p2);

static void get_spline_ctrlpoint_auto_sub(CamEditPoint *p0, CamEditPoint *p1, CamEditPoint *p2);

static void get_spline_ctrlpoint_auto(CamEditPoint *point, int nb_point);

static void calc_point2(CamEditPoint *pnt, CamEditPoint *p0, CamEditPoint *p1, Float ratio);

static Float get_spline_f(Float p0, Float p1, Float p2, Float t);
static dgMathAngle1 get_spline_a(dgMathAngle1 p0, dgMathAngle1 p1, dgMathAngle1 p2, Float t);
static void calc_point3_prev(CamEditPoint *pnt, CamEditPoint *p0, CamEditPoint *c1, CamEditPoint *p2, Float ratio);
static void calc_point3_next(CamEditPoint *pnt, CamEditPoint *p0, CamEditPoint *c1, CamEditPoint *p2, Float ratio);

static void node_play(CamEditPoint *pnt, CamEditNode *node, CamEditPoint *point, Float frame);

static void yn_callback_entry(CamEditTask *task, void (*func)());
static void yn_callback_delete(CamEditTask *task);

static CamEditNode* create_node(CamEditTask *task, CamEditSeqHeader *h);

static void delete_node(CamEditTask *task, CamEditSeqHeader *h, int no);

static CamEditNode* get_current_node(CamEditSeqHeader *h, int no);

static CamEditNode* get_last_node(CamEditSeqHeader *h);

static void create_sequence(CamEditTask *task);

static void camedit_disp_seq(CamEditTask *task);
static void delete_node_req(CamEditTask *task);

static void camedit_disp_node(CamEditTask *task);

static void delete_point_req(CamEditTask *task);

static void copy_point_to_workbuf(CamEditTask *task);

static void store_point_from_workbuf(CamEditTask *task);

static void disp_screen_center();

static void disp_point(CamEditTask *task, CamEditPoint *point, int nb_point, int select_point);

static void point_to_cam(CamEditCamera *cam, CamEditPoint *point);

static void edit_eye(CamEditTask *task, int port, int speed, CamEditPoint *point, CamEditCamera *cam);
static void edit_ang(CamEditTask *task, int port, int speed, CamEditPoint *point, CamEditCamera *cam);
static void edit_roll(CamEditTask *task, int port, int speed, CamEditPoint *point, CamEditCamera *cam);
static void edit_intx(CamEditTask *task, int port, int speed, CamEditPoint *point, CamEditCamera *cam);
static void edit_inty(CamEditTask *task, int port, int speed, CamEditPoint *point, CamEditCamera *cam);
static void edit_intz(CamEditTask *task, int port, int speed, CamEditPoint *point, CamEditCamera *cam);
static void ctype_change_init(CamEditTask *task, CamEditCamera *cam, CamEditPoint *point);

static void edit_point_func(CamEditTask *task);

static void camedit_disp_point(CamEditTask *task);

static void camedit_disp3(CamEditTask *task);

void dgCamEditDisp();

static void camedit_del(CamEditTask *task);

void* dgCamEditSet(void *parent_task, int round_no, int block_no);

void dgCamEditSetBasePotision(dgMathVector3 *pos, dgMathAngle3 *ang);

void dgCamEditSetCenterPotision(dgMathVector3 *pos);
void dgCamEditSetBaseFrame(Float frame);
void dgCamEditInitData();

void dgCamEditSetData(void *ptr);

void dgCamEditSetSeqNo(int seq_no);
void dgCamEditSetNodeNo(int node_no);

void dgCamEditPlay(dgCamera *cam);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_camedit_neo.c
// *****************************************************************************

static void set_window_color();

static void ce_button_stat_all(ceTask *task, int stat);

static void ce_button_stat_push(ceTask *task);

static void ce_button_stat_pop(ceTask *task);

static void ce_button_stat_exec(ceTask *task);

static void ce_button_enable(ceTask *task, int button, int stat);
static Uint32* img_ptr_add(Uint32 *ptr, Uint32 size);

static void saveimg_to_editimg(ceTask *task, int type);

static void editimg_to_saveimg(ceTask *task);

static dgBupHandle* bup_create(ceTask *task, Uint32 save_size);

static void file_load(ceTask *task, char *fname, int type);

static void cb_saveend(int stat);

static void file_save(ceTask *task);

static void fname_callback(GWHWND hwnd);

static void fname_init(CamEditFnameTask *task, ceTask *ptask, int no);

static void fname_disp(CamEditFnameTask *task);
static void set_fname(ceTask *task, char **ptr, char *fname);

static void fname_del(CamEditFnameTask *task);

static void get_fname_set_task(ceTask *parent_task, int no);

static void transform_to_global(ceTask *task, dgMathVector3 *vec, int coord_type);

static void transform_coord_from_global(dgSplEdit *task, dgSpline *spl, int coord_type, int select_key_no);

static void transform_coord_all(dgSplEdit *task, dgSpline *spl, int to_coord_type, int from_coord_type);

static void dialog_callback_v1(GWHWND hwnd);

static void a1_set(Sint32 index, dgMathAngle1 ang);

static void dialog_callback_a1(GWHWND hwnd);

static void dialog_init(CamEditDialogTask *task, void *ptr, char *name, void (*callback)(), char *str);

static void choice_callback(GWHWND hwnd, Sint32 index);

static void choice_init(CamEditDialogTask *task, dgSplEdit *spl_edit_task, void *ptr, char *name, void (*choice_callback)());
static void dialog_disp(CamEditDialogTask *task);
static void dialog_del(CamEditDialogTask *task);

static void set_dialog_frame(ceTask *parent_task, char *name, Sint32 *ptr);

static void set_dialog_cam_camint(ceTask *parent_task, dgSplEdit *spl_edit_task, char *name, void *ptr);

static void set_dialog_cam_a1(ceTask *parent_task, char *name, int no, char *value_str);

static ceNode* node_get_ptr(ceNodeHeader *node_header, int index);
static Uint32 node_get_size(ceNodeHeader *node_header);

static ceNodeHeader* node_new();

static void node_init(ceNode *node);
static ceNodeHeader* node_add(ceNodeHeader *node_header);

static void node_delete_one(ceNode *node, int type);

static ceNode* node_copy(ceNode *dst, ceNode *src);

static Uint32* node_copy_compact(ceNode *dst, ceNode *src, Uint32 *ptr);

static void node_slide(ceNodeHeader *node_header, int index_to, int index_from);

static ceNodeHeader* node_delete(ceNodeHeader *node_header, int index);

static ceNodeHeader* node_insert(ceNodeHeader *node_header, int index);

static void node_header_copy(ceNodeHeader *dst, ceNodeHeader *src);

static void node_absolute(ceNode *node, Uint32 base);

static void node_relative(ceNode *node, Uint32 base);

static void node_header_absolute(ceNodeHeader *node_header, Uint32 base);

static void node_header_relative(ceNodeHeader *node_header, Uint32 base);

static ceSeqHeader* seq_header_get(ceTask *task);
static ceNodeHeader** seq_get_pptr(ceSeqHeader *seq, int index);
static ceNodeHeader* seq_get_ptr(ceSeqHeader *seq, int index);
static Uint32 seq_get_size(ceSeqHeader *seq);

static ceSeqHeader* seq_new(int num);

static ceSeqHeader* seq_add(ceSeqHeader *seq);

static ceNodeHeader* seq_copy(ceNodeHeader *dst, ceNodeHeader *src);

static void seq_delete_one(ceNodeHeader *node_header);

static ceSeqHeader* seq_delete(ceSeqHeader *seq, int index);

static void seq_delete_all(ceSeqHeader *seq);

static ceSeqHeader* seq_insert(ceSeqHeader *seq, int index);

static void seq_absolute(ceSeqHeader *seq);

static void seq_relative(ceSeqHeader *seq);

static void seq_compact(ceSeqHeader *dst, ceSeqHeader *src);

static dgSpline* a1_new(dgMathAngle1 angle);

static void ce_change_mode(ceTask *task);

static void cb_file_load(GWHWND hwnd, Sint32 mode);
static void cb_file_load_asread(GWHWND hwnd, Sint32 mode);
static void cb_file_save(GWHWND hwnd, Sint32 mode);

static void cb_file_switch(GWHWND hwnd, Sint32 mode);

static void cb_copy(GWHWND hwnd, Sint32 mode);

static void cb_paste(GWHWND hwnd, Sint32 mode);

static void cb_add(GWHWND hwnd, Sint32 mode);
static void cb_insert(GWHWND hwnd, Sint32 mode);
static void cb_delete(GWHWND hwnd, Sint32 mode);

static void pnt_select(int add_value);

static void cb_prev(GWHWND hwnd, Sint32 mode);

static void cb_next(GWHWND hwnd, Sint32 mode);

static void cb_select(GWHWND hwnd, Sint32 mode);

static void cb_play(GWHWND hwnd, Sint32 mode);
static void cb_play_comma(GWHWND hwnd, Sint32 mode);
static void cb_play_loop(GWHWND hwnd, Sint32 mode);
static void cb_play_reverse(GWHWND hwnd, Sint32 mode);
static void cb_play_set(GWHWND hwnd, Sint32 mode);
static void cb_play_base(GWHWND hwnd, Sint32 mode);
static void cb_play_sync(GWHWND hwnd, Sint32 mode);

static void camvar_toggle_on(int button);

static void cb_play_camvar1(GWHWND hwnd, Sint32 mode);
static void cb_play_camvar2(GWHWND hwnd, Sint32 mode);
static void cb_play_camvar3(GWHWND hwnd, Sint32 mode);

static void cam_toggle_off(int button);

static void cam_toggle_on(int button);

static void cb_cam_frame(GWHWND hwnd, Sint32 mode);
static void cb_cam_power(GWHWND hwnd, Sint32 mode);
static void cb_cam_camera(GWHWND hwnd, Sint32 mode);
static void cb_cam_interest(GWHWND hwnd, Sint32 mode);
static void cb_cam_roll(GWHWND hwnd, Sint32 mode);
static void cb_cam_ang(GWHWND hwnd, Sint32 mode);

static void cb_cam_play_linear(GWHWND hwnd, Sint32 mode);

static void cb_cam_set(GWHWND hwnd, Sint32 mode);

static void set_current_cam(dgSpline *spl, int select_no, dgMathVector3 *src);

static void set_current_cam_a1(dgSpline *spl, int select_no, dgMathAngle1 ang);

static void set_current_pnt_v3(dgSpline *spl, int select_no, int type);

static void set_current_pnt_a1(dgSpline *spl, int select_no, int type);

static void cb_cam_to_curr_cam(GWHWND hwnd, Sint32 mode);

static void cb_cam_to_curr_pnt(GWHWND hwnd, Sint32 mode);

static void cb_cam_reverse(GWHWND hwnd, Sint32 mode);

static void cb_debug(GWHWND hwnd, Sint32 mode);
static void cb_debug_color(GWHWND hwnd, Sint32 mode);

static void cb_seq_exit(GWHWND hwnd, Sint32 mode);

static void button_check(ceTask *task);

static int add_v(Sint32 font_size_y);
static void base_win_disp_nodata(ceTask *task, GWHWND hwnd, int h, int v, int y);

static void base_win_disp_seq(ceTask *task, GWHWND hwnd, int h, int v, int y);

static void base_win_disp_node(ceTask *task, GWHWND hwnd, int h, int v, int y);

static void base_win_disp_pnt(ceTask *task, GWHWND hwnd, int h, int v, int y);

static void base_win_disp(GWHWND hwnd);

static Float slidervalue_to_frame(Float value);

static Float frame_to_slidervalue(Float frame);

static void slider_callback(GWHWND hwnd);

static int create_button(ceTask *task, ButtonRowData *button_tbl, int tbl_num, int start_h, int start_v, GWHWND phwnd);

static void create_window(ceTask *task);

static void ce_init(ceTask *task);

static void ce_disp_dummy_player(ceTask *task);

static void calc_play_frame(ceTask *task, ceNodeHeader *node_header);

static void ce_set_camera(ceTask *task, ceNodeHeader *node_header);

static void ce_disp_play(ceTask *task, ceNodeHeader *node_header);

static void ce_disp(ceTask *task);

static void force_copy(ceForce *dst, ceForce *src);

static void force_draw(GWHWND hwnd);

static void force_create_window(ceTask *task);
static void ce_dummy_disp(ceTask *task);
static void ce_del(ceTask *task);

void* dgCamEditNeoSet(void *parent_task);

Bool dgCamEditNeoDisp();

void dgCamEditSetPosAng(Float beat, dgMathMatrix *pc_mat, dgMathMatrix *pc_mat_ixy, dgMathVector3 *pb_pos, dgMathAngle3 *pb_ang);

int dgCamEditNeoGetCamVarNo();
void dgCamEditNeoSetPlayerCharNo(dgCharNo no);
static void cen_sync(int flag);

static void cen_camforce_init();

static void cen_camforce_play(int no);

static void cen_init();

void dgCenInit();
void dgCenFinish();

void dgCenAbsolute(void *ptr);

void dgCenSetPlayerPosAng(dgMathMatrix *pc_mat, dgMathMatrix *pc_mat_ixy, dgMathVector3 *pb_pos, dgMathAngle3 *pb_ang);

static void cen_transform_to_global(dgMathVector3 *vec, int coord_type);

void dgCenPlay(dgCamera *cam);

void dgCenSetPlayEndCallbackFunc(void (*func)());

Bool dgCenIsExistSeqNo(int seq_no);

void dgCenSetSeqNo(int seq_no);
void dgCenSetBaseFrame(Float frame);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_camera.c
// *****************************************************************************

static void motion_play_blend(Camera *cam);

static void motion_play_noblend(Camera *cam);

static void motion_play_endframe(Camera *cam);

static Bool is_enable_blend_mkey_f(Camera *cam, NJS_MKEY_F *mkey1);

static Bool is_enable_blend_mkey_sa1(Camera *cam, NJS_MKEY_SA1 *mkey);

static void motion_play(Camera *cam, int limit_frame);

static void motion_init(Camera *cam, NJS_MOTION *motion);

static void dg_camera_init(Camera *cam);

static void dg_camera_copy(dgCamera *dst, dgCamera *src);
static void camera_init(Camera *cam, NJS_MOTION *motion);

static void camera_draw(GWHWND hwnd);

void dgCameraCreateWindow(void *parent_task);
static void dgcam_to_njcam(NJS_CAMERA *nj_cam, dgCamera *dg_cam);

static void cam_mirror(Camera *cam);

static void cam_relative(Camera *cam);

static void camera_disp(Camera *cam);

static void camera_del(Camera *task);

void* dgCameraSet(void *parent_task, NJS_MOTION *motion);

void* dgCameraGet();
void dgCameraInit();
void dgCameraSetFrame(float frame);
Float dgCameraGetFrame();
Float dgCameraGetMaxFrame();
NJS_CAMERA* dgCameraGetPtr();
dgMathMatrix* dgCameraGetMatrix();
dgMathMatrix* dgCameraGetInvMatrix();
dgMathMatrix* dgCameraGetInvMatrixNoMirror();

void dgCameraSetMotion(NJS_MOTION *motion);

void dgCameraExecMotion(Float frame);

void dgCameraSetUserFunc(void (*func)());
void dgCameraDisp();
Float dgCameraInvSin();
Float dgCameraCos2();
dgCamera* dgCameraGetCamera();

static void roll_to_upvec(dgMathVector3 *vec, dgMathAngle1 roll);

void dgCameraSetMatrix(dgCamera *cam);

void dgCameraMakeMatrix(dgMathMatrix *m, dgCamera *cam);

void dgCameraDrawViewLine(dgCamera *cam, Float z, Uint32 color);

dgCamera* dgCameraCreate();

void dgCameraDestroy(dgCamera *cam);
void dgCameraCopy(dgCamera *dst, dgCamera *src);
void dgCameraGetCameraPosition(dgCamera *cam, dgMathVector3 *pos);
void dgCameraGetInterestPosition(dgCamera *cam, dgMathVector3 *pos);
void dgCameraGetCameraVector(dgCamera *cam, dgMathVector3 *vec);
dgMathAngle1 dgCameraGetRoll(dgCamera *cam);
dgMathAngle1 dgCameraGetAngle(dgCamera *cam);
void dgCameraSetCameraPosition(dgCamera *cam, dgMathVector3 *pos);
void dgCameraSetInterestPosition(dgCamera *cam, dgMathVector3 *pos);
void dgCameraSetRoll(dgCamera *cam, dgMathAngle1 roll);
void dgCameraSetAngle(dgCamera *cam, dgMathAngle1 ang);
void dgCameraSetMirrorMode(dgCameraMirrorMode mode);
dgCameraMirrorMode dgCameraGetMirrorMode();
Bool dgCameraIsMirror();
void dgCameraSetRelativeMode(Bool flag);
void dgCameraSetRelativeMatrix(dgMathMatrix *m);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_camforce.c
// *****************************************************************************

dgCamForce* dgCamForceCreate();
void dgCamForceDestroy(dgCamForce *f);
void dgCamForceSetForce(dgCamForce *f, Float min, Float max);
void dgCamForceSetFrame(dgCamForce *f, Sint32 min, Sint32 max);
void dgCamForceSetFreq(dgCamForce *f, Sint32 min, Sint32 max);
void dgCamForceSetCameraKa(dgCamForce *f, Float ka);
void dgCamForceSetCameraKv(dgCamForce *f, Float kv);
void dgCamForceSetInterestKa(dgCamForce *f, Float ka);
void dgCamForceSetInterestKv(dgCamForce *f, Float kv);
void dgCamForceGetCameraVector(dgCamForce *f, dgMathVector3 *vec);
void dgCamForceGetInterestVector(dgCamForce *f, dgMathVector3 *vec);
void dgCamForceInit(dgCamForce *f);

static Float ese_rand(dgCamForce *f);

static void param_recalc(dgCamForce *f, Float beat);

static void play_eye(dgCamForce *f);
static void play_int(dgCamForce *f);

void dgCamForcePlay(dgCamForce *f);

void dgCamForceDebugDisp(dgCamForce *f);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_caption.c
// *****************************************************************************

static void kanji_init(dgCaption *caption);

static void kanji_str_entry(dgCaptionHeader *h);

static void kanji_str_release(dgCaptionHeader *h);

static void make_poly(dgCaption *caption);

static void make_disp_x(dgCaption *caption);

static void caption_set_scale_size(dgCaption *caption, Float scale_x, Float scale_y);
static void caption_set_color(dgCaption *caption, Uint32 color);
static void caption_set_gap_size(dgCaption *caption, int size_x, int size_y);
static void caption_set_frame_size(dgCaption *caption, int size);
static void caption_set_shade_size(dgCaption *caption, int size);
static void caption_set_bold_size(dgCaption *caption, int size);
static void caption_set_coord(dgCaption *caption, Float x, Float y, Float u, Float v);
static void caption_set_ooz(dgCaption *caption, Float ooz);
static void caption_set_str_side(dgCaption *caption, dgCaptionSide side);
static void caption_set_str(dgCaption *caption, char **tbl, int line_num);
static void caption_set_polygon_gap_size(dgCaption *caption, Float x, Float y);
static void caption_set_polygon_color(dgCaption *caption, Uint32 color);
static void caption_calc_size(dgCaption *caption);

static dgCaption* caption_create();

static void caption_destroy(dgCaption *caption);

static void caption_draw(dgCaption *caption, int poly_draw_flag);

static void caption_str_init(dgCaptionStrTask *task);

static void caption_str_exec(dgCaptionStrTask *task);

static void caption_str_disp(dgCaptionStrTask *task);
static void caption_str_simple_disp(dgCaptionStrTask *task);
static void caption_str_del(dgCaptionStrTask *task);

static dgCaptionStrData* caption_get_str_data(dgCaptionHeader *h, int no);

void* dgCaptionEntry(void *parent_task, dgCaptionHeader *h, int no, dgCaptionType type, Sint32 start_frame, Sint32 end_frame);

dgCaption* dgCaptionCreate(dgCaptionHeader *h, int no, Float x, Float y, Float z, dgCaptionSide side);

void dgCaptionDraw(dgCaption *caption);
void dgCaptionDestroy(dgCaption *caption);

static dgCaptionHeader* caption_absolute_entry(dgCaptionHeader *h, Uint32 base_adr, Sint8 str_entry_flag);

void dgCaptionSet(dgCaptionHeader *ptr);

dgCaptionHeader* dgCaptionSetEx(dgCaptionHeader *ptr, int str_entry_flag);
void dgCaptionReleaseEx(dgCaptionHeader *ptr);
int dgCaptionGetLineNum(dgCaptionHeader *h, int no);

char* dgCaptionGetStr(dgCaptionHeader *h, int no, int line);

static void caption_load_init(CaptionLoadTask *task, char *filename);
static void caption_load_disp(CaptionLoadTask *task);
static void caption_load_del(CaptionLoadTask *task);

void* dgCaptionLoadReq(void *parent_task, char *filename);

static void dialog_init(dgCaptionDialogTask *task, Float disp_y);

static void dialog_exec(dgCaptionDialogTask *task);

static void dialog_disp(dgCaptionDialogTask *task);

static void dialog_del(dgCaptionDialogTask *task);

void* dgCaptionDialogEntry(void *parent_task, dgCaptionHeader *h, int no_mes, int no_yes, int no_no, void (*cb_yes)(), void (*cb_no)(), int default_select_no);

void* dgCaptionDialogEntryEx(void *parent_task, dgCaptionHeader *h, int no_mes, int no_yes, int no_no, void (*cb_yes)(), void (*cb_no)(), int default_select_no, Float disp_y);

int dgCaptionGetNum(dgCaptionHeader *h);
int dgCaptionStreamGetNum(dgCaptionStreamHeader *h);

dgCaption* dgCaptionCreateEx(dgCaptionHeader *h, int no, int start_line, int nb_line, Float x, Float y, Float z, dgCaptionSide side);

static dgCaptionStreamData* get_stream_data(dgCaptionStreamHeader *h, int no);

int dgCaptionStreamGetLineNum(dgCaptionStreamHeader *h, int no);

Sint8 dgCaptionStreamGetFlag(dgCaptionStreamHeader *h, int no, int line);

Sint32 dgCaptionStreamGetStartFrame(dgCaptionStreamHeader *h, int no, int line);

Sint32 dgCaptionStreamGetEndFrame(dgCaptionStreamHeader *h, int no, int line);

void dgCaptionStreamSet(dgCaptionStreamHeader *ptr, dgCaptionStreamType type);
void dgCaptionSetForStream(dgCaptionHeader *ptr, dgCaptionStreamType type);
static void caption_load2_init(CaptionLoadTask2 *task, char *filename, dgCaptionStreamType type);
static void caption_load2_disp(CaptionLoadTask2 *task);
static void caption_load2_del(CaptionLoadTask2 *task);

void* dgCaptionLoadReqForStream(void *parent_task, char *filename, dgCaptionStreamType type);

static void capstm_task_del(dgCaptionStreamParent *task);

void* dgCaptionStreamSetTask(void *parent_task, dgCaptionStreamType type);

static void capstm_load_init(CaptionStreamLoadTask *task, char *filename, dgCaptionStreamType type);
static void capstm_load_disp(CaptionStreamLoadTask *task);
static void capstm_load_del(CaptionStreamLoadTask *task);

void* dgCaptionStreamLoadReq(void *parent_task, char *filename, dgCaptionStreamType type);

dgCaption* capstm_create(dgCaptionHeader *h, int no, int start_line, int nb_line);

static void captstm_init(dgCapStmTask *task);

static void capstm_exec(dgCapStmTask *task);

static void capstm_disp(dgCapStmTask *task);
static void capstm_del(dgCapStmTask *task);

void* dgCaptionStreamEntry(int cap_no, int stm_no, dgCaptionStreamType type);

static void capstm_prep_disp(dgCapStmPrepTask *task);
static void capstm_prep_del(dgCapStmPrepTask *task);

void* dgCaptionStreamPrep(int pno, int ino);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_cdb.c
// *****************************************************************************

static void _dgCdbClearStaticInfoAll();

static void _dgCdbClearCDRInfo();

static Bool _dgCdbFixedAddressOption(dgCdbOptionDataPtr p, Uint32 top);

static void _dgCdbReleaseCompileObject(NJS_CNK_OBJECT *obj);

static void _dgCdbReleaseCharCompileObject(dgCdbInfoPtr charptr);

static NJS_CNK_OBJECT* _dgCdbMakeCompileObject(NJS_CNK_OBJECT *obj);

static void _dgCdbMakeCharCompileObject(dgCdbInfoPtr charptr);

static Bool _dbCdbFixedAddresHeader(dgCdbHeaderPtr hed);

dgShapeMotion* dgCdbGetClipMotionLip(dgCdbHandle handle, Sint32 level);

dgShapeMotion* dgCdbGetClipMotionEye(dgCdbHandle handle);

dgCdbClipMotionPtr dgCdbGetClipInfo(dgCdbHandle handle);

Sint32 dgCdbGetSoundID(dgCdbHandle handle);

static Bool _dgCdbFixedAddressClipInfo(dgCdbClipMotionPtr p, dgCdbHeaderPtr hed, dgCharNo charno);

static void _dgCdbFixedAddressFaceData(dgCdbFaceDataPtr faceptr, dgCdbHeaderPtr hed);

static dgCdbInfoPtr _dgCdbDecodeCDROne(dgCdbHeaderPtr hed, void *top);

static void _dgCdbDecodeCDRAll();

static void _dgCdbLoadEndCallbackCDR(Uint32 fid, void *dst, void *u_ptr, Sint32 dmy);

void dgCdbFreeCDR();

Bool dgCdbCheckLoadEndCDR();

Bool dgCdbReadReqCDR(char *fname);

Bool dgCdbReadAndDecodeCDR(char *fname);

char* dgCdbGetCharacterName(dgCharNo charno);

char* dgCdbGetCharacterRomanName(dgCharNo charno);

Sint32 dgCdbGetNumFaceEntryTexId(dgCdbHandle handle);

Bool dgCdbSetFaceTexIdNo(dgCdbHandle handle, Sint32 no);

Bool dgCdbSetFaceTexIdNoFromFacePtr(dgCdbFaceDataPtr face, Sint32 no);

dgCdbFaceDataPtr dgCdbGetFaceDataPtr(dgCdbHandle handle);

Uint32 dgCdbGetFlag(dgCdbHandle handle);

void* dgCdbGetMotionDataPtr(dgCdbHandle handle);

dgCdbOptionDataPtr dgCdbGetOption(dgCdbHandle handle);

dgOcDrawType dgCdbGetDrawFunc(dgCdbHandle handle, dgModelType modeltype);

Uint16 dgCdbGetDrawFuncAll(dgCdbHandle handle);

static void _dgCebClearTmpLoad();
void dgCdbFreeTmp();

void* dgCdbLoadCD1toTmp(char *fname);

static void _dgCdbClearStaticInfoIID(dgCdbStaticInfoPtr p);

void dgCdbSetCDAResource(void *p);

void* dgCdbLoadCDAResource(char *fname);

void dgCdbLoadAndSetCDAResource(char *fname);

void dgCdbFreeCDAResource();

void dgCdbFreeAllCD1();

void dgCdbFreeAllCDA();

void dgCdbExecServer();
void dgCdbFinish();
static void _dgCdbClearCallbacklistOne(dgCdbCallbackListPtr p);
static void _dgCdbClearInfoOne(dgCdbInfoPtr p);

static void _dgCdbClearInfoAll();

static void _dgCdbReleaseKanji();
static void _dgCdbReleaseKanjiDef();
static void _dgCdbEntryKanjiDef();
static void _dgCdbEntryKanji();
void dgCdbSetNameTbl(char **tbl, Sint32 num);
void dgCdbSetRomanNameTbl(char **tbl, Sint32 num);
char** dgCdbGetNameTbl();
char** dgCdbGetRomanNameTbl();
Sint32 dgCdbGetNameTblMax();
Sint32 dgCdbGetRomanNameTblMax();
void dgCdbInit(Sint32 cda_pid, void *cda_res);
void dgCdbSetPIDofCDA(Sint32 pid);

Sint32 dgCdbLoadCDAPartition(char *fname);

void* dgCdbSearchChunkAddress(void *p, Uint32 cnk);

static dgCdbInfoPtr _dgCdbGetCharNo(dgCharNo charno);

static dgCdbInfoPtr _dgCdbSearchFreeInfo();

static dgCdbInfoPtr _dgCdbMakeInfo(dgCharNo charno);

NJS_CNK_OBJECT* dgCdbGetModelPtr(dgCdbHandle handle, dgModelType modeltype);

NJS_CNK_OBJECT* dgCdbGetCompileModelPtr(dgCdbHandle handle, dgModelType modeltype);

dgTexInfo* dgCdbGetTexInfoPtr(dgCdbHandle handle);

static dgCdbTrashInfoPtr _dgCdbGetFreeTrash();

static dgCdbTrashInfoPtr _dgCdbSearchLastTrash();

static void _dgCdbInsertLinkTrash(dgCdbTrashInfoPtr trash);

static dgCdbTrashInfoPtr _dgCdbSearchTrash(dgCharNo charno);

static dgCdbTrashInfoPtr _dgCdbDeleteTrash(dgCdbTrashInfoPtr trash);

Sint32 dgCdbGetTrashNum();

static Bool _dgCdbEntryTrash(dgCdbHandle handle);

void dgCdbFreeAllTrash();

static dgCdbInfoPtr _dgCdbRebirthTrash(dgCdbTrashInfoPtr trash);

void dgCdbAbort();
void dgCdbFree(dgCdbHandle handle);
void dgCdbFreeForce(dgCdbHandle handle);

static dgCharNo _dgCdbDecodeCD1Core(dgCdbDecodeCharParaPtr para, dgCdbHeaderPtr ptr, Uint32 gidx, Bool unique);

dgCharNo dgCdbReadAndDecodeCD1fromPC(char *fname, Uint32 gidx, Bool unique);

dgCharNo dgCdbDecodeCD1fromMemory(void *src, Uint32 gidx, Bool unique);

dgCharNo dgCdbReadAndDecodeCD1(char *fname, Uint32 gidx, Bool unique);

static dgCharNo _dgCdbGetCharNoUnique();

Sint32 dgCdbDecodeCharDataOne(dgCdbDecodeCharParaPtr para);

Sint32 dgCdbGetPIDofCDA();

Bool dgCdbIsAvailableCharNo(dgCharNo charno);

Sint32 dgCdbGetAfsIID(dgCharNo charno);

dgCdbHandle dgCdbReadAndDecodeCDA(dgCharNo charno, Uint32 gidx);

static void _dgCdbExecCallBackAll(dgCdbInfoPtr h);

static void _dgCdbClearCDACallbackChar(dgCdbInfoPtr h);

Bool dgCdbCancelCDACallback(dgCharNo charno, Uint32 cda_callback_serial);

static void _dgCdbLoadEndCallbackCDA(Uint32 fid, void *dst, void *u_ptr, Sint32 charno);

static Bool _dgCdbCheckCharNo(dgCharNo charno);
Bool dgCdbEntryCharReadReqCDA(dgCharNo charno, dgCdbCallbackFunc func, void *u_ptr);

Bool dgCdbEntryCharReadReqCDAEx(Uint32 *serial, dgCharNo charno, dgCdbCallbackFunc func, void *u_ptr);

dgCdbHandle dgCdbGetCharHandleFromCDA(dgCharNo charno, dgCdbCallbackFunc func, void *u_ptr);

dgCdbHandle dgCdbGetCharHandleFromCDAEx(Uint32 *serial, dgCharNo charno, dgCdbCallbackFunc func, void *u_ptr);

dgCdbHandle dgCdbGetCharHandleNoCount(dgCharNo charno);

dgCdbHandle dgCdbGetCharHandle(dgCharNo charno);

static void _dgCdbDisplayDebugWindowInfoMain(GWHWND hwnd);

static Sint32 _dgCdbGetNumBusyInfo();

static void _dgCdbDisplayDebugWindowInfoChar_Main(GWHWND hwnd, dgCdbSystemInfoPtr p, dgCdbInfoPtr info);

static void _dgCdbDisplayDebugWindowInfoChar_Komono(GWHWND hwnd, dgCdbSystemInfoPtr p, dgCdbInfoPtr info);

static void _dgCdbDisplayDebugWindowInfoChar_FaceTex(GWHWND hwnd, dgCdbSystemInfoPtr p, dgCdbInfoPtr info);

static void _dgCdbDisplayDebugWindowInfoChar_Trash(GWHWND hwnd, dgCdbSystemInfoPtr p, dgCdbInfoPtr info);

static void _dgCdbDisplayDebugWindowInfoChar(GWHWND hwnd);

void dgCdbControlDebugWindowInfoAll();

static void _dgCdbDisplayControlDebugWindowInfoAll();

static Sint32 _dgCdbGetCDACallBackListNum();

static dgCdbCallbackListPtr _dgCdbGetCDACallbackFreeList();

static void _dgCdbClearCDACallbackHeapAll();
static Uint32 _dgCdbMakeCDACallbackSerial();

static Bool _dgCdbEntryCDACallback(Uint32 *serial, dgCdbInfoPtr charptr, dgCdbCallbackFunc func, void *u_ptr);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_cellspr.c
// *****************************************************************************

NJS_CELL_SPRITE* dgCellsprCreate(NJS_CELL_SPRITE *cspr);

NJS_CELL_SPRITE* dgCellsprCreateOne(NJS_CELL_SPRITE *cspr, int no);

NJS_CELL_SPRITE* dgCellsprCreateEx(NJS_CELL_SPRITE *cspr, int num, Sint32 *tbl);

void dgCellsprDestroy(NJS_CELL_SPRITE *cspr);

static void get_rect(dgMathVector1 *rect, NJS_CELL_SPRITE *ref_cspr, int nbCell);

void dgCellsprChangeCenter_UV(NJS_CELL_SPRITE *cspr, NJS_CELL_SPRITE *ref_cspr, Float u, Float v);

void dgCellsprChangeCenter_U(NJS_CELL_SPRITE *cspr, NJS_CELL_SPRITE *ref_cspr, Float u);

void dgCellsprChangeCenter_V(NJS_CELL_SPRITE *cspr, NJS_CELL_SPRITE *ref_cspr, Float v);

void dgCellsprChangeCenter_Spos(NJS_CELL_SPRITE *cspr, NJS_CELL_SPRITE *ref_cspr, dgMathVector1 x, dgMathVector1 y);

void dgCellsprChangeCenter_SposX(NJS_CELL_SPRITE *cspr, NJS_CELL_SPRITE *ref_cspr, dgMathVector1 x);

void dgCellsprChangeCenter_SposY(NJS_CELL_SPRITE *cspr, NJS_CELL_SPRITE *ref_cspr, dgMathVector1 y);

void dgCellsprGetSpos(dgMathVector2 *spos, NJS_CELL_SPRITE *cspr, Float u, Float v);

dgCellsprNumber* dgCellsprCreateNumber(NJS_CELL_SPRITE *cspr, int num, Sint32 *tbl, dgCellsprTexData *data, int start_cell, int nb_cell, int min_disp);

static void texdata2cell(NJS_CELL *cell, dgCellsprTexData *data);

void dgCellsprSetNumber(dgCellsprNumber *cspr_num, Uint32 number);

void dgCellsprDestroyNumber(dgCellsprNumber *cspr_num);
NJS_CELL_SPRITE* dgCellsprGetNumberCellspr(dgCellsprNumber *cspr_num);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_char.c
// *****************************************************************************

void* dgCharInitManagerWatcher(void *parent_p);

void* dgCharInitManager(void *parent_p, dgCharNo player_number, Sint32 buffer_size);

Bool dgCharSetInvisible(Bool flag);

dgMathMatrix* dgCharCopyMatrix(dgCharCtrl *dst_p, dgCharCtrl *src_p);

dgOcCallback* dgCharInitCallback(dgCharCtrl *ctrl_p);

dgOcCallback* dgCharInitCallbackNoObject(dgCharCtrl *ctrl_p);

void dgCharSetCallbackObject(dgCharCtrl *ctrl_p, Sint32 index, dgCharNo charno);

dgCharObjCtrl* dgCharGetCharObjCtrl(dgCharCtrl *ctrl_p, Sint32 index);

dgCharObjCtrl* dgCharGetCharObjCtrlFromNode(dgCharCtrl *ctrl_p, Sint32 node);

void dgCharLinkCharObjCtrl(dgCharObjCtrl *ctrl1_p, dgCharObjCtrl *ctrl2_p);

dgCharObjCtrl* dgCharUnlinkCharObjCtrl(dgCharObjCtrl *ctrl_p, dgCharNo charno);

dgCharObjCtrl* dgCharLinkAllCharObjCtrl(dgCharCtrl *ctrl_p);

void dgCharDeleteCallbackObject(dgCharCtrl *ctrl_p, Sint32 index);

void dgCharDeleteCallbackObjectOne(dgCharCtrl *ctrl_p, Sint32 index, dgCharNo charno);

void dgCharCopyWalk(dgCharCtrl *dst_p, dgCharCtrl *src_p);

void dgCharDeleteAllCallbackObject(dgCharCtrl *ctrl_p);

void dgCharSetDisplayListEx(dgCharCtrl *ctrl_p, dgMainDisplayListPrio body_prio, dgMainDisplayListPrio item_prio);

dgMathVector3* dgCharSetCallbackGetViewPositionPtr(dgCharCtrl *ctrl_p, Sint32 index);

dgMathVector3* dgCharSetCallbackGetWorldPositionPtr(dgCharCtrl *ctrl_p, Sint32 index);

dgMathMatrix* dgCharSetCallbackGetViewMatrixPtr(dgCharCtrl *ctrl_p, Sint32 index);

void dgCharSetFrameSpeed(float speed);
float dgCharGetFrameSpeed();

dgCharCtrl* dgCharInit(void *parent_p, NJS_CNK_OBJECT *ref_obj_p, dgCharNo char_number);

dgCharCtrl* dgCharInitFromCharNo(void *parent_p, dgCharNo ref_char_no, dgCharNo char_number);

dgCharCtrl* dgCharInitObj(void *parent_p, Sint32 char_number);

void* dgCharSetObjParent(void *parent_p);

void dgCharSetMotionDataToObj(dgCharObjCtrl *objctrl_p, dgCharMotionData *motdata_p);

void dgCharGetRootTrans(dgCharCtrl *ctrl_p, dgMathVector3 *vec_p);

void dgCharFinish(dgCharCtrl *ctrl_p);
void dgCharReset(dgCharCtrl *ctrl_p);
void dgCharResetWalk(dgCharCtrl *ctrl_p);

dgCharMotionData* dgCharGetSpecialMotion(dgCharCtrl *ctrl_p);

void dgCharSetMotion(dgCharCtrl *ctrl_p, mtnMotion *mot_p, float frame);

void dgCharCalcCenterPosition(dgCharCtrl *ctrl_p, dgMathVector3 *pos_p);

void dgCharCalcCenterMatrix(dgCharCtrl *ctrl_p, dgMathMatrix *mat_p);

void dgCharCalcCenter(dgCharCtrl *ctrl_p, dgMathMatrix *mat_p, dgMathVector3 *pos_p);

void dgCharSetDrawTypeForce(dgCharCtrl *ctrl_p, dgOcDrawType type);
void dgCharResetDrawTypeForce(dgCharCtrl *ctrl_p);

void dgCharDraw(dgCharCtrl *ctrl_p);

void dgCharDrawByPose(dgCharCtrl *ctrl_p, mtnPose *pose_p);

void dgCharDrawObject(dgCharCtrl *ctrl_p, dgCharLevel level);

void dgCharDrawNoMatrix(dgCharCtrl *ctrl_p);

Bool dgCharSetWireMode(Bool flag);

static Bool charman_test_obj(int param0);

static NJS_CNK_OBJECT* charman_init(CharManTask *task_p, dgCharNo player_number, Sint32 buffer_size);

static void charman_exec(CharManTask *task_p);
static void charman_disp(CharManTask *task_p);

static void charman_watch_disp(CharManWatchTask *task_p);

static void charman_watch_del(CharManWatchTask *task_p);

static void charman_watch_disp_debug(GWHWND wnd_h);

static void charman_del(CharManTask *task_p);

static void charctrl_init_core(CharManTask *man_task_p, dgCharCtrl *ctrl_p, NJS_CNK_OBJECT *ref_obj_p, dgCharNo char_number);

static void charctrl_init_from_charno(dgCharCtrl *ctrl_p, dgCharNo ref_char_no, dgCharNo char_number);

static void charctrl_init(dgCharCtrl *ctrl_p, NJS_CNK_OBJECT *ref_obj_p, dgCharNo char_number);

static void char_set_callbackparam(dgOcCallback *callback_p, dgCharObjCtrl *objctrl_p);

static void charctrl_init_obj(dgCharCtrl *ctrl_p, dgCharNo char_number);

static dgCharObjCtrl* char_init_objctrl(dgCharCtrl *parent_ctrl_p, dgCharNo charno);

static void charctrl_del(dgCharCtrl *ctrl_p);

static CharCallbackValue* char_get_callback_value(dgCharCtrl *ctrl_p, dgOcCallback *callback_p, Sint32 index);

static void charctrl_callback(int param);

static void charctrl_callback_get_position(int param);

static void char_draw_obj_no_matrix(dgCharObjCtrl *ctrl_p);

static void char_draw_obj(dgCharObjCtrl *ctrl_p);

static void char_draw_constrain();

static void char_draw_obj_no_matrix_sub(dgCharObjCtrl *ctrl_p, dgCharLevel char_level);

static void char_draw_obj_sub(dgCharObjCtrl *ctrl_p, dgCharLevel level);

static float char_get_model_radius(NJS_CNK_OBJECT *obj_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_charlevel.c
// *****************************************************************************

void dgCharLevelInit(float *init_level, float margin);

void dgCharLevelFinish();

dgCharLevel dgCharLevelGetLevel(dgCharLevel current_level);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_charmotion.c
// *****************************************************************************

void dgCharMotionSetSpeed(float speed);
void dgCharMotionCalc(dgCharMotionCtrl *mot_ctrl_p, dgCharCtrl *ctrl_p);

void dgCharMotionAbsolute(dgCharMotionData *data_p);

void dgCharMotionSetCtrl(dgCharMotionCtrl *mot_ctrl_p, dgCharCtrl *ctrl_p, dgCharMotionData *data_p, Sint32 index);

Sint32 dgCharMotionGetJointsNum(dgCharMotionData *data_p, Sint32 index);

void dgCharMotionSetMotion(dgCharMotionCtrl *mot_ctrl_p, dgCharCtrl *ctrl_p, Sint32 index);

void dgCharMotionSetMotionCharObj(dgCharObjCtrl *ctrl_p, Sint32 index);
void dgCharMotionSetTotalFrameCharObj(dgCharObjCtrl *ctrl_p, float frame);

Bool dgCharMotionGo(dgCharMotionCtrl *mot_ctrl_p, dgCharCtrl *ctrl_p);

void dgCharMotionGoCharObj(dgCharObjCtrl *ctrl_p);

void dgCharMotionSyncObjWithParent(dgCharObjCtrl *obj_ctrl_p, dgCharMotionCtrl *parent_mot_ctrl_p, dgCharCtrl *parent_ctrl_p);

void dgCharMotionCalcCharObj(dgCharObjCtrl *ctrl_p);

void dgCharMotionGoSLECharObj(dgCharObjCtrl *ctrl_p);

void dgCharMotionGoNextCharObj(dgCharObjCtrl *ctrl_p);

Bool dgCharMotionGoSLE(dgCharMotionCtrl *mot_ctrl_p, dgCharCtrl *ctrl_p);

Sint32 dgCharMotionGoNext(dgCharMotionCtrl *mot_ctrl_p, dgCharCtrl *ctrl_p);

void dgCharMotionAdjust(dgCharMotionCtrl *mot_ctrl_p, dgCharCtrl *ctrl_p);

Bool dgCharMotionSetTotalFrame(dgCharMotionCtrl *mot_ctrl_p, dgCharCtrl *ctrl_p, float total_frame);

void dgCharMotionSetWalkFromTotalFrame(dgCharMotionCtrl *mot_ctrl_p, dgCharCtrl *char_ctrl_p);

Sint32 dgCharMotionGetFrame(dgCharMotionCtrl *mot_ctrl_p, Sint32 index, Sint32 internal_index);

Sint32 dgCharMotionGetFrameFromData(dgCharMotionData *data_p, Sint32 index, Sint32 internal_index);

Sint32 dgCharMotionCalcTotalFrameFromData(dgCharMotionData *motion_data_p, Sint32 index);

Sint32 dgCharMotionCalcTotalFrame(dgCharMotionCtrl *mot_ctrl_p);

static void motion_set(dgCharMotionCtrl *mot_ctrl_p, dgCharCtrl *ctrl_p, dgCharMotionElement *elem_p, float frame);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_charshape.c
// *****************************************************************************

dgShapeMotion** dgCharShapeGetTableFromMotionData(dgCharMotionData *motdata_p);

Bool dgCharShapeIsShapeDataFromMotionData(dgCharMotionData *motdata_p);

Sint32 dgCharShapeGetShapeNumFromMotionData(dgCharMotionData *motdata_p);

void dgCharShapeAbsFromMotionData(dgCharMotionData *motdata_p);

dgCharShapeCtrl* dgCharShapeInit(dgCharCtrl *char_ctrl_p, dgShapeMotion **shape_pp);

dgCharShapeCtrl* dgCharShapeInitFromMotionData(dgCharCtrl *char_ctrl_p, dgCharMotionData *motdata_p);

dgCharShapeCtrl* dgCharShapeInitLink(dgCharObjCtrl *obj_ctrl_p);

Bool dgCharShapeGo(dgCharShapeCtrl *ctrl_p);

void dgCharShapeGoLink(dgCharShapeCtrl *ctrl_p);
void dgCharShapeCalc(dgCharShapeCtrl *ctrl_p);
void dgCharShapeSetIndex(dgCharShapeCtrl *ctrl_p, Sint32 index);

void dgCharShapeSetFrame(dgCharShapeCtrl *ctrl_p, float frame);

float dgCharShapeGetMaxFrame(dgCharShapeCtrl *ctrl_p);
float dgCharShapeGetFrame(dgCharShapeCtrl *ctrl_p);
static void shape_del(dgCharShapeCtrl *ctrl_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_debfile.c
// *****************************************************************************

int dgDebFileGetSize(char *filename);
int dgDebFileExist(char *filename);
void dgDebFileLoad(void *address, char *filename);
void dgDebAssertPrintf(int flag, char *fmt);
void dgDebFileWrite(char *filename, void *address, int len);
void dgDebFileCopyGD2PC(char *filename, void *buf, int bufsize);
void dgDebFilePrintDirInConsole();
void dgDebFileGetCWD(char *cwd, int maxlen);
void dgDebFileInit();
void dgDebFilePushDirectory();
void dgDebFilePopDirectory();
void dgDebFileChangeDirectory(char *dir);
int dgDebFileCopyAllGD2PC(void *buf, int bufsize, int opt);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_debug.c
// *****************************************************************************

int dgDebugCheckWho(int w);
void dgDebugSetWho(int w);
void dgDebugSetWindowFlag(Bool flag);
Bool dgDebugGetWindowFlag();
void dgDebugSwitchWindowFlag();
void dgDebugSetWindowTransFlag(Bool flag);
Bool dgDebugGetWindowTransFlag();
void dgDebugSwitchWindowTransFlag();
void dgDebugDefaultWindowColor();

void dgDebugInitWindow();

void dgDebugExitWindow();
static void debug_init(DebugTask *task);
static void debug_exec(DebugTask *task);

static void task_draw(GWHWND hWnd);

static void task_del(GWHWND hwnd);
static void debug_disp(DebugTask *task);
static void debug_del(DebugTask *task);

void* dgDebugSet(void *parent_task);

void* dgDebugGetTaskPtr();

static void dummy_client_draw(GWHWND hWnd);

static void dummy_destructor(GWHWND hWnd);

static float get_value(dgDebugEditInfo *info, void *task);

static void set_value(dgDebugEditInfo *info, void *task, float data);

static void window_disp(dgDebugWindowTask *task);

static void window_del(dgDebugWindowTask *task);
void* dgDebugGetParentTaskOfWindow(GWHWND hWnd);

GWHWND dgDebugCreateWindow_Sub(void *parent_task, GWHWND hWnd, char *caption, int x, int y, void (*client_draw)(), void (*destructor)(), Sint32 param1, Sint32 param2, dgDebugEditInfo *info, int info_num);

dgMemPartition* dgDebugGetMemPartition();
void dgDebugInitPerformance();

void dgDebugWatchPerformance();

Bool dgDebugIsDropFrame();
Uint32 dgDebugGetPerformanceMicro();

void dgDebugStartPerformance();

void dgDebugEndPerformance();
void dgDebugStartTaskPerformance();
void dgDebugEndTaskPerformance();
Sint32 dgDebugGetTaskPerformance();
void dgDebugStartPrePerformance();
void dgDebugEndPrePerformance();
void dgDebugStartPostPerformance();
void dgDebugEndPostPerformance();
void dgDebugStartGindowsPerformance();
void dgDebugEndGindowsPerformance();
void dgDebugCreatePerformanceWindow(void *parent_p);
static void performance_disp(GWHWND hwnd);
static void performance_del(GWHWND hwnd);

void dgDebugCreatePeripheralInfoWindow(void *parent_p);

static void pripheralinfo_button_right_callback(GWHWND hwnd, Sint32 mode);
static void pripheralinfo_button_left_callback(GWHWND hwnd, Sint32 mode);

static void peripheralinfo_disp(GWHWND hwnd);

static void peripheralinfo_del(GWHWND hwnd);
void dgDebugCreateRenderInfoWindow(void *parent_p);

static void renderinfo_disp(GWHWND hwnd);

static void renderinfo_del(GWHWND hwnd);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_drawcallback.c
// *****************************************************************************

static void _dgDrawCallBackClearInfoAll(dgDrawCallBackSystemInfoPtr f);
void dgDrawCallBackInit();
void dgDrawCallBackFinish();
void dgDrawCallBackDisplayControlDebugWindow();

static void _dgDrawCallBackControlDebugWindowInfo();

static void _dgDrawCallBackDisplayDebugWindowInfo(GWHWND hwnd);

static void _dgDrawCallBackPrintList(GWHWND hwnd);

static dgDrawCallBackInfoPtr _dgDrawCallBackGetListPtr();
static Sint32 _dgDrawCallBackGetListMax();
static dgDrawCallBackInfoPtr _dgDrawCallBackGetListMaster();
static void _dgDrawCallBackSetListMaster(dgDrawCallBackInfoPtr lst);
static Bool _dgDrawCallBackIsBusyStatList(Sint32 stat);
static Bool _dgDrawCallBackIsFreeStatList(Sint32 stat);
static void _dgDrawCallBackSetBusyStatList(Sint32 *stat);

static dgDrawCallBackInfoPtr _dgDrawCallBackGetFreeList();

static dgDrawCallBackInfoPtr _dgDrawCallBackSearchListLast();

static void _dgDrawCallBackAddListLast(dgDrawCallBackInfoPtr lst);

static dgDrawCallBackInfoPtr _dgDrawCallBackSearchListSerial(Uint32 serial);

static void _dgDrawCallBackDeleteList(dgDrawCallBackInfoPtr lst);

Sint32 dgDrawCallBackGetListEntryNum();

static Uint32 _dgDrawCallBackMakeListSerialID();
static void _dgDrawCallBackClearListOne(dgDrawCallBackInfoPtr p);

static dgDrawCallBackInfoPtr _dgDrawCallBackEntryList(Uint32 *serial);

Uint32 dgDrawCallBackEntryFunc(dgDrawCallBackFunc func, Sint32 mode, Sint32 p1, Sint32 p2, Sint32 p3, Sint32 p4);

Sint32 dgDrawCallBackFreeFuncAll(dgDrawCallBackFunc func);

Bool dgDrawCallBackFreeFuncOne(dgDrawCallBackFunc func);

static dgDrawCallBackInfoPtr _dgDrawCallBackSearchListFunc(dgDrawCallBackFunc func);

void dgDrawCallBackFreeSerial(Uint32 serial);

void dgDrawCallBackExecServer();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_aftrimg.c
// *****************************************************************************

static void aftrimg_init(AftrimgTask *task, dgMathVector3 *spos_ptr, dgMathVector3 *epos_ptr, Uint32 col);

static void aftrimg_exe(AftrimgTask *task);

static void copy_pos_to_poly(NJS_POLYGON_VTX *poly, dgMathVector3 *pos);

static void aftrimg_dsp(AftrimgTask *task);

static void aftrimg_del(AftrimgTask *task);

void* dgEffAfterImageSub(void *parent, dgMathVector3 *spos_ptr, dgMathVector3 *epos_ptr, Uint32 col);

static void ExtendSpos(dgMathVector3 *old_spos_ptr, dgMathVector3 *epos_ptr, Float length, dgMathVector3 *new_spos_ptr);

static void aftrimg_set_pos(AftrimgSetTask *task);

static void aftrimg_set_init(AftrimgSetTask *task, Float frame, dgEffAftrimgType type);
static void aftrimg_set_exe(AftrimgSetTask *task);
static void aftrimg_set_dsp(AftrimgSetTask *task);
static void aftrimg_set_del(AftrimgSetTask *task);

void* dgEffAftrimgSet(void *parent, Float frame, dgEffAftrimgType type);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_aura.c
// *****************************************************************************

static void aura_init(AuraTask *task, dgEffAuraType type);
static void aura_exe(AuraTask *task);
static void copy_pos_to_quad(NJS_QUAD_TEXTURE_EX *quad, dgMathVector3 *pos);

static void aura_dsp(AuraTask *task);

static void aura_del(AuraTask *task);

void* dgEffAuraSet(void *parent, dgEffAuraType type);

static void simple_aura_init(SimpleAuraTask *task, dgMathVector3 **pos_ptr_tbl, dgEffSimpleAuraType type);

static void simple_aura_exe(SimpleAuraTask *task);

static void simple_aura_dsp(SimpleAuraTask *task);

void* dgEffSimpleAura(void *parent, dgMathVector3 **pos_ptr_tbl, dgEffSimpleAuraType type);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_basic.c
// *****************************************************************************

static Float GetTotalFrame();

Float dgEffCountRenew(dgEffCountData *count_data);

Float dgEffCountGetDiff(dgEffCountData *count_data);
Bool dgEffCountCheckEnd(dgEffCountData *count_data);
void dgEffCountInit(dgEffCountData *count_data, Float frame);
void MultiFloatPoint3(dgMathVector3 *dst, Float val, dgMathVector3 *src);

void dgEffGetDirMtrx(dgMathMatrix *m, dgMathVector3 *vctr);

void dgEffWpos2Vpos(dgMathVector3 *vpos, dgMathVector3 *wpos);

void dgEffVpos2Spos(dgMathVector3 *spos, dgMathVector3 *vpos);

void dgEffWpos2Spos(dgMathVector3 *spos, dgMathVector3 *wpos);

void dgEffVpos2Wpos(dgMathVector3 *wpos, dgMathVector3 *vpos);

static Bool check_cross_polygon(dgMathVector3 *v1, dgMathVector3 *v2);

static void swap_pos(dgMathVector3 *pos1, dgMathVector3 *pos2);

void CorrectCrossPolygon(dgMathVector3 *pos);

void TextureDraw(dgMathVector3 *pos, Uint32 col);

static void calc_rot_vertex_sub(dgMathVector3 *vertex_pos, VertexSubParam *param, Sint8 type);

static void calc_rot_vertex_sub2(dgMathVector3 *vertex_pos, VertexSubParam *param, Sint8 type);

void dgEffCalcVertexRotZ(dgMathVector3 *vertex_pos, dgMathVector3 *base_pos_ptr, dgMathVector3 *offset_ptr, Angle ang);

void dgEffCalcVertexRotZ2(dgMathVector3 *vertex_pos, dgMathVector3 *base_pos_ptr, dgMathVector3 *offset_ptr, Angle ang);

void dgEffCalcVertexRotY(dgMathVector3 *vertex_pos, dgMathVector3 *base_pos_ptr, dgMathVector3 *offset_ptr, Angle ang);

void dgEffSetPlanePosData(NJS_TEXTURE_VTX *poly, dgMathVector3 *pos, Float size, Angle ang);

void dgEffSetDefaulUvTexVtx(NJS_TEXTURE_VTX *poly);

void dgEffTextureDrawRotView(dgMathVector3 *base_vpos, Float size, Uint32 col, Angle ang);

void dgEffTextureDrawRotScaleView(dgMathVector3 *base_vpos, dgMathVector3 *scale_ptr, Uint32 col, Angle ang);

void dgEffTextureDrawRot(dgMathVector3 *base_pos_ptr, Float size, Uint32 col, Angle ang);

void dgEffTextureDrawRotScale(dgMathVector3 *base_pos_ptr, dgMathVector3 *scale_ptr, Uint32 col, Angle ang);

dgTexInfo* dgEffGetTexinfo();
void* dgEffGetDataAdr();
void* dgEffGetEffInitTaskPtr();
void dgEffSetEffInitTaskPtr(void *ptr);
void dgEffSetTexnumTbl(Uint32 ix, Uint32 texnum);
void dgEffSetCixTbl(Uint32 ix, Uint32 cix);

void* dgEffSet(void *parent, dgEffSetParam *param);

Uint32 dgEffGetTexNum(Uint32 tex_ix);
Uint32 dgEffGetCixNum(Uint32 cix_ix);
Float dgEffCalcLargerSmaller(Float ratio);
void dgEffGetTexVtxUV16(NJS_TEXTURE_VTX *poly, Sint8 pat_num);
void dgEffGetTexVtxUV4(NJS_TEXTURE_VTX *poly, Sint8 pat_num);
void dgEffGetQuadUV16(NJS_QUAD_TEXTURE *quad, Sint8 pat_num);

void dgEffGetQuadUV4Ex(NJS_QUAD_TEXTURE_EX *quad, Sint8 pat_num);

void dgEffGetQuadUV16Ex(NJS_QUAD_TEXTURE_EX *quad, Sint8 pat_num);

void dgEffCalcSpos2QuadExPos(NJS_QUAD_TEXTURE_EX *quad, dgMathVector3 *spos, Float size);

void dgEffPlayerGetWPosition(dgEffPlyColType type, dgMathVector3 *pos);
void dgEffPlayerGetVPosition(dgEffPlyColType type, dgMathVector3 *pos);
void dgEffSetPlayerWCol(Sint8 col_no, dgMathVector3 *pos_ptr);
void dgEffSetPlayerVCol(Sint8 col_no, dgMathVector3 *pos_ptr);
void dgEffPlayerGetBasePosition(dgMathVector3 *pos, dgMathAngle3 *ang);
dgMathVector3* dgEffPlayerGetBasePosPtr();
dgMathAngle3* dgEffPlayerGetBaseAngPtr();

void dgEffUV16Draw(dgMathVector3 *pos_ptr, dgMathVector3 *offset_ptr, Sint8 pat_no, Uint32 col);

void dgEffUV16DrawView(dgMathVector3 *vpos_ptr, dgMathVector3 *offset_ptr, Sint8 pat_no, Uint32 col);

void dgEffUV4DrawRotView(dgMathVector3 *pos_ptr, dgEffUVParam *param);

void dgEffUV4DrawRot(dgMathVector3 *pos_ptr, dgEffUVParam *param);

void dgEffUV4DrawView(dgMathVector3 *pos_ptr, dgMathVector3 *offset_ptr, Sint8 pat_no, Uint32 col);

void dgEffUV4Draw(dgMathVector3 *pos_ptr, dgMathVector3 *offset_ptr, Sint8 pat_no, Uint32 col);

void dgEffCalcMatrixPlanePosView(dgMathVector3 *vpos_tbl, dgMathMatrix *mtrx_ptr, dgMathVector3 *offset_ptr, dgMathAngle3 *ang_ptr);

void dgEffTextureDrawRotQuarter(dgMathVector3 *center_pos_ptr, dgMathVector3 *size_ptr, Uint32 col, Angle ang);

static void calc_rot_vertex_quarter_sub(dgMathVector3 *vertex_pos, VertexSubParam *param, Sint8 type);

void dgEffTextureDrawRotQuarterView(dgMathVector3 *center_pos_ptr, dgMathVector3 *size_ptr, Uint32 col, Angle ang);

void dgEffTextureDrawRotQuarterScreen(dgMathVector3 *center_pos_ptr, dgMathVector2 *size_ptr, Uint32 col, Angle ang);

void dgEffDspBiriRotView(dgMathVector3 *pos_ptr, dgEffUVParam *param, dgEffBiriType type);

void dgEffDspBiriView(dgMathVector3 *pos_ptr, dgMathVector3 *offset_ptr, Sint8 pat_no, dgEffBiriType type);

void dgEffDspBiri(dgMathVector3 *pos_ptr, dgMathVector3 *offset_ptr, Sint8 pat_no, dgEffBiriType type);

void dgEffDspBiriRot(dgMathVector3 *pos_ptr, dgEffUVParam *param, dgEffBiriType type);

void dgEffDspScreenPoly(Float priority, Uint32 col);

Bool dgEffSeqIsPlay2();
void dgEffSetSeqPlay2Flg(Bool flg);

void dgEffQuadExToTexVtx(NJS_TEXTURE_VTX *poly, NJS_QUAD_TEXTURE_EX *quad, Uint32 col);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_beam.c
// *****************************************************************************

void dgEffBeamCalcPos(dgMathVector3 *pos_ptr, dgMathVector3 *spos_ptr, dgMathVector3 *epos_ptr, Float ratio);

void dgEffBeamCalcFollowPos(dgMathVector3 *pos_ptr, dgMathVector3 *spos_new_ptr, dgEffBeamFollowParam *param);

static void heart1_init(Heart1Task *task, HeartParam *param);
static void heart1_exe(Heart1Task *task);

static void heart1_dsp(Heart1Task *task);

static void* heart1_set(void *parent, HeartParam *param);

static void heart_init(HeartTask *task, dgEffBeamParam *param, Bool ok_flg);

static void heart_exe(HeartTask *task);

static void heart_dsp(HeartTask *task);

static void* dgEffHeart(void *parent, dgEffBeamParam *param, Bool ok_flg);

static void simple_heart_beam_init(AttackBeamTask *task, dgEffBeamParam *param, Uint8 ok_flg);

static void simple_heart_beam_dsp(AttackBeamTask *task);

static void* dgEffBeamHeartSimple(void *parent, dgEffBeamParam *beam_param, Uint8 ok_flg);

static void heart_beam_init(HeartBeamTask *task, dgEffBeamParam *param, Uint8 ok_flg);

static void heart_beam_exe(HeartBeamTask *task);

static void heart_beam_dsp(HeartBeamTask *task);

static void heart_beam_del(HeartBeamTask *task);

void* dgEffBeamHeart(void *parent, dgEffBeamParam *beam_param, Uint8 ok_flg);

static void calc_vertex_2D_sub(dgEffPosWidthParam *param, dgMathVector3 *vertex);

void dgEffBeamCalcVertex2D(dgMathVector3 *sspos_ptr, dgMathVector3 *sepos_ptr, Float width, dgMathVector3 *vertex);

Bool dgEffCalcBeamVertex(dgEffPosWidthParam *param, NJS_POINT3 *vertex);

void dgEffBeamDraw(dgEffBeamDrawParam *param);

static void attack_beam_init(AttackBeamTask *task, dgEffBeamParam *param, Uint8 ok_flg);

static void attack_beam_exe(AttackBeamTask *task);

static void attack_beam_dsp(AttackBeamTask *task);

static void attack_beam_del(AttackBeamTask *task);

void* dgEffBeamAttackPlayer(void *parent, dgEffBeamParam *beam_param, Uint8 ok_flg);

void dgEffCopyVector2TexVtx(NJS_TEXTURE_VTX *p, dgMathVector3 *pos);
static void enemy_attack_beam_init(EnemyAttackBeamTask *task, dgEffBeamParam *param, Bool follow_flg);

static void enemy_attack_beam_exe(EnemyAttackBeamTask *task);

static void enemy_attack_beam_dsp(EnemyAttackBeamTask *task);

void* dgEffBeamAttackEnemy(void *parent, dgEffBeamParam *beam_param, Bool follow_flg);

static void charge_init(ChargeTask *task, ChargeParam *param, Sint8 type);
static void charge_exe(ChargeTask *task);

static void charge_dsp(ChargeTask *task);

static void charge_del(ChargeTask *task);

void* dgEffBeamCharge(void *parent, ChargeParam *param, Sint8 type);

static void charge2_init(Charge2Task *task, dgEffBeamSetParam *param);

static void charge2_exe(Charge2Task *task);

static void charge2_beam_dsp(Charge2Task *task, Float size, Float alpha);

static void charge2_dsp(Charge2Task *task);

static void charge2_del(Charge2Task *task);

static void* dgEffBeamCharge2(void *parent, dgEffBeamSetParam *param);

static void larger_robo_beam(void *beam_task);
static void shoot_robo_beam(void *beam_task);
void dgEffReqRoboBeam(void *task, dgEffReqRoboBeamType type);
void dgEffSetRoboBeamType(void *task, dgEffRoboBeamType type);
void dgEffSetRoboBeamRelativeFlg(void *task, Sint8 flg);
void dgEffSetRoboBeamScale(void *task, Float scale);
void dgEffSetRoboBeamLengthScale(void *task, Float scale);
void dgEffSetRoboBeamStartPos(void *task, dgMathVector3 *pos_ptr);
dgMathVector3* dgEffGetRoboBeamGetPosPtr(void *task);
void dgEffSetRoboBeamRelativeMatrix(dgMathMatrix *mtrx_ptr);

static void boss_beam_head_dsp(dgMathVector3 *pos_ptr, Float scale, Sint8 pat_no, Sint16 tex_no);

static void boss_tame_init(BossTameTask *task, dgMathVector3 *pos_ptr, Float scale, Sint16 type);
static void boss_tame_exe(BossTameTask *task);

static void boss_tame_dsp(BossTameTask *task);

void* dgEffBeamDXPurgeTame(void *parent, dgMathVector3 *pos_ptr, Float scale, Sint16 type);

static void boss_beam_init(BossBeamTask *task, dgEffBeamParam *param, Sint16 type);

static void boss_beam_exe(BossBeamTask *task);

static void boss_beam_dsp(BossBeamTask *task);

static void* dgEffBeamDXPurge(void *parent, dgEffBeamParam *param, Sint16 type);

dgMathVector3* dgEffBeamDXPurgeGetPosPtr(void *task);

void* dgEffBeamSet(void *parent, dgEffBeamSetParam *param);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_explode.c
// *****************************************************************************

static void explode_sub_init(ExplodeSubTask *task, ExplodeParam *param);
static void explode_sub_exe(ExplodeSubTask *task);

static void explode_sub_dsp(ExplodeSubTask *task);

static void explode_sub_del(ExplodeSubTask *task);

static void* explode_sub(void *parent, ExplodeParam *explode_param);

void* dgEffExplodeS(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void explode_m_init(ExplodeMTask *task, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void explode_m_exe(ExplodeMTask *task);

static void explode_m_dsp(ExplodeMTask *task);

static void explode_m_del(ExplodeMTask *task);

void* dgEffExplodeM(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void explode_l_init(ExplodeLTask *task, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void explode_l_exe(ExplodeLTask *task);

static void explode_l_dsp(ExplodeLTask *task);

static void explode_l_del(ExplodeLTask *task);

void* dgEffExplodeL(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void spark1_init(Spark1Task *task, dgMathVector3 *pos_ptr, Float scale, Float frame);
static void spark1_exe(Spark1Task *task);

static void spark1_dsp(Spark1Task *task);

static void* spark1_set(void *parent, dgMathVector3 *pos_ptr, Float scale, Float frame);

static void biri1_init(Biri1Task *task, dgMathVector3 *pos_ptr, Float scale, Float frame);

static void biri1_exe(Biri1Task *task);

static void biri1_dsp(Biri1Task *task);

static void* biri1_set(void *parent, dgMathVector3 *pos_ptr, Float scale, Float frame);

static void biri_init(BiriTask *task, dgMathVector3 **pos_ptr, Float frame, Sint16 type);

static void biri_exe(BiriTask *task);

static void biri_dsp(BiriTask *task);

void* dgEffYarabi(void *parent, dgMathVector3 **pos_ptr, Float frame, Sint16 type);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_hit.c
// *****************************************************************************

static void hit_player_init(HitPlayerTask *task, dgMathVector3 *pos, Float frame, Sint8 eff_type);

static void hit_player_exe(HitPlayerTask *task);

static void hit_player_dsp(HitPlayerTask *task);

static void hit_player_del(HitPlayerTask *task);

void* dgEffHitPlayer(void *parent, dgMathVector3 *pos, Float frame, Sint8 eff_type);

static void hit_boss_init(HitBossTask *task, dgMathVector3 *pos, Float frame, Float scale);
static void hit_boss_exe(HitBossTask *task);

static void hit_boss_dsp(HitBossTask *task);

static void hit_boss_del(HitBossTask *task);

void* dgEffHitBoss(void *parent, dgMathVector3 *pos, Float frame, Float scale);

static void defense_init(DefenseTask *task, dgMathVector3 *base_pos, Float frame, Bool flg);

static void defense_exe(DefenseTask *task);

static void defense_dsp(DefenseTask *task);

void* dgEffHitDefensePlayer(void *parent, dgMathVector3 *base_pos, Float frame, Bool flg);

void dgEffSetDefenseDir(void *task, Sint8 dir);
void* Ihit02(void *parent, EffSprParam *param);
void* Jhit(void *parent, EffSprParam *param);
void* Ihit01(void *parent, EffSprParam *param);
static void nehit01_init(NehitTask *task, NehitParam *param, Sint8 type);
static void nehit01_exe(NehitTask *task);

static void nehit01_dsp(NehitTask *task);

static void* nehit(void *parent, NehitParam *param, Sint8 type);

void* dgEffNehit01(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffNehit02(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffNehit03(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void nehit04_init(NehitTask *task, dgMathVector3 *pos_ptr, Float frame, Float scale);
static void nehit04_exe(NehitTask *task);

static void nehit04_dsp(NehitTask *task);

void* dgEffNehit04(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void dgEffSetRelative(void *task, Sint32 type);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_inout.c
// *****************************************************************************

static void poison_init(PoisonTask *task, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void poison_exe(PoisonTask *task);

static void poison_dsp(PoisonTask *task);

static void poison_del(PoisonTask *task);

void* dgEffInoutPoison(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void nein_init(NeinTask *task, NeinParam *param);

static void nein_exe(NeinTask *task);

static void nein_dsp(NeinTask *task);

static void nein_del(NeinTask *task);

static void* nein_sub(void *parent, NeinParam *param);

void* dgEffInoutNeinLong(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffInoutNein(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffInoutNeout(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffInoutNeescape(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffInoutNminLong(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffInoutNmin(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffInoutNmescape(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffInoutNiin(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffInoutNiout(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffInoutNiescape(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffInoutN4out(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void* dgEffInoutN4escape(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

static dgMathMatrix* DisappearMtrxGet(void *task);
static void disappear_robo_init(DisappearTask *task, Float frame, Sint8 type);

static void disappear_robo_exe(DisappearTask *task);

static void disappear_robo_dsp(DisappearTask *task);

static void* DisappearRoboMtrxSet(void *parent, Float frame, Sint8 type);

dgMathMatrix* dgEffGetInoutMatrixPtr(void *task);

static void kirakira_init(KiraTask *task, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void kirakira_exe(KiraTask *task);

static void kirakira_dsp(KiraTask *task);

static void kirakira_del(KiraTask *task);

void* dgEffInoutKirakira(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void niget_init(NigetTask *task, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void niget_exe(NigetTask *task);

static void niget_dsp(NigetTask *task);

static void niget_del(NigetTask *task);

void* dgEffInoutNiget(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

void dgEffSetRelativeNein(void *task);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_other.c
// *****************************************************************************

static void henkei_init(HenkeiTask *task, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void henkei_exe(HenkeiTask *task);

static void henkei_dsp(HenkeiTask *task);

static void henkei_del(HenkeiTask *task);

void* dgEffHenkei(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void ch5_init(Ch5Task *task, dgMathVector3 *pos_ptr, Float frame, Float scale);
static void ch5_exe(Ch5Task *task);

static void ch5_dsp(Ch5Task *task);

static void ch5_del(Ch5Task *task);

void* dgEffCh5(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void paper_init(PaperTask *task, PaperParam *param);

static void paper_exe(PaperTask *task);

static void paper_dsp(PaperTask *task);

void* SetPaper(void *parent, PaperParam *param);

static void rain_init(RainTask *task, dgMathVector3 *vctr, Float length);

static void rain_exe(RainTask *task);

static void rain_dsp(RainTask *task);

void* Rain(void *parent, dgMathVector3 *vctr, Float length);

static void particle_init(ParticleTask *task, dgMathVector3 *base_pos, Float offset, Float frame);

static void particle_exe(ParticleTask *task);

static void particle_dsp(ParticleTask *task);

void* Fire(void *parent, dgMathVector3 *base_pos_ptr, Float offset, Float frame);

void* dgEffDance(void *parent, dgEffSetParam *param);

static void shoot_eff_init(ShootEffTask *task, dgMathVector3 *pos, Float frame, Float scale);
static void shoot_eff_exe(ShootEffTask *task);

static void shoot_eff_dsp(ShootEffTask *task);

void* dgEffShoot(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void rhythm_init(RhythmTask *task, dgMathVector3 *pos_ptr, Float frame, Float scale);
static void rhythm_exe(RhythmTask *task);

static void rhythm_dsp(RhythmTask *task);

void* dgEffRhythm(void *parent, dgMathVector3 *pos_ptr, Float frame, Float scale);

static void michael_rhythm_init(MichaelRhythmTask *task, dgMathVector3 *pos_ptr, Float frame, dgEffRhythmType type);
static void michael_rhythm_exe(MichaelRhythmTask *task);

static void michael_rhythm_dsp(MichaelRhythmTask *task);

void* dgEffRhythmEx(void *parent, dgMathVector3 *pos_ptr, Float frame, dgEffRhythmType type);

static void flower_init(FlowerTask *task, dgMathVector3 *base_pos, dgMathVector3 *offset);

static void flower_exe(FlowerTask *task);

static void flower_dsp(FlowerTask *task);

void* dgEffFlower(void *parent, dgMathVector3 *base_pos, dgMathVector3 *offset);

static void sboost_init(SboostTask *task, dgMathMatrix *mtrx1, dgMathMatrix *mtrx2, dgEffBoostType type);
static void sboost_exe(SboostTask *task);

static void sboost_dsp(SboostTask *task);

void* dgEffBoost(void *parent, dgMathMatrix *mtrx1, dgMathMatrix *mtrx2, dgEffBoostType type);

void dgEffSetBoostScale(void *task, Float scale);
static void spark_init(SparkTask *task, dgMathVector3 *pos_ptr, Float scale);

static void spark_exe(SparkTask *task);

static void spark_dsp(SparkTask *task);

void* dgEffSparkBlue(void *parent, dgMathVector3 *pos_ptr, Float scale);

void* dgEffSparkYellow(void *parent, dgMathVector3 *pos_ptr, Float scale);

static void spark_beam_init(SparkBeamTask *task, dgMathVector3 *spos_ptr, dgMathVector3 *epos_ptr, Float scale);

static void spark_beam_exe(SparkBeamTask *task);

static void spark_beam_dsp(SparkBeamTask *task);

void* dgEffSparkBeam(void *parent, dgMathVector3 *spos_ptr, dgMathVector3 *epos_ptr, Float scale);

static void noise_init(NoiseTask *task);

static void noise_exe(NoiseTask *task);

static void noise_dsp(NoiseTask *task);

void* dgEffNoise(void *parent);

void dgEffNoiseSetCol(void *task, Uint32 col);

static void pudding_logo_init(PuddingLogoTask *task, dgEffNameLogoParam *param);

static void pudding_logo_exe(PuddingLogoTask *task);

static void pudding_logo_dsp(PuddingLogoTask *task);

void* dgEffNameLogo(void *parent, dgEffNameLogoParam *param);

dgMathMatrix* dgEffGetRel2AbsMtrxPtr();
dgMathMatrix* dgEffGetAbs2RelMtrxPtr();
void dgEffAbs2RelPos(dgMathVector3 *rel_pos, dgMathVector3 *abs_pos);
void dgEffRel2AbsPos(dgMathVector3 *abs_pos_ptr, dgMathVector3 *rel_pos_ptr);
static void fire_ring_init(FireRingTask *task, dgMathMatrix *mtrx_ptr, Float scale, dgMathVector3 *speed_ptr);
static void fire_ring_exe(FireRingTask *task);

static void fire_ring_dsp(FireRingTask *task);

static void* fire_ring(void *parent, dgMathMatrix *mtrx_ptr, Float scale, dgMathVector3 *speed_ptr);

static void fire_star_init(FireStarTask *task, dgMathVector3 *abs_pos_ptr, dgMathVector3 *speed_ptr);
static void fire_star_exe(FireStarTask *task);

static void fire_star_dsp(FireStarTask *task);

static void* fire_star(void *parent, dgMathVector3 *abs_pos_ptr, dgMathVector3 *speed_ptr);

static void jrfire_init(JrfireTask *task, dgMathMatrix *mtrx_ptr, Float frame, dgEffFireType type);

static void jrfire_exe(JrfireTask *task);

static void jrfire_dsp(JrfireTask *task);

void* dgEffFire(void *parent, dgMathMatrix *mtrx_ptr, Float frame, dgEffFireType type);

void dgEffSetFireType(void *task, dgEffFireType type);
void dgEffSetFireSpeed(void *task, dgMathVector3 *speed_ptr);
static void smoke1_init(Smoke1Task *task, dgMathVector3 *pos_ptr, Float frame, dgMathVector3 *speed_ptr);
static void smoke1_exe(Smoke1Task *task);

static void smoke1_dsp(Smoke1Task *task);

void* dgEffSmoke1(void *parent, dgMathVector3 *pos_ptr, Float frame, dgMathVector3 *speed_ptr);

static void dgEffSmoke1SetTexNo(void *task, Sint16 tex_no, Uint32 col);
static void smoke_init(SmokeTask *task, dgMathMatrix *mtrx_ptr, dgMathVector3 *speed_ptr);
static void smoke_exe(SmokeTask *task);
static void smoke_dsp(SmokeTask *task);

void* dgEffSmoke(void *parent, dgMathMatrix *mtrx_ptr, dgMathVector3 *speed_ptr);

static void purge_chu_init(PurgeChuTask *task, dgMathMatrix *mtrx_ptr, Float frame, Bool large_flg);

static void purge_chu_exe(PurgeChuTask *task);

static void purge_chu_dsp(PurgeChuTask *task);

void* dgEffDXPurgeChu(void *parent, dgMathMatrix *mtrx_ptr, Float frame, Bool large_flg);

static void taiko_init(TaikoTask *task, dgMathMatrix *mtrx_ptr, Float frame, Float scale);

static void taiko_exe(TaikoTask *task);

static void taiko_dsp(TaikoTask *task);

static void* taiko_sub(void *parent, dgMathMatrix *mtrx_ptr, Float frame, Float scale);

void* dgEffTaiko(void *parent, dgMathMatrix *mtrx_ptr, Float frame);
void* dgEffTaikoRobo(void *parent, dgMathMatrix *mtrx_ptr, Float frame);

static void star1_init(Star1Task *task, dgMathVector3 *base_pos_ptr, Float frame);

static void star1_exe(Star1Task *task);

static void star1_dsp(Star1Task *task);

static void* star1(void *parent, dgMathVector3 *pos_ptr, Float frame);

static void follow_star_init(FollowStarTask *task, dgMathVector3 *pos_ptr);
static void follow_star_exe(FollowStarTask *task);

void* dgEffFollowStar(void *parent, dgMathVector3 *pos_ptr);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_spr.c
// *****************************************************************************

static void eff_spr_data_init(EffSprTask *task, EffSprInitData *init_data, Uint8 data_num, Uint32 *tex_no);

static void eff_spr_init(EffSprTask *task, EffSprParam *param, EffSprInitData *init_data, Sint8 kasan_flg);

Float calc_scl(Float min, Float max, Float local_ratio, Uint8 type);

Uint32 calc_col(Uint32 min, Uint32 max, Float local_ratio, Uint8 type);

Angle calc_ang(Angle min, Angle max, Float local_ratio, Uint8 type);

static void calc_val(EffSprData *data, Float ratio);

static void eff_spr_exe(EffSprTask *task);

static void eff_spr_dsp(EffSprTask *task);

static void eff_spr_del(EffSprTask *task);

void* dgEffSprSet(void *parent, EffSprParam *param, EffSprInitData *init_data, Sint8 kasan_flg);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_filecache.c
// *****************************************************************************

static Bool _dgFilecacheReleaseNormal(void *data, void *cache);

static Bool _dgFilecacheCheckHitNormal(void *data, void *cache);

static dgFilecacheEntryBufferInfoPtr _dgFilecacheIsExistDataType(Sint32 type);

static dgFilecacheEntryBufferPtr _dgFilecacheGetEntryBufferPtr(Sint32 type, Sint32 num);

static Bool _dgFilecacheReleaseEntryBuffer(Sint32 i);

static dgFilecacheEntryBufferPtr _dgFilecacheSearchFreeEntryBuffer(Sint32 type);

static dgFilecacheEntryBufferPtr _dgFilecacheSearchLastEntryBuffer(Sint32 type);

static dgFilecacheEntryBufferPtr _dgFilecacheDeleteEntryBuffer(Sint32 type, dgFilecacheEntryBufferPtr del);

static dgFilecacheEntryBufferPtr _dgFilecacheDeleteOldCntZeroEntryBuffer(Sint32 type);

static dgFilecacheEntryBufferPtr _dgFilecacheDeleteOldEntryBuffer(Sint32 type);

static dgFilecacheEntryBufferPtr _dgFilecacheDeleteOldestEntryBuffer(Sint32 type);

static void _dgFilecacheClearEntryBufferOne(dgFilecacheEntryBufferPtr del);

static void _dgFilecacheClearEntryBufferInfo();

static void _dgFilecacheClearEntryBuffer(dgFilecacheEntryBufferPtr buf, Sint32 num);

void dgFilecacheEntryFuncMemCopy(void* (*func)());

void dgFilecacheEntryFuncMemSet(void* (*func)());

void dgFilecacheEntryFuncMalloc(void* (*func)());

void dgFilecacheEntryFuncFree(void (*func)());

void* dgFilecacheMalloc(Uint32 size);

void dgFilecacheFree(void *ptr);

void* dgFilecacheMemCopy(void *dst, void *src, Uint32 num);

void* dgFilecacheMemSet(void *dst, int data, Uint32 num);

Bool dgFilecacheMakeEntryBuffer(Sint32 type, Uint16 num, Bool (*check)(), Bool (*release)());

Bool dgFilecacheInit();

void dgFilecacheFinish();

Bool dgFilecacheEntry(Sint32 type, void *data);

Uint32 dgFilecacheCheckErrorAll(Sint32 *type, Sint32 *idx, void *ptr);

Uint32 dgFilecacheCheckErrorOne(Sint32 type, Sint32 *idx, void *ptr);

void* dgFilecacheGetDataPtr(Sint32 type, Sint32 num);

Bool dgFilecacheCheckEntryBuffer(void *data, Sint32 type);

Bool dgFilecacheRelease(void *data, Sint32 type);

Bool dgFilecacheReleaseForce(void *data, Sint32 type);

Bool dgFilecacheClear(Sint32 type);

Uint16 dgFilecacheGetEntryBufferNum(Sint32 type);

void* dgFilecacheDisplayDebugWindowEntryBufferOne(GWHWND hwnd, Sint32 num, Sint32 type);

void dgFilecacheDisplayDebugWindowEntryBufferInfo(GWHWND hwnd, Sint32 type);

dgFilecacheSystemInfoPtr dgFilecacheGetSystemInfoPtr();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_files.c
// *****************************************************************************

static void _dgFileClearPtInfoAll(dgFileSystemInfoPtr f);

static void _dgFileClearPtInfoOne(dgFilePtInfoPtr ptinfo);

static void _dgFileReClearPtInfoAll(dgFileSystemInfoPtr f);

static void _dgFileReleaseLoadPartitionHandle();

static void _dgFileReleaseLoadPartitionHandleEx(dgFilePtInfoPtr ptinfo);

static void _dgFileReClearPtInfoOne(dgFilePtInfoPtr ptinfo);
static void _dgFileClearPtCueOne(dgFilePtCuePtr p);

static void _dgFileClearPtCueAll(dgFileSystemInfoPtr f);

static dgFilePtCuePtr _dgFileGetFreeCueLoadMultiPartitionIR();

static dgFilePtCuePtr _dgFileGetLastCueLoadMultiPartitionIR(Sint32 *num);

static void _dgFileDeleteTopCueLoadMultiPartitionIR();

static Bool _dgFileExecPtCue();

static Bool _dgFileEntryCueLoadMultiPartitionIR(Sint32 pid);

static void _dgFilePrintIRLoadStartMessage(dgFileReqCuePtr q);

static void _dgFilePrintFRLoadStartMessage(dgFileLoadCoreParaPtr p);

static void _dgFilePrintIRLoadEndMessage(dgFileReqCuePtr q);

static void _dgFilePrintIRLoadAbortMessage(dgFileReqCuePtr q);

static void _dgFilePrintFRLoadEndMessage(dgFileLoadCoreParaPtr p);

static void _dgFileGoNextCueAbort(dgFileSystemInfoPtr f, dgFileReqCuePtr cue);
static void _dgFileGoNextCue(dgFileSystemInfoPtr f, dgFileReqCuePtr cue);

static dgFileDataTypeIDPtr _dgFileSearchFreeDataTypeID();

static dgFileDataTypeEXTPtr _dgFileSearchFreeDataTypeEXT();

static dgFileDataTypeIDPtr _dgFileGetDataTypeID(Sint32 *type, char *idtbl);

static dgFileDataTypeEXTPtr _dgFileGetDataTypeEXT(Sint32 *type, char *exttbl);

static void _dgFileClearAllDataTypeID(dgFileSystemInfoPtr f);

static void _dgFileClearAllDataTypeEXT(dgFileSystemInfoPtr f);

static void _dgFileClearDataTypeID(dgFileDataTypeIDPtr p);

static void _dgFileClearDataTypeEXT(dgFileDataTypeEXTPtr p);

static void _dgFilePrintExecServerErr(char *errname, dgFileReqCuePtr p);
static void _dgFilePrintLoadCoreErr(char *errname, dgFileLoadCoreParaPtr p);
static void _dgFilePrintReqCoreErr(char *errname, dgFileReqCoreParaPtr p);

static void* _dgFileLoadCore(dgFileLoadCoreParaPtr p);

Bool dgFileEntryCacheNormal(Sint32 fad, Sint32 bsize, void *dst);

void dgFileReleaseAllPointerNormal(void *ptr);

Bool dgFileFree(void *ptr);

static void* _dgFileLoadReqCore(dgFileReqCoreParaPtr p);

static void _dgFileCallLoadEndFunc(dgFileReqCuePtr ptr);

static Bool _dgFileCompareFname(char *fname1, char *fname2);

static Bool _dgFileThikingRetry(dgFileSystemInfoPtr f);

static void _dgFileError(void *obj, char *errmes);
static void _dgFileClearRofsSystem();
static void _dgFileClearSimmLoad();
static void _dgFileSimmLoadCallback(Uint32 id, void *dst, void *fname, Sint32 usr_d);

static void* _dgFileLoadCoreFRSimmFile(dgFileLoadCoreParaPtr p);

static void* _dgFileLoadCoreIRSimmFile(dgFileReqCoreParaPtr p, dgFileReqCuePtr cue);

static Bool _dgFileGetUniqueAfsName(char *dstname, char *afsname, Sint32 iid);

static char* _dgFileGetKazuName(Sint32 kazu);

static void _dgFileRofsError(void *obj, Char8 *msg, Sint32 errcode);
static void _dgFileClearFakeFad();

static dgFileFakeFadInfo* _dgFileGetFakeFad(Sint32 *fad, char *fname);

static Sint32 _dgFileGetNewFakeFad();

static Sint32 _dgFileSceGetSize(char *fname);

static Sint32 _dgFileMakeFakeFad(char *fname, Sint32 iid, Sint32 dir_mode);

int dgFileGetTvType();

int dgFileSetTvType(int tvtype);

static void _dgFileSetDev(Sint32 idx);

static Bool _dgFileCheckPid(Sint32 pid);

static Sint32 _dgFileGetFreePid(dgFileSystemInfoPtr f);

static Sint32 _dgFileGetPidLoadMultiPartition(dgFileSystemInfoPtr f, Sint32 pid);

static Sint32 _dgFileLoadMultiPartitionPrep(char *fname, Sint32 pid, Sint32 num);

ADXF dgFileOpenAfs(Sint32 pid, Sint32 iid);

ADXF dgFileOpen(char *fname, void *dir);

Sint32 dgFileGetReqRdSct();

void dgFileSetReqRdSct(Sint32 sct);

Sint32 dgFileCheckPrintLevel();
Sint32 dgFileSetPrintLevel(Sint32 lev);

Bool dgFileChangeDirectory(char *dirname);

Bool dgFileEntryDataTypeID(char *typestr, Sint32 type);

Bool dgFileEntryDataTypeEXT(char *typestr, Sint32 type);

Bool dgFileDeleteDataTypeID(char *typestr);

Bool dgFileDeleteDataTypeEXT(char *typestr);

Bool dgFileDecodeFilename(char *dstfname, Sint32 *datatype, char *srcname);

Bool dgFileEntryLoadendFuncInReq(Uint32 id, void (*endfunc)(), void *usr_p, Sint32 usr_d);

void dgFileSetSystemInfoRetryMode(Uint32 stat);

Uint32 dgFileGetSystemInfoRetryMode();

void dgFileSetSystemInfoRetryMax(Uint32 max);

Uint32 dgFileGetSystemInfoRetryMax();

void dgFileInit();

void dgFileEntryFuncMalloc(void* (*func)());

void dgFileEntryFuncFree(void (*func)());

Bool dgFileExistPlusDir(char *filename, void *dir);

Bool dgFileExist(char *filename);

Sint32 dgFileGetFad(char *filename);

Sint32 dgFileGetSize(char *filename);

void* dgFileMalloc(Uint32 size);

void dgFileFreeBufferOnly(void *ptr);

void* dgFileLoad(void *dst, char *filename, void *dir);

void* dgFileLoadCacheThrough(void *dst, char *filename, void *dir);

void* dgFileLoad_F(void *dst, char *filename, void *dir, Sint32 *fad);

void* dgFileLoadReqCacheSpecify(void *dst, char *filename, void *dir, Sint32 cachemode);

void* dgFileLoadReqCacheSpecifyQuickResponse(void *dst, char *filename, void *dir, Sint32 cachemode);

void* dgFileLoadReq(void *dst, char *filename, void *dir);

void* dgFileLoadReqSerialIDCacheSpecify(void *dst, char *filename, void *dir, Uint32 *id, Sint32 cachemode);

void* dgFileLoadReqSerialIDCacheSpecifyQuickResponse(void *dst, char *filename, void *dir, Uint32 *id, Sint32 cachemode);

void* dgFileLoadReqSerialID(void *dst, char *filename, void *dir, Uint32 *id);
void* dgFileLoadReqSerialIDQuickResponse(void *dst, char *filename, void *dir, Uint32 *id);

void* dgFileLoadReq_F(void *dst, char *filename, void *dir, Sint32 *fad);

Sint32 dgFileExecServer();

Bool dgFileCheckLoadEndOne(Uint32 id);

Bool dgFileCheckLoadEnd();

void dgFileLoadAbortAll();

void dgFileLoadPartition(char *fname, void *dir);

void dgFileInitMultiPartition();

Bool dgFileReleaseMultiPartition(Sint32 pid);

Bool dgFileUnLockPid(Sint32 pid);

Bool dgFileLockPid(Sint32 pid);

void dgFileReleaseMultiPartitionAllForce();

Bool dgFileReleaseMultiPartitionForce(Sint32 pid);

void dgFileReleaseMultiPartitionAll();

static void _dgFilePrintFRPtLoadStartMessage(char *fname, Sint32 pid, Sint32 num);
static void _dgFilePrintFRPtLoadEndMessage(char *fname, Sint32 pid, Sint32 num);
static void _dgFilePrintIRPtLoadStartMessage(char *fname, Sint32 pid, Sint32 num);
static void _dgFilePrintIRPtLoadEndMessage(char *fname, Sint32 pid, Sint32 num);

Sint32 dgFileLoadMultiPartition(char *fname, Sint32 pid, Sint32 num);

Sint32 dgFileLoadMultiPartitionIR(char *fname, Sint32 pid, Sint32 num);

Bool dgFileCheckLoadEndMultiPartitionIR();

Bool dgFileCheckLoadEndMultiPartitionIROne(Sint32 pid);

Sint32 dgFileGetNumPid();

Sint32 dgFileGetPid(char *fname);

Bool dgFileExistAfsPlusFname(Sint32 pid, Sint32 iid, char *fname);

Bool dgFileExistAfs(Sint32 pid, Sint32 iid);

char* dgFileGetFnameFromPid(Sint32 pid);

Sint32 dgFileGetSizeAfs(Sint32 pid, Sint32 iid);

Sint32 dgFileGetFadAfs(Sint32 pid, Sint32 iid);

void* dgFileLoadAfs(void *dst, Sint32 pid, Sint32 iid);

void* dgFileLoadAfsCacheThrough(void *dst, Sint32 pid, Sint32 iid);

void* dgFileLoadAfsReqCacheSpecify(void *dst, Sint32 pid, Sint32 iid, Sint32 cachemode);

void* dgFileLoadAfsReqCacheSpecifyQuickResponse(void *dst, Sint32 pid, Sint32 iid, Sint32 cachemode);

void* dgFileLoadAfsReq(void *dst, Sint32 pid, Sint32 iid);

void* dgFileLoadAfsReq_F(void *dst, Sint32 pid, Sint32 iid, Sint32 *fad);

void* dgFileLoadAfsReqSerialIDCacheSpecify(void *dst, Sint32 pid, Sint32 iid, Uint32 *id, Sint32 cachemode);

void* dgFileLoadAfsReqSerialIDCacheSpecifyQuickResponse(void *dst, Sint32 pid, Sint32 iid, Uint32 *id, Sint32 cachemode);

void* dgFileLoadAfsReqSerialID(void *dst, Sint32 pid, Sint32 iid, Uint32 *id);
void* dgFileLoadAfsReqSerialIDQuickResponse(void *dst, Sint32 pid, Sint32 iid, Uint32 *id);

void dgFileFinish();

static void _dgFileDisplayControlDebugWindowInfo();

void dgFileControlDebugWindowInfoSystem();

void dgFileReleaseDebugWindowInfoSystem();

static void _dgFileDisplayDebugWindowInfo_LoadCue(dgFileDebWinInfoPtr w, dgFileSystemInfoPtr f);

static void _dgFileDisplayDebugWindowInfo_PtInfo(dgFileDebWinInfoPtr w, dgFileSystemInfoPtr f);

Bool dgFileGetFadToName(char *fname, Sint32 fad);

Sint32 dgFileGetNumIID(Sint32 pid);

static Sint32 _dgFileGetFadToIID(char *fname, Sint32 pid, Sint32 fad);

static void _dgFileDisplayDebugWindowInfo_FCache(dgFileDebWinInfoPtr w, dgFileSystemInfoPtr f);

static void _dgFileDisplayDebugWindowInfoSystem(dgFileDebWinInfoPtr w);

static void _dgFileDebWinDelete(dgFileDebWinInfoPtr wininfo);
static void _dgFileDebWinPrintfFirst(dgFileDebWinInfoPtr wininfo);

static void dgFileDebWinGwWindowPrintf(dgFileDebWinInfoPtr wininfo, char *buf, Sint32 y);

static void _dgFileDebWinDrawLog(GWHWND hWnd, dgFileDebWinInfoPtr wininfo);

static void _dgFileDebWinDrawCommon(GWHWND hWnd);

static void _dgFileDebWinDeleteCommon(GWHWND hWnd);

static void _dgFileDebWinExecCommon(GWHWND hWnd);

static void _dgFileDebWinPrintf(dgFileDebWinInfoPtr wininfo, char *fmt);

static void _dgFileDebWinClearInfo(dgFileDebWinInfoPtr wininfo);
static void* _dgFileDebWinGetTaskPtr(dgFileDebWinInfoPtr wininfo);

static Bool _dgFileDebWinPreCreateLog(dgFileDebWinInfoPtr wininfo, Sint32 b_w, Sint32 b_h);

static Bool _dgFileDebWinCreate(dgFileDebWinInfoPtr wininfo, dgFileDebWinKind kind, char *caption, Sint32 x, Sint32 y, Sint32 w, Sint32 h, Sint32 b_w, Sint32 b_h, GWHWND parent, void *task, void (*drawfunc)());

Bool dgFileReleaseReq(Uint32 id);

static dgFileReqCuePtr _dgFileReqCueFreeList();

static dgFileReqCuePtr _dgFileReqCueSearchListLast();

static void _dgFileReqCueAddListLast(dgFileReqCuePtr lst);

static dgFileReqCuePtr _dgFileReqCueSearchListSerial(Uint32 serial);

static void _dgFileReqCueDeleteList(dgFileReqCuePtr lst);

static Sint32 _dgFileReqCueGetListEntryNum();

static Uint32 _dgFileReqCueMakeListSerialID();
static void _dgFileReqCueClearListOne(dgFileReqCuePtr p);
static void _dgFileReqCueClearAll(dgFileSystemInfoPtr f);
void dgFileOffErrorPrint();
void dgFileOnErrorPrint();

Bool dgFileVolumeExist(char *volname, char *fname);

Sint32 dgFileGetEntryVolumeNum();
Sint32 dgFileGetDefVolumeNo();

char* dgFileGetVolName(Sint32 vol);

char* dgFileGetDefVolName();
Bool dgFileCheckErrorPrint();
Bool dgFileHstExist(char *hstname, char *chkname);
void dgFileOnHstCheck();
void dgFileOffHstCheck();
Bool dgFileIsHstCheck();
Bool dgFileMakeHostFileTable(char *fname);

Sint32 dgFileDirectHstExist(char *fname);

Sint32 dgFileSceOpenExist(char *fname);

void* dgFileEntrySimmLoadFR(char *fname);

void* dgFileEntrySimmLoadIR(char *fname);

Bool dgFileCheckLoadEndSimmLoad();

void dgFileReleaseSimmLoad();

Sint32 dgFileGetSimmLoadStat();
Sint32 dgFileGetSimmLoadID();

void* dgFileDebLoadFromHst(void *dst, char *fname, char *dirname);

void* dgFileDebLoadFromCDV(void *dst, char *fname);

void* dgFileDebLoadFromCDVorHDD(void *dst, char *fname);

void dgFilePS2PreInit(char *rootdir);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_font.c
// *****************************************************************************

void dgFontInit(Sint32 gix);

void dgFontSetZenData(void *ptr);

void dgFontExit();

void dgFontPutsK(Float x, Float y, char *pStr, Float ratio, Uint32 base_col, Uint32 add_col);

dgFontKaraoke* dgFontKaraokeCreate(Float x, Float y, Float z, char *pStr, Uint32 base_col, Uint32 add_col);

void dgFontKaraokeDestroy(dgFontKaraoke *h);

void dgFontKaraokeSetRatio(dgFontKaraoke *h, Float ratio);

void dgFontKaraokeSetCoordX(dgFontKaraoke *h, Float x);

void dgFontKaraokeSetCoordY(dgFontKaraoke *h, Float y);

void dgFontKaraokeSetCoordZ(dgFontKaraoke *h, Float z);
void dgFontKaraokeSetCoord(dgFontKaraoke *h, Float x, Float y, Float z);
void dgFontKaraokeSetString(dgFontKaraoke *h, char *pStr);
void dgFontKaraokeSetBaseColor(dgFontKaraoke *h, Uint32 base_col);
void dgFontKaraokeSetAddColor(dgFontKaraoke *h, Uint32 add_col);

void dgFontKaraokeDraw(dgFontKaraoke *h);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_force.c
// *****************************************************************************

void dgForceInit(dgForce *f);
static void force_exec_pos(dgForce *f);

static void force_exec_ang(dgForce *f);

void dgForceExec(dgForce *f);
void dgForceMultiMatrix(dgForce *f);
void dgForceSetAccelReactionRatioAll(dgForce *f, Float ratio);
void dgForceSetSpeedReactionRatioAll(dgForce *f, Float ratio);
void dgForceSetObjectMass(dgForce *f, Float oom);
void dgForceSetObjectSize(dgForce *f, dgMathVector3 *vec);
void dgForceSetObjectTensor(dgForce *f, dgMathVector3 *vec);
void dgForceSetObjectMatrix(dgForce *f, dgMathMatrix *mat);
void dgForceSetHitPosition(dgForce *f, dgMathVector3 *pos);
void dgForceSetHitVector(dgForce *f, dgMathVector3 *vec);
void dgForceSetHitPower(dgForce *f, Float power);

static void calc_collision(dgForce *f, dgMathVector3 *colli_pos, dgMathVector3 *colli_vec, LocalForce *local);

static void force_set(dgForce *f, LocalForce *local);

static void force_non(dgForce *f);

void dgForceCalcForce(dgForce *f);

void dgForceSetVector(dgForce *f, dgMathVector3 *vec);
void dgForceSetTorque(dgForce *f, dgMathVector3 *vec);

void dgForceDrawDebugCollision(dgForce *f, Uint32 color);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_indicate.c
// *****************************************************************************

static void dsp_num(NumParam *param, Bool warn_flg);

static void dsp_num2(dgMathVector3 *pos, Uint32 num, Bool warn_flg, dgMathAngle1 ang);

static void dgIndicateDspNum(DspNumParam *param);

static void num_init(NumTask *task, dgIndicateInitParam *param);

static void num_exe(NumTask *task);

static void num_dsp(NumTask *task);

static void num_del(NumTask *task);

static void* NumInit(void *parent, dgIndicateInitParam *param);

static void num_req(Sint8 num_state);
static void heart_dspnum_loss();
static void heart_num_loss();
static Sint8 get_heart_all_num();
static Sint8 get_heart_exe_num();
static Sint8 get_heart_dsp_num();
static Sint8 get_heart_type();

static void heart1_exe(Heart1Data *data);

static void dsp_spr(dgTexRectSprite *spr, SprParam *param);

static void heart1_dsp(Heart1Data *data);

static void heart_data_init(HeartTask *task);

static void heart_init(HeartTask *task, dgIndicateInitParam *param);

static void heart_exe(HeartTask *task);

static void heart_dsp(HeartTask *task);

static void heart_del(HeartTask *task);

static void* dgIndicateHeartInit(void *parent, dgIndicateInitParam *param);

static void dgIndicateHeartReq(Uint8 type);

void dgIndicateHeartNum(Uint8 num);

void dgIndicateHeartPos(Float x, Float y, Float z);

void dgIndicateHeartType(Uint8 type);
void dgIndicateStrPos(Float x, Float y, Float z);
void dgIndicateNumPos(Float x, Float y, Float z);
static void rating_init(RatingTask *task, dgIndicateInitParam *param);

static void dsp_rating(dgMathVector3 *pos, Angle ang, Bool warn_flg, Uint32 col);

static void dsp_change(dgMathVector3 *pos, Angle ang, Uint32 col);

static void rating_exe(RatingTask *task);

static void rating_dsp(RatingTask *task);

static void rating_del(RatingTask *task);
static void rating_req(Uint32 state);

static void* RatingInit(void *parent, dgIndicateInitParam *param);

static void indicate_init(IndicateTask *task, dgIndicateInitParam *param);

static void indicate_exe(IndicateTask *task);

static void indicate_del();

void* dgIndicateInit(void *parent, dgIndicateInitParam *param);

void dgIndicateReq(Uint32 type);
void dgIndicateSetNewRate(Uint32 num);
void dgIndicateResetRate(Uint32 num);
static void flash_init(FlashTask *task, FlashParam *param);
static void flash_exe(FlashTask *task);

static void flash_dsp(FlashTask *task);

static void flash_del(FlashTask *task);

static void* flash_set(void *parent, FlashParam *param);

static void flash2_init(Flash2Task *task, Flash2Param *param);

static void flash2_exe(Flash2Task *task);

static void flash2_dsp(Flash2Task *task);

static void flash2_del(Flash2Task *task);

static void* flash2_set(void *parent, Flash2Param *param);

static Sint8 get_dsp_column_num();

static void get_str_pos(Float *x, Float *y, Float *z);
static void get_flash_pos(Float *x, Float *y, Float *z);

static void get_num_pos(Sint8 column, Float *x, Float *y, Float *z);

static void flash_small1_exe(FlashSmallData *data);

static void flash_small1_dsp(Float x, Float y, Float z, Angle ang);

static void flash_small_init(FlashSmallTask *task, Sint8 type);

static void flash_small_exe(FlashSmallTask *task);

static void flash_small_dsp(FlashSmallTask *task);

static void flash_small_del(FlashSmallTask *task);

static void* flash_small_set(void *parent, Sint8 type);

static void follow_init(FollowTask *task, Heart1Data *star_data_ptr, Float frame);

static void follow_exe(FollowTask *task);

static void follow_dsp(FollowTask *task);

static void* follow_set(void *parent, Heart1Data *star_data_ptr, Float frame);

void dgIndicateTexInit(Uint32 *tex_tbl);

static Bool get_warn_flg();
static Uint32 get_warn_col();
static Sint8 get_warn_type();
static Sint16 get_warn_rate();
static void set_warn_flg(Bool flg);
static void set_warn_col(Uint32 col);
static void set_warn_type(Sint8 type);
void dgIndicateSetWarnRate(Sint16 rate);

static void dsp_turn(dgMathVector3 *pos, Float scale, Sint8 type);

static void turn_init(TurnTask *task);
static void turn_exe(TurnTask *task);
static void turn_dsp(TurnTask *task);

static void* TurnInit(void *parent);

static void turn_req(Sint8 mode);
void dgIndicateEnemyIconType(dgIndicateIconType type);
void dgIndicateIconPos(Float x, Float y, Float z);
void dgIndicateIconDisappearReq();
static void heart_small_pos(Float x, Float y, Float z);

static void heart_div_num();

static void set_num_dsp_flg(Bool flg);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_input.c
// *****************************************************************************

static void vib_play(int port);
static void vib_stop(int port);
static void vib_init(vibTask *task, dgInputKey key, Sint8 *vib_play_flag_ptr);
static void vib_exec(vibTask *task);
static void vib_disp(vibTask *task);
static void vib_del(vibTask *task);

static void* vib_entry(void *parent, dgInputKey key, Sint8 *vib_play_flag_ptr);

static void vib_start(dgInputKey key);

void dgInputClearCharAll();

void dgInputClearChar(int no);
Bool dgInputIsGetChar(int no);
static void set_get_char_no(int no);

static void get_char_no_all(inpResultPerOne *ptr, int timing_num);

static void clip_entry(int no);

static void clip_stop();

static void snd_entry_system_se(Sint32 ticks, dgInputSe no, int aux);

static void snd_stop_system_se(dgInputSe no);

static int not_rhythm_se(Sint8 q_type, int key);

static inpResultPerOne* get_result_one();

static void init_result_one(inpResultPerOne *ptr, int qtype, Sint16 qid, int num, inpOneTiming *timing, Sint16 *enm);

static void init_timing_data(inpQuestionTask *task, Sint8 *pat, Sint16 *ticks);

static void judge_init(inpQuestionTask *task, dgInputInitData *data, Sint16 nb_beat);

static void check_shooting(inpQuestionTask *task, dgInputKey key, dgInputStatus status);
static void check_shooting_end(inpQuestionTask *task, dgInputKey key);
static dgInputStatus judge_shooting(inpQuestionTask *task, dgInputStatus status, dgInputKey play_key);

static dgPadDig get_key_on();

static int get_ticks_index(inpQuestionTask *task, inpOneTiming *tdata, Sint32 current_ticks);
static void set_next_timing(inpQuestionTask *task);

static void set_status(inpQuestionTask *task, dgInputStatus status, dgInputKey key, Sint32 ticks, int option);

static dgInputKey get_inp_keyon(dgInputKey key);

static dgInputKey get_inp_keyoff(dgInputKey key);

static void check_input(inpQuestionTask *task, inpOneTiming *tdata, Sint32 ticks);

static void judge_exec(inpQuestionTask *task);

static void judge_disp(inpQuestionTask *task);
static void status_printf(inpQuestionTask *task);

static void judge_del(inpQuestionTask *task);

static void* judge_entry(void *parent, dgInputInitData *data, Sint16 nb_beat);

static void secret_init(inpSecretTask *task, int no, Sint32 ticks);

static void secret_set_status(inpSecretTask *task, dgInputStatus status, dgInputKey key, Sint32 ticks);

static void secret_exec(inpSecretTask *task);

static void secret_del(inpSecretTask *task);

static void* secret_entry(void *parent, int no, Sint32 ticks);

static void mode_exec(inpModeTask *task);
static void mode_del(inpModeTask *task);

static void mode_entry(void *parent, int type, Sint16 start_beat, Sint16 nb_beat);

void dgInputInit();

void dgInputSetParentTask(void *parent_task);

static void snd_entry(Sint8 q_type, Sint16 start_beat, Sint16 nb_beat, Sint16 *ptr);

int dgInputEntry(dgInputInitData *data);

int dgInputEntry_Secret(int no, Sint32 ticks);

static void set_default_se(inpSeCfg *cfg, dgInputSeData *data);

void dgInputInitDefaultSe(dgInputSeData *data);

void dgInputSetDefaultSeAll();

void dgInputSetDefaultSe(int no);

void dgInputResetSe(dgInputSe no, dgSoundData data);

void dgInputAddSe(dgInputSe no, dgSoundData data);

static void delete_se(inpSeCfg *cfg, int no);

void dgInputDelSe(dgInputSe no, dgSoundData data);

static void set_use_key(inpKeyCfg *keycfg);
static void no_use_key(inpKeyCfg *keycfg);

void dgInputSetDefaultKey();

void dgInputSetKeyCfg(dgPadPort port, dgInputKey key, dgPadDig dig);

void dgInputSetKeyCfgType(int type);

dgInputMode dgInputGetMode();

void dgInputStartBattle();

void dgInputEndBattle();

void dgInputStartStep();

void dgInputEndStep();

int dgInputCheckStepLevel();

int dgInputGetTimingNum(int qno);
Bool dgInputIsEndQuestion(int qno);
Bool dgInputIsEndStep(int stepno);
Bool dgInputIsEndBattle();
int dgInputGetQuestionLevel(int qno);
int dgInputGetStepLevel(int stepno);
int dgInputGetBattleLevel();

int dgInputCalcBattleLevel();

Bool dgInputIsWinBattle();
int dgInputQuestionNoToId(int qno);
dgInputStatus dgInputGetStatus(int qno, int timing_num);
dgInputStatus dgInputGetSecretStatus(int secret_no);
Sint32 dgInputGetSecretTicks(int secret_no);
Bool dgInputIsEndSecret(int secret_no);
Bool dgInputIsEntrySecret(int secret_no);
dgInputKey dgInputGetCorrectKey(int qno, int timing_num);
dgInputKey dgInputGetKeyCommand(int qno);
dgInputKey dgInputGetPlayKey(int qno, int timing_num);
Sint32 dgInputGetPlayTicks(int qno, int timing_num);

Sint32 dgInputTimingToTicks(int qno, int timing_num);

Sint32 dgInputTimingToTicksEx(int qno, int timing_num, dgInputTiming ex);

dgCharNo dgInputGetCharNo(int qno, int timing_num);
dgInputQtype dgInputGetQuestionType(int qno);
void dgInputSetCurrentLifeNum(Sint8 life);
Sint8 dgInputGetCurrentLifeNum();
Sint8 dgInputGetResultLifeNum();
Sint8 dgInputGetCurrentQuestionNo();
Sint8 dgInputGetCurrentStepNo();
Sint8 dgInputGetTrueContinueNum();
Sint8 dgInputGetFalseContinueNum();
int dgInputGetHelpPersonNum();
void dgInputSetStepLevelCfg(int no, int percent);
void dgInputIgnorePrevQuestionToStepLevel(Bool flag);
void dgInputSetClipEntryFunc(void (*func)());
void dgInputSetClipStopFunc(void (*func)());
void dgInputSetClipCharNo(dgCharNo no);
static void result_restart();
static void result_init();
static void result_save();
void dgInputConnectedBlock(Bool connected_flag, Bool restart_flag);
void dgInputSetInitRate(Sint16 rate);
void dgInputSetUpDownRate(Sint16 up_rate, Sint16 down_rate);
void dgInputSetUpDownRate_Secret(Sint16 up_rate, Sint16 down_rate);
void dgInputSetQuestionNum(int qnum);
void dgInputSetStarNum(int min, int max);
void dgInputSetBonusRate(Sint16 rate);

Sint16 dgInputCalcLifeBonus();

int dgInputCalcBossLifeNum();

Sint16 dgInputAddBonus();

Sint16 dgInputGetCurrentRate();
int dgInputGetRescueSuccessNum();
int dgInputGetRescueEntryNum();
void dgInputAddRescueSuccessNum(int num);
void dgInputAddRescueEntryNum(int num);
int dgInputGetSecretSuccessNum();
int dgInputGetSecretEntryNum();
void dgInputResetResult();
void dgInputGalaxyModeForce(Bool flag);
void dgInputGalaxyMode(Bool flag);
void dgInputEnableVib(Sint8 flag);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_karaoke.c
// *****************************************************************************

static void init_kj();

static Uint32 karaoke_get_color(dgKaraokeType type);

static void karaoke_str_init(dgKaraokeStrTask *task);

static void karaoke_str_exec(dgKaraokeStrTask *task);

static void karaoke_str_disp(dgKaraokeStrTask *task);
static void karaoke_str_del(dgKaraokeStrTask *task);

void* dgKaraokeEntry(void *parent_task, int no, dgKaraokeType type, Sint32 start_frame, Sint32 end_frame, Sint32 col_start_frame, Sint32 col_end_frame);

void dgKaraokeSetHideFlag(Sint8 flag);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_key.c
// *****************************************************************************

static void keybuf_init(KeyBuf *buf, KeyBuf *next);

static void keyboard_init(Keyboard *key);

void dgKeyInit();
void dgKeyExecServer();

static Bool check_key_on_now_rep(Sint32 key, int flag);

Bool dgKeyOn(Sint32 key);
Bool dgKeyNow(Sint32 key);
Bool dgKeyRep(Sint32 key);

Bool dgKeyOff(Sint32 key);

Bool dgKeyNowCtrlKey(Sint32 ctrl_key);

Sint32 dgKeySetRepeatFrame(Sint32 frame);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_light.c
// *****************************************************************************

static void set_base_light(LightTask *task);
static void light_init_toon();
static void light_init_wire();

static void light_init_intensity();

static void light_init_multi();

static void light_init(LightTask *task);
static void light_draw(GWHWND hwnd);
static void create_window(LightTask *task);
static void light_disp(LightTask *task);
static void light_del(LightTask *task);

void* dgLightSet(void *parent, NJS_LIGHT ***light, NJS_MOTION ***motion);

void dgLightDisp();

void dgLightSetColor(int no, Float r, Float g, Float b);
void dgLightSetVector(int no, Float x, Float y, Float z);
void dgLightGetVector(int no, Float *x, Float *y, Float *z);
void dgLightSetIntensity(Float inten, Float ambient);
void dgLightSetAmbient(Float r, Float g, Float b);
void dgLightSetPointPosition(int no, Float x, Float y, Float z);
void dgLightSetPointRange(int no, Float nrange, Float frange);
void dgLightGetColor(int no, Float *r, Float *g, Float *b);
void dgLightGetIntensity(Float *inten, Float *ambient);
void dgLightGetAmbient(Float *r, Float *g, Float *b);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_main.c
// *****************************************************************************

static int AppGsCallback(int id);

static void AppExitGsCallback();
float dgMainGetRenderTime();
static void AppInitGsCallback();

Bool dgMainSetFlushFlagEnable(Bool flag);

static void dgVSyncCallbackInit();

Sint32 dgVSyncCallbackEntry(void (*func)(), void *arg_work, Uint32 priority);

void dgVSyncCallbackDelete(Sint32 id);

static void dgVSyncCallback();

static int AppVSyncFunc(int id);

static void AppInitAdx(char *hostRoot);

static void AppInitIop();

static void AppInit(int argc, char **argv);

static void AppExitAdx();
static void AppExit();
void AppChangeTVSetting(int type);

dgMainDisplayListPrio dgMainSetCurrentDisplayList(dgMainDisplayListPrio prio);

static void BeginDisplayList();

static void EndDisplayList();

static int FullAllocAndFree();

int main(int argc, char **argv);

static void task_idle();

static Bool check_pause(dgPadPort max_port);

static void task_loop(Bool debug_flag);

void dgMainLoop(Bool gindows_flag, Bool debug_flag);

int dgMainGetVSyncMysterious();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_map.c
// *****************************************************************************

static Bool flg_get(Sint16 mapix, Sint8 mask);
static void flg_set(Sint16 mapix, Sint8 mask, Sint8 flg);

static void set_max_frame(Sint16 map_ix, Sint16 mot_cix);

static void front_group_func(MapTask *task, Uint32 map_ix);

static void front_group_func_sub(NJS_CNK_OBJECT *obj_p, dgMathMatrix *mtrx, Sint8 dsp_type, Sint32 *ix);

static void CnkSimpleDrawObjectCompile(NJS_CNK_OBJECT *obj);

static void dsp_object(MapTask *task, Uint32 ix);

static void rel_to_abs_address(Uint32 *bin_ptr, Uint32 *pof_ptr);

Sint32 dgMapRbpAbsolute(void *data_adr);

void dgMapMotionAbsolute(void *data_adr, Sint32 cnk_num);

static void dgMapShapeAbsolute(void *data_adr, Sint32 cnk_num);

static void load_map_data(MapTask *task);
void dgMapSetMotionFlg(Sint32 map_ix, Sint8 flg);
void dgMapSetObjectFlg(Sint32 map_ix, Sint8 flg);
Sint8 dgMapGetMotionFlg(Sint32 map_ix);
Sint8 dgMapGetObjectFlg(Sint32 map_ix);

static void obj_mot_set(MapTask *task);

static void movie_init(char *movie_file);

static void get_cnk_name(char *cnk_name, char *src_ptr);

static void fog_init(MapTask *task);

static void direct_init(MapTask *task);

static void set_draw_type(dgObjCtrl *oc, Sint32 dsp_type);

static void oc_init(MapTask *task);

static void map_init_sub(MapTask *task, void *data_adr, char *movie_file);

static void map_init(MapTask *task, void *data_adr, void *tex_adr, char *movie_file);
static void map_init2(MapTask *task, void *data_adr, dgTexInfo *texinfo, char *movie_file);

static void map_exe(MapTask *task);

static void map_dsp(MapTask *task);

static void map_del(MapTask *task);

void* dgMapSet(void *parent, void *data_adr, void *tex_adr, char *movie_file);

void* dgMapSet2(void *parent, void *data_adr, dgTexInfo *texinfo, char *movie_file);

void* dgMapGetTask();
Sint32 dgMapGetDspType(Sint32 ix);

Sint32 dgMapSetDspType(Sint32 map_ix, Sint32 dsp_type);

void dgMapSetUserMatrixPtr(Sint32 ix, dgMathMatrix *matrix_ptr);
void dgMapSetPathMatrixPtr(Sint32 ix, dgMathMatrix *matrix_ptr);
Sint32 dgMapGetNum();
dgTexInfo* dgMapGetTexinfo();
void* dgMapGetDataAdr();
void dgMapSetMaterial(Sint32 map_ix, NJS_ARGB *argb);

Uint32 dgMapSetObject(Uint32 map_ix, Uint32 obj_cix);

Uint32 dgMapSetMotion(Uint32 map_ix, Uint32 mot_cix);

void dgMapGetPos(dgMathVector3 *pos_ptr, Uint32 map_ix);
Float dgMapGetMaxMotionFrame(Uint32 map_ix);
void dgMapSetMotionInit(Uint32 map_ix);
void dgMapSetUserMotionFlg(Uint32 map_ix, Bool flg);
void dgMapSetMotionFrame(Uint32 map_ix, Float frame);
Float dgMapGetMotionFrame(Uint32 map_ix);
Uint32 dgMapGetArgbFlg(Uint32 map_ix);
void dgMapSetArgbFlg(Uint32 map_ix, Sint8 flg);
void dgMapSetFogEnableFlg(Bool flg);
Bool dgMapGetFogEnableFlg();
void dgMapSetFogColor(Uint32 col);
Uint32 dgMapGetFogColor();
void dgMapSetViewerFlg(Bool flg);

static void get_texid_plist(TexidOutputParam *output_param, Sint16 *plist, TexidInputParam *input_param, Bool texid_cnt_flg);

static void get_texid_model(TexidOutputParam *output_param, NJS_CNK_MODEL *model, TexidInputParam *input_param, Bool texid_cnt_flg);
static void get_texid_object(TexidOutputParam *output_param, NJS_CNK_OBJECT *obj, TexidInputParam *input_param, Bool texid_cnt_flg);

static void dgMapTexchObjInit(dgTexchData *data, NJS_CNK_OBJECT *obj, TexidInputParam *input_param);

static void dgMapTexchObjDel(dgTexchData *data);

static void renew_texid(dgTexchData *data);

static void texch_init(MapTask *task);

static void texch_exe(MapTask *task);

static void texch_del(MapTask *task);

void dgMapTexchCountSet(dgTexchData *data, Sint32 texid_ix, Float cnt);
Float dgMapTexchCountGet(dgTexchData *data, Sint32 texid_ix);
Sint8 dgMapTexchOrgTexidGet(dgTexchData *data, Sint32 texid_ix);
void dgMapTexchCountDiffSet(dgTexchData *data, Sint32 texid_ix, Float cnt_diff);
dgTexchData* dgMapTexchGetPtr(Sint32 ix);
Sint16 dgMapTexchGetObjNum();
Sint32 dgMapTexchGetTexidNum(dgTexchData *data);
static void get_texid_object_common(Sint16 ***ptr, Sint16 **tex_id, Sint32 *num, NJS_CNK_OBJECT *object);

Sint32 dgMapGetModelTexID(Sint16 ***ptr, Sint16 **texid, NJS_CNK_MODEL *model);

Sint32 dgMapGetObjectTexID(Sint16 ***ptr, Sint16 **texid, NJS_CNK_OBJECT *object);

Sint32* dgMapGetMotTblPtr(Sint32 map_ix);

Sint32* dgMapGetObjTblPtr(Sint32 map_ix);

dgMathMatrix* dgMapGetDspMatrixPtr(Sint32 map_ix);

void dgMapSetDspMatrix(Sint32 map_ix, dgMathMatrix *mtrx);

Sint32 dgMapGetObjCix(Sint32 map_ix);
Sint32 dgMapGetMotCix(Sint32 map_ix);
NJS_CNK_OBJECT* dgMapGetDirectObjectPtr(Sint32 obj_cix);
dgObjCtrl* dgMapGetOcPtr(Sint32 map_ix);
mtnPose* dgMapGetOcPosePtr(Sint32 map_ix);

dgMainDisplayListPrio dgMapSetPriority(Sint32 map_ix, dgMainDisplayListPrio type);

dgMainDisplayListPrio dgMapGetPriority(Sint32 map_ix);
Bool dgMapGetCompileIgnoreFlg();

Bool dgMapSetCompileIgnoreFlg(Bool flg);

Bool dgMapGetDrawCompileIgnoreFlg(Sint32 map_ix);

Bool dgMapSetDrawCompileIgnoreFlg(Sint32 map_ix, Bool flg);

static void dgMapCopyFogData(DgFogData *fog_data);
void dgMapSetFogColorRGB(Float r, Float g, Float b);
void dgMapSetFogParam(Float min, Float max, Float near, Float far);
Bool dgMapGetIgnoreFogFlg(Sint16 mapix);

void mtuMatrixUnitRotateY();

void mtuMatrixUnitRotateY_WithoutScale();

void mtuMatrixUnitRotateXY();

void mtuMatrixUnitRotateXY_WithoutScale();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_math.c
// *****************************************************************************

void dgMathScaleVector(dgMathVector3 *vd, dgMathVector3 *vs, Float scale);
void dgMathScaleVector_2P(dgMathVector3 *vd, Float scale);
void dgMathScaleVector2(dgMathVector2 *vd, dgMathVector2 *vs, Float scale);
void dgMathScaleVector2_2P(dgMathVector2 *vd, Float scale);
void dgMathScaleQuaternion(dgMathQuaternion *vd, dgMathQuaternion *vs, Float scale);
void dgMathScaleQuaternion_2P(dgMathQuaternion *vd, Float scale);
Float dgMathGetQuaternionLength(dgMathQuaternion *v);
Float dgMathGetQuaternionLength2(dgMathQuaternion *v);
void dgMathNormalizeQuaternion(dgMathQuaternion *v);
Float dgMathInnerProductQuaternion(dgMathQuaternion *v1, dgMathQuaternion *v2);

void dgMathMultiQuaternion(dgMathQuaternion *ov, dgMathQuaternion *v1, dgMathQuaternion *v2);

void dgMathMultiQuaternion_2P(dgMathQuaternion *ov, dgMathQuaternion *v);

void dgMathQuaternionToMatrix(dgMathMatrix *m, dgMathQuaternion *q);

void dgMathMatrixToQuaternion(dgMathQuaternion *q, dgMathMatrix *m);

void dgMathSetQuaternionMatrix(dgMathQuaternion *q);

void dgMathMultiQuaternionMatrix(dgMathQuaternion *q);

void dgMathGetShadowMatrix(dgMathMatrix *m, Float *p, dgMathVector3 *lvec);

void dgMathSposToVpos(dgMathVector3 *vpos, dgMathVector2 *spos, dgMathVector1 z);

dgMathAngle1 dgMathAtan2(Float y, Float x);

Bool dgMathIsSphereInScreen_Wpos(dgMathVector3 *wpos, dgMathVector1 radius);

Bool dgMathIsSphereInScreen_Vpos(dgMathVector3 *vpos, dgMathVector1 radius);

Float dgMathVposToSpos(dgMathVector2 *spos, dgMathVector3 *vpos);

Float dgMathCalcBspline(Float p0, Float p1, Float p2, Float p3, Float t);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_math_inline.c
// *****************************************************************************

Float dgMathSin(dgMathAngle1 n);
Float dgMathCos(dgMathAngle1 n);
Float dgMathTan(dgMathAngle1 n);
dgMathAngle1 dgMathAsin(Float n);
dgMathAngle1 dgMathAcos(Float n);
dgMathAngle1 dgMathAtan(Float n);
Float dgMathSinh(dgMathAngle1 n);
Float dgMathCosh(dgMathAngle1 n);
Float dgMathTanh(dgMathAngle1 n);
Float dgMathCeil(Float n);
Float dgMathFabs(Float n);
Float dgMathFloor(Float n);
Float dgMathFraction(Float n);
Float dgMathRoundOff(Float n);
Float dgMathRoundUp(Float n);
Float dgMathInvertSqrt(Float n);
Float dgMathSqrt(Float n);
Float dgMathExp(Float x);
Float dgMathLog(Float n);
Float dgMathLog10(Float n);
Float dgMathPow(Float n1, Float n2);
Float dgMathRand();
void dgMathSrand(Uint32 n);
dgMathAngle1 dgMathDegreeToAngle(Float deg);
dgMathAngle1 dgMathAngleMaskU(dgMathAngle1 ang);
dgMathAngle1 dgMathAngleMaskS(dgMathAngle1 ang);
Float dgMathAngleToDegree(dgMathAngle1 ang);
void dgMathInitMatrix(dgMathMatrix *pBuf, Uint32 nSize);
void dgMathPushMatrix();
void dgMathPopMatrix();
void dgMathUnitMatrix();
void dgMathUnitMatrixM(dgMathMatrix *m);
void dgMathCopyMatrixM(dgMathMatrix *dst, dgMathMatrix *src);
void dgMathGetMatrix(dgMathMatrix *m);
void dgMathSetMatrix(dgMathMatrix *m);
void dgMathMultiMatrix(dgMathMatrix *m);
void dgMathAddMatrix(dgMathMatrix *m);
void dgMathSubMatrix(dgMathMatrix *m);
void dgMathTranslate(dgMathVector3 *v);
void dgMathRotateX(dgMathAngle1 ang);
void dgMathRotateY(dgMathAngle1 ang);
void dgMathRotateZ(dgMathAngle1 ang);
void dgMathRotateXYZ(dgMathAngle3 *ang);
void dgMathRotateZXY(dgMathAngle3 *ang);
void dgMathScale(dgMathVector3 *v);
void dgMathScaleXYZ(dgMathVector1 x, dgMathVector1 y, dgMathVector1 z);
void dgMathGetTranslation(dgMathVector3 *v);
void dgMathGetTranslationM(dgMathVector3 *v, dgMathMatrix *m);

void dgMathSetTranslation(dgMathVector3 *v);

void dgMathSetTranslationM(dgMathMatrix *m, dgMathVector3 *v);
Float dgMathDetMatrix();
Bool dgMathInvertMatrix(dgMathMatrix *m);
void dgMathTransposeMatrix(dgMathMatrix *m);
void dgMathCalcPoint(dgMathVector3 *dst, dgMathVector3 *src);
void dgMathCalcPoints(dgMathVector3 *dst, dgMathVector3 *src, int num);
void dgMathCalcVector(dgMathVector3 *dst, dgMathVector3 *src);
void dgMathCalcVectors(dgMathVector3 *dst, dgMathVector3 *src, int num);
void dgMathCopyAngle(dgMathAngle3 *dst, dgMathAngle3 *src);
void dgMathCopyVector(dgMathVector3 *dst, dgMathVector3 *src);
void dgMathUnitVector(dgMathVector3 *v);
Float dgMathGetVectorLength(dgMathVector3 *v);
Float dgMathGetVectorLength2(dgMathVector3 *v);
Float dgMathInnerProduct(dgMathVector3 *v1, dgMathVector3 *v2);
Float dgMathOuterProduct(dgMathVector3 *ov, dgMathVector3 *v1, dgMathVector3 *v2);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_mem.c
// *****************************************************************************

static void make_freep_top(dgMemHeader *freep, int block);
void dgMemInit(void *start, size_t size);
static void mem_error(dgMemHeader *p, int err);
static int check_free_memblock(dgMemHeader *current, int id);
static int check_memblock(dgMemHeader *current, int id);
static void unlink_from_free_memblock(dgMemHeader **top_pptr, dgMemHeader *current);
static void link_to_free_memblock(dgMemHeader **top_pptr, dgMemHeader *current, dgMemHeader *prev);
static dgMemHeader* search_free_memblock_for_small(dgMemHeader *p, int block);

static dgMemHeader* search_free_memblock_for_large(dgMemHeader *p, int block);

static void move_free_memblock_for_small(dgMemHeader **top_pptr, dgMemHeader *current);
static void move_free_memblock_for_large(dgMemHeader **top_pptr, dgMemHeader *current);
static void make_memblock(dgMemHeader *prev, dgMemHeader *current);
static void erase_memblock(dgMemHeader *current);

static dgMemHeader* split_memblock(dgMemHeader **top_pptr, dgMemHeader *current, int block);

static dgMemHeader* combine_memblock(dgMemHeader **top_pptr, dgMemHeader *current);

static void* malloc_sub(dgMemHeader **top_pptr, dgMemHeader *heap_top, int block);

static int size_to_block(size_t size);

void* dgMemMalloc(size_t size);

void* dgMemCalloc(size_t n, size_t size);

static void free_sub(dgMemHeader **top_pptr, dgMemHeader *heap_top, dgMemHeader *current);
void dgMemFree(void *p);

static void* realloc_sub(dgMemHeader **top_pptr, dgMemHeader *heap_top, void *p, int block);

void* dgMemRealloc(void *p, size_t size);

dgMemPartition* dgMemPartitionCreate(size_t size);

void dgMemPartitionDestroy(dgMemPartition *handle);

void* dgMemPartitionMalloc(dgMemPartition *handle, size_t size);

void* dgMemPartitionCalloc(dgMemPartition *handle, size_t size);

void* dgMemPartitionRealloc(dgMemPartition *handle, void *p, size_t size);

void dgMemPartitionFree(dgMemPartition *handle, void *p);
void* dgMemCopy(void *dst, void *src, Sint32 num);
void* dgMemCopy2(void *dst, void *src, Sint32 num);
void* dgMemCopy4(void *dst, void *src, Sint32 num);
void* dgMemCopy8(void *dst, void *src, Sint32 num);
void* dgMemCopy16(void *dst, void *src, Sint32 num);
void* dgMemCopy32(void *dst, void *src, Sint32 num);
void* dgMemCopySQ(void *dst, void *src, Sint32 num);
void* dgMemSet(void *dst, Uint8 dat, Sint32 num);
void* dgMemSet2(void *dst, Uint16 dat, Sint32 num);
void* dgMemSet4(void *dst, Uint32 dat, Sint32 num);
void* dgMemSet8(void *dst, Uint32 dat, Sint32 num);
void* dgMemSet16(void *dst, Uint32 dat, Sint32 num);
void* dgMemSet32(void *dst, Uint32 dat, Sint32 num);
void* dgMemSetSQ(void *dst, Uint32 dat, Sint32 num);
void dgMemCheck(dgMemPartition *handle);

int dgMemGetDivideNum(dgMemPartition *handle);

int dgMemGetRemainAll(dgMemPartition *handle);

int dgMemGetRemainMax(dgMemPartition *handle);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_motion.c
// *****************************************************************************

void dgMotionFreePose(mtnPose *pose);

void dgMotionGetMoveVectorPerLoop(dgMathVector3 *vec, mtnMotion *motion);

Sint32 dgMotionGetFrame(mtnMotion *motion);
Sint32 dgMotionGetJointNum(mtnMotion *motion);
void dgMotionSet(mtnPose *pose, mtnPose *default_pose, mtnMotion *motion, float frame);
void dgMotionSetIncomplete(mtnPose *pose, mtnMotion *motion, float frame);
void dgMotionBlend(mtnPose *pose, mtnMotion *motion, float frame, float alpha);

void dgMotionPoseToMatrix(dgMathMatrix *matrix, mtnPose *pose);

void dgMotionGetTranslationFromPose(dgMathVector3 *vec, mtnPose *pose, int no);

void dgMotionSetTranslationToPose(mtnPose *pose, int no, dgMathVector3 *vec);

void dgMotionGetScaleFromPose(dgMathVector3 *vec, mtnPose *pose, int no);

void dgMotionSetScaleToPose(mtnPose *pose, int no, dgMathVector3 *vec);

void dgMotionSymmetrizePose(mtnPose *dst, mtnPose *src, Sint16 *list);

Sint16* dgMotionGetPlayerSymmetryList();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_movie.c
// *****************************************************************************

static void _dgMovieEntrySofdec(dgMovieCuePtr p, Bool wait);

static void _dgMovieDeleteTopCue();

static void _dgMovieClearAllCue(dgMovieInfoPtr p);

static void _dgMovieClearCue(dgMovieCuePtr p);

static dgMovieCuePtr _dgMovieGetFreeCue(dgMovieCuePtr p);

static dgMovieCuePtr _dgMovieSearchCueOrder(Sint32 no);

static dgMovieCuePtr _dgMovieSearchLastCue(dgMovieCuePtr p);

static dgMovieCuePtr _dgMovieSearchCue(Uint32 serial);

static dgMovieCuePtr _dgMovieDeleteCue(Uint32 serial);

static Sint32 _dgMovieGetStat(MWPLY dmy);

static void _dgMovieError(void *obj, char *errmes);
static void _dgMovieReClearInfo();
static void _dgMovieDisplayControlDebugWindowInfo();
static void _dgMovieDisplayControlDebugWindowCue();
static void _dgMovieClearInfo(MWS_PLY_INIT_SFD *iprm);

static void _dgMovieDisplayDebugWIndowCueOne(GWHWND hwnd, dgMovieCuePtr cue);

static Uint32 _dgMovieGetSerialCue();

static dgMovieCuePtr _dgMovieLinkCue();

void dgMovieEntryFuncMemCopy(void (*func)());

void dgMovieMemCopy(void *dst, void *src, Uint32 num);

void dgMovieEntryFuncMemSet(void (*func)());

void dgMovieEntryFuncMalloc(void* (*func)());

void dgMovieEntryFuncFree(void (*func)());

void* dgMovieMalloc(Uint32 size);

void dgMovieFree(void *ptr);

void dgMovieMemSet(void *dst, Uint8 data, Sint32 num);

void dgMovieInit(Sint32 mode, Sint32 count, Sint32 *tbl);

Sint32 dgMovieGetType(char *fname);

Uint32 dgMoviePlayAfs(Sint32 pid, Sint32 iid, Bool wait);

Uint32 dgMoviePlayAfsSeamlessLoop(Sint32 pid, Sint32 iid, Bool wait);

Uint32 dgMoviePlay(char *fname, Bool wait);

Bool dgMovieStart(Bool wait);

void dgMovieGo();

void dgMovieOffEndToStop();
void dgMovieOnEndToStop();
Uint16 dgMovieGetStat();
void dgMoviePreExecServer();

static Bool _dgGetCurrentMovieTexture(dgMovieInfoPtr p, ulTexture *tex);

static void _dgDrawMovieBackGround(dgMovieInfoPtr p);

void dgMovieExecServer();

void dgMovieStop();

void dgMovieRelease();

Float dgMovieGetTime();
void dgMovieFinish();

Bool dgMovieSetSurface(ulTexList *texlist, Sint32 tex_no);

Uint32 dgMovieEntrySpecify(char *fname, Uint16 cmd, Uint16 para);

Uint32 dgMovieEntryAfsSpecify(Sint32 pid, Sint32 iid, Uint16 cmd, Uint16 para);

Bool dgMovieDeleteCue(Uint32 serial);

Bool dgMovieCreateCore(Sint32 width, Sint32 height, Sint32 bps, Uint16 dsttype, Sint32 filetype);

Bool dgMovieOnPause();

Bool dgMovieOffPause();

Sint32 dgMoviePause();

void dgMovieSetPauseMode(Uint16 time, Bool pause_sw, Bool start_sw);

Sint32 dgMovieGetEntryNum();

Sint32 dgMovieGetNumFiles();

Bool dgMovieIsPlayAfs(Sint32 pid, Sint32 iid);

void dgMovieDisplayDebugWindowInfo(GWHWND hwnd);

char* dgMovieGetNowPlayFilename();

void dgMovieDisplayDebugWindowCue(GWHWND hwnd);

void dgMovieControlDebugWindowInfo();

void dgMovieControlDebugWindowCue();

void dgMovieOffLoop();

void dgMovieOnLoop();

Sint32 dgMovieGetStatLoop();

Sint32 dgMovieGetNumSkip();

Sint32 dgMovieGetNumDecPool();

Sint32 dgMovieGetStatSofdec();

void dgMovieEntryForceSeamless(char *fname);

static void _dgMovieClearEndCallbackInfo(dgMovieEndCallbackInfoPtr p);
static void _dgMovieCallEndCallback(dgMovieInfoPtr p, Sint32 mode);

Bool dgMovieEntryEndCallBack(Uint32 serial, void (*func)());

Bool dgMovieSetNowPlayEndCallBack(void (*func)());

ulTexture* dgMovieGetUlTexturePtr();
static void _dgMovieClearExecCallbackInfo(dgMovieExecCallbackInfoPtr p);
static void _dgMovieCallExecCallback(dgMovieInfoPtr p);

Bool dgMovieEntryExecCallBack(void (*func)(), Sint32 p1, Sint32 p2, Sint32 p3, Sint32 p4);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_obj.c
// *****************************************************************************

static void dg_oc_make_skip_list(Sint8 **ptr, NJS_CNK_OBJECT *ref_obj, NJS_CNK_OBJECT *draw_obj);

static Sint8* dg_oc_get_skip_list(NJS_CNK_OBJECT *ref_obj, NJS_CNK_OBJECT *draw_obj, int num);

static void get_from_object_clear_zero(int num);
static void get_from_object_trace(NJS_CNK_OBJECT *obj, Sint8 **skip_pptr);
static void dg_oc_get_from_object(mtnPose *pose, NJS_CNK_OBJECT *obj, Sint8 **skip_pptr);
static void get_translate_clear_zero(dgMathVector4 **vec, int num);
static void dg_oc_get_translate_list(dgMathVector4 **vec, NJS_CNK_OBJECT *obj, Sint8 **skip_pptr);

void dgOcInit(dgObjCtrl *oc, NJS_CNK_OBJECT *ref_obj, NJS_CNK_OBJECT *draw_obj, dgOcPoseType type);

void dgOcFinish(dgObjCtrl *oc);
void dgOcSetDrawType(dgObjCtrl *oc, dgOcDrawType draw_type);
void dgOcSetShapePose(dgObjCtrl *oc, dgShapePose *pose);
static void overwrite_translation_sub(dgMathVector1 *dst, dgMathVector1 *src, int num);

void dgOcOverwriteTranslationToMatrix(dgObjCtrl *oc, dgMathMatrix *matrix);

static int check_pre_clipping(dgObjCtrl *oc);

static void skip_pose(Sint8 **skip_pptr);

static void skip_matrix(Sint8 **skip_pptr, dgMathMatrix **mat_pptr);

static void matrix_multi_nomotion(NJS_CNK_OBJECT *obj);

static int non_draw_object_nomotion(dgObjCtrl *oc, NJS_CNK_OBJECT *obj);
static int draw_object_nomotion(dgObjCtrl *oc, NJS_CNK_OBJECT *obj);

static int draw_object_nomotion_preclipping(dgObjCtrl *oc, NJS_CNK_OBJECT *obj);

static int draw_object_nomotion_shape(dgObjCtrl *oc, NJS_CNK_OBJECT *obj);

static int draw_object_nomotion_shape_preclipping(dgObjCtrl *oc, NJS_CNK_OBJECT *obj);

static int non_draw_object_by_pose(dgObjCtrl *oc, NJS_CNK_OBJECT *obj, Sint8 **skip_pptr);
static int draw_object_by_pose(dgObjCtrl *oc, NJS_CNK_OBJECT *obj, Sint8 **skip_pptr);

static int draw_object_by_pose_preclipping(dgObjCtrl *oc, NJS_CNK_OBJECT *obj, Sint8 **skip_pptr);

static int draw_object_by_pose_shape(dgObjCtrl *oc, NJS_CNK_OBJECT *obj, Sint8 **skip_pptr);

static int draw_object_by_pose_shape_preclipping(dgObjCtrl *oc, NJS_CNK_OBJECT *obj, Sint8 **skip_pptr);

static int non_draw_object_by_matrix(dgObjCtrl *oc, NJS_CNK_OBJECT *obj, dgMathMatrix **mat_pptr, Sint8 **skip_pptr);
static int draw_object_by_matrix(dgObjCtrl *oc, NJS_CNK_OBJECT *obj, dgMathMatrix **mat_pptr, Sint8 **skip_pptr);

static int draw_object_by_matrix_preclipping(dgObjCtrl *oc, NJS_CNK_OBJECT *obj, dgMathMatrix **mat_pptr, Sint8 **skip_pptr);

static int draw_object_by_matrix_shape(dgObjCtrl *oc, NJS_CNK_OBJECT *obj, dgMathMatrix **mat_pptr, Sint8 **skip_pptr);

static int draw_object_by_matrix_shape_preclipping(dgObjCtrl *oc, NJS_CNK_OBJECT *obj, dgMathMatrix **mat_pptr, Sint8 **skip_pptr);

static int draw_object_nomotion_sub(dgObjCtrl *oc);

static int draw_object_by_pose_sub(dgObjCtrl *oc, Sint8 **skip_pptr);

static int draw_object_by_matrix_sub(dgObjCtrl *oc, dgMathMatrix **mat_pptr, Sint8 **skip_pptr);

int dgOcDrawObjectByPose(dgObjCtrl *oc, mtnPose *pose);

int dgOcDrawObjectByMatrix(dgObjCtrl *oc, dgMathMatrix *matrix);

void dgObjInit();
static void get_model_num_sub(NJS_CNK_OBJECT *object, int *num);

int dgObjGetModelNum(NJS_CNK_OBJECT *object);

static void get_vertex_num_sub(NJS_CNK_OBJECT *object, int *num);

int dgObjGetVertexNum(NJS_CNK_OBJECT *object);

static int strip_format(Sint16 **plist, int through);

static int get_triangle_num(Sint16 *plist);

static void get_polygon_num_sub(NJS_CNK_OBJECT *object, int *num);

int dgObjGetPolygonNum(NJS_CNK_OBJECT *object);

static void get_model_texid(NJS_CNK_MODEL *model, Sint16 ***ptr, Sint16 **tex_id, int *num);

static void get_object_texid(NJS_CNK_OBJECT *object, Sint16 ***ptr, Sint16 **tex_id, int *num);

int dgObjGetModelTexID(NJS_CNK_MODEL *model, Sint16 ***ptr, Sint16 **tex_id);

int dgObjGetObjectTexID(NJS_CNK_OBJECT *object, Sint16 ***ptr, Sint16 **tex_id);

void dgObjSetTexID(Sint16 *ptr, Sint16 id);

Uint32 dgObjSetControl3D(Uint32 flag);

void dgObjGetConstantAttr(Uint32 *and_attr, Uint32 *or_attr);

void dgObjGetConstantMaterial(NJS_ARGB *material);

void dgObjPushVertexBuffer();
void dgObjPopVertexBuffer();

static int obj_search_node_no(int *curr_no, int *node_no, NJS_CNK_OBJECT *ref_obj, NJS_CNK_OBJECT *obj);

int dgObjSearchNodeNo(int no, NJS_CNK_OBJECT *ref_obj, NJS_CNK_OBJECT *obj);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_pad.c
// *****************************************************************************

static void init_paddata(dgPadData *ptr);
static void init_padrec(dgPadRec *ptr);

static void init_cnt(Sint8 *ptr);

void dgPadInit();

void dgPadExit();

static void repeat(ulPeripheral *per, Sint8 *cnt, dgPadData *pad);

static void dblclick(ulPeripheral *per, Sint8 *cnt, dgPadData *pad);

static void copy_paddata(ulPeripheral *per, dgPadData *pad);

int dgPadGetPdPort(dgPadPort no);

static void check_peri_mode(ulPeripheral *per, int *mode, int i, int *no);

static void pad_proc_I();

static void rec_or_play(dgPadRec *rec, dgPadData *pad);

static Bool check_soft_reset();

static int check_ctrl_alt_delete();

void dgPadExecServer();

void dgPadSoftResetForce();
Bool dgPadIsSoftReset();
Bool dgPadIsEnableSoftReset();
void dgPadEnableSoftReset(Bool flag);

Sint32 dgPadSetRepeatFrame(Sint32 frame);

Sint32 dgPadSetDoubleClickFrame(Sint32 frame);

void dgPadSetGamePort(dgPadPort num);
dgPadPort dgPadGetGamePort();

Bool dgPadIsWarning();

dgPadDig dgPadGetActionDig();
dgPadDig dgPadGetCancelDig();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_parabolic.c
// *****************************************************************************

static dgMathVector1 calc_accel(dgMathVector1 vec, dgMathVector1 speed, Sint32 count, Float inv_count_n_n1);

void dgParabInitV3(dgParabVector *parab, dgMathVector3 *from_pos, dgMathVector3 *to_pos, dgMathVector3 *init_velocity, Sint32 count, dgParabFlag flag);

void dgParabCalcV3(dgParabVector *parab);
void dgParabGetPositionV3(dgParabVector *parab, dgMathVector3 *vec);
void dgParabGetVelocityV3(dgParabVector *parab, dgMathVector3 *vec);
void dgParabGetAccelV3(dgParabVector *parab, dgMathVector3 *vec);
Sint32 dgParabGetCountV3(dgParabVector *parab);

void dgParabCreateV3_ForDebug(dgParabVector *parab);

void dgParabDestroyV3_ForDebug(dgParabVector *parab);

void dgParabDrawLineV3_ForDebug(dgParabVector *parab, Uint32 color);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_prestream.c
// *****************************************************************************

Bool dgPrestreamOnLockCue(Uint32 serial);

Bool dgPrestreamOffLockCue(Uint32 serial);

static void _dgPrestreamClearCueOne(dgPrestreamCuePtr p);

static void _dgPrestreamClearCueAll();

static void _dgPrestreamCalcLoadPara();

static Uint32 dgPreloadMakeSerialID();
void dgPrestreamSetPreLoadSize(Sint32 size);
Sint32 dgPrestreamGetPreLoadSize();

void dgPrestreamInit();

Uint16 dgPrestreamGetStatLoad();

static dgPrestreamCuePtr _dgPrestreamGetFreeCue();

static dgPrestreamCuePtr _dgPrestreamSearchLastCue();

static void _dgPrestreamInsertLinkCue(dgPrestreamCuePtr cue);

static dgPrestreamCuePtr _dgPrestreamSearchCue(Uint32 serial);

static void _dgPrestreamDeleteCue(dgPrestreamCuePtr cue, Bool linkstop);

Sint32 dgPrestreamGetEntryNum();

Bool dgPrestreamCancel(Uint32 serial);

Bool dgPrestreamCancelForce(Uint32 serial);

void dgPrestreamCancelAll(Bool linkstop);

void dgPrestreamCancelForceAll(Bool linkstop);

Uint32 dgPrestreamEntrySpecify(Sint32 fmode, char *fname, Sint32 pid, Sint32 iid);

Bool dgPrestreamSetLoadStream(Sint32 stm);

void dgPrestreamFinish();

static dgPrestreamCuePtr _dgPrestreamSearchActiveCue();

static void _dgPrestreamCheckOverlapStream();

void dgPrestreamControlDebugWindowInfo();

static void _dgPrestreamGetFilename(char *dst, dgPrestreamCuePtr cue);

void dgPrestreamDisplayDebugWindowInfo(GWHWND hwnd);

Bool dgPrestreamCheckLoadEnd(Uint32 serial);

Bool dgPrestreamPlayLink(Sint32 stm, Uint32 serial, Bool wait, Bool clear);

Bool dgPrestreamCheckLoadEndAll();

Uint32 dgPrestreamSearchSerialAfs(Sint32 pid, Sint32 iid);

void dgPrestreamExecServer();

static Bool _dgPrestreamLateLink();

static char* _dgPrestreamGetStmName(Sint32 stm);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_printf.c
// *****************************************************************************

void dgPrintfInit();
void dgPrintfExit();
void dgPrintfForce(int x, int y, char *fmt);
void dgPrintf(int x, int y, char *fmt);

int dgPrintfSetSize(int size);

int dgPrintfGetSize();
void dgPrintfSetFlag(int flag);
int dgPrintfGetFlag();
void dgPrintfSwitchFlag();
static void set_text_color(GWHWND hwnd, int type);
static void set_text_color_console(int type);
Uint32 dgPrintfGetTextColor(dgDebugColor type);

void dgPrintfInWindow(GWHWND hWnd, char *fmt);

void dgPrintfKanjiInWindow(GWHWND hWnd, char *fmt);

void dgPrintfSeparaterInWindow(GWHWND hWnd);

void dgPrintfInEditWindow(GWHWND hWnd);

void dgPrintfInConsole(dgDebugColor type, char *fmt);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_quaternion.c
// *****************************************************************************

void dgQuaternionInit(dgMathQuaternion *pBuf, Uint32 nSize);
void dgQuaternionPush(dgMathQuaternion *q);
void dgQuaternionPop();
void dgQuaternionUnit();
void dgQuaternionNormalize();
void dgQuaternionGet(dgMathQuaternion *q);
void dgQuaternionSet(dgMathQuaternion *q);

void dgQuaternionMulti(dgMathQuaternion *q);

void dgQuaternionAdd(dgMathQuaternion *q);

void dgQuaternionSub(dgMathQuaternion *q);

void dgQuaternionScale(Float scl);

void dgQuaternionRotateX(dgMathAngle1 ang);

void dgQuaternionRotateY(dgMathAngle1 ang);

void dgQuaternionRotateZ(dgMathAngle1 ang);

void dgQuaternionInvert();

void dgQuaternionSetVector(dgMathVector3 *vec);

void dgQuaternionGetVector(dgMathVector3 *vec);

Float dgQuaternionGetLength();
Float dgQuaternionGetLength2();
void dgQuaternionCalcMatrix(dgMathMatrix *m);
void dgQuaternionCalcFromMatrix(dgMathMatrix *m);
void dgQuaternionDummy();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_sbinit.c
// *****************************************************************************

void sbInitSystem();
void sbExitSystem();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_screen.c
// *****************************************************************************

void dgScreenGet(NJS_SCREEN *scr);
void dgScreenGetCenter(NJS_SCREEN *scr, Float *cx, Float *cy);
void dgScreenGetAspect(NJS_SCREEN *scr, Float *ax, Float *ay);
void dgScreenGetSize(NJS_SCREEN *scr, Float *w, Float *h);
void dgScreenSet(NJS_SCREEN *scr);
void dgScreenSetCenter(NJS_SCREEN *scr, Float cx, Float cy);
static void change_aspect(NJS_SCREEN *scr);
void dgScreenSetAspect(NJS_SCREEN *scr, Float ax, Float ay);
void dgScreenSetSize(NJS_SCREEN *scr, Float w, Float h);
void dgScreenCopy(NJS_SCREEN *dst, NJS_SCREEN *src);

Float dgScreenSetNearClipZ(Float near_z);

Float dgScreenSetFarClipZ(Float far_z);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_shape.c
// *****************************************************************************

static int cnk_get_type(int cnk);

static int vlist_get_vertex_num(dgObjVlist *vlist);

static dgObjVlist* vlist_new(dgObjVlist *vlist);

static int vlist_copy_num(dgObjVlist *dst, dgObjVlist *src, int num);

static void vc_next2(VlistCtrl *vc);
static void vc_next3(VlistCtrl *vc);
static void vc_set(VlistCtrl *vc, dgObjVlist *vlist, int type);
static void vlist_copy_dummy(VlistCtrl *vc, int vertex_num);
static void vlist_copy_v(VlistCtrl *vc, int vertex_num);
static void vlist_copy_n(VlistCtrl *vc, int vertex_num);
static void vlist_copy_d(VlistCtrl *vc, int vertex_num);
static void vlist_copy_vn(VlistCtrl *vc, int vertex_num);
static void vlist_copy_vd(VlistCtrl *vc, int vertex_num);
static void vlist_copy_nd(VlistCtrl *vc, int vertex_num);
static void vlist_copy_vnd(VlistCtrl *vc, int vertex_num);

static void blend_v3(dgMathVector3 *dst, dgMathVector3 *src0, dgMathVector3 *src1, Float alpha);

static void blend_d8(Uint32 *dst, Uint32 *src0, Uint32 *src1, Float alpha);
static void ratioset_v3(dgMathVector3 *dst, dgMathVector3 *src, Float ratio);
static void ratioset_d8(Uint32 *dst, Uint32 *src, Float ratio);
static void ratioadd_v3(dgMathVector3 *dst, dgMathVector3 *src, Float ratio);
static void ratioadd_d8(Uint32 *dst, Uint32 *src, Float ratio);
static void vlist_blend_dummy(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_blend_v(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_blend_n(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_blend_d(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_blend_vn(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_blend_vd(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_blend_nd(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_blend_vnd(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioset_dummy(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioset_v(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioset_n(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioset_d(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioset_vn(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioset_vd(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioset_nd(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioset_vnd(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioadd_dummy(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioadd_v(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioadd_n(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioadd_d(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioadd_vn(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioadd_vd(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioadd_nd(VlistCtrl *vc, int vertex_num, Float alpha);
static void vlist_ratioadd_vnd(VlistCtrl *vc, int vertex_num, Float alpha);

static int vlist_blend_num(dgObjVlist *dst, dgObjVlist *src, Float alpha, int num);

static void absolute_key_list(dgShapeMotion *motion, Uint32 base);

static void absolute_mdl_list(dgShapeMotion *motion, Uint32 base);

void dgShapeAbsolute(dgShapeMotion *motion);

static void key_make_sub(KeyGroup *kg, dgShapeKeyList *list, Float frame, Float max_frame);

static void key_make(dgShapeMotion *motion, Float frame);

static void key_get_info(int no, int *index, Float *alpha);
static void mdl_new(dgShapePoseModel *mdl);
static void mdl_free(dgShapePoseModel *mdl);

static void mdl_copy(dgShapePoseModel *dst, dgShapePoseModel *src);

static void mdl_blend(dgShapePoseModel *dst, dgShapePoseModel *src, Float alpha);

static void mdl_set_info(dgShapePoseModel *mdl, int element, int nb_data);

static void mdl_multi(dgShapePoseModel *mdl, dgShapeData *shape_data, int element, int nb_data, Float alpha);

static void mdl_set_shape(dgShapePoseModel *mdl, dgShapeData *shape_data, int nb_data);

static void mdl_add_shape(dgShapePoseModel *mdl, dgShapeData *shape_data, int nb_data, Float alpha);

void dgShapeSet(dgShapePose *pose, dgShapeMotion *motion, Float frame);

void dgShapeSet1(dgShapePose *pose, dgShapeMotion *motion, Float frame, int mdl_no);

void dgShapeCopyPose(dgShapePose *dst, dgShapePose *src);

void dgShapeCopyPose1(dgShapePose *dst, dgShapePose *src, int mdl_no);

void dgShapeBlendPose(dgShapePose *pose0, dgShapePose *pose1, Float alpha);

void dgShapeBlendPose1(dgShapePose *pose0, dgShapePose *pose1, Float alpha, int mdl_no);

void dgShapeBlend(dgShapePose *pose, dgShapeMotion *motion, Float frame, Float alpha);

void dgShapeBlend1(dgShapePose *pose, dgShapeMotion *motion, Float frame, Float alpha, int mdl_no);

dgShapePose* dgShapeAllocPose(int model_num);

void dgShapeFreePose(dgShapePose *pose);

static void set_draw_object_sub(dgShapePoseModel **mdl, NJS_CNK_OBJECT *object);

void dgShapeSetDrawObject(dgShapePose *pose, NJS_CNK_OBJECT *object);

Sint32 dgShapeGetFrame(dgShapeMotion *motion);
dgObjVlist* dgShapeGetVlist(dgShapePose *pose, int model_no);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_sound.c
// *****************************************************************************

static SDE_ERR err_disp(SDE_ERR err);

static void sound_draw(GWHWND hwnd);

static void create_window();

static Bool mlt_cache_check_hit(char *filename);
static void mlt_cache_bankload();
static void mlt_cache_init();
static void mlt_cache_pre_entry(char *filename);
static void mlt_cache_perfect_entry();

static void buf_clear();

static void sound_init(void *ptr);

static void sound_init_port();

static void sound_finish_port();

void* dgSoundInitReq(void *parent_task, char *filename);

void dgSoundInit(char *filename);

Bool dgSoundIsReady();
void dgSoundExit();

static void midi_get_stat(SDMIDI hnd, SDS_MIDI_STAT *stat);

static void shot_get_stat(SDSHOT hnd, SDS_SHOT_STAT *stat);

void dgSoundExecServer();

void dgSoundLoadMlt(char *filename);

void dgSoundLoadMltFromMemory(void *ptr, Uint32 size);

void dgSoundStop(dgSoundData se);

void dgSoundStopPort(int port, dgSoundData se);

void dgSoundStopMidiAll();

void dgSoundStopOneshotAll();

void dgSoundStopAll();

void dgSoundPauseAll();

void dgSoundContinueAll();

int dgSoundGetIdleMidiPort();

int dgSoundGetIdleOneshotPort();

int dgSoundPlay(dgSoundData se);

void dgSoundInitMidi(int bank, int seq_no);

void dgSoundPlayMidi(int port, int bank, int seq_no);

void dgSoundStopMidi(int port);

void dgSoundPlayOneshot(int port, int bank, int seq_no);

void dgSoundStopOneshot(int port);

void dgSoundSetMidiSpeed(int port, float value);

void dgSoundSetMidiVolume(int port, int midi_ch, int volume);
void dgSoundSetMidiPan(int port, int midi_ch, int pan);

void dgSoundMidiOn(int port, int midi_ch);

void dgSoundMidiOff(int port, int midi_ch);

void dgSoundMidiOnAll(int port);

void dgSoundMidiOffAll(int port);

static SDE_DATA_TYPE get_data_type_from_fname(char *filename);

static char* get_data_type_name(SDE_DATA_TYPE type);

void dgSoundLoadBankFromMemory(void *ptr, Uint32 size, SDE_DATA_TYPE data_type, int bank);

void dgSoundLoadBank(char *filename, int bank);

static void mem_trans_disp(MemTransTask *task);

static void mem_trans_bank_del(MemTransTask *task);

static void mem_trans_mlt_del(MemTransTask *task);

void* dgSoundLoadBankFromMemoryReq(void *parent_task, void *ptr, Uint32 size, SDE_DATA_TYPE data_type, int bank);

void* dgSoundLoadMltFromMemoryReq(void *parent_task, void *ptr, Uint32 size);

static void load_bank_init(LoadBankTask *task, char *filename, SDE_DATA_TYPE data_type, int bank);
static void load_bank_afs_init(LoadBankTask *task, int pid, int iid, SDE_DATA_TYPE data_type, int bank);
static void load_bank_disp(LoadBankTask *task);
static void load_bank_del(LoadBankTask *task);

void* dgSoundLoadBankReq(void *parent_task, char *filename, int bank);

void* dgSoundLoadBankReq_Afs(void *parent_task, int pid, int iid, SDE_DATA_TYPE data_type, int bank);

static void load_mlt_init(LoadMltTask *task, char *filename);
static void load_mlt_disp(LoadMltTask *task);
static void load_mlt_del(LoadMltTask *task);

void* dgSoundLoadMltReq(void *parent_task, char *filename);

char* dgSoundGetMltFname();
void dgSoundSetPanMode(dgSoundPanMode mode, Bool cfg_change_flag);
dgSoundPanMode dgSoundGetPanMode();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_sound_ev.c
// *****************************************************************************

static void cmd_prestream_entry(sndEvCtrl *ctrl, Uint32 serial_id, Sint16 priority);

static void cmd_prestream_cancel(sndEvCtrl *ctrl, Uint32 serial_id);

static void ev_init(sndEvCtrl *ctrl);

void dgSoundEvInit();

static int snd_entry(sndEvCtrl *ctrl, sndEvBuf *buf);

static Float get_adx_ticks(sndEvCtrl *ctrl, Float ticks);

void dgSoundEvExec();

static void swap_sndbuf(sndEvBuf *current, sndEvBuf *prev);

static int check_snd_ticks(sndEvCtrl *ctrl, sndEvBuf *buf, int current_no);

static int ev_entry(sndEvCtrl *ctrl, Sint32 cmd, dgSoundData no, Sint16 extend, Sint32 ticks);

int dgSoundEvEntry(Sint32 cmd, dgSoundData no, Sint16 extend, Sint32 ticks);

void dgSoundEvSetAdxFastFrame(Float frame);
Float dgSoundEvGetAdxFastFrame();
void dgSoundEvDraw(GWHWND hwnd);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_spledit.c
// *****************************************************************************

static void lpos_to_wpos(dgSplEdit *task, dgMathVector3 *wpos, dgMathVector3 *lpos);
static void wpos_to_lpos(dgSplEdit *task, dgMathVector3 *lpos, dgMathVector3 *wpos);

static dgMathVector3* get_picked_point_all_v3(dgSplEdit *task, int *key_no, int *type);

static dgMathVector3* get_picked_point_v3(dgSplEdit *task, int *key_no);

static void node_edit_func_add_v3(dgSplEdit *task);

static void node_edit_func_delete_v3(dgSplEdit *task);

static void node_edit_func_insert_v3(dgSplEdit *task);
static void node_edit_func_select_v3(dgSplEdit *task);

static void node_edit_func_move_v3(dgSplEdit *task);

static void node_edit_func_moveall_v3(dgSplEdit *task);

static void node_edit_func_add_a1(dgSplEdit *task);

static void node_edit_func_delete_a1(dgSplEdit *task);

static void node_edit_func_insert_a1(dgSplEdit *task);
static void node_edit_func_select_a1(dgSplEdit *task);
static void node_edit_func_move_a1(dgSplEdit *task);

static void calc_spline_v3(dgMathVector3 *work, dgSpline *spl, Sint32 frame);

static Uint32 get_color(int type, int active_flag);

static void draw_spline_v3(dgMathVector3 *work, dgSpline *spl, Sint32 frame, int select_no, int flag);

static void v3_disp(dgSplEdit *task);

static void a1_disp(dgSplEdit *task);

static void spledit_init(dgMemPartition *memp, dgSplEdit *task, int type);
static void spledit_del(dgSplEdit *task);

dgSplEdit* dgSplEditSet(dgMemPartition *memp, void *parent_task, dgSplEditType type);

void dgSplEditSetSpline(dgSplEdit *task, dgSpline *spl);
dgSpline* dgSplEditCopyAndSetSpline(dgSplEdit *task, dgSpline *spl);
dgSpline* dgSplEditGetSpline(dgSplEdit *task);

void dgSplEditSetFrame(dgSplEdit *task, Sint32 frame);

void dgSplEditSetActiveFlag(dgSplEdit *task, int flag);
void dgSplEditSetDispFlag(dgSplEdit *task, int flag);
int dgSplEditGetSelectNo(dgSplEdit *task);
void dgSplEditSetSelectNo(dgSplEdit *task, int select_no);
void dgSplEditAddSelectNo(dgSplEdit *task, int add_value);
void dgSplEditAddPointCallback(dgSplEdit *task, dgSplEditCallback *func);
void dgSplEditInsertPointCallback(dgSplEdit *task, dgSplEditCallback *func);
void dgSplEditSetUserParam(dgSplEdit *task, int param);
int dgSplEditGetUserParam(dgSplEdit *task);
void dgSplEditSetBaseMatrix(dgSplEdit *task, dgMathMatrix *mat);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_spline.c
// *****************************************************************************

static Uint32 calc_point_data_size(int data_type, int nb_point, int spline_type);

static Uint32 get_point_data_size(dgSpline *spl);
static Sint32* get_point_data_ptr(dgSpline *spl);

static Sint32* get_point_data_ptr_ex(dgSpline *spl, int no);

static TimeData* get_time_data_ptr(dgSpline *spl);

static Float get_time_data_t(dgSpline *spl, Float t);

static void v1_calc_bspline(dgMathVector1 *dst, dgMathVector1 *src, Float t);
static void v2_calc_bspline(dgMathVector2 *dst, dgMathVector2 *src, Float t);
static void v3_calc_bspline(dgMathVector3 *dst, dgMathVector3 *src, Float t);
static void a1_calc_bspline(dgMathAngle1 *dst, dgMathAngle1 *src, Float t);
static void a2_calc_bspline(dgMathAngle2 *dst, dgMathAngle2 *src, Float t);
static void a3_calc_bspline(dgMathAngle3 *dst, dgMathAngle3 *src, Float t);
static void v1_play_point(dgMathVector1 *vec, dgSpline *spl, Float t);

static void v1_play_linear(dgMathVector1 *vec, dgSpline *spl, Float t);

static void v1_play_bspline(dgMathVector1 *vec, dgSpline *spl, Float t);

static void v1_play_bspline_l(dgMathVector1 *vec, dgSpline *spl, Float t);
static void v2_play_point(dgMathVector2 *vec, dgSpline *spl, Float t);

static void v2_play_linear(dgMathVector2 *vec, dgSpline *spl, Float t);

static void v2_play_bspline(dgMathVector2 *vec, dgSpline *spl, Float t);

static void v2_play_bspline_l(dgMathVector2 *vec, dgSpline *spl, Float t);
static void v3_play_point(dgMathVector3 *vec, dgSpline *spl, Float t);

static void v3_play_linear(dgMathVector3 *vec, dgSpline *spl, Float t);

static void v3_play_bspline(dgMathVector3 *vec, dgSpline *spl, Float t);

static void v3_play_bspline_l(dgMathVector3 *vec, dgSpline *spl, Float t);
static void a1_play_point(dgMathAngle1 *vec, dgSpline *spl, Float t);

static void a1_play_linear(dgMathAngle1 *vec, dgSpline *spl, Float t);

static void a1_play_bspline(dgMathAngle1 *vec, dgSpline *spl, Float t);

static void a2_play_point(dgMathAngle2 *vec, dgSpline *spl, Float t);

static void a2_play_linear(dgMathAngle2 *vec, dgSpline *spl, Float t);

static void a2_play_bspline(dgMathAngle2 *vec, dgSpline *spl, Float t);

static void a3_play_point(dgMathAngle3 *vec, dgSpline *spl, Float t);

static void a3_play_linear(dgMathAngle3 *vec, dgSpline *spl, Float t);

static void a3_play_bspline(dgMathAngle3 *vec, dgSpline *spl, Float t);

static Float work_search_frame(Float *work, Float frame, int *start_idx);

static void work_to_time_data(dgSpline *spl, TimeData *ptr, Float *work);

static void make_time_data_v1(dgSpline *spl, TimeData *ptr, Float *work);

static void make_time_data_v2(dgSpline *spl, TimeData *ptr, Float *work);

static void make_time_data_v3(dgSpline *spl, TimeData *ptr, Float *work);

static void make_time_data(dgSpline *spl);

void dgSplinePlayVector1(dgMathVector1 *vec, dgSpline *spl, Float t);
void dgSplinePlayVector2(dgMathVector2 *vec, dgSpline *spl, Float t);
void dgSplinePlayVector3(dgMathVector3 *vec, dgSpline *spl, Float t);
void dgSplinePlayAngle1(dgMathAngle1 *vec, dgSpline *spl, Float t);
void dgSplinePlayAngle2(dgMathAngle2 *vec, dgSpline *spl, Float t);
void dgSplinePlayAngle3(dgMathAngle3 *vec, dgSpline *spl, Float t);
void dgSplinePlay(void *vec, dgSpline *spl, Float t);
void dgSplinePlayFrameVector1(dgMathVector1 *vec, dgSpline *spl, Float frame);
void dgSplinePlayFrameVector2(dgMathVector2 *vec, dgSpline *spl, Float frame);
void dgSplinePlayFrameVector3(dgMathVector3 *vec, dgSpline *spl, Float frame);
void dgSplinePlayFrameAngle1(dgMathAngle1 *vec, dgSpline *spl, Float frame);
void dgSplinePlayFrameAngle2(dgMathAngle2 *vec, dgSpline *spl, Float frame);
void dgSplinePlayFrameAngle3(dgMathAngle3 *vec, dgSpline *spl, Float frame);
void dgSplinePlayFrame(void *vec, dgSpline *spl, Float frame);
static int check_spline_type(int nb_point, int spline_type);

static Uint32 calc_time_data_size(int nb_frame, int data_type, int spline_type);

static Uint32 get_time_data_size(dgSpline *spl);

static Uint32 calc_size(int data_type, int nb_point, int nb_frame, int spline_type);

static Uint32 get_size(dgSpline *spl);
static void copy_point(Sint32 *dst, Sint32 *src, int element_num);
static void copy_point_nbs_to_nbs(Sint32 *dst, Sint32 *src, int element_num, int num);
static void copy_point_nbs_to_bs(Sint32 *dst, Sint32 *src, int element_num, int num);
static void copy_point_bs_to_nbs(Sint32 *dst, Sint32 *src, int element_num, int num);
static void copy_point_bs_to_bs(Sint32 *dst, Sint32 *src, int element_num, int num);

static void swap_point(Sint32 *v0, Sint32 *v1, int element_num);

static void swap_point_nbs(Sint32 *ptr, int element_num, int num);

static void swap_point_bs(Sint32 *ptr, int element_num, int num);

static int get_copy_type(dgSpline *dst, dgSpline *src);

static void add_point_data(dgSpline *dst, dgSpline *src, void *data);

static void insert_point_data(dgSpline *dst, dgSpline *src, void *data, int num);

static void delete_point_data(dgSpline *dst, dgSpline *src, int num);

dgSpline* dgSplineCreate(dgSpline *spl, dgSplineDataType data_type, int nb_point, int nb_frame, dgSplineType spline_type);

dgSpline* dgSplineCreateEx(dgMemPartition *memp, dgSpline *spl, dgSplineDataType data_type, int nb_point, int nb_frame, dgSplineType spline_type);

void dgSplineDestroy(dgSpline *spl);
void dgSplineDestroyEx(dgMemPartition *memp, dgSpline *spl);
dgSpline* dgSplineCopy(dgSpline *dst, dgSpline *src);
dgSpline* dgSplineCopyEx(dgMemPartition *memp, dgSpline *dst, dgSpline *src);

void dgSplineReverse(dgSpline *spl);

void dgSplineSetPoint(dgSpline *dst, int no, void *data);

dgSpline* dgSplineAddPoint(dgSpline *spl, void *data);

dgSpline* dgSplineAddPointEx(dgMemPartition *memp, dgSpline *spl, void *data);

dgSpline* dgSplineInsertPoint(dgSpline *spl, int no, void *data);

dgSpline* dgSplineInsertPointEx(dgMemPartition *memp, dgSpline *spl, int no, void *data);

dgSpline* dgSplineDeletePoint(dgSpline *spl, int no);

dgSpline* dgSplineDeletePointEx(dgMemPartition *memp, dgSpline *spl, int no);

dgSpline* dgSplineSetFrame(dgSpline *spl, int nb_frame);

dgSpline* dgSplineSetFrameEx(dgMemPartition *memp, dgSpline *spl, int nb_frame);

dgSpline* dgSplineSetSplinePlayLinearMode(dgSpline *spl, Bool flag);

dgSpline* dgSplineSetSplinePlayLinearModeEx(dgMemPartition *memp, dgSpline *spl, Bool flag);

void* dgSplineGetDataPtr(dgSpline *spl, int no, int type);

int dgSplineGetType(dgSpline *spl);
int dgSplineGetPointNum(dgSpline *spl);
Uint32 dgSplineGetSize(dgSpline *spl);
dgSplineType dgSplineGetSplineType(dgSpline *spl);
void dgSplineMakeTimeData(dgSpline *spl);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_stream.c
// *****************************************************************************

static Uint32 _dgStreamPlayAfsMovie(Sint32 dmy, Sint32 pid, Sint32 iid, Bool wait);
static Uint32 _dgStreamPlayMovie(Sint32 dmy, char *fname, Bool wait);
static Uint16 _dgStreamGetStatMovie(Sint32 dmy);
static void _dgStreamStopMovie(Sint32 dmy);
static Float _dgStreamGetTimeMovie(Sint32 dmy);
static Uint32 _dgStreamEntryAfsMovie(Sint32 dmy, Sint32 pid, Sint32 iid, Uint16 cmd, Uint16 para);
static Uint32 _dgStreamEntryMovie(Sint32 dmy, char *fname, Uint16 cmd, Uint16 para);
static Sint32 _dgStreamPauseMovie(Sint32 dmy);
static void _dgStreamGoMovie(Sint32 dmy);
static void _dgStreamClearInfo(dgStreamInfoPtr p);

static void _dgStreamClearSystemInfo();

static void _dgStreamClearTimerSwitchBufOne(dgStreamTimeSwitchCuePtr p);

static void _dgStreamClearTimerSwitchBufAll(dgStreamTimeSwitchCuePtr p);

static void _dgStreamClearTimerSwitchInfo();

static Uint32 _dgStreamGetSerialTimeSwitchCue();

static dgStreamTimeSwitchCuePtr _dgStreamSearchFreeTimeSwitchCue(Sint32 cueno);

static dgStreamTimeSwitchCuePtr _dgStreamDeleteTimeSwitchCue(Sint32 cueno, Uint32 serial);

static dgStreamTimeSwitchCuePtr _dgStreamSearchTimeSwitchCue(Sint32 cueno, Uint32 serial);

static Sint32 _dgStreamAddTimeSwitchCue(Sint32 cueno, dgStreamTimeSwitchCuePtr p);

static Sint32 _dgStreamSearchLastTimeSwitchCue(Sint32 cueno, dgStreamTimeSwitchCuePtr *last);

static Sint32 _dgStreamSearchFreeAudio(Sint32 cueno);

static Bool _dgStreamWaitFreeAudio(Sint32 stream);

static void _dgStreamPlay(Sint32 stream, char *fname);

static void _dgStreamPlayAfs(Sint32 stream, Sint32 pid, Sint32 iid);

static Sint32 _dgStreamReportTimeSwitchGoTiming(dgStreamTimeSwitchCuePtr p);

static Bool _dgStreamCheckTimeSwitchCue(dgStreamTimeSwitchCuePtr p);

static void _dgStreamExecTimeSwitchCue();

static void _dgStreamSetFunction();

static char* _dgStreamMakeStringsFileInfo(Sint32 fmode, char *fname, Sint32 pid, Sint32 iid);
static void _dgStreamDisplayControlDebugWindowInfo();

static dgStreamInfoPtr _dgStreamEntryAllSyncCore(Sint32 stm);

void dgStreamInit(Sint32 mode, Sint32 count, Sint32 *tbl);

Sint32 dgStreamSearchPlayStreamNoAfs(Sint32 pid, Sint32 iid);

Bool dgStreamCreateAllHandleSpecify(Sint32 width, Sint32 height, Sint32 bps, Uint16 dsttype, Sint32 filetype);

Bool dgStreamCreateMovieSpecify(Sint32 width, Sint32 height, Sint32 bps, Uint16 dsttype, Sint32 filetype);

Bool dgStreamCreateAudioAll();

Bool dgStreamCreateAudio(Sint32 stm);

void dgStreamReleaseAudio(Sint32 stm);

void dgStreamReleaseAllHandle();

void dgStreamReleaseMovie();

void dgStreamReleaseAudioAll();

static char* _dgStreamGetStatName(Sint32 stat);

static char* _dgStreamGetStmName(Sint32 stat);

static char* _dgStreamGetADXTStatName(Sint32 stm);

Sint32 dgStreamPause();

void dgStreamSetPauseMode(Uint16 time, Bool pause_sw, Bool start_sw);

void dgStreamPreExecServer();

static void _dgStreamPrintfConsolePause(char *header);

void dgStreamExecServer();

Bool dgStreamSetStartBaseTime(Sint32 stm, Float base);

Bool dgStreamPlayAllSync(char *movie, char *music1, char *music2, char *voice1, char *voice2);

Bool dgStreamEntryAllSync(Sint32 stm, char *fname);

void dgStreamStop(Sint32 stm);

void dgStreamStopAll();

Bool dgStreamEntryAfsAllSync(Sint32 stm, Sint32 pid, Sint32 iid);

Bool dgStreamCheckReadyAllSync();

void dgStreamGoAllSync();

void dgStreamFinish();

Uint32 dgStreamEntryTimeSwitchCue(Sint32 cueno, Sint32 stream, Float time, char *fname);

Uint32 dgStreamEntryAfsTimeSwitchCue(Sint32 cueno, Sint32 stream, Float time, Sint32 pid, Sint32 iid);

Uint32 dgStreamEntryTimeSwitchCueSpecify(dgStreamTimeSwitchCueParaPtr p);

Bool dgStreamDeleteTimeSwitchCue(Sint32 cueno, Uint32 serial);

Uint16 dgStreamGetStatTimeSwitchCue(Sint32 cueno, Uint32 serial);

Uint16 dgStreamGetStatTimeSwitchStream(Sint32 cueno, Uint32 serial);

Bool dgStreamCheckReadyTimeSwitchCue(Sint32 cueno, Uint32 serial);

Uint32 dgStreamSearchTimeSwitchSerialAfs(Sint32 pid, Sint32 iid);

Bool dgStreamGoTimeSwitchCue(Sint32 cueno, Uint32 serial);

Uint32 dgStreamPlaySeamless(Sint32 stream, char *fname, Bool wait);

Uint32 dgStreamPlayAfsSeamless(Sint32 stream, Sint32 pid, Sint32 iid, Bool wait);

static dgStreamInfoPtr _dgStreamGetInfoPtr(Sint32 stm);

Bool dgStreamGo(Sint32 stm);

void dgStreamSetStat(Sint32 stm, Uint16 stat);

Sint32 dgStreamGetPauseStat();

Uint16 dgStreamGetStat(Sint32 stm);

Float dgStreamGetTime(Sint32 stm);

Float dgStreamGetStartBaseTime(Sint32 stm);

Sint32 dgStreamGetFreeStream(Sint32 kind);

static void _dgStreamDebWinDelete(dgStreamDebWinInfoPtr wininfo);
static void _dgStreamDebWinPrintfFirst(dgStreamDebWinInfoPtr wininfo);

static void _dgStreamDebWinGwWindowPrintf(dgStreamDebWinInfoPtr wininfo, char *buf, Sint32 y);

static void _dgStreamDebWinDrawLog(GWHWND hWnd, dgStreamDebWinInfoPtr wininfo);

static void _dgStreamDebWinDrawCommon(GWHWND hWnd);

static void _dgStreamDebWinDeleteCommon(GWHWND hWnd);

static void _dgStreamDebWinExecCommon(GWHWND hWnd);

static void _dgStreamDebWinPrintf(dgStreamDebWinInfoPtr wininfo, char *fmt);

static void _dgStreamDebWinClearInfo(dgStreamDebWinInfoPtr wininfo);

static Bool _dgStreamDebWinPreCreateLog(dgStreamDebWinInfoPtr wininfo, Sint32 b_w, Sint32 b_h);

static Bool _dgStreamDebWinCreate(dgStreamDebWinInfoPtr wininfo, dgStreamDebWinKind kind, char *caption, Sint32 x, Sint32 y, Sint32 w, Sint32 h, Sint32 b_w, Sint32 b_h, GWHWND parent, void (*drawfunc)());

static void _dgStreamTimeSwitchDebugDrawCue(GWHWND hWnd);

static void _dgStreamTimeSwitchDebugDrawLog(GWHWND hWnd);

void dgStreamControlDebugWindowInfo();

void dgStreamDisplayDebugWindowInfo(GWHWND hwnd);

void dgStreamPrintfDebWinLog(char *fmt);

Sint32 dgStreamGetTimeSwitchStreamNo(Sint32 cueno, Uint32 serial);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_superh.c
// *****************************************************************************

static void window_draw_sub0(GWHWND hwnd);

static void window_draw_sub1(GWHWND hwnd);

static void window_draw_sub2(GWHWND hwnd);
static void window_draw(GWHWND hwnd);
static void create_window1(void *task);
static Float sec_to_ticks(Float sec, Uint32 ticks_per_minute);
static void seq_copy(shSequenceBuf *dst, shSequenceBuf *src);

static int seq_entry(shSequenceCtrl *ctrl, shSequenceBuf *src);

int dgShEntrySequence(int nb_beat, int beat_per_meas, int bpm, int type);

void dgShSetSeqParam(int seq_entry_no, int param);

static void seq_init(shMainBuf *mainbuf);

static int seq_start(shMainBuf *mainbuf);

static int seq_next(shMainBuf *mainbuf);

static int seq_exec_prep(shMainBuf *mainbuf);

static int seq_exec(shMainBuf *mainbuf);

static void buf_clear_all(shMainBuf *buf);

static void buf_clear(shMainBuf *buf);

static void sh_init(void *task, int type);

static void sh_exec(void *task);

static void sh_disp(void *task);
static void sh_del(void *task);

void* dgShInit(void *parent_task, dgShToolType type);

static void labels_absolute_sub(dgShLabel *label, int num, Uint32 base);
static void fname_absolute_sub(char **fname, int num, Uint32 base);

void dgShSet(dgShHeader *ptr);

void dgShStartEx(int menu_no);

void dgShStart();
void dgShStop();
Sint16 dgShGetLabelNo2B(int label_no);
dgShLabelType dgShGetLabelType2B(int label_no);

Sint16* dgShGetLabelPtr(int label_type, int label_no);

Sint16* dgShGetLabelPtr2B(int label_no);

char* dgShGetLabelName(int label_type, int label_no);

char* dgShGetLabelName2B(int label_no);

void dgShSetLastExecLabel(int label_type, int label_no);
int dgShGetLastExecLabel(int label_type);

char* dgShGetFileName(int fno);

dgShWalkLevel dgShGetWalkLevel();
void dgShSetWalkLevel(dgShWalkLevel level);
dgShCdsLevel dgShGetCdsLevel();
void dgShSetCdsLevel(dgShCdsLevel level);
int dgShGetLevelQ();
void dgShSetLevelQ(int level);
int dgShGetLevelStep();
void dgShSetLevelStep(int level);
dgShStat dgShGetStatus();
Sint32 dgShGetNextEntryBeat();
Sint32 dgShGetMeasure();
Float dgShGetBeat();
Float dgShGetBeatInMeasure();
Float dgShGetTicks();
Sint32 dgShGetBeatPerMeasure();
Float dgShGetFrame();
Float dgShGetBpm();
Float dgShGetFramePerBeat();
Float dgShGetMotionFramePerBeat();
Sint32 dgShBeatToTicks(Float beat);
Float dgShTicksToBeat(Sint32 ticks);
int dgShGetSeqStartId();
int dgShGetSeqNextId(int id);
dgShSeqType dgShGetSeqType(int id);
int dgShGetSeqStartBeat(int id);
int dgShGetSeqBeatNum(int id);
int dgShGetSeqParam(int id);
int dgShGetSpeed();
int dgShGetMenuNum(dgShHeader *header);

char* dgShGetMenuName(dgShHeader *header, int no);

dgShToolType dgShGetToolType();
void dgShSetBlockMode(dgShBlockMode mode);
dgShBlockMode dgShGetBlockMode();
Bool dgShIsEnableQuitBattle();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_superh_ev.c
// *****************************************************************************

static int push_ev(dgShEventTask *task, Sint16 *ptr);
static int pop_ev(dgShEventTask *task);
static int local_to_global_ticks(dgShEventTask *task, int ticks);
static Bool func_return(dgShEventTask *task);
static Bool func_chkbtl(dgShEventTask *task);
static Bool func_calc_btllv(dgShEventTask *task);
static Bool func_chkcds(dgShEventTask *task);

static Bool func_chkget(dgShEventTask *task);

static Bool func_chkq(dgShEventTask *task);
static Bool func_chkstep(dgShEventTask *task);
static Bool func_clrgetall(dgShEventTask *task);
static Bool func_wait_floadend(dgShEventTask *task);
static Bool func_wait_ploadend(dgShEventTask *task);
static Bool func_wait_qend(dgShEventTask *task);
static Bool func_se_defall(dgShEventTask *task);

static Bool func_start(dgShEventTask *task);

static Bool func_startq(dgShEventTask *task);

static Bool func_chkinp(dgShEventTask *task);

static Bool func_chkshota(dgShEventTask *task);

static Bool func_chkshotb(dgShEventTask *task);

static Bool func_chkshotm(dgShEventTask *task);

static Bool func_clrget(dgShEventTask *task);
static Bool func_mtr_off(dgShEventTask *task);
static Bool func_mtr_on(dgShEventTask *task);
static Bool func_se_def(dgShEventTask *task);

static Bool func_premusic(dgShEventTask *task);

static Bool func_prevoice(dgShEventTask *task);

static Bool func_sound_now(dgShEventTask *task);

static Bool func_midiinit(dgShEventTask *task);

static Bool func_waitbeat(dgShEventTask *task);

static Bool func_file_mlt(dgShEventTask *task);

static Bool func_file_afsb(dgShEventTask *task);

static Bool func_file_afsm(dgShEventTask *task);

static Bool func_file_afsv(dgShEventTask *task);

static Bool func_jmp(dgShEventTask *task);

static Bool func_jsr(dgShEventTask *task);

static Bool func_se_reset(dgShEventTask *task);

static Bool func_se_add(dgShEventTask *task);

static Bool func_se_del(dgShEventTask *task);

static Bool func_file_sndbank(dgShEventTask *task);

static Bool func_afs_fpb(dgShEventTask *task);

static Bool func_afs_mpb(dgShEventTask *task);

static Bool func_afs_msb(dgShEventTask *task);

static Bool func_afs_osb(dgShEventTask *task);

static Bool func_music(dgShEventTask *task);

static Bool func_voice(dgShEventTask *task);

static Bool func_sound(dgShEventTask *task);

static Bool func_ifeq(dgShEventTask *task);

static Bool func_ifge(dgShEventTask *task);

static Bool func_ifgt(dgShEventTask *task);

static Bool func_ifle(dgShEventTask *task);

static Bool func_iflt(dgShEventTask *task);

static Bool func_ifneq(dgShEventTask *task);

static Bool func_seq(dgShEventTask *task);

static Bool func_bratbl(dgShEventTask *task);

static Bool func_bsrtbl(dgShEventTask *task);

static Bool func_bratbl2(dgShEventTask *task);

static Bool func_bsrtbl2(dgShEventTask *task);

static Bool func_input(dgShEventTask *task);

static Bool func_input_enm(dgShEventTask *task);

static Bool func_rateboss(dgShEventTask *task);

static Bool func_rateinit(dgShEventTask *task);

static Bool func_ratekime(dgShEventTask *task);

static Bool func_ratenorm(dgShEventTask *task);

static Bool func_ratesecret(dgShEventTask *task);

static Bool func_chkcmb(dgShEventTask *task);

static Bool func_chkkey(dgShEventTask *task);

static Bool func_soundcmb(dgShEventTask *task);

static Bool func_sounddir(dgShEventTask *task);

static Bool func_sounddirab(dgShEventTask *task);

static Bool func_secret(dgShEventTask *task);

static Bool func_steplv1(dgShEventTask *task);

static Bool func_steplv2(dgShEventTask *task);

static Bool func_boss(dgShEventTask *task);

static Bool func_skip(dgShEventTask *task);

static Bool func_walkse(dgShEventTask *task);

static Bool func_file_caption(dgShEventTask *task);

static Bool func_caption(dgShEventTask *task);

static Bool func_karaoke(dgShEventTask *task);

static Bool func_reset_result(dgShEventTask *task);

static Bool func_file_sfd(dgShEventTask *task);

static Bool func_file_m1v(dgShEventTask *task);

static Bool func_prelink(dgShEventTask *task);
static void ev_init(dgShEventTask *task, Sint16 *ev);

static void ev_exec(dgShEventTask *task);

static void ev_disp(dgShEventTask *task);
static void ev_del(dgShEventTask *task);

void* dgShEventSetChild(void *parent, Sint16 *ev);

void dgShEventDelete(void *task);
void dgShEventQuitBattleReq();
Bool dgShEventIsActive(void *task);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_superh_spy.c
// *****************************************************************************

static void spy_ctrl_init(dgShSpyTask *task, int sub_block_no);

static void spy_ctrl_exec(dgShSpyTask *task);

static void spy_ctrl_disp(dgShSpyTask *task);
static void spy_ctrl_del(dgShSpyTask *task);

void* dgShSpyInit(void *parent_task, int sub_block_no);

static void spy_init(dgShSpy *handle, void *task);
static void spy_del(dgShSpy *handle);

dgShSpy* dgShSpySet(void *task);

static void call_callback_func(dgShSpy *task, int type);

void dgShSpyExec(dgShSpy *task);

void dgShSpySetMovCallback(dgShSpy *task, dgShSpyMovCallback func);
void dgShSpySetBtlCallback(dgShSpy *task, dgShSpyBtlCallback func);
void dgShSpySetQaCallback(dgShSpy *task, dgShSpyQaCallback func);
void dgShSpySetBrkCallback(dgShSpy *task, dgShSpyBrkCallback func);
void dgShSpySetDestructor(dgShSpy *task, dgShSpyDestructor func);
void dgShSpySetUserBuf(dgShSpy *task, void *user_buf);
void* dgShSpyGetUserBuf(dgShSpy *task);
void* dgShSpyGetParentTask(dgShSpy *task);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_system.c
// *****************************************************************************

void dgSysInit();

static void gdfs_errfunc(void *obj, Sint32 err);
void dgSysInitGdfsErrorFunc();
static void eor_callback(void *arg);
void dgSysInitEorCallback();
static void loop_vsync_func(void *arg);
void dgSysInitVblankInCallback();
void dgSysInitSync(Sint32 cnt);

void dgSysPreStartDraw();

void dgSysSyncFrame();

void dgSysGoBootReq();

void dgSysCheckDoorOpen();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_task.c
// *****************************************************************************

void dgTaskInit();

dgTaskRoot* dgTaskGetRoot();
dgTaskHeader* dgTaskGetHeader(void *task);
void* dgTaskGetTaskFromHeader(dgTaskHeader *h);

void* dgTaskGetChild(void *task);

void* dgTaskGetSibling(void *task);

void* dgTaskGetParent(void *task);

static Bool is_task(dgTaskHeader *h);

static void mem_free(dgTaskHeader *h);

static dgTaskHeader* task_delete(dgTaskHeader *h, dgTaskHeader *s);

static void delete_loop(dgTaskHeader *h);

static void task_loop(dgTaskHeader *h);

void dgTaskLoop();

void dgTaskFreeze(void *task);

void dgTaskMelt(void *task);

static void task_set_child(dgMemPartition *p, void *task, dgTaskHeader *h, dgTaskParam *param);

static void task_set_sibling(dgMemPartition *p, void *task, dgTaskHeader *h, dgTaskParam *param);

void* dgTaskSetChild(void *task, size_t size, dgTaskParam *param);

void* dgTaskSetChildP(dgMemPartition *p, void *task, size_t size, dgTaskParam *param);

void* dgTaskSetSibling(void *task, size_t size, dgTaskParam *param);

void* dgTaskSetSiblingP(dgMemPartition *p, void *task, size_t size, dgTaskParam *param);

void dgTaskDelete(void *task);

Bool dgTaskIsActive(void *task);

void dgTaskChangeExecFunc(void *task, void *func);

void dgTaskChangeDispFunc(void *task, void *func);

void dgTaskChangeDeleteFunc(void *task, void *func);

void dgTaskChangeCaption(void *task, char *caption);

char* dgTaskGetCaption(void *task);
Bool dgTaskIsPause();

void dgTaskEnablePause(Bool flag);

Bool dgTaskIsEnablePause();

void* dgTaskMalloc(void *task, size_t size);

void* dgTaskCalloc(void *task, size_t size);

void dgTaskFree(void *task, void *ptr);

int dgTaskGetNum();

dgMainDisplayListPrio dgTaskSetPrio(void *task, dgMainDisplayListPrio prio);

void dgTaskSetPauseFlag(Sint8 pause_flag);
Sint8 dgTaskGetPauseFlag();
Uint32 dgTaskGetExecMicro(void *task);
Uint32 dgTaskGetDispMicro(void *task);
Uint32 dgTaskGetHrcExecMicro(void *task);
Uint32 dgTaskGetHrcDispMicro(void *task);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_task_debug.c
// *****************************************************************************

void dgTaskDebugInit();

static void make_safe_str(char *buf, char *str);

static void task_debug_loop(GWHWND hwnd, void *task, int hrc_lv);

static void task_debug_draw(GWHWND hwnd);
void dgTaskDebugCreateWindow(void *parent_task);
void dgTaskDebugPrintConsole();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_tex.c
// *****************************************************************************

dgTexInfo* dgTexLoadPvmFromMemory(void *ptr);

void dgTexFreePvm(dgTexInfo *info);
Sint32 dgTexReNumberGlobalIndexPvm(Uint8 *ptr, Uint32 base);
Sint32 dgTexReNumberGlobalIndexOffsetPvm(Uint8 *ptr, Uint32 base);

void dgTexMakeRectSprite(dgTexRectSprite *spr, int sizex, int sizey, Float u1, Float v1, Float u2, Float v2, Float cx, Float cy);

void dgTexDrawRectSprite(dgTexRectSprite *spr, Float x, Float y, Float z);

void dgTexDrawRectSpriteS(dgTexRectSprite *spr, Float x, Float y, Float z, Float scale_x, Float scale_y);

void dgTexDrawPartsColG(dgTexParts *parts, Sint32 gix, float x, float y, float priority, Uint32 color);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_util.c
// *****************************************************************************

void* dgUtilDialog(void *parent_p, void (*func_p)(), char *caption_p, char *fmt);

void* dgUtilDialogCancel(void *parent_p, void (*func_p)(), char *caption_p, char *fmt);

GWHWND dgUtilGetDialogHandle(void *dialog_p);

void dgUtilDrawCrossLine(dgMathVector3 *pos_p, Uint32 color, float scale);

void dgUtilDrawCube(dgMathVector3 *pos_p, Uint32 color, float scale);

void* dgUtilFreeCameraInit(void *parent_p);

void* dgUtilFreeCameraInitForce(void *parent_p);

void dgUtilFreeCameraSetMode(dgPadPort port, Bool mode);
void dgUtilFreeCameraSetType(Bool analog, Bool digital);

void dgUtilFreeCameraSetAngle(dgMathAngle1 angle);

void dgUtilFreeCameraSetPosition(dgMathVector3 *pos_p, dgMathAngle3 *ang_p);

void dgUtilFreeCameraGetPosition(dgMathVector3 *pos_p, dgMathAngle3 *ang_p);

void dgUtilInterestCameraSet(dgMathVector3 *target_p);

void dgUtilInterestCameraSetRadiusParam(float min, float max, float def_radius);
float dgUtilInterestCameraGetRadius();
dgMathAngle3* dgUtilInterestCameraGetAngle();

dgMathAngle1 dgUtilInterestCameraSetLimitAngleX(dgMathAngle1 ang);

Bool dgUtilFreeCameraSetEnableAngleEdit(Bool flag);

static void dialog_open(DialogTask *task_p, void (*func_p)(), char *caption_p, char *button_str_p);

static void dialog_button_callback(GWHWND wnd_h, Sint32 mode);

static void dialog_disp(DialogTask *task_p);
static void dialog_del(DialogTask *task_p);
static void dialog_disp_gindows(GWHWND wnd_h);

static void free_cam_get_info(FreeCamTask *task_p);

static void free_cam_move_slide(FreeCamTask *task_p, dgPadPort port, float speed);

static void free_cam_move_rotate(FreeCamTask *task_p, dgPadPort port, float speed);
static void int_cam_init(FreeCamTask *task_p);

static void int_cam_exec(FreeCamTask *task_p, dgPadPort port, float speed, float rad_speed);

static void free_cam_camera(NJS_CAMERA *cam_p);

static void int_cam_callback(NJS_CAMERA *camera_p);

static void free_cam_set_gindows(Bool flag);

static void free_cam_debug_disp(GWHWND wnd_h);

static void free_cam_mode_set(Bool mode);

static void free_cam_disp(FreeCamTask *task_p);
static void free_cam_del(FreeCamTask *task_p);
static int com_freecam(int argc, char **argv);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_uv.c
// *****************************************************************************

static void uv_plist_sub(Sint16 *plist, dgUVData *data, Sint8 flg);

static void get_uv_plist(Sint16 *plist, dgUVData *data);
static void get_uv_model(NJS_CNK_MODEL *model, dgUVData *data, dgUV **uv_buf_ptr);

static void get_uv_object(NJS_CNK_OBJECT *obj, dgUVList *list, Sint32 *ix_ptr, dgUV **uv_buf_ptr);

void dgUVGet(NJS_CNK_OBJECT *obj, dgUVList *list);

void dgUVInit(NJS_CNK_OBJECT *obj, dgUVList *list);
void dgUVDel(dgUVList *list);

static void set_uv_plist(Sint16 *plist_ptr, dgUV *uv_tbl);

void dgUVSetValueObject(dgUVList *src_list, dgUVFloat *lu_val, dgUVFloat *rd_val);

void dgUVSetValueModel(dgUVData *src_data, dgUVFloat *lu_val, dgUVFloat *rd_val);

void dgUVSetIndexModel(dgUVData *src_data, Sint8 ix);
dgMathVector3* dgUVGetModelPosPtr(dgUVData *src_data);
Sint32 dgUVGetModelNum(dgUVList *list);
dgUVData* dgUVGetDataPtr(dgUVList *list, Sint32 ix);
void set_tex_id(Sint16 *ptr, Sint16 id);
void dgUVSetTexId(dgUVData *src_data, Sint32 texid);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_vblanktimer.c
// *****************************************************************************

static void _dgVblanktimerClearInfo(dgVblanktimerInfoPtr p, Uint16 myno);

static void _dgVblanktimerClearInfoAll(dgVblanktimerSystemInfoPtr f);

static void _dgVblanktimerFuncTimer(void *arg);

void dgVblanktimerStep();

void dgVblanktimerInit(Sint32 cabletype, Sint32 system_count);

void dgVblanktimerFinish();

Uint32 dgVblanktimerGetCount(Sint32 no);

Float dgVblanktimerGetTimer(Sint32 no);

void dgVblanktimerClearTimer(Sint32 no);

void dgVblanktimerOnPause();
void dgVblanktimerOffPause();
Uint16 dgVblanktimerGetPauseStat();
Uint16 dgVblanktimerPause();

void dgVblanktimerSetVelocity(Sint32 no, Uint32 velocity);

Uint32 dgVblanktimerGetVelocity(Sint32 no);

void dgVblanktimerDisplayControlDebugWindow();

static void _dgVblanktimerControlDebugWindowInfo();

static void _dgVblanktimerDisplayDebugWindowInfo(GWHWND hwnd);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_vibrator.c
// *****************************************************************************

static vibEvBuf* unlink_buf_top(vibEvBuf **sbuf, vibEvBuf **ebuf);

static void link_buf_next(vibEvBuf *prev, vibEvBuf *buf, vibEvBuf **sbuf, vibEvBuf **ebuf);

static vibEvBuf* search_prev_buf(dgVibTask *task, Sint32 ticks);

static void vib_init(dgVibTask *task);

static void vib_play(vibEvBuf *buf);

static Float get_fast_ticks(Float ticks, int level);

static void vib_exec(dgVibTask *task);

static void vib_disp(dgVibTask *task);

static void vib_del(dgVibTask *task);

void* dgVibSet(void *parent_task);

void dgVibEntry(Sint8 level, Sint32 ticks);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_walk.c
// *****************************************************************************

void dgWalkInit(dgWalkCtrl *wc);
void dgWalkGetMovePerLoop(dgWalkCtrl *wc, mtnMotion *motion, dgWalkLoopFlag flag);

void dgWalkAdjustPose(mtnPose *pose, dgWalkCtrl *wc);

void dgWalkLoop(dgWalkCtrl *wc, mtnPose *pose, mtnMotion *motion, dgWalkLoopFlag flag);
void dgWalkAccumulate(dgWalkCtrl *dst, dgWalkCtrl *src);
void dgWalkMultiMatrix(dgWalkCtrl *wc);

void dgWalkGetWPosition(dgWalkCtrl *wc, dgMathVector3 *wpos, dgMathMatrix *matrix);

void dgWalkGetVPosition(dgWalkCtrl *wc, dgMathVector3 *vpos, dgMathMatrix *matrix);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dummy_func.c
// *****************************************************************************

int debug_open(char *filename, int flags);
int debug_close(int file);
int debug_read(int file, char *ptr, int len);
int debug_write(int file, char *ptr, int len);
int debug_lseek(int file, int offset, int origin);
char* debug_getcwd(char *buffer, int maxlen);
int debug_chdir(char *dirname);
int debug_mkdir(char *dirname);
void njAccumlationBufferMode(Int SrcSelect, Int DstSelect);
Uint32 njCalcTexture(Uint32 type);
Uint32 njCalcVertexBufferSize(NJS_VERTEXBUFFER_INFO *pVBInfo);
void* njCnkDirectObjectCompile(NJS_CNK_OBJECT *obj, void *ptr);
Uint32 njCnkDirectObjectCompileSize(NJS_CNK_OBJECT *obj);
Sint32 njCnkModDrawModel(NJS_CNK_MODEL *model);
void njCnkSetToonLight(Float x, Float y, Float z);
void njCnkSetToonLightIntensity(Float inten, Float ambient);
void njCnkSetToonEdge(Float rate, Uint32 col);
void njCnkSetToonShade(Uint32 face, Uint32 shadow);
Sint32 njCnkToonDrawModel(NJS_CNK_MODEL *model);
Sint32 njCnkToonEdgeDrawModel(NJS_CNK_MODEL *model);
void njDirectDrawObject(NJS_DIRECT_HEAD *model);
void njSetDirectLight(Float x, Float y, Float z);
void njSetDirectLightColor(Float r, Float g, Float b);
void njSetDirectClip();
void njDrawLineExStart(Float r, Uint32 BaseColor, Sint32 Trans);
void njDrawLineExEnd();
void* njGetVertexBuffDesc();
void njInitDevice();
void njWaitVBlank();
void njInitVertexBufferEx(NJS_VERTEXBUFFER_INFO *pVBInfo);
Sint32 njStartCheck();
void njInitShape(void *buf, Sint32 size);
void njInitTextureEx(NJS_TEXMANAGE *pmng, Int nmng, NJS_TEXSYSTEM *psys, Int nsys);
void njSetFogDensity(Uint32 density);
void njSetFogTable(Float *fog);
void njGenerateFogTable3(Float *fog, Float n, Float f);
void njSetPaletteMode(Uint32 mode);
Sint32 nuReLoadTextureNumG(Uint32 globalIndex, void *texaddr, Uint32 attr, Uint32 lod);
void njUnitTransPortion(NJS_MATRIX *m);
SYCALLBACK syCallbackAddHandler(SY_CALLBACK_EVENT event, Void (*usrCallbackFunc)(), Uint8 priority, Void *arg);
Void syCallbackDeleteHandler(SYCALLBACK callbackId);
Sint32 syComInit(void *rcvbuf, Uint32 size);
void syComExit();
Sint32 syComOpenEx(SYS_COM_PARAM *param);
Sint32 syComPutq(Sint8 data);
Sint32 syComIsPut();
Sint32 syComClose();
void syMngInit();
void syMngFinish();
Bool kmyIsDisplayOddField();
Bool mwPlyExecTexSvr();
Bool mwPlyExecDrawSvr();
Sint32 mwPlyGetNumDispWait(MWPLY ply);
void mwPlySetVertexBuffer(void *vbuf);
void mwPlySetVideoSw(MWPLY ply, Sint32 sw);
void pdMouseInit();
void pdMouseExit();
void pdMouseExecServer();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/effect.c
// *****************************************************************************

static void eff_init(EffTexTask *task, Uint32 *texnum_tbl, Uint32 *cix_tbl);

static void eff_dsp(EffTexTask *task);

static void eff_del(EffTexTask *task);

void* EffInit(void *parent);

static void player_col_exe(void *task);

void* EffGetPlayerColInit(void *parent);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/enemy_effect.c
// *****************************************************************************

EnemyBeamCtrl* EnemyEffectChargeBeamEx(void *parent_p, dgMathVector3 *pos_p, float scale);

void EnemyEffectShotBeam(EnemyBeamCtrl *charge_p);

void EnemyEffectShotBeamR(EnemyBeamCtrl *charge_p);

void EnemyEffectShotBeamEx(EnemyBeamCtrl *charge_p, dgMathVector3 *target_p);

void* EnemyEffectComboBeamEx(void *parent_p, Sint32 seq_id, Sint32 qno, dgMathMatrix *center_mat_p, float radius, float up_offset, float charge_scale, float shoot_scale);

void* EnemyEffectEscapeBeam(void *parent_p, Sint32 seq_id, Sint32 qno, dgMathMatrix *center_mat_p, float radius, float up_offset);

EnmShadowBoostHandle* EnmShadowBoostCreateHandle(void *parent_p, dgCharCtrl *shadow_ctrl_p);

EnmShadowBoostHandle* EnmMuscleBoostCreateHandle(void *parent_p, dgCharCtrl *muscle_ctrl_p);

void EnmShadowBoostDestroyHandle(EnmShadowBoostHandle *boost_h);

EnemyBoostHandle* EnemyBoostCreateHandle(void *parent_p, dgCharCtrl *enemy_ctrl_p);

void EnemyBoostDestroyHandle(EnemyBoostHandle *boost_h);
static void eneeff_beam_disp_charge(EnemyBeamCtrl *task_p);
static void eneeff_beam_disp_shot(EnemyBeamCtrl *task_p);

static void enemy_combo_man_exec(EneComboManTask *task_p);

static void enemy_combo_man_exec_escape(EneComboManTask *task_p);

static void enemy_combo_man_wait_end(EneComboManTask *task_p);
static void enemy_combo_man_wait_del(EneComboManTask *task_p);

static EneComboTask* enemy_combo_init(EneComboManTask *parent_p, Sint32 qno, Sint32 timing_num, dgMathMatrix *center_mat_p, float set_beat, float scale);

static void enemy_combo_init_position(EneComboTask *task_p, Sint32 dir_index, Sint32 count, float upoffset, float radius);

static void enemy_combo_calc_pos(EneComboTask *task_p);

static void enemy_combo_set_effect(EneComboTask *task_p, float length, float scale);

static void enemy_combo_exec_set(EneComboTask *task_p);

static void enemy_combo_exec_set_escape(EneComboTask *task_p);

static void enemy_combo_exec_check_hit(EneComboTask *task_p);

static void enemy_combo_exec_wait_clear(EneComboTask *task_p);

EnemyWarpHandle* EnemyWarpInit(void *parent_p, dgCharCtrl *src_p, dgCharMotionData *warp_motion_p, Sint32 motion_index, Bool fade_in);

void EnemyWarpDestroy(EnemyWarpHandle *warp_h);

void EnemyWarpExec(EnemyWarpHandle *warp_h);

void EnemyWarpDraw(EnemyWarpHandle *warp_h);

static void warp_draw_use_material(dgCharCtrl *char_ctrl_p, NJS_ARGB *argb_p, Bool blend_control);

static void shadow_boost_exec(EnmShadowBoostHandle *boost_h);

static void shadow_boost_del(EnmShadowBoostHandle *boost_h);
static void enemy_boost_exec(EnemyBoostHandle *boost_h);
static void enemy_boost_del(EnmShadowBoostHandle *boost_h);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/enemy_effect_inline.c
// *****************************************************************************

void EnemyEffectInitLost(void *parent_p, EnemyEffectLostWork *work_p, dgMathVector3 *center_pos_p);

Bool EnemyEffectDispLost(EnemyEffectLostWork *work_p);

EnemyBeamCtrl* EnemyEffectChargeBeam(void *parent_p, dgMathVector3 *pos_p);
void* EnemyEffectComboBeam(void *parent_p, Sint32 seq_id, Sint32 qno, dgMathMatrix *center_mat_p, float radius, float up_offset);

void* EnemyEffectSetHitMarkR(void *parent_p, dgMathVector3 *pos_p, Bool result);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/eneset_editor.c
// *****************************************************************************

static void eneset_init_eneset_data(EneSetData *data);

static EneSetData* eneset_check_dir_id(Sint16 dir_id, Sint16 id);

static void eneset_get_filename(EneEditorTask *task, int mode);

static size_t eneset_get_bup_file_size(EneEditorTask *task);

static size_t eneset_get_bup_file_size_leader(EneEditorTask *task);

static void* eneset_copy_data(void *dst, void *src, void *ptr, size_t size);

static void eneset_bup_file_save(EneEditorTask *task);

static Bool eneset_bup_file_load(EneEditorTask *task);

static int eneset_spline_data_num_get(EneEditorTask *task, int save_mode);

static void eneset_bup_file_save_c_file(EneEditorTask *task);

static void eneset_bup_file_save_c_file_leader(EneEditorTask *task);

static void eneset_editor_spline_create(EneSetData *data);
static void eneset_editor_spline_destroy(EneSetData *data);

static void eneset_editor_calc_hndl_pos(EneSetData *data);

Sint16 EneEditorMarkCreateWithAttribute(Sint16 dir_id, Sint16 id, dgMathVector3 *pos, dgMathAngle3 *ang, dgMathVector3 *ref_pos, dgMathAngle3 *ref_ang, dgMathMatrix *ref_mat, Sint16 attrib);

void EneEditorMarkKillId(Sint16 dir_id, Sint16 id);

void EneEditorMarkKill(EneSetData *data);

void EneEditorMarkAttached(EneSetData *data, Sint16 null_obj_id);

void EneEditorMatrixSet(Sint16 dir_id, Sint16 id);

void EneEditorMatrixSetRelative(Sint16 dir_id, Sint16 id);

void EneEditorSetRefMatrix(Sint16 dir_id, Sint16 id, dgMathMatrix *ref_mat);

Sint8 EneEditorShootDirToEnesetDirId(ShootDir shoot_dir);

void EneEditorGetEditPosAng(Sint16 dir_id, Sint16 id, dgMathVector3 *pos, dgMathAngle3 *ang);

void EneEditorSet(void *parent_p);

static void eneset_editor_init(EneEditorTask *task);

static void eneset_editor_exec(EneEditorTask *task);

static void eneset_editor_disp_sub_key_mode_set(EneEditorTask *task);

static void eneset_editor_disp_sub_key_mode_save(EneEditorTask *task);
static void eneset_editor_disp_sub_key_mode_load(EneEditorTask *task);
static void eneset_editor_disp_sub_key_mode_save_c_file(EneEditorTask *task);
static void eneset_editor_disp_sub_key(EneEditorTask *task);

static void eneset_editor_disp_sub_spline(EneSetData *data);

static void eneset_editor_disp_sub_mark(EneEditorTask *task);

static void eneset_editor_disp(EneEditorTask *task);

static void eneset_editor_del(EneEditorTask *task);

static void editor_window_create(EneEditorTask *task);

static void editor_window_disp(GWHWND hwin);

static void editor_window_clear(EneEditorTask *task);

static void editor_window_printf(int x, int y, char *fmt);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/face.c
// *****************************************************************************

void FaceSetTask(void *parent_p, Sint32 face_iid, Sint32 shape_index, float load_beat, float set_beat);

static void face_exec_wait_load(FaceTask *task_p);

static void face_exec_wait_set(FaceTask *task_p);

static void face_exec(FaceTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/facepatchg.c
// *****************************************************************************

Float FacePatChgGetChangeBeat();

Bool FacePatChgSetChangeBeat(Float beat);

void* FacePatChgInit(void *parent_p);

void* FacePatChgGetTaskPtr();

static FacePatChgDataPtr _FacePatChgGetFree();

static FacePatChgDataPtr _FacePatChgSearchChar(dgCharNo charno);

Sint32 FacePatChgGet();

void FacePatChgSetAll(Sint32 id);

dgCdbFaceDataPtr FacePatChgEntryChar(dgCharNo charno);

void FacePatChgReleaseChar(dgCharNo charno);

void FacePatChgPlay();
void FacePatChgStop();

static void _facepatchg_exec(FacePatChgTaskPtr t);

static void _facepatchg_disp(FacePatChgTaskPtr t);
static void _facepatchg_del(FacePatChgTaskPtr t);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/finishbattle.c
// *****************************************************************************

void* FinishBattleInit(void *parent_p, Sint32 mtp_iid);

void FinishBattleKill();
Bool FinishBattleIsWin();
Bool FinishRequestChangeMotion();

Bool FinishIsRequestedChangeMotion();

Bool FinishBattleIsEffected();

static void finish_exec(FinishTask *task_p);

static void finish_disp(FinishTask *task_p);
static void finish_del(FinishTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/indicate.c
// *****************************************************************************

void IndicateInit();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/kairobo.c
// *****************************************************************************

Bool KairoboExecDanceCommon(void *task_p, DanceEnemyCtrl *ctrl_p, dgCharObjCtrl *obj_ctrl_p);

void* KairoboSetEscapeEffect(DanceEnemyCtrl *ctrl_p, EnemyEffectLostWork *work_p);

void KairoboExecDanceByStatus(DanceEnemyStatus status, DanceEnemyCtrl *ctrl_p, dgCharObjCtrl *obj_ctrl_p);
static void kairobo_escape_exec(KairoboEscapeTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/karaoke.c
// *****************************************************************************

static void init_kj();

static void karaoke_sub_init(KaraokeSubTask *task, KaraokeDataSub *data, Sint32 start_beat);

static Bool is_entry_afs(int pid, int iid);

static void karaoke_sub_exec(KaraokeSubTask *task);

static void karaoke_sub_disp(KaraokeSubTask *task);
static void karaoke_sub_del(KaraokeSubTask *task);

static void* karaoke_entry(KaraokeTask *parent_task, KaraokeDataSub *data, Sint32 start_beat);

static void karaoke_qa_entry(KaraokeTask *task, Sint32 start_beat, Sint32 qno);

static void cb_btl(dgShSpy *handle, Sint32 start_beat, Sint32 sub_block_no);

static void cb_qa(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 qno);

static void cb_brk(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 brkno);

static void str_entry_sub(KaraokeDataSub *data);
static void str_entry_all(Sint32 num, KaraokeData *data);
static void str_release_sub(KaraokeDataSub *data);
static void str_release_all(Sint32 num, KaraokeData *data);

static void face_disp(void *task);

static void* face_entry_set(void *parent_task);

static void karaoke_init(KaraokeTask *task, KaraokeBlockData *data);
static void karaoke_exec(KaraokeTask *task);
static void karaoke_disp(KaraokeTask *task);
static void karaoke_del(KaraokeTask *task);

void* KaraokeSet(void *parent_task, KaraokeBlockData *data);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/lcd.c
// *****************************************************************************

void* LcdInit(void *parent_p);

void LcdSetSystemIcon(LcdSystemIconType mark);

void LcdAloowLogoDisp(LcdNumber port, Bool flag);

static void lcd_set_icon_data(LcdTask *task_p, Uint8 *src_pic_p);
static void lcd_set_lcd(LcdTask *task_p, LcdNumber lcd_number, Uint8 *pic_data_p);

static void lcd_exec(LcdTask *task_p);

static void lcd_del(LcdTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/libpatch.c
// *****************************************************************************

Sint32 SetTextureNum(Uint32 texID);
Sint32 SetTextureNumG(Uint32 gIndex);
static int hierCnkIsCompileObject(NJS_CNK_OBJECT *obj);
int CnkIsCompileObject(NJS_CNK_OBJECT *obj);

void CnkDirectDrawObjectCompile(NJS_CNK_OBJECT *obj);

void DrawCellSprite2DAddPALYofs(NJS_CELL_SPRITE *srcspr, NJS_CELL_SPRITE_VAL *cval, float yofs);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/lightctrl.c
// *****************************************************************************

static void light_flush(LightCtrlTask *task);

static void light_interp_calc(LightCtrlTask *task, Float frame);

static void light_interp_zero_clear(LightCtrlTask *task);

static void light_interp_set(LightCtrlTask *task, LightParam *to, Float frame);

static void light_fix_set(LightCtrlTask *task, LightParam *param);

static void set_poison_light(LightPoison *data);

static void cb_mov(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 sub_block_no, Sint32 sub_sub_no);

static void light_init(LightCtrlTask *task, LightData *data, Sint32 sub_block_no, Sint32 max_sub_block_num);

static void light_exec(LightCtrlTask *task);

static void light_disp(LightCtrlTask *task);
static void light_del(LightCtrlTask *task);

LightCtrlTask* LightSet(void *parent_task, LightData *data, int sub_block_no);

LightCtrlTask* LightSetEx(void *parent_task, LightDataEx *data, int sub_block_no);

void LightSetPoisonData(LightCtrlTask *task, LightPoisonData *data);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/lpr_set.c
// *****************************************************************************

static void lpr_init(LprTask *task, char *filename, int block_no);
static void lpr_disp2(LprTask *task);
static void lpr_disp1(LprTask *task);
static void lpr_del(LprTask *task);

void* LprSet(void *parent_task, char *filename, int block_no);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/main.c
// *****************************************************************************

void dgMain();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/makuma.c
// *****************************************************************************

static void makuma_sub_init(MakumaSubTask *task, MakumaFileData *data, void *prev_play_task, Sint32 *count);

static void makuma_sub_exec(MakumaSubTask *task);

static void makuma_sub_disp(MakumaSubTask *task);

static void makuma_sub_del(MakumaSubTask *task);

static void* makuma_sub_set(MakumaTask *parent_task, MakumaFileData *data, void *prev_play_task, Sint32 *count);

static void makuma_init(MakumaTask *task, MakumaType type, MakumaFileData **file);
static void makuma_exec(MakumaTask *task);

static void makuma_disp(MakumaTask *task);

static void makuma_del(MakumaTask *task);

void* MakumaSet(void *parent_task, MakumaType type);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/mapobj.c
// *****************************************************************************

int MapobjGetStepLevel(MapobjGameData *data);
int MapobjGetStepNo(MapobjGameData *data);
Bool MapobjIsBreakTiming(MapobjGameData *data);
void MapobjGameDataInit(MapobjGameData *data);

void MapobjGameDataExe(MapobjGameData *data);

int MapobjGetQtype(MapobjGameData *data);
int MapobjGetQno(MapobjGameData *data);
int MapobjGetSeqid(MapobjGameData *data);
int MapobjGetSubBlockNo(MapobjGameData *data);
void MapobjSetSubBlockNo(MapobjGameData *data, int sub_block_no);
int MapobjGetBattleCount(MapobjGameData *data);
int MapobjGetPreBattleCount(MapobjGameData *data);
int MapobjGetConnectMoveCount(MapobjGameData *data);
int MapobjGetPreConnectMoveCount(MapobjGameData *data);
int MapobjGetStartBeat(MapobjGameData *data);
int MapobjGetPreStartBeat(MapobjGameData *data);
int MapobjGetPrePreStartBeat(MapobjGameData *data);
int MapobjGetBeatNum(MapobjGameData *data);
int MapobjGetPreBeatNum(MapobjGameData *data);
int MapobjGetPrePreBeatNum(MapobjGameData *data);
int MapobjGetSeqType(MapobjGameData *data);
int MapobjGetPreSeqType(MapobjGameData *data);
int MapobjGetPrePreSeqType(MapobjGameData *data);

void MapobjGetPosSub(NJS_CNK_OBJECT *obj_p, dgMathVector3 *pos_tbl, dgMathAngle3 *ang_tbl);

Sint16 MapobjGetMoveStartBeat(MapobjGameData *data);
Sint16 MapobjGetBattleStartBeat(MapobjGameData *data);
Sint16 MapobjGetQAStartBeat(MapobjGameData *data);
Sint16 MapobjGetBreakStartBeat(MapobjGameData *data);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/mtp_man.c
// *****************************************************************************

Bool MtpIsActive(MtpHandle *mtp_h);
char* MtpGetFileName(MtpHandle *mtp_h);
char* MtpGetFileNameFromIID(Sint32 iid);
Bool MtpIsAbsoluted(MtpHandle *mtp_h);
void MtpInitAfsNameTable(char **name_tbl_p);
MtpHandle* MtpLoadReqEx(void *parent_p, Sint32 iid);
MtpHandle* MtpLoadReqDelayEx(void *parent_p, Sint32 iid, Sint32 frame);

MtpHandle* MtpLoadReqFromAfs(void *parent_p, Sint32 iid);

MtpHandle* MtpLoadReqDelayFromAfs(void *parent_p, Sint32 iid, Sint32 frame);

MtpHandle* MtpLoadReq(void *parent_p, char *filename_p);

MtpHandle* MtpLoadReqDelay(void *parent_p, char *filename_p, Sint32 frame);

MtpHandle* MtpLoad(void *parent_p, char *filename_p);

dgCharMotionData* MtpGetMotionData(MtpHandle *mtp_h);

Sint32 MtpGetShapeNum(MtpHandle *handle_p);

dgShapeMotion** MtpGetShapeDataTable(MtpHandle *handle_p);
dgShapeMotion** MtpGetShapeDataTableFromMotionData(dgCharMotionData *motdata_p);
void MtpFree(MtpHandle *mtp_h);
void MtpPermitRead(Bool flag);
void MtpInitDebug();
void MtpFinishDebug();
static void mtp_print_status(MtpHandle *mtp_h, char *status_p);

static void mtp_set_filename(char *filename_p);

static void mtp_loadreq_core(MtpHandle *mtp_h);

static void mtp_loadreq_afs_core(MtpHandle *mtp_h);

static void mtp_wait_disp(MtpHandle *mtp_h);

static void mtp_loadend(Uint32 serial_id, void *dst_p, void *void_mtp_h, Sint32 param2);

static void mtp_del(MtpHandle *mtp_h);
static MtpShapeError mtp_is_shapedata(MtpHandle *handle_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/musicman.c
// *****************************************************************************

static void musicman_draw(GWHWND hwnd);

static void create_window(MusicManTask *task);
static void set_volume(MusicManTask *task, int midi_ch, int volume);

static void set_volume_all(MusicManTask *task, int volume);

static int charno_2_midich(MusicManTask *task, dgCharNo no);

static void musicman_link(MusicManTask *task, dgCharNo no);

static void musicman_unlink_all(MusicManTask *task);

static void sub_init(MusicManSubTask *task, MusicManTask *parent_task, int qno);
static void get_char_no_all(MusicManTask *task, int qno, int timing_num);

static void sub_exec(MusicManSubTask *task);

static void musicman_sub_set(MusicManTask *parent_task, int qno);

static void cb_btl(dgShSpy *handle, Sint32 start_beat, Sint32 sub_block_no);

static void cb_qa(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 qno);

static void cb_brk(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 brkno);

static void musicman_init(MusicManTask *task, MusicManData *data);

static void musicman_calc(MusicManTask *task);

static void musicman_start(MusicManTask *task);

static void musicman_end(MusicManTask *task);

static void musicman_exec_sub(MusicManTask *task, Float beat);

static void musicman_exec(MusicManTask *task);

static void musicman_disp(MusicManTask *task);
static void musicman_del(MusicManTask *task);

void* MusicManSet(void *parent_task, MusicManData *data);

int MusicManGetNum();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/nowloading.c
// *****************************************************************************

void NowLoadingInit(void *ptr);
void NowLoadingExit();
void NowLoadingDelete();
static void init_kj();
static void nl_init(NlTask *task);

static void nl_disp(NlTask *task);

static void nl_del(NlTask *task);

static void nl_kb_set_cell(NkbTask *task, int type, int cell_no, int disp_flag);

static void nl_kb_init(NkbTask *task);

static void nl_kb_disp(NkbTask *task);

static void nl_kb_del(NkbTask *task);

static void nl_user_disp(void *task);
static void nl_user_del();

void* NowLoadingSet(void *parent);

void NowLoadingSetUserFunc(void* (*func)());

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/party.c
// *****************************************************************************

void* PartyInitMaster(void *parent_p);

Bool PartySaveManager();

void PartyInitAll();

Bool PartyRestoreMember();

void* PartyInit(void *parent_p, dgCharMotionData *mot_p);

void PartySetInstMotionData(PartyInstMotionData *inst_data_p);

Bool PartyControlIsAppeared(PartyControl *ctrl_p);
dgCharNo PartyGetCharNo(PartyControl *ctrl_p);
void* PartyGetParentTaskPtr(PartyControl *ctrl_p);
void PartyIgnorePlayerCopy(PartyControl *ctrl_p);
void PartyChangeCharCtrl(PartyControl *ctrl_p, dgCharCtrl *char_ctrl_p, dgCharMotionCtrl *mot_ctrl_p);

Bool PartyCalcCenterMatrix(PartyControl *ctrl_p, dgMathMatrix *mat_p);

Bool PartyCalcFootMatrix(PartyControl *ctrl_p, dgMathMatrix *mat_p);

PartyControl* PartyGetPartyControl(PartyFormationIndex formation_index, Sint32 index);

void* PartyFreeze();

void PartyKill();

Bool PartyIsAddMember();

void PartySetPositionCallbackFunc(Sint32 (*func_p)());

void PartySetFormation(PartyFormationMotion *formation_p[3]);

void PartySetFormationForce(PartyFormationMotion *formation_p[3]);

PartyFormationMotion*[3] PartyGetFormationForce();
void PartySetForceCalcFormationMode(Bool flag);
void* PartyCreateTask(size_t work_size, dgTaskParam *param_p);

Sint32 PartySetMemberLimit(Sint32 limit);

void PartyChangeShadowFunc(dgCharShadowCallbackFunc *func_p);

Sint32 PartyChangeFaceType(Sint32 face_type);

Bool PartyControlIsDisp(PartyControl *ctrl_p);
PartyFormationIndex PartyControlGetFormationIndex(PartyControl *ctrl_p);

PartyControl* PartyAddMember(void *task_p, dgCharCtrl *char_ctrl_p, dgCharMotionCtrl *mot_ctrl_p, void* (*init_func_p)());

PartyControl* PartyAddMemberEx(void *task_p, dgCharCtrl *char_ctrl_p, dgCharMotionCtrl *mot_ctrl_p, void* (*init_func_p)());

Bool PartyGetMatrix(PartyControl *party_ctrl_p, dgMathMatrix **mat_pp);

Bool PartyGetMatrixFromIndex(dgMathMatrix **mat_pp, PartyFormationIndex type, Sint32 index);
void PartyExecCommon(PartyControl *party_ctrl_p);

void PartySetConstantSynchro(Bool flag);

void PartySetWipe(PartyWipeType type);

void PartyUpdate();

void PartyPermitOnlyNewMember(Bool permission);

Sint32 PartyGetMemberNumber();
Sint32 PartyGetGroupMemberNumber(PartyFormationIndex formation_index);
Bool PartyIsActive();
void PartySetBossMode();
void PartySetHideByPlayerSide(Bool hide_flag);
void PartySetCallbackMotionBySequence(PartyMotionFunc *func_p);
void PartySetMotion(PartyControl *ctrl_p, dgCharMotionData *mot_p, Sint32 motion_index);
void PartySetFoceFlag(PartyControl *ctrl_p, Bool flag);
void PartyRequestCalcPosition();
void PartySetMotionIndexAdd(Bool flag);
void PartyClrInstMotion(PartyControl *ctrl_p);
void PartySetFormationIndexForce(PartyFormationIndex index);
void PartySetUhayhoo();
static void party_master_save_data(PartyMasterTask *task_p);
static void party_master_load_data(PartyMasterTask *task_p);

static void party_master_clr_data();

static void party_master_init(PartyMasterTask *task_p);

static void partyman_init(PartyManTask *task_p, dgCharMotionData *mot_p);

static void partyman_param_push(PartyManTask *fake_task_p, PartyManTask *task_p);
static void partyman_param_pop(PartyManTask *task_p, PartyManTask *fake_task_p);

static void partyman_exec(PartyManTask *task_p);

static void partyman_exec_next_motion(PartyManTask *task_p);

static void partyman_exec_next_seq(PartyManTask *task_p);

static Bool partyman_is_next_point(PartyManTask *task_p);

static void party_master_disp(PartyMasterTask *task_p);
static void partyman_disp(PartyManTask *task_p);
static void partyman_del(PartyManTask *task_p);
static void party_master_del(PartyMasterTask *task_p);

static void party_search_inst_motion(PartyControl *ctrl_p);

static void party_init_instrument(PartyControl *ctrl_p);

static void party_set_motion(PartyControl *ctrl_p, dgCharMotionData *def_mot_p, Sint32 def_mot_index);

static void party_set_motion_by_sequence(PartyControl *party_ctrl_p);

static void party_exec_common_disp_now(PartyControl *party_ctrl_p);

static void party_exec_common_no_disp(PartyControl *party_ctrl_p);

static Bool partyman_is_disp_member(PartyManTask *task_p, PartyControl *ctrl_p, Sint32 all_member, Sint32 limit_number);
static Sint32 partyman_get_disp_number(PartyManTask *task_p);

static void party_freeze_ctrl();

static PartyControl* party_get_new_ctrl();

static PartyControl* party_master_create_ctrl(void *task_p, dgCharCtrl *char_ctrl_p, dgCharMotionCtrl *mot_ctrl_p, void* (*init_func_p)());

static PartyControl* party_master_create_new_ctrl(dgCharCtrl *char_ctrl_p, dgCharMotionCtrl *mot_ctrl_p);

static void party_master_call_resume_func(PartyControl *ctrl_p);

static PartyControl* party_master_resume_ctrl(dgCharCtrl *char_ctrl_p, dgCharMotionCtrl *mot_ctrl_p);

static PartyControl* party_master_link_all_ctrl(PartyMasterTask *task_p);

static void party_init_ctrl_for_instrument(PartyControl *ctrl_p, dgCharCtrl *char_ctrl_p, dgCharMotionCtrl *mot_ctrl_p);
static void party_master_set_top_ctrl_ptr(PartyFormationIndex index, PartyControl *ctrl_p);
static PartyControl* party_master_get_top_ctrl_ptr(PartyFormationIndex index);

static PartyControl* party_master_get_ctrl_from_index(PartyMasterTask *master_task_p, PartyManTask *man_task_p, Sint32 index);

static void partyman_set_position(PartyManTask *task_p);

static Sint32 partyman_set_cds_position(dgMathMatrix *dst_mat_p, Sint32 start_index, Sint32 end_index);

static Sint32 partyman_set_cds_position_instrument(dgMathMatrix *dst_mat_p, PartyFormationPosition *pos_tbl_p, Sint32 start_index, Sint32 end_index);

static void partyman_set_position_normal(PartyManTask *task_p);

static void partyman_set_position_core(PartyManTask *task_p);

static void partyman_set_index(PartyManTask *task_p);

static void partyman_set_index_core(PartyManTask *task_p);

static Sint32 partyman_set_index_special_people(PartyManTask *task_p, Sint32 limit_number);

static void partyman_set_index_normal_people(PartyManTask *task_p, Sint32 all_disp_member, Sint32 limit_number);

static void party_man_set_copy_mode(PartyManTask *task_p);

static void party_effect_exec(PartyEffectTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/party_collect.c
// *****************************************************************************

void* PartyCollectInit(void *parent_p, PartyCollectData *data_p);

void PartyCollectSetNewMember(dgCharCtrl *ctrl_p);

Bool PartyCollectIsAllMember();

Bool PartyCollectIsGetKeyMan();

Bool PartyCollectIsWorst();

static void collect_del(CollectTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/party_common.c
// *****************************************************************************

void* PartyInitChar(dgCharNo charno);

void* PartyInitCharEx(dgCharNo charno);

dgCharNo PartyCommonSetGakkibitoStage(dgCharNo charno);

static void* party_init_char_core(dgCharNo charno);

static void party_exec(PartyTask *task_p);

static void party_disp(PartyTask *task_p);

static void party_del(PartyTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/party_edit.c
// *****************************************************************************

void* PartyEditInitManager();

CharCommonFormationData2* PartyEditRegistData(void *block_task_p, CharCommonFormationData2 *form_p, Sint32 round, Sint32 block);

Bool PartyEditSaveFile(char *filename_p);

Bool PartyEditLoadFile(char *filename_p);

static void party_edit_make_savedata(PartyEditSaveTask *task_p, PartyEditTask *edit_task_p);

static void party_edit_save_wait(PartyEditSaveTask *task_p);

static void ped_draw_page(PartyEditTask *task_p, char *buffer_p, PartyEditCursorLine line);

static void ped_draw_disp_mode(PartyEditTask *task_p, char *buffer_p, PartyEditCursorLine line);

static void ped_draw_max_member(PartyEditTask *task_p, char *buffer_p, PartyEditCursorLine line);
static void ped_draw_edit_index(PartyEditTask *task_p, char *buffer_p, PartyEditCursorLine line);

static void ped_draw_float(PartyEditTask *task_p, char *buffer_p, PartyEditCursorLine line);

static void ped_draw_ang(PartyEditTask *task_p, char *buffer_p, PartyEditCursorLine line);
static void ped_draw_name(PartyEditTask *task_p, char *buffer_p, PartyEditCursorLine line);
static void pes_draw_seq_step(PartyEditSeqTask *task_p, char *buf_p);

static void pes_draw_seq(PartyEditSeqTask *task_p, char *buf_p);

static void pes_draw_step_no(PartyEditSeqTask *task_p, char *buf_p);

static void pes_draw_name(PartyEditSeqTask *task_p, char *buf_p);

static void pes_draw_change_frame(PartyEditSeqTask *task_p, char *buf_p);

static void pes_disp_gindows(GWHWND wnd_h);

static PartyEditSequence* pes_get_target_seq(PartyEditSeqTask *task_p, Sint32 seq_step, Sint32 step);

static void pes_move_cur_lr(PartyEditSeqTask *task_p, Sint32 add_x, Bool accell);

static PartyEditSequence* pes_delete_seq_link(PartyEditSeqTask *task_p, PartyEditSequence *edit_seq_p);

static void pes_delete_seq(PartyEditSeqTask *task_p);

static void pes_add_seq(PartyEditSeqTask *task_p);

static void pes_disp(PartyEditSeqTask *task_p);

static void pes_create_window(PartyEditManager *task_p);

static void ped_disp_gindows(GWHWND wnd_h);

static void ped_writeback_data(PartyEditTask *task_p);

static void ped_push_data(PartyEditTask *task_p);

static void ped_set_data(PartyEditTask *task_p);
static void ped_move_index(PartyEditTask *task_p, Sint32 add_x, Bool accell);

static void ped_move_position(PartyEditTask *task_p, PartyEditCursorLine line, Sint32 add_x, Bool accell);

static void ped_get_cursor_move(Sint32 *add_x_p, Sint32 *add_y_p, Bool *accell_p);

static void ped_move_cur_lr(PartyEditTask *task_p, Sint32 add_x, Bool accell);

static void ped_callback_textfield(GWHWND text_h);

static void ped_create_textfield(PartyEditTask *task_p);

static void ped_disp(PartyEditTask *task_p);

static void per_disp(PartyEditRoundTask *task_p, PartyEditTask *edit_task_p);

static void ped_create_window(PartyEditTask *task_p);

static void pe_callback_fileset_window(GWHWND text_h);

static void pe_create_fileset_window(PartyEditManager *task_p);

static void pe_destroy_fileset_window(PartyEditManager *task_p);

static void pe_load_savedata(char *filename_p, void *savedata_p);

static PartyEditTask* pe_copy_formation_core(PartyEditManager *task_p, PartyFormationMotion *fomr_p[3]);

static void pe_copy_formation(PartyEditManager *task_p);

static void pe_set_link(PartyEditSeqTask *task_p, PartyEditSequence *prev_p, PartyEditSequence *next_p);

static PartyEditTask* pe_test_formation_set(PartyEditManager *task_p, PES_TempList *list_p, PartyFormationMotion *form_mot_p[3]);

static PartyEditSequence* pe_copy_seq_core(PartyEditManager *task_p, PartyEditSeqTask *seq_task_p, PES_TempList *list_p, CharCommonFormationData2 *form_p, PartyFormationMotion *form_mot_p[3], PartyEditSequence *prev_seq_p);

static void pe_copy_seq(PartyEditManager *task_p, CharCommonFormationData2 *form_p);

static PartyFormationSet* pe_set_fomation_motion(PartyFormationSet *dst_p, PartyEditTask *edit_task_p, Sint32 end_frame);

static void pe_create_seq_data_core(CharCommonFormationData2 *form_p, PartyFormationSet *pos_p, PartyEditSequence *seq_p, Sint32 seq_num);

static void pe_create_seq_data(PartyEditManager *task_p);

static void* pe_pack_seq_data(PartyEditManager *task_p, Sint32 *buf_size_p);

static void party_edit_save_seq_wait(PartyEditSaveTask *task_p);
static void party_edit_save_seq_del(PartyEditSaveTask *task_p);

static void varedit_callback_save(Bool flag);

static void party_edit_load_sequence(PartyEditManager *task_p, void *data_p);

static void varedit_callback_load(Bool flag);

static void pes_del(PartyEditSeqTask *task_p);

static CdsMtpGridData* pe_copy_each_formation(PartyFormationMotion *formation_p, Sint32 number, CdsMtpOption *option_p, CdsMtpGridData *griddata_p);

static void pe_copy_cds(PartyEditManager *task_p);

static void party_edit_man_disp(PartyEditManager *task_p);

static void party_edit_man_del(PartyEditManager *task_p);
static void per_del(PartyEditRoundTask *task_p);

static PartyEditTask* pe_search_data_tail(PartyEditManager *task_p);

static Bool pe_comperae_name(char *name1, char *name2);

static PartyEditTask* pe_search_data(PartyEditManager *task_p, char *name_p);

static void pe_delete_data(PartyEditTask *task_p);

static PartyEditTask* pe_create_data(PartyEditManager *parent_p);

static void varedit_callback_free(Bool flag);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/pathctrl.c
// *****************************************************************************

static void path_draw0(GWHWND hwnd);

static void path_draw1(GWHWND hwnd);

static void path_draw(GWHWND hwnd);

static void create_window(PathHnd *task);

static void draw_axis_line(dgMathVector3 *pos_p, Float scale);

static void pose_init_root(mtnPose *pose);

static void pose_init(mtnPose *pose, mtnPose *default_pose);

static void pose_alloc(MotionPlayData *data);

static void pose_free_all(PathHnd *task);

static void pose_to_matrix_root(dgMathMatrix *mat, mtnPose *pose);

static void playdata_set(PathHnd *task, MotionPlayData *data, int ino);

static void playlist_set(PathHnd *task, PathPlayList *list, Sint32 local_beat);

static void playlist_init_play(PathHnd *task, PathPlayList *list, Sint32 start_beat);
static void playlist_check_next(PathHnd *task, PathPlayList *list, Float beat);

static void motion_free_one(PathHnd *task, Sint32 ino, int force_flag);

static void motion_free_all_force(PathHnd *task);

static void addcount_playgroup(PathHnd *task, PathPlayGroup *ptr);

static void read_playgroup_init(ReadPlayGroupTask *task, PathHnd *hnd, PathPlayGroup *ptr, Bool game_load_entry_flag, int *success_signal);

static void read_playgroup_disp(ReadPlayGroupTask *task);

static void read_playgroup_del(ReadPlayGroupTask *task);

static ReadPlayGroupTask* read_playgroup(PathHnd *hnd, PathPlayGroup *ptr, Bool game_load_entry_flag, int *success_signal);

static void free_playgroup(PathHnd *task, PathPlayGroup *ptr);

static void read_filegroup_init(ReadFileGroupTask *task, PathHnd *hnd, PathFileGroup *ptr, int game_load_entry_flag);

static void read_filegroup_disp(ReadFileGroupTask *task);
static void read_filegroup_del(ReadFileGroupTask *task);

static ReadFileGroupTask* read_filegroup(PathHnd *parent_task, PathFileGroup *ptr, int game_load_entry_flag);

static void free_filegroup(PathHnd *task, PathFileGroup *ptr);

static void schedule_init(PathHnd *task, PathSchedule *ptr);

static void schedule_set(PathHnd *task, PathSchedule *ptr, Sint32 start_beat);

static int entry_command(PathHnd *task, Sint8 cmd, Sint32 id, Sint32 start_beat);

static void cb_mov(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 sub_block_no, Sint32 sub_sub_no);

static void cb_btl(dgShSpy *handle, Sint32 start_beat, Sint32 sub_block_no);

static void cb_qa(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 qno);

static void cb_brk(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 brkno);

static void path_unit_matrix(PathHnd *task);
static void path_init(PathHnd *task, int sub_block_no, int pid, PathData *data);

static void path_exec_entrybuf(PathHnd *task, Float beat);

static void relative_matrix(PathHnd *task);

static void motion_play(MotionPlayData *data, Float frame);

static void motion_play_ex(MotionPlayData *data, Float frame);

static Float path_get_frame(Float frame, Sint32 max_frame, Sint8 loop_flag);

static void path_init_speed(MotionPlayData *data);

static void path_exec_motion(PathHnd *task, Float beat);

static void path_exec(PathHnd *task);

static void path_exec_wait(PathHnd *task);
static void path_disp(PathHnd *task);
static void path_del(PathHnd *task);

PathHnd* PathCtrlSet(void *parent_task, int sub_block_no, int pid, PathData *data);

void PathCtrlSetBlendLimitParamAll(PathHnd *hnd, Float param);

void PathCtrlSetBlendLimitParam(PathHnd *hnd, PathType type, Float param);

Bool PathCtrlIsActiveType(PathHnd *hnd, PathType type);

void PathCtrlSetRelativeType(PathHnd *hnd, PathType type, PathFlag flag);

Bool PathCtrlGetRelativeMatrix(PathHnd *hnd, dgMathMatrix *mat, PathType type);

Bool PathCtrlGetAbsoluteMatrix(PathHnd *hnd, dgMathMatrix *mat, PathType type);

mtnPose* PathCtrlGetPose(PathHnd *hnd, PathType type);

Bool PathCtrlSetDefaultPose(PathHnd *hnd, PathType type, mtnPose *pose);
void PathCtrlGetRelSpeed(PathHnd *hnd, PathType type, dgMathVector3 *vec);
void PathCtrlGetAbsSpeed(PathHnd *hnd, PathType type, dgMathVector3 *vec);
void PathCtrlGetRel2AbsMatrix(PathHnd *hnd, dgMathMatrix *mat);
void PathCtrlGetAbs2RelMatrix(PathHnd *hnd, dgMathMatrix *mat);

mtnMotion* PathCtrlGetMotion(PathHnd *hnd, Sint16 iid);

static void path_debug_disp(PathCtrlDebugTask *task);

void* PathCtrlDebugSet(void *parent_task, PathHnd* (*get_hnd_func)());

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/pause.c
// *****************************************************************************

static void pause_init(PauseTask *task);

static void cspr_draw(PauseTask *task, NJS_CELL_SPRITE **cspr_tbl);

static void cb_yes(void *ptr);
static void cb_no(void *ptr);
static void gameover_disp(PauseTask *task);

static void poly_draw();

static void pause_disp(PauseTask *task);

static void pressstart_init(PauseTask *task);

static void pressstart_disp(PauseTask *task);

static void pause_disp_wait(PauseTask *task);

static void pause_del(PauseTask *task);

void* PauseSet(void *parent_task);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/people_effect.c
// *****************************************************************************

PeopleEffectRescueHandle* PeopleEffectInitRescueForDance(void *parent_p, dgCharCtrl *char_ctrl_p, dgCharMotionCtrl *mot_ctrl_p);

void PeopleEffectDestroyHandle(PeopleEffectRescueHandle *rescue_h);

static void rescue_exec(PeopleEffectRescueHandle *rescue_h);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/people_effect_inline.c
// *****************************************************************************

void* PeopleEffectSetPoison(void *parent_p, dgMathVector3 *pos_p);

void* PeopleEffectSetHitMark(void *parent_p, dgMathVector3 *pos_p, Bool result);

void* PeopleEffectSetHitMarkR(void *parent_p, dgMathVector3 *pos_p, Bool result);

dgMathVector3* PeopleEffectGetPoisonPositionPtr(dgCharCtrl *ctrl_p);

void PeopleEffectInitLost(void *parent_p, PeopleEffectLostWork *work_p, dgMathVector3 *center_pos_p);

Bool PeopleEffectDispLost(PeopleEffectLostWork *work_p);

void* PeopleEffectInitRescue(void *parent_p, PeopleEffectRescueWork *work_p, dgMathVector3 *center_pos_p, dgMathVector3 *disp_pos_p);

void PeopleEffectExecRescue(PeopleEffectRescueWork *work_p);

void PeopleEffectDispRescue(PeopleEffectRescueWork *work_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/player.c
// *****************************************************************************

static void* player_set_effect_normal(void *parent_p, dgMathVector3 *pos_p, Sint32 type, Bool follow);

void* PlayerInit(void *parent_p, dgCharMotionData *mot_p);

void PlayerSetHideByPlayerSide(Bool hide_flag);

void PlayerSetHideForce(Bool hide_flag);

void PlayerSetLevelForce(dgCharLevel level);

void PlayerSetDefaultType(PlayerType type);
void PlayerSetBasePosData(PlayerBasePos *base_pos_data_p);

dgCharNo PlayerSetMicCharNo(dgCharNo mic_charno);

PlayerType PlayerSetPlayerType(PlayerType type);

void PlayerSetGunMode(PlayerGunMode mode);

dgCharObjCtrl* PlayerSetItem(PlayerNode node, dgCharNo item_no);

void PlayerSetItemForce(PlayerNode node, dgCharNo item_no);

void PlayerDeleteItemForce(PlayerNode node);

void PlayerSetMotionCutFrame();

void PlayerSetTotalFrame(float frame);

Sint32 PlayerSetMotionMask(Sint32 mask);

void PlayerSetAnotherMotion(dgCharMotionData *mot_data_p, Sint32 motion_index);

void PlayerResetShape(dgModelType level);

Bool PlayerIsLoadModel(void *parent_p);

void PlayerSetObjCallback(PlayerObjCallbackFunc *func_p);

PlayerCallbackFunc* PlayerSetCallbackFunc(PlayerCallbackFunc *func_p);

void PlayerSetShadowFunc(dgCharShadowCallbackFunc *func_p);

Bool PlayerSetPositionCallback(Bool (*func_p)());

Bool PlayerSetMatrixCallback(Bool (*func_p)());

void PlayerAdjustMotion();

dgCharNo PlayerGetDefaultCharNo();

dgCharLevel PlayerGetLevel();

dgCharNo PlayerGetCharNo();
PlayerType PlayerGetPlayerType();
Bool PlayerIsUlala();
dgCharNo PlayerGetCharNoFromType(PlayerType type);
Bool PlayerIsSetDefaultItem(PlayerType type);
void* PlayerGetTaskPtr();

dgMathVector3* PlayerGetViewPositionPtr(PlayerNode index);

dgMathVector3* PlayerGetWorldPositionPtr(PlayerNode index);

dgMathMatrix* PlayerGetViewMatrixPtr(PlayerNode index);

void PlayerGetCenterPosition(dgMathVector3 *pos_p, dgMathAngle3 *ang_p);

void PlayerGetCenterMatrix(dgMathMatrix *mat_p);

void PlayerGetCenterMatrixEx(dgMathMatrix *mat_p);

void PlayerGetCenterMatrixIgnoreMotion(dgMathMatrix *mat_p, PlayerIgnoreAxis axis);

Bool PlayerIsReverseMotionLR();
float PlayerGetPlayerFrame();
Bool PlayerIsMoveBasePosition();

void PlayerGetBasePosition(dgMathVector3 *pos_p, dgMathAngle3 *ang_p);

void PlayerGetMoveVector(dgMathVector3 *vec_p);

void PlayerCopyWalk(dgCharCtrl *dst_p);
float PlayerGetCompRate();

void PlayerSynchroMotion(dgCharMotionCtrl *mot_ctrl_p, dgCharCtrl *char_ctrl_p);

Bool PlayerIsLoop();
float PlayerGetTotalFrame();
Bool PlayerIsDisp();
dgMathMatrix* PlayerCopyMatrix(dgCharCtrl *dst_p);

void PlayerGetQInfoNow(int *qno_p, Sint8 *timing_num_p);

void* PlayerSetComboBeam(void *parent_p, Sint32 qno, Sint32 timing, dgMathVector3 **target_pp);

void* PlayerSetHitMark(void *parent_p, Sint32 size, float delay_beat);

void* PlayerSetHitMarkR(void *parent_p, Sint32 size, float delay_beat);

void* PlayerSetChannnel5();
void PlayerSetCommand();
void PlayerDeleteCommand();

static PlayerNode* player_make_node_tbl_p(PlayerTask *task_p);

static void player_exec_wait_play(PlayerTask *task_p);
static void player_disp_wait(PlayerTask *task_p);

static void player_exec(PlayerTask *task_p);

static void player_disp(PlayerTask *task_p);

static void player_del(PlayerTask *task_p);

static Bool player_exec_seq_branch(PlayerTask *task_p);

static void player_init_dance(PlayerTask *task_p);

static void player_exec_dance(PlayerTask *task_p);

static void player_exec_dance_normal(PlayerTask *task_p, int qno);

static void player_exec_dance_tame(PlayerTask *task_p, int qno);

static Sint32 player_exec_dance_tame_wait(PlayerTask *task_p, int qno, PlayerQData *q_data_p, DanceIndexPlayer motion_index);
static void player_exec_dance_tame_ok(PlayerTask *task_p, int qno, PlayerQData *q_data_p, DanceIndexPlayer motion_index);

static Sint32 player_exec_dance_tame_failure(PlayerTask *task_p, int qno, PlayerQData *q_data_p, DanceIndexPlayer motion_index);

static void player_init_dance_tome(PlayerTask *task_p, int qno);

static void player_exec_damce_tome(PlayerTask *task_p, int qno);

static void player_init_shoot(PlayerTask *task_p);

static void player_exec_shoot(PlayerTask *task_p);

static void player_exec_shoot_normal(PlayerTask *task_p, int qno);

static void player_exec_shoot_action(PlayerTask *task_p, int qno);

static void player_exec_shoot_action_ok(PlayerTask *task_p, int qno, dgInputStatus status, PlayerQData *q_data_p);

static void player_exec_shoot_action_ng(PlayerTask *task_p, int qno, dgInputStatus status, PlayerQData *q_data_p);

static void player_exec_shoot_action_with_beam(PlayerTask *task_p, int qno, dgInputStatus status, PlayerQData *q_data_p);

static void player_shoot_normal_shot(PlayerTask *task_p, dgMathVector3 *left_gun_pos_p, dgMathVector3 *right_gun_pos_p, Sint32 beam_type);

static void player_shoot_hado_shot(PlayerTask *task_p, dgMathVector3 *gun_pos_p, Sint32 beam_type);

static void player_init_kime(PlayerTask *task_p);

static void player_exec_kime(PlayerTask *task_p);

static void player_set_motion(PlayerTask *task_p, Sint32 motion_index);
static void player_set_frame(PlayerTask *task_p, float frame);
static Bool player_go_motion(PlayerTask *task_p);
static Bool player_go_motion_sle(PlayerTask *task_p);
static Sint32 player_go_motion_next(PlayerTask *task_p);
static void player_set_motion_cut(PlayerTask *task_p);
static void player_set_base_point(PlayerTask *task_p, PlayerBasePos *base_pos_data_p);
static void player_move_base_point(PlayerTask *task_p);

static void player_move_base_point_without_callback(PlayerTask *task_p);

static void player_move_base_point_for_matrix_callback(PlayerTask *task_p);
static void player_move_base_point_for_pos_callback(PlayerTask *task_p);

static Bool player_set_object(PlayerTask *task_p, PlayerNode node, dgCharNo charno);

static void player_delete_object_all(PlayerTask *task_p);

static void player_eff_combo_exec_pre(ComboEffTask *task_p);

static void player_eff_combo_exec_hit_dir(ComboEffTask *task_p);
static void player_eff_combo_exec_hit(ComboEffTask *task_p);

static void* player_aura_init(PlayerTask *parent_p, float delay);

static void player_aura_exec(PlayerAuraTask *task_p);

static PlayerHitTask* hit_mark_init(void *parent_p, Sint32 size, float delay_beat);

static void hit_mark_exec(PlayerHitTask *task_p);

static void hit_mark_disp(PlayerHitTask *task_p);

static void player_se_init(PlayerTask *parent_p);

static void player_se_entry(float beat);

static void player_se_exec(PlayerSeTask *task_p);

static void player_se_del(PlayerSeTask *task_p);
static void player_error(char *func_name_p);

static void debug_telop_set(PlayerTask *pl_task_p);

static void debug_telop_disp(DebugTelopTask *task_p);
static void debug_telop_del(DebugTelopTask *task_p);

static PlayerModelTask* model_load_init(void *parent_p);

static void model_load_cda(PlayerModelTask *parent_p, dgCharNo charno);

static void model_load_callback_body(dgCharNo charno, void *cdb_h, void *user_p);

static void model_cda_del(PlayerModelCdaTask *task_p);
static void model_del(PlayerModelTask *task_p);
static void player_toggle_gindows(PlayerTask *task_p);

static void player_disp_gindows(GWHWND wnd_h);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/poison_light.c
// *****************************************************************************

static void get_system_light(PoisonLight *ptr);
static void set_system_light(PoisonLight *ptr);
static void set_poison_light(PoisonLight *ptr);
void PoisonLightPush();
void PoisonLightPop();
void PoisonLightInit();
static void light_draw(GWHWND hwnd);
static void create_window();
void PoisonLightDebugDisp();

void PoisonLightSetColor(Float r, Float g, Float b);

void PoisonLightSetVector(Float x, Float y, Float z);

void PoisonLightSetIntensity(Float ambient, Float intensity);

void PoisonLightSetDefault();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/ps2assert.c
// *****************************************************************************

static int checkAssert();
void __ps2AssertFail(char *file, int line);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/result.c
// *****************************************************************************

static void cspr_modify_for_ps2_sub(NJS_CELL_SPRITE *cspr, Ps2WakuTexData *data, Sint32 *tbl, int num);

static void cspr_modify_for_ps2(NJS_CELL_SPRITE *cspr, int type);

static void cb_mov(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 sub_block_no, Sint32 sub_sub_no);

static void result_init(ResultTask *task);

static void result_exec_callback(ResultTask *task);
static void result_start(ResultTask *task);

static void result_exec_common(ResultTask *task);

static void result_exec_normal(ResultTask *task);

static void result_exec_dance(ResultTask *task);

static void cell_parts_draw(ResultTask *task);

static void result_disp(ResultTask *task);

static void result_disp_wait(ResultTask *task);

static void result_del(ResultTask *task);

ResultTask* ResultSet(void *parent_task, ResultType type, Sint32 sub_block_no, Sint32 start_frame, Sint32 nb_frame, ResultCallbackFunc *func);

void ResultDispForceReq(Bool flag);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/secret_moro0.c
// *****************************************************************************

static void load_init(SecretMoroLoadTask *task);
static void load_exec(SecretMoroLoadTask *task);
static void load_del(SecretMoroLoadTask *task);

void* SecretSetMoro0LoadMotion(void *parent_task);

static dgCharMotionData* secret_moro_get_mot_data();

static void secret_draw(GWHWND hwnd);

static GWHWND create_window(SecretMoroTask *task);

static void secret_init_param(SecretMoroTask *task);

static void secret_reset_param(SecretMoroTask *task);
static void secret_calc(SecretMoroTask *task);
static void cb_readend(dgCharNo no, void *cdbh, void *ptr);
static void secret_init(SecretMoroTask *task, int block_no, SecretDataMoro0 *data);

static void secret_exec(SecretMoroTask *task);

static void secret_edit_param(SecretMoroTask *task);

static void secret_disp_object(SecretMoroTask *task);

static void secret_disp(SecretMoroTask *task);

static void secret_disp_wait(SecretMoroTask *task);

static void secret_del(SecretMoroTask *task);

void* SecretSetMoro0(void *parent_task, int block_no, SecretDataMoro0 *data);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/secret_sound.c
// *****************************************************************************

static void secret_init(SecretSoundTask *task, int block_no, SecretDataSound *data);

static void secret_exec(SecretSoundTask *task);

static void secret_disp(SecretSoundTask *task);
static void secret_del(SecretSoundTask *task);

void* SecretSetSound(void *parent_task, int block_no, SecretDataSound *data);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/secret_text.c
// *****************************************************************************

static void secret_init(SecretTextTask *task, int block_no, SecretDataText *data);

static void secret_exec(SecretTextTask *task);

static void secret_disp(SecretTextTask *task);
static void secret_del(SecretTextTask *task);

void* SecretSetText(void *parent_task, int block_no, SecretDataText *data);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/secret_wink.c
// *****************************************************************************

static void secret_init(SecretWinkTask *task, int block_no, SecretDataWink *data);
static void wink_enable(SecretWinkTask *task);
static void wink_disable(SecretWinkTask *task);
static void secret_exec(SecretWinkTask *task);
static void secret_disp(SecretWinkTask *task);
static void secret_del(SecretWinkTask *task);

void* SecretSetWink(void *parent_task, int block_no, SecretDataWink *data);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/shadow.c
// *****************************************************************************

static void shadow_obj_data_set_argb(ShadowObjData *task);

static Uint32 shadow_get_nj_cnk_blend_mode();
static void shadow_set_nj_cnk_blend_mode(Uint32 mode);

static void shadow_callback_shadow(int col_no);

MtpHandle* ShadowGetMtpHndl(ShadowMtpId mtp_id);
void ShadowGetPosAng(dgMathVector3 *pos, dgMathAngle3 *ang);

void ShadowSetAllObjPosAng(dgMathVector3 *pos, dgMathAngle3 *ang, int walk_reset_flag);

void ShadowRegistMainTask(ShadowTask *shadow_task);

void ShadowObjDelete(ShadowTask *task);

Float ShadowGetMotionSpeed();

void ShadowObjDataInit(ShadowObjData *task, int obj_id);

void ShadowInitObjData(ShadowTask *task);

Bool ShadowIsMtnLoaded(ShadowTask *task, int mtp_id);

void ShadowSetEventData(ShadowTask *task, int demo_type);
Bool ShadowIsActive();
void ShadowObjDataSet(void *parent_p, int obj_id);

void ShadowObjDataSetMotion(ShadowObjData *task);

static void shadow_obj_data_exec_shape(ShadowObjData *task);

static void shadow_obj_data_exec(ShadowObjData *task);

static void shadow_obj_data_disp_warp_model(ShadowObjData *task);

static void shadow_obj_data_disp_warp_effect(ShadowObjData *task);

static void shadow_obj_data_disp_kage(ShadowObjData *task);

static void shadow_obj_data_disp(ShadowObjData *task);

static void shadow_obj_data_del(ShadowObjData *task);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/shoot.c
// *****************************************************************************

void* ShootInit(void *parent_p, int seq_id, ShootBattleData *data_p);

ShootActionMode ShootGetActionMode(int qno);

ShootType ShootGetType(int qno);

Bool ShootIsAllSuccess(int qno);

void ShootTellDying(ShootCharCtrl *ctrl_p);

void ShootTellDyingLeader(ShootManTask *man_h);

void ShootAddMember(ShootCharCtrl *ctrl_p);

ShootActionMode ShootGetCurrentActionMode();
int ShootGetQNo();
dgCharMotionData* ShootGetZakoMotionData();
dgCharMotionData* ShootGetBattleMotionData();
dgCharNo ShootGetCharNo(ShootCharCtrl *ctrl_p);
float ShootGetShootBeat(ShootCharCtrl *ctrl_p);
float ShootGetDirBeat(ShootCharCtrl *ctrl_p);
ShootDir ShootGetDir(ShootCharCtrl *ctrl_p);
dgCharMotionData* ShootGetMotData(ShootCharCtrl *ctrl_p);
Sint32 ShootGetDirIndex(ShootCharCtrl *ctrl_p);
Sint32 ShootGetDirMax(ShootCharCtrl *ctrl_p);
Sint32 ShootGetQNoFromCtrl(ShootCharCtrl *ctrl_p);
Sint32 ShootGetShootTimingNum(ShootCharCtrl *ctrl_p);
Sint32 ShootGetShootSeqId(ShootCharCtrl *ctrl_p);
dgInputStatus ShootGetShootStatus(ShootCharCtrl *ctrl_p);
void ShootSetTargetSpread(ShootCharCtrl *ctrl_p, void *zako_task_p, dgMathVector3 *target_pos);
void ShootSetTargetNormal(ShootCharCtrl *ctrl_p, void *zako_task_p, dgMathVector3 *target_pos);

static void shoot_create_enemy_normal(ShootManTask *task_p, int next_q_seq_id, int timing_max);

static void shoot_create_enemy_combo(ShootManTask *task_p, int next_q_seq_id, int timing_max);

static void shoot_exec_create_enemy(ShootManTask *task_p);

static void shoot_exec_wait_load(ShootManTask *task_p);
static void shoot_exec_wait_add_member(ShootManTask *task_p);
static void shoot_wait_add_member(ShootAddPartyTask *task_p);

static void shoot_set_new_member(ShootManTask *task_p);

static void shoot_exec(ShootManTask *task_p);

static void shoot_del(ShootManTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/shoot_leader.c
// *****************************************************************************

ShootLeaderCtrl* ShootLeaderInit(void *parent_p, Sint32 seq_id);

ShootLeaderStatus ShootLeaderExec(ShootLeaderCtrl *ctrl_p);

Sint32 ShootLeaderGetQNo(ShootLeaderCtrl *ctrl_p);
Sint32 ShootLeaderGetSeqID(ShootLeaderCtrl *ctrl_p);
Sint32 ShootLeaderGetTiming(ShootLeaderCtrl *ctrl_p);
void ShootLeaderSetAttackQno(ShootLeaderCtrl *ctrl_p);

void ShootLeaderSetTarget(ShootLeaderCtrl *ctrl_p, void *leader_task_p, dgMathVector3 *center_p);

Bool ShootLeaderTestAttack(ShootLeaderCtrl *ctrl_p);
ShootLeaderMode ShootLeaderGetMode(ShootLeaderCtrl *ctrl_p);
void ShootLeaderSetDefaultMotion(ShootLeaderCtrl *ctrl_p, dgCharMotionCtrl *mot_p, dgCharCtrl *char_p);
ShootIndexLeader ShootLeaderGetMotionIndex(ShootLeaderCtrl *ctrl_p);
void ShootLeaderSetMotionIndex(ShootLeaderCtrl *ctrl_p, ShootIndexLeader motion_index);
Bool ShootLeaderGoDefault(ShootLeaderCtrl *ctrl_p, dgCharMotionCtrl *mot_p, dgCharCtrl *char_p);
static void leader_set_next_input(ShootLeaderCtrl *ctrl_p);
static void leader_init_qa(ShootLeaderCtrl *ctrl_p);

static void leader_exec_demo(ShootLeaderCtrl *ctrl_p);

static void leader_exec_qa(ShootLeaderCtrl *ctrl_p);

static void leader_exec_wait(ShootLeaderCtrl *ctrl_p);

static void leader_exec_attack_q(ShootLeaderCtrl *ctrl_p);

static void leader_exec_wait_qa(ShootLeaderCtrl *ctrl_p);
static void leader_exec_break_wait(ShootLeaderCtrl *ctrl_p);
static void leader_exec_pre_finish(ShootLeaderCtrl *ctrl_p);
static void shootleader_target_exec(TargetSetTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/simmld_ctrl.c
// *****************************************************************************

void* SimmLdCtrlSet(void *parent_task, char *fname);

static void _simmldctrl_exec(SimmLdCtrlTaskPtr t);
static void _simmldctrl_disp(SimmLdCtrlTaskPtr t);
static void _simmldctrl_del(SimmLdCtrlTaskPtr t);
void SimmLdCtrlFinish();

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/simmload.c
// *****************************************************************************

static void ASSERT(int cond);
static int ToUpperCase(int ch);

static BOOL IsSameStringIgnoreCase(char *str1, char *str2);

static SIMMENTRY* SimmSearchEntry(SIMMENTRY *lpsimm, char *name);

static SIMMENTRY* SimmSearchPath(SIMMENTRY *entry, char *path);

static SIMMENTRY* SimmSearchPathAndEntry(SIMMENTRY *entry, char *path, char *name);

static SIMMENTRY* SimmCheck();

int InitializeSimmLoad(void *simm);

int SimmGetFileLength(char *path, char *name, unsigned int *length);

void* SimmGetFileAddress(char *path, char *name);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/superh_select.c
// *****************************************************************************

static void sh_init(SelectTask *task, char **fname_tbl);
static void sh_disp_wait_loadend(SelectTask *task);
static void sh_disp_wait_loaden(SelectTask *task);
static void sh_disp_wait_party(SelectTask *task);
static void sh_del(SelectTask *task);

void* SuperhSelectSet(void *parent_task, char **fname_tbl);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/target.c
// *****************************************************************************

void* TargetInit(void *parent_p);

TargetData* TargetSet(void *target_task_p, Sint32 qno, Sint32 timing_num, dgMathVector3 *pos_p);

void TargetSetDir(TargetData *data_p, ShootDir dir);

TargetData* TargetGet(dgMathVector3 **pos_pp, void **target_task_pp, Sint32 qno, Sint32 timing_num);

ShootDir TargetGetDir(TargetData *data_p);

void TargetSetLeader(void *target_task_p, dgMathVector3 *pos_p);

void TargetGetLeader(dgMathVector3 **pos_pp, void **target_task_pp, Sint32 index);

void TargetResetLeader();

Sint32 TargetGetLeaderNumber();

static TargetBuffer* target_test_buffer(TargetTask *task_p, Sint32 qno);

static void target_disp(TargetTask *task_p);

static void target_del(TargetTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/title.c
// *****************************************************************************

static void change_poly_color(NJS_POLYGON_VTX *poly, Uint32 color);
static void init_poly(NJS_POLYGON_VTX *poly, Float z, Uint32 color);
static void logo_init(TitleLogoTask *task);
static void check_quick_start(TitleLogoTask *task);

static void logo_disp(TitleLogoTask *task);

static void logo_disp_wait(TitleLogoTask *task);
static void logo_del(TitleLogoTask *task);

void* TitleLogoSet(void *parent);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/tv_setting.c
// *****************************************************************************

void* TvSetReq(void *parent_p);

static void tvset_init(TvSetTask *task_p);

static void tvset_draw_str(TvSetTask *task_p, Sint32 start_x, Sint32 start_y, TvSetStrData *strdata_p, Uint32 str_color, Uint32 poly_color);

static void tvset_draw_number(TvSetTask *task_p, Sint32 start_x, Sint32 start_y, Sint32 num, Uint32 str_color);

static void tvset_disp(TvSetTask *task_p);

static void tcset_del(TvSetTask *task_p);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/voicectrl.c
// *****************************************************************************

static void voice_draw(GWHWND hwnd);

static void create_window(VoiceTask *task);

static void voice_get_bup_history(VoiceTask *task);

static void voice_set_bup_history(VoiceTask *task);

static void voice_entry_history(VoiceTask *task, int voice_no);

static Sint32 get_status_res(VoiceTask *task);

static Sint32 get_status_kime(VoiceTask *task);

static Sint32 get_status_brk(VoiceTask *task, int brkno);

static int voice_choice_sub(VoiceTask *task, Sint32 *ptr);

static int voice_choice(VoiceTask *task, Sint32 status, Sint32 *ptr);

static int voice_choise_res(VoiceTask *task, Sint32 *ptr);
static int voice_choise_kime(VoiceTask *task, Sint32 *ptr);
static int voice_choise_brk(VoiceTask *task, Sint32 *ptr, int brkno);

static void voice_entry(VoiceTask *task, Sint32 start_beat, Sint32 start_frame, int pid, int iid);

static void voice_entry_res(VoiceTask *task, Sint32 start_beat);

static void voice_entry_kime(VoiceTask *task, Sint32 start_beat);

static void voice_entry_brk(VoiceTask *task, Sint32 start_beat, int brkno);

static void init_result(VoiceTask *task);

static void calc_result(VoiceTask *task);

static void cb_mov(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 sub_block_no, Sint32 sub_sub_no);

static void cb_btl(dgShSpy *handle, Sint32 start_beat, Sint32 sub_block_no);

static void cb_qa(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 qno);

static void cb_brk(dgShSpy *handle, Sint32 start_beat, Sint32 nb_beat, Sint32 brkno);

static void voice_init(VoiceTask *task, VoiceData *data);
static void voice_exec(VoiceTask *task);
static void voice_disp(VoiceTask *task);
static void voice_del(VoiceTask *task);

void* VoiceSet(void *parent_task, VoiceData *data);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/walk_level.c
// *****************************************************************************

void* WalkLevelInit(void *parent_p);

WalkLevelAssign WalkLevelGet(Sint32 subblock_no);

static void walklevel_callback_spy_mov(dgShSpy *spy_h, Sint32 start_beat, Sint32 nb_beat, Sint32 sub_blcok_no, Sint32 sub_sub_block_no);

static void walklevel_exec(WalkLevelTask *task_p);

static void walklevel_del(WalkLevelTask *task_p);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_basewin.c
// *****************************************************************************

void gwBaseWindowEnableControlBox(GWHWND hWnd, Bool flag);

GWHWND gwBaseWindowGetCloseBox(GWHWND hWnd);
GWHWND gwBaseWindowGetMaximizeBox(GWHWND hWnd);
GWHWND gwBaseWindowGetMinimizeBox(GWHWND hWnd);

GWHWND gwBaseWindowCreateMenuWindow(GWHWND hWnd, gwMenu *menulist, char *title, Sint32 x, Sint32 y);

static void gwBaseWindowMenuExit(GWHWND hWnd);

void gwBaseWindowSetMinimumSize(GWHWND hWnd, Sint32 width, Sint32 height);

void gwBaseWindowGetMinimumSize(GWHWND hWnd, Sint32 *width, Sint32 *height);

void gwBaseWindowGetScrollValue(GWHWND hWnd, Sint32 *scrl_h, Sint32 *scrl_v);

GWHWND gwBaseWindowGetScrollBarH(GWHWND hWnd);
GWHWND gwBaseWindowGetScrollBarV(GWHWND hWnd);
void gwBaseWindowAddScrollBarH(GWHWND hWnd, GWHWND hScrlBar);
void gwBaseWindowAddScrollBarV(GWHWND hWnd, GWHWND hScrlBar);

void gwBaseWindowAddScrollBar(GWHWND hWnd, GWHWND hScrlBar);

static void gwBaseWindowDraw(GWHWND hWnd, float prio);
static void GwResizeWindowTop(GWHWND hWnd, Sint32 dy);
static void GwResizeWindowBottom(GWHWND hWnd, Sint32 dy);
static void GwResizeWindowLeft(GWHWND hWnd, Sint32 dx);
static void GwResizeWindowRight(GWHWND hWnd, Sint32 dx);
static void _GwResizeBaseWindow(GWHWND hWnd, Sint32 dx, Sint32 dy, Sint32 area);
static void _GwMoveBaseWindow(GWHWND hWnd, Sint32 dx, Sint32 dy);

static void gwBaseWindowControlScrollBar(GWHWND hWnd);

static void gwBaseWindowExec(GWHWND hWnd);

void gwBaseWindowDestroy(GWHWND hWnd);
static void gwBaswWindowExit(GWHWND hWnd);

GWHWND gwBaseWindowCreate(char *caption, Sint32 style, Sint32 x, Sint32 y, Sint32 w, Sint32 h, GWHWND parent);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_button.c
// *****************************************************************************

char* gwButtonGetText(GWHWND hWnd);
void gwButtonSetText(GWHWND hWnd, char *text);

void gwToggleButtonSetState(GWHWND hWnd, Bool state);

Bool gwToggleButtonGetState(GWHWND hWnd);

static void gwToggleButtonExec(GWHWND hWnd);

GWHWND gwToggleButtonCreate(GWF_BUTTONFUNC func, char *title, Sint32 x, Sint32 y, Sint32 w, Sint32 h, GWHWND parent);

void gwIconButtonDraw(GWHWND hWnd, float prio);

GWHWND gwIconButtonCreate(GWF_BUTTONFUNC func, Sint32 icon, Float scale, Sint32 x, Sint32 y, Sint32 w, Sint32 h, GWHWND parent);

void gwButtonSetCallback(GWHWND hWnd, GWF_BUTTONFUNC func);
void gwButtonEnable(GWHWND hWnd, Bool flag);

void gwButtonDraw(GWHWND hWnd, float prio);

void gwButtonExec(GWHWND hWnd);

void gwButtonDestroy(GWHWND hWnd);

GWHWND gwButtonCreate(GWF_BUTTONFUNC func, char *title, Sint32 x, Sint32 y, Sint32 w, Sint32 h, GWHWND parent);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_choicebox.c
// *****************************************************************************

void gwChoiceBoxSetSelectedIndex(GWHWND hWnd, Sint32 index);
Sint32 gwChoiceBoxGetSelectedIndex(GWHWND hWnd);

static void pulldown_button_callback(GWHWND hWnd, gwButtonFuncMode mode);

static void gwChoiceMenuFrameDraw(GWHWND hWnd, Float prio);

static void gwChoiceMenuFrameExec(GWHWND hWnd);

static void gwChoiceMenuFrameExit(GWHWND hWnd);

static GWHWND gwChoiceMenuFrameCreate(Sint32 x, Sint32 y, GWHWND parent);

static gwChoiceItem* gwChoiceItemAddToLast(gwChoiceItem *itemlist, gwChoiceItem *item);

static void gwChoiceItemDestroy(gwChoiceItem *item);

static gwChoiceItem* gwChoiceItemCreate(char *title);

void gwChoiceBoxSetCallback(GWHWND hWnd, GWF_CHOICEBOX_CALLBACK callback);

void gwChoiceBoxAddItem(GWHWND hWnd, char *title);

static void gwChoiceBoxPulldown(GWHWND hWnd);

static void gwChoiceBoxDraw(GWHWND hWnd, Float prio);

static void gwChoiceBoxExec(GWHWND hWnd);

static void gwChoiceBoxExit(GWHWND hWnd);

GWHWND gwChoiceBoxCreate(char *title, Sint32 x, Sint32 y, Sint32 w, Sint32 h, GWHWND parent);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_command.c
// *****************************************************************************

void gwCommandInit();

void gwCommandExit();

int gwCommandGetLastStatus();

void gwCommandExec(char *str);

static gwCommandData_LIST* search(char *command);

static gwCommandData_LIST** search_alpha(char *command);

Bool gwCommandAddCommand(gwCommandData *com);

void gwCommandAddCommandTbl(gwCommandData *tbl);

void gwCommandDeleteCommand(gwCommandData *com);

void gwCommandDeleteCommandTbl(gwCommandData *tbl);

static int com_help(int argc, char **argv);

static void set_default_command();
static void clr_default_command();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_console.c
// *****************************************************************************

void gwConsoleInit(gwConsoleInfo *info);

void gwConsoleExit();
void gwConsoleExec();

Bool gwConsoleIsView();

Bool gwConsoleSetView(Bool flag);

Bool gwConsoleSetSerialOut(Bool flag);

Uint32 gwConsoleSetColor(Uint32 col);

void gwConsolePuts(char *str);

void gwConsolePrintf(char *fmt);

static void log_draw_sub(GWHWND hWnd, int idx);

static void calc_wnd_width();

static void draw_frame(Uint32 col, Float ooz, Float x, Float y, Float w, Float h);

static void console_menu_callback(gwMenu *menu, Sint32 idx, Sint32 param);

static void console_menu_set();

static void font_menu_callback(gwMenu *menu, Sint32 idx, Sint32 param);

static void font_menu_destructor(GWHWND hWnd);

static void font_menu_check(GWHWND hWnd);

static void backlog_on(GWHWND hWnd, ConsoleCtrl *ctrl);
static void backlog_off(GWHWND hWnd, ConsoleCtrl *ctrl);

static void backlog_exec(GWHWND hWnd);

static void backlog_draw(GWHWND hWnd);

static void log_draw(GWHWND hWnd);

static void del_r(char *str);
static void get_hist(ConsoleCtrl *ctrl);

static void com_exec(GWHWND hWnd);

static void com_draw(GWHWND hWnd);

static void gw_exec(GWHWND hWnd);

static void gw_draw(GWHWND hWnd);

static void create_gindows();

static void clr_line_res(ConsoleLine *line);
static void clr_line(ConsoleLine **line);
static void make_newline(ConsoleLine *line);

static Bool secure_logbuf(int cursor, int size);

static void log_str(char *str);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_ctrlbox.c
// *****************************************************************************

void gwCtrlBoxGetMinimizeBoxOffset(GWHWND hWnd, GWHWND parent, Sint32 *x, Sint32 *y);

void gwCtrlBoxExec(GWHWND hWnd);

void gwMinimizeBoxCallback(GWHWND hWnd, gwButtonFuncMode mode);

void gwMaximizeBoxCallback(GWHWND hWnd, gwButtonFuncMode mode);

void gwCloseBoxCallback(GWHWND hWnd, gwButtonFuncMode mode);

GWHWND gwCreateCloseBox(GWHWND parent);

GWHWND gwCreateMaximizeBox(GWHWND parent);

GWHWND gwCreateMinimizeBox(GWHWND parent);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_desktop.c
// *****************************************************************************

static void menufunc_create_periinfo(gwMenu *menu, Sint32 index, Sint32 param);

static void menufunc_create_texviewer(gwMenu *menu, Sint32 index, Sint32 param);

static void gwDeskTopMenuExit(GWHWND hWnd);

GWHWND gwDeskTopCreateMenuWindow(gwMenu *menulist, char *title, Sint32 x, Sint32 y);

void gwDeskTopSetActive();

static void FontMenuCallback(gwMenu *menu, Sint32 index, Sint32 param);

static void menufunc_create_heapinfo(gwMenu *menu, Sint32 index, Sint32 param);

static void menufunc_create_mouseinfo(gwMenu *menu, Sint32 index, Sint32 param);

static void menufunc_create_windowinfo(gwMenu *menu, Sint32 index, Sint32 param);

gwMenu* gwDeskTopGetMenu();
void gwDeskTopSetLeftButtonPressCallback(GW_WIN_CALLBACK callback);
void gwDeskTopSetLeftButtonReleaseCallback(GW_WIN_CALLBACK callback);

static void gwDeskTopExec(GWHWND hWnd);

void gwDeskTopInit(Sint32 sx, Sint32 sy);

void gwDeskTopExit();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_draw.c
// *****************************************************************************

static void gwDrawClientTexture(GWHWND hWnd, Float x0, Float y0, Float x1, Float y1, Float prio);

void gwDrawWindowInvShadow(float x0, float y0, float x1, float y1, float prio, Uint32 color);

void gwDrawWindowShadow(float x0, float y0, float x1, float y1, float prio, Uint32 color);

void GwDrawRectShade(float x0, float y0, float x1, float y1, float prio, Uint32 color, Bool trans);

void gwDrawRect2(float x0, float y0, float x1, float y1, float prio, Uint32 color);

void gwDrawRect(GWHWND hWnd, float x0, float y0, float x1, float y1, float prio);

Uint32 GwAddPColor(Sint32 col1, Sint32 col2);

Uint32 GwMulColor(Uint32 col, float ratio);

Uint32 GwSubPColor(Sint32 col1, Sint32 col2);

void GwDrawWindowTitleBar(GWHWND hWnd, float prio);

void GwDrawWindowFrame(GWHWND hWnd, float prio);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_keyboard.c
// *****************************************************************************

void gwKbdInit();
void gwKbdExit();

Bool gwKbdOn(gwKey key);

static void kbd_default_func_callback();

static void data_init(gwKbd *kbd);

static Bool search_kbd();
static void read_kbd();
static Sint32 get_control_code(Sint32 code);
static void set_code();
void gwKbdExec(gwKbd *kbd);

static void make_space(char *str, int cursor);

static void del_str(char *str, int cursor);
void gwKbdInitStr(gwInputStr *input);

int gwKbdMakeStr(gwInputStr *input);

Bool gwKbdSetSerialInput(Bool flag);

Sint32 gwKbdGetSerialAscii();
Sint32 gwKbdGetSerialKey();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_malloc.c
// *****************************************************************************

static void HeapInfoButtonFunc(GWHWND hWnd, gwButtonFuncMode mode);

static void HeapInfoWindowDraw(GWHWND hWnd);

static void HeapInfoWindowExec(GWHWND hWnd);

static void HeapInfoWindowExit(GWHWND hWnd);

GWHWND gwMallocCreateHeapInfoWindow(Sint32 x, Sint32 y);

void* gwMallocDebug(size_t size, char *filename, int line);

void* gwCallocDebug(size_t nelem, size_t size, char *filename, int line);

void gwFreeDebug(void *ptr, char *filename, int line);

Bool gwMallocGetInfo(gwMemInfo *info);

void gwMallocInit(void *work, size_t size);

void* gwMalloc(size_t size);

void* gwCalloc(size_t nelem, size_t size);

void gwFree(void *ptr);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_menu.c
// *****************************************************************************

void gwMenuListSetCheckFlagAll(gwMenu *menu, Sint32 flag);
Bool gwMenuListDoHavePopup(gwMenu *menu);

Sint32 gwMenuListGetNbMenuItem(gwMenu *menu);

Sint32 gwMenuListGetMaxLength(gwMenu *menu);

void gwMenuListGetSize(gwMenu *menu, Sint32 *x, Sint32 *y);

gwMenu* gwMenuListFindMenuItemByIndex(gwMenu *menu, Sint32 index);

gwMenu* gwMenuListFindMenuItemByTitle(gwMenu *menu, char *title);

static gwMenu* gwMenuListFindByTitleSub(gwMenu *menu, char *name);

void gwMenuListDestroy(gwMenu *menulist);

gwMenu* gwMenuListDeleteMenuItem(gwMenu *menulist, gwMenu *menuitem);

gwMenu* gwMenuListDeleteMenuItemByTitle(gwMenu *menulist, char *title);

gwMenu* gwMenuListAddMenuItem(gwMenu *menulist, gwMenu *menu);

gwMenu* gwMenuListDeleteByTable(gwMenu *menulist, gwMenuData *menudata);

gwMenu* gwMenuListCreateByTable(gwMenu *MenuList, gwMenuData *MenuData);

Sint32 gwMenuItemGetCallbackParam(gwMenu *menuitem);

Sint32 gwMenuItemSetCallbackParam(gwMenu *menuitem, Sint32 param);

void gwMenuItemSetCallback(gwMenu *menuitem, GWF_MENUFUNC func);

gwMenu* gwMenuItemAddPopupMenu(gwMenu *menuitem, gwMenu *menulist);

Bool gwMenuItemGetState(gwMenu *menuitem);
void gwMenuItemSetState(gwMenu *menuitem, Bool state);
Bool gwMenuItemIsEnable(gwMenu *menuitem);
void gwMenuItemSetEnable(gwMenu *menu, Bool flag);
Sint32 gwMenuItemSetCheckFlag(gwMenu *menu, Sint32 flag);
Sint32 gwMenuItemGetCheckFlag(gwMenu *menu);
gwMenu* gwMenuItemGetPopupMenu(gwMenu *menu);
Bool gwMenuItemIsPopup(gwMenu *menu);
static void gwMenuItemDestory(gwMenu *menu);

gwMenu* gwMenuItemCreatePopup(char *title, gwMenu *menulist);

gwMenu* gwMenuItemCreateSeparater();
gwMenu* gwMenuItemCreateCheckboxItem(char *title, Sint32 flag, GWF_MENUFUNC func, Sint32 param);
gwMenu* gwMenuItemCreateItem(char *title, GWF_MENUFUNC func, Sint32 param);

gwMenu* gwMenuItemCreate(char *title, Sint16 type, Sint16 flag, GWF_MENUFUNC func, Sint32 param);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_menuwin.c
// *****************************************************************************

GWHWND gwMenuWindowGetActive();

static void gwMenuWindowGetNewMenuPosition(GWHWND hWnd, Sint32 *x, Sint32 *y);

static GWHWND gwMenuWindowCreatePopupWindow(GWHWND hWnd, gwMenu *menu);

static void gwMenuWindowDecided(GWHWND hWnd, gwMenu *menu);

static Sint32 _GetMenuIndexByCursorKey(gwMenuWin *menuwin, Sint32 ctrl);

void gwMenuWindowControlByKeyboard();

Sint32 gwMenuWindowGetControlData();

gwMenu* gwMenuWinGetMenu(GWHWND hWnd);

Sint32 _gwMenuWindowGetMenuIndex(GWHWND hWnd);

void GwGetMenuWindowSizeByMenu(gwMenu *menu, Sint32 *w, Sint32 *h);

static void gw_draw_separater(Float x0, Float x1, Float y, Float prio);

void gwMenuWindowDraw(GWHWND hWnd, Float prio);

void gwMenuWindowDestroy(GWHWND hWnd);
static Bool IsChildFocus(GWHWND hWnd);

void gwMenuWindowExec(GWHWND hWnd);

static void gwMenuWindowExit(GWHWND hWnd);

GWHWND gwMenuWindowCreate(gwMenu *MenuList, char *caption, Sint32 x, Sint32 y, GWHWND parent);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_mouse.c
// *****************************************************************************

void gwMouseSetInvisibleTime(Sint32 time);

Bool gwMouseGetPositionInWindow(GWHWND hWnd, Sint32 *x, Sint32 *y);

Bool gwMouseIsInWindow(GWHWND hWnd);

Sint32 gwMouseGetWheelSpeed();
Sint32 gwMouseGetButtonDoubleClick();
Sint32 gwMouseGetButtonRepeat();
Sint32 gwMouseGetButtonRelease();
Sint32 gwMouseGetButtonPress();
Sint32 gwMouseGetButtonOn();
Sint32 gwMouseGetCursor();
Sint32 gwMouseGetAction();

Bool gwMouseDoMove();

Bool gwMouseGetMoveSize(Sint32 *mvx, Sint32 *mvy);

void gwMouseGetOldPosition(Sint32 *x, Sint32 *y);
void gwMouseGetPosition(Sint32 *x, Sint32 *y);

void gwMouseSetPosition(Sint32 x, Sint32 y);

Sint32 gwMouseSetRepeatWaitTime(Sint32 wait);

Sint32 gwMouseSetRepeatIntervalTime(Sint32 interval);

Float gwMouseSetMoveSpeed(Float speed);

static void _gwMouseActionByController(gwMouse *mouse, ulPeripheral *peri);
void gwMouseAction(gwMouse *mouse, ulPeripheral *peri);

static void MoveMouseByController(gwMouse *mouse, ulPeripheral *peri);

void gwMouseMove(gwMouse *mouse, ulPeripheral *peri);

void gwMouseEnable(Bool flag);

void gwMouseExec(gwMouse *mouse);

void gwMouseDraw(gwMouse *mouse, Float prio);

void gwMouseInit(int port, Sint32 w, Sint32 h);

static void MouseStatusDraw(GWHWND hWnd);

static void MouseStatusDestructor(GWHWND hWnd);

GWHWND gwCreateMouseStatusWindow(Sint32 x, Sint32 y);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_print.c
// *****************************************************************************

void gwPrintLoadSystemFont(ulPst *pst);
void gwPrintExit();
void gwPrintInit(gwPrintSize size, Uint32 gindex);
Float GwPriorityMask(Float f);
void gwPrintGetFontSize(gwPrintSize size, Sint32 *x, Sint32 *y);

gwPrintSize gwPrintSetFontSize(gwPrintSize size);

Float gwPrintSetPriority(Float pri);

Float gwPrintSetInvPriority(Float inv_pri);

Uint32 gwPrintSetColor(Uint32 col);

static ulSpriteVertex* nw_putc2(ulSpriteVertex *vtx, Uint16 code, Uint32 *u_tbl[2], Uint32 *v_tbl, Float x, Float y, Float w, Float h);

void gwPutc(Float x, Float y, Uint16 code);

void gwPuts(Float x, Float y, char *str);

void gwPutsLimit(Float x, Float y, Float right, Float under, char *str);

void gwPrintf(Float x, Float y, char *fmt);

void gwPrintfLimit(Float x, Float y, Float right, Float under, char *fmt);

void gwPutCursor(Float x, Float y, int id);

void gwPutIcon(Float x, Float y, Float scale, int id);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_scrlbar.c
// *****************************************************************************

gwScrlBarType gwScrollBarGetType(GWHWND hWnd);
void gwScrollBarSetCallback(GWHWND hWnd, GW_WIN_CALLBACK callback);

Sint32 gwScrollBarGetLength(GWHWND hWnd);

void gwScrollBarEnable(GWHWND hWnd, Bool flag);

Float gwScrollBarVariableGet(gwScrlBarVar *var);
void gwScrollBarVariableSet(gwScrlBarVar *var, Float data);
static Float gwScrollBarVariableIncrement(gwScrlBarVar *var);
static Float gwScrollBarVariableDecrement(gwScrlBarVar *var);
static Float gwScrollBarVariablePageIncrement(gwScrlBarVar *var);
static Float gwScrollBarVariablePageDecrement(gwScrlBarVar *var);
Float gwScrollBarSkipIncrement(GWHWND hWnd);
Float gwScrollBarSkipDecrement(GWHWND hWnd);
Float gwScrollBarIncrement(GWHWND hWnd);
Float gwScrollBarDecrement(GWHWND hWnd);

static void gwScrollBarSliderSetPositionAndSize(GWHWND hWnd, GWHWND parent);

static void gwScrollBarSliderDraw(GWHWND hWnd, Float prio);

static void gwScrollBarSliderExec(GWHWND hWnd);

static GWHWND gwScrollBarSliderCreate(GWHWND parent);

static void gwScrollBarButtonSetPositionAndSize(GWHWND hWnd, GWHWND parent);

static void gwScrollBarButtonCallback(GWHWND hWnd, gwButtonFuncMode mode);

static void gwScrollBarButtonExec(GWHWND hWnd);

static GWHWND gwScrollBarButtonCreate(gwSbBtnType type, GWHWND parent);

static void gwScrollBarAreaSetPositionAndSize(GWHWND hWnd);

Float gwScrollBarGetMin(GWHWND hWnd);

Float gwScrollBarSetMin(GWHWND hWnd, Float min);

Float gwScrollBarGetMax(GWHWND hWnd);

Float gwScrollBarSetMax(GWHWND hWnd, Float max);

Float gwScrollBarGetStep(GWHWND hWnd);

Float gwScrollBarSetStep(GWHWND hWnd, Float step);

Float gwScrollBarGetSkip(GWHWND hWnd);

Float gwScrollBarSetSkip(GWHWND hWnd, Float skip);

Float gwScrollBarGetValue(GWHWND hWnd);

Float gwScrollBarSetValue(GWHWND hWnd, Float value);

Sint32 gwScrollBarGetSliderSize(GWHWND hWnd);

Sint32 gwScrollBarSetSliderSize(GWHWND hWnd, Sint32 size);

static void gwScrollBarGetAutoSize(GWHWND hWnd, GWHWND parent, Sint32 *w, Sint32 *h);

static void gwScrollBarDraw(GWHWND hWnd, Float prio);

static void gwScrollBarSetPositionAndSize(GWHWND hWnd, GWHWND parent);

void gwScrollBarControlByMouseWheel(GWHWND hWnd);

void gwScrollBarControlByKeyboard(GWHWND hWnd);

static void gwScrollBarExec(GWHWND hWnd);

GWHWND gwScrollBarCreate(Sint32 type, gwScrlBarVar *vardata, Sint32 x, Sint32 y, Sint32 w, Sint32 h, GWHWND parent);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_slider.c
// *****************************************************************************

void gwSliderSetCallback(GWHWND hWnd, GW_WIN_CALLBACK callback);
void gwSliderSetSkip(GWHWND hWnd, Float skip);
Float gwSliderGetSkip(GWHWND hWnd);
void gwSliderSetMin(GWHWND hWnd, Float min);
Float gwSliderGetMin(GWHWND hWnd);
void gwSliderSetMax(GWHWND hWnd, Float max);
Float gwSliderGetMax(GWHWND hWnd);

void gwSliderSetValue(GWHWND hWnd, Float value);

Float gwSliderGetValue(GWHWND hWnd);
static void gwSliderControlDraw(GWHWND hWnd, Float prio);

static void gwSliderControlExec(GWHWND hWnd);

static GWHWND gwSliderControlCreate(GWHWND parent);

static void gwSliderDraw(GWHWND hWnd, Float prio);

static void gwSliderExec(GWHWND hWnd);

static void gwSliderExit(GWHWND hWnd);

GWHWND gwSliderCreate(Sint32 type, gwVariable *vardata, Sint32 x, Sint32 y, Sint32 w, Sint32 h, GWHWND parent);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_string.c
// *****************************************************************************

size_t GwStrLen_r(char *c);

Bool GwStrCmp_Period(char *cs, char *ct, char period);
int GwStrOrder(char *cs, char *ct);

char* GwStrInt2Bin(int val, int digit, char *buf, char *str_on, char *str_off);

Float GwStr2Float(char *str);

int GwStr2IntHex(char *str);

int GwStr2Int(char *str);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_system.c
// *****************************************************************************

void gwSystemLoadFontTexture();

void gwSystemGetNewWindowPosition(Sint32 *x, Sint32 *y);

int gwSystemSetMaxFileNum(int nbFiles);

static int gwSystemCmdFunc_cd(int argc, char **argv);
static int gwSystemCmdFunc_ls(int argc, char **argv);

static void gwSystemGetKbdCtrlData();

static void gwWindowManagerDraw(GWHWND hWnd);

static void gwWindowManagerExec(GWHWND hWnd);

static void gwWindowManagerExit(GWHWND hWnd);

GWHWND gwWindowManagerCreate();

static void gwWindowManagerServer();

void gwSystemGetColorBlendingMode(Sint32 *src, Sint32 *dst);
void gwSystemSetColorBlendingMode(Sint32 src, Sint32 dst);
void gwSystemBlendingMode(Sint32 src, Sint32 dst);
Sint32 gwSystemSuperSampleMode(Sint32 mode);
Sint32 gwSystemGetSuperSampleMode();

Sint32 gwSystemSetSuperSampleMode(Sint32 mode);

Sint32 gwSystemTextureFilterMode(Sint32 mode);
Sint32 gwSystemGetTextureFilterMode();

Sint32 gwSystemSetTextureFilterMode(Sint32 mode);

Bool gwSystemEnableDigitalMenuControl(Bool flag);

void gwSystemGetIconRatio(Float *rx, Float *ry);

int gwSystemGetPort();

int gwSystemSetPort(int port);

int gwSystemGetFontGlobalIndex();

void gwSystemGetTVScreenRect(gwRect *rect);

void gwSystemGetScreenSize(Sint32 *x, Sint32 *y);
gwPrintSize gwSystemGetFontType();

gwPrintSize gwSystemSetFontType(gwPrintSize type);

gwPrintSize gwSystemGetFontSize(Sint32 *x, Sint32 *y);

void gwPrintWindowList(GWHWND hWnd, GWHWND hWndCur, Sint32 *x, Sint32 *y);

static void WindowInfoDraw(GWHWND hWnd);

static void WindowInfoExec(GWHWND hWnd);

static void WindowInfoExit(GWHWND hWnd);

GWHWND gwCreateWindowInfoWindow(Sint32 x, Sint32 y);

Sint32 gwSystemDraw();

Sint32 gwSystemExec();
void gwSystemExit();
void gwSystemInit(gwInitInfo *info);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_text.c
// *****************************************************************************

Uint32 gwWindowGetTextColor(GWHWND hWnd);
Uint32 gwWindowSetTextColor(GWHWND hWnd, Uint32 color);

void gwWindowPutIcon(GWHWND hWnd, Sint32 x, Sint32 y, Sint32 icon, Float scale);

void gwWindowPutsLimit(GWHWND hWnd, Sint32 x, Sint32 y, Sint32 right, Sint32 bottom, char *str);

void gwWindowPrintfLimit(GWHWND hWnd, Sint32 x, Sint32 y, Sint32 right, Sint32 bottom, char *fmt);

void gwWindowPutc(GWHWND hWnd, Sint32 x, Sint32 y, char ch);

void gwWindowPuts(GWHWND hWnd, Sint32 x, Sint32 y, char *str);

void gwWindowPrintf(GWHWND hWnd, Sint32 x, Sint32 y, char *fmt);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_textfield.c
// *****************************************************************************

void gwTextFieldSetTextType(GWHWND hWnd, Sint32 type);
Sint32 gwTextFieldGetTextType(GWHWND hWnd);
void gwTextFieldSetCallback(GWHWND hWnd, GWF_TEXTFIELDFUNC callback);
Bool gwTextFieldDoInputReturn(GWHWND hWnd);

void gwTextFieldSetText(GWHWND hWnd, char *str);

char* gwTextFieldGetText(GWHWND hWnd);

static void gwTextFieldDraw(GWHWND hWnd, Float prio);

static void gwTextFieldExec(GWHWND hWnd);

static void gwTextFieldExit(GWHWND hWnd);

GWHWND gwTextFieldCreate(char *str, GWF_TEXTFIELDFUNC func, Sint32 x, Sint32 y, Sint32 w, Sint32 h, GWHWND parent);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_texture_viewer.c
// *****************************************************************************

void gwTextureViewerInit();

static void set_default(TexViewCtrl *ctrl);

static void texnum_inc(TexViewCtrl *ctrl, Bool b_click);
static void texnum_dec(TexViewCtrl *ctrl, Bool b_click);
static void change_rate(TexViewCtrl *ctrl);

static void input(GWHWND hWnd, TexViewCtrl *ctrl);

static void calc_wnd_width(GWHWND hWnd, TexViewCtrl *ctrl);

static void calc_tex_size(GWHWND hWnd, TexViewCtrl *ctrl);
static void calc_ninja(TexViewCtrl *ctrl);

static void gw_exec(GWHWND hWnd);

static void gw_dest(GWHWND hWnd);

static char* get_pixelfmt_str(int psm);

static void gw_draw(GWHWND hWnd);

static void view_exec(GWHWND hWnd);

static void view_draw(GWHWND hWnd);

static void callback_backcolor(GWHWND hWnd);

static void button_backcolor(GWHWND hWnd, gwButtonFuncMode mode);

static void button_idx_inc(GWHWND hWnd, gwButtonFuncMode mode);

static void button_idx_dec(GWHWND hWnd, gwButtonFuncMode mode);

static void button_rate_inc(GWHWND hWnd, gwButtonFuncMode mode);

static void button_rate_dec(GWHWND hWnd, gwButtonFuncMode mode);

static void button_clamp(GWHWND hWnd, gwButtonFuncMode mode);

static void set_flip_mode(TexViewCtrl *ctrl);

static void button_flip_u(GWHWND hWnd, gwButtonFuncMode mode);

static void button_flip_v(GWHWND hWnd, gwButtonFuncMode mode);

static void button_trans(GWHWND hWnd, gwButtonFuncMode mode);

static void button_ss(GWHWND hWnd, gwButtonFuncMode mode);

static void button_bi(GWHWND hWnd, gwButtonFuncMode mode);

static void button_init(GWHWND hWnd, gwButtonFuncMode mode);

void gwTextureViewerCreate();

void gwTextureViewerDestroy();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_varedit.c
// *****************************************************************************

void gwVarEditInit();
void gwVarEditExit();
static void varedit_menu_callback(gwMenu *menu, Sint32 idx, Sint32 param);

static void varedit_menu_set();

static void clr_list(gwVarEditList *list);

void gwVarEditInitRoot(gwVarEditList **root);
void gwVarEditDestroyRoot(gwVarEditList **root);
gwVarEditList* gwVarEditGetGroupGindows();
gwVarEditList* gwVarEditGetGroupList_R(gwVarEditList **root, gwVarEditList *group);

int gwVarEditCalcNum(gwVarEditList *list);

int gwVarEditGetIndex_R(gwVarEditList **root, gwVarEditList *list, char *name);

gwVarEditList* gwVarEditGetN(gwVarEditList *list, int n);

gwVarEditList* gwVarEditFindGroup_R(gwVarEditList **root, gwVarEditList *group, char *name);

static void bit_init(gwVarEditData *data);

gwVarEditList* gwVarEditAddVariable_R(gwVarEditList **root, gwVarEditList *group, gwVarEditData *data);

void gwVarEditAddVariableTbl_R(gwVarEditList **root, gwVarEditList *group, gwVarEditData *data);

void gwVarEditDeleteVariable_R(gwVarEditList **root, gwVarEditList *group, gwVarEditData *data);

void gwVarEditDeleteVariableTbl_R(gwVarEditList **root, gwVarEditList *group, gwVarEditData *data);

static gwVarEditList* search_list(gwVarEditList **root, gwVarEditList *group, char *name);

static gwVarEditList** search_insert(gwVarEditList **root, gwVarEditList *group, gwVarEditData *data);

static void disp_var_edit(gwVarEditData *data, int old);

static void disp_var(gwVarEditData *data);

static void com_varlist_disp(gwVarEditList *list, char *grp_parent_name);

static int com_varlist(int argc, char **argv);

static int com_varsearch(int argc, char **argv);

static void set_int(gwVarEditData *data, int argc, char **argv);

static void set_float(gwVarEditData *data, int argc, char **argv);

static void set_pcol(gwVarEditData *data, int argc, char **argv);

static void set_angle(gwVarEditData *data, int argc, char **argv);

static void set_bool(gwVarEditData *data, int argc, char **argv);

void gwVarEditSetVariable_R(gwVarEditList **root, gwVarEditList *group, int argc, char **argv);

static int com_varset(int argc, char **argv);
static void com_regist();
static void com_unregist();

static size_t calc_set_data_size(gwVarEditList *group);

size_t gwVarEditCalcSetDataSize();
static void* make_set_data_name(gwVarEditData *data, Uint32 *save);

static void* make_set_data(gwVarEditList *group, void *save);

void gwVarEditMakeSetData(void *save);

static void* load_set_data(char *parent_group_name, void *load);

void gwVarEditLoadSetData(void *save);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_varedit_win.c
// *****************************************************************************

static void init_gindows(GWS_VAREDIT_WIN_CTRL *ctrl);

static void change_group(GWS_VAREDIT_WIN_CTRL *ctrl);

static void check_group(GWS_VAREDIT_WIN_CTRL *ctrl);

static void change_trans(GWS_VAREDIT_WIN_CTRL *ctrl);

Bool gwVarEditIsView();

Bool gwVarEditSetView(Bool flag);

static void calc_wnd_width(GWS_VAREDIT_WIN_CTRL *ctrl);

static void data_int_draw(GWHWND hWnd, Sint32 x, Sint32 y, gwVarEditData *data);

static void data_int_func(gwVarEditData *data);

static void data_int_inc(gwVarEditData *data, Bool flg_clik);

static void data_int_dec(gwVarEditData *data, Bool flg_clik);

static void data_float_draw(GWHWND hWnd, Sint32 x, Sint32 y, gwVarEditData *data);

static void data_float_func(gwVarEditData *data);

static void data_float_inc(gwVarEditData *data);

static void data_float_dec(gwVarEditData *data);

static void data_pcol_draw(GWHWND hWnd, Sint32 x, Sint32 y, gwVarEditData *data);

static void data_pcol_func(gwVarEditData *data);

static void data_pcol_inc(gwVarEditData *data);
static void data_pcol_dec(gwVarEditData *data);

static void data_angle_draw(GWHWND hWnd, Sint32 x, Sint32 y, gwVarEditData *data);

static void data_angle_func(gwVarEditData *data);

static void data_angle_inc(gwVarEditData *data);

static void data_angle_dec(gwVarEditData *data);

static void data_bool_draw(GWHWND hWnd, Sint32 x, Sint32 y, gwVarEditData *data);

static void data_bool_func(gwVarEditData *data);

static void data_bool_inc(gwVarEditData *data);

static void data_bool_dec(gwVarEditData *data);

static void data_bit_draw(GWHWND hWnd, Sint32 x, Sint32 y, gwVarEditData *data);

static void data_bit_func(gwVarEditData *data);

static void data_bit_inc(gwVarEditData *data);

static void data_bit_dec(gwVarEditData *data);

static void data_select_draw(GWHWND hWnd, Sint32 x, Sint32 y, gwVarEditData *data);

static void data_select_func(gwVarEditData *data);

static void data_select_inc(gwVarEditData *data, Bool flg_clik);

static void data_select_dec(gwVarEditData *data, Bool flg_clik);

static void coledit_callback(GWHWND hWnd);

static void coledit_make(GWS_VAREDIT_WIN_CTRL *ctrl);

static gwVarEditData* get_selected_item(GWS_VAREDIT_WIN_CTRL *ctrl);
static void select_group(GWS_VAREDIT_WIN_CTRL *ctrl, gwVarEditData *data);

static void select_item(GWS_VAREDIT_WIN_CTRL *ctrl);

static void select_parent(GWS_VAREDIT_WIN_CTRL *ctrl);

static void variable_inc(GWS_VAREDIT_WIN_CTRL *ctrl, Bool flg_clik);

static void variable_dec(GWS_VAREDIT_WIN_CTRL *ctrl, Bool flg_clik);

void gwVarEditSetFunc(gwVarEditData *data);

static void varlist_disp(GWHWND hWnd, GWS_VAREDIT_WIN_CTRL *ctrl);

static Bool calc_mouse_cursor(GWHWND hWnd, Sint32 wx, Sint32 wy, int *column, int *row);

static void select_idx_dec(GWS_VAREDIT_WIN_CTRL *ctrl, Bool click);
static void select_idx_inc(GWS_VAREDIT_WIN_CTRL *ctrl, Bool click);

static void input_select(GWS_VAREDIT_WIN_CTRL *ctrl);

static void varedit_exec(GWHWND hWnd);

static void varedit_draw(GWHWND hWnd);

static void varedit_dest(GWHWND hWnd);

static void variable_draw(GWHWND hWnd);

static void button_trans(GWHWND hWnd, gwButtonFuncMode mode);

static void button_inc(GWHWND hWnd, gwButtonFuncMode mode);

static void button_dec(GWHWND hWnd, gwButtonFuncMode mode);

static void button_parent(GWHWND hWnd, gwButtonFuncMode mode);

static GWHWND create_gindows(gwVarEditList **root, char *title);

GWHWND gwVarEditWinCreate(gwVarEditList **root, char *title);
void gwVarEditWinSetUserDestructor(GWHWND hWnd, void (*dest)());

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_window.c
// *****************************************************************************

Sint32 gwWindowGetNextXPosition(GWHWND hWnd);
Sint32 gwWindowGetNextYPosition(GWHWND hWnd);
Uint32 gwWindowGetDefaultTextColor();

void gwWindowSetDefaultColor(Uint32 *bg_colors, Uint32 text_color);

void gwWindowResizeToWindow(GWHWND hWnd, GWHWND hSrc, Sint32 woff, Sint32 hoff);

void gwWindowResizeToParent(GWHWND hWnd, Sint32 woff, Sint32 hoff);

void gwWindowGetFontSize(GWHWND hWnd, Sint32 *x, Sint32 *y);
void gwWindowSetFontType(GWHWND hWnd, gwPrintSize type);
gwPrintSize gwWindowGetFontType(GWHWND hWnd);
Uint32* gwWindowGetDefaultWindowColor();
Bool gwWindowIsShow(GWHWND hWnd);
void gwWindowShow(GWHWND hWnd);
void gwWindowHide(GWHWND hWnd);
Bool gwWindowIsLabel(GWHWND hWnd);
Bool gwWindowIsTextField(GWHWND hWnd);
Bool gwWindowIsSlider(GWHWND hWnd);
Bool gwWindowIsScrollBar(GWHWND hWnd);
Bool gwWindowIsBaseWindow(GWHWND hWnd);
Bool gwWindowScreenToWindowPosition(GWHWND hWnd, Sint32 sx, Sint32 sy, Sint32 *wx, Sint32 *wy);
static void gwWindowScreenToWindowPositionSub(GWHWND hWnd, Sint32 *wx, Sint32 *wy);

Bool gwWindowGetMousePosition(GWHWND hWnd, Sint32 *wx, Sint32 *wy);

Float gwWindowGetPriority(GWHWND hWnd);

Sint32 gwWindowBitSetStyle(GWHWND hWnd, Sint32 style);

Sint32 gwWindowBitClrStyle(GWHWND hWnd, Sint32 style);

Sint32 gwWindowSetStyle(GWHWND hWnd, Sint32 style);

Sint32 gwWindowGetStyle(GWHWND hWnd);
void gwWindowSetUserBuffer(GWHWND hWnd, void *ptr);
void* gwWindowGetUserBuffer(GWHWND hWnd);
void gwWindowSetUserParameter(GWHWND hWnd, Sint32 index, Sint32 param);
Sint32 gwWindowGetUserParameter(GWHWND hWnd, Sint32 index);
Sint32 gwWindowGetShadowWidth();

Sint32 gwWindowGetCaptionHeight();

GWHWND gwWindowGetParent(GWHWND hWnd);

gwWinArea gwWindowCheckAreaByPosition(GWHWND hWnd, Sint32 sx, Sint32 sy);

char* gwWindowGetTitle(GWHWND hWnd);
void gwWindowSetTitle(GWHWND hWnd, char *title);
void gwWindowGetPosition(GWHWND hWnd, Sint32 *x, Sint32 *y);
void gwWindowSetPosition(GWHWND hWnd, Sint32 x, Sint32 y);
void gwWindowGetSize(GWHWND hWnd, Sint32 *w, Sint32 *h);
void gwWindowSetSize(GWHWND hWnd, Sint32 w, Sint32 h);

void gwWindowBringToTop(GWHWND hWnd);

void gwWindowFindFocusWindow(GWHWND hWnd, Sint32 x, Sint32 y, GWHWND *active);

void gwWindowSetUserFunc(GWHWND hWnd, void (*exec)(), void (*draw)(), void (*dest)());
void gwWindowSetUserDestructor(GWHWND hWnd, void (*dest)());
void gwWindowSetUserExecFunc(GWHWND hWnd, void (*exec)());
void gwWindowSetUserDrawFunc(GWHWND hWnd, void (*draw)());
Bool gwWindowIsFocus(GWHWND hWnd);
GWHWND gwWindowGetFocus();

GWHWND gwWindowSetFocus(GWHWND hWnd);

Bool gwWindowIsActiveFamily(GWHWND hWnd);
Bool gwWindowIsActiveTree(GWHWND hWnd);
Bool gwWindowIsActive(GWHWND hWnd);
GWHWND gwWindowGetActive();

GWHWND gwWindowSetActive(GWHWND hWnd);

GWHWND gwWindowGetClipWindow(GWHWND hWnd);
void gwWindowSetClipWindow(GWHWND hWnd, GWHWND hWndClip);

Bool gwWindowIsInClipWindow(GWHWND hWnd);

Bool gwIsRectInRect(gwRect *rect_in, gwRect *rect_out);
Bool gwIsInRect(gwRect *rect, Sint32 x, Sint32 y);

Bool gwWindowIsInFrame(GWHWND hWnd, Sint32 x, Sint32 y);

void gwWindowGetFrameRect(GWHWND hWnd, gwRect *rect);
void gwWindowGetClientRect(GWHWND hWnd, gwRect *rect);
void gwWindowGetScreenRect(GWHWND hWnd, gwRect *rect);
void gwWindowGetRect(GWHWND hWnd, gwRect *rect);
void gwWindowGetScreenPosition(GWHWND hWnd, Sint32 *sx, Sint32 *sy);
static void GwGetWindowScreenXYSub(GWHWND hWnd, Sint32 *sx, Sint32 *sy);
void gwWindowSetColor(GWHWND hWnd, Uint32 color);

void gwWindowSetShadeColor(GWHWND hWnd, Uint32 *colors);

void gwWindowGetNbEntryWindow(GWHWND hWnd, Sint32 *nb);

void gwWindowEntry(GWHWND hWnd, GWHWND hWndParent);

static void gwWindowFreeRecursive(GWHWND hWnd);

static void gwWindowFree(GWHWND hWnd);
GWHWND gwWindowGetProspectiveActiveWindow(GWHWND hWnd);
static void gwWindowDestroyChild(GWHWND hWnd);

GWHWND gwWindowDestroy(GWHWND hWnd);

GWHWND gwWindowCreate(Sint32 wClass, char *caption, Sint32 style, Sint32 x, Sint32 y, Sint32 w, Sint32 h, GWHWND hWndParent);

Float gwAddPriority(Float prio, Sint32 level);

void gwWindowDraw(GWHWND hWnd, float prio);

void gwWindowExecAll(GWHWND hWnd);

void gwWindowDrawAll(GWHWND hWnd, float *prio);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gwu_periinfo.c
// *****************************************************************************

static void btn_press_mode_exec(GWHWND hBtn);

static void btn_press_mode_callback(GWHWND hBtn, gwButtonFuncMode mode);

static void btn_port_select_callback(GWHWND hBtn, gwButtonFuncMode mode);

static char* status_to_str(int status);

static void gwuPeriInfoDraw(GWHWND hWnd);

static void gwuPeriInfoExec(GWHWND hWnd);

static void gwuPeriInfoExit(GWHWND hWnd);

GWHWND gwuCreatePeriInfoWindow(Sint32 x, Sint32 y, GWHWND hParent);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gwu_texview.c
// *****************************************************************************

static char* get_pixelfmt_str(int psm);

static void disp_texinfo(GWHWND hWnd, TexViewerTask *task, ulTexture *tex, int x, int y, int fsx, int fsy);

static void gwUtilTexViewerDraw(GWHWND hWnd);

static void ctrl_texture_scale(GWHWND hWnd, TexViewerTask *task);

static void gwUtilTexViewerExec(GWHWND hWnd);

static void gwUtilTexViewerExit(GWHWND hWnd);

GWHWND gwUtilCreateTexViewer(Sint32 x, Sint32 y, GWHWND hParent);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_coloredit_win.c
// *****************************************************************************

static int gwColorEditWinCmdFunc(int argc, char **argv);

void gwColorEditWinSetCallback(GWHWND hWnd, GW_WIN_CALLBACK callback);
Uint32 gwColorEditWinGetColor(GWHWND hWnd);
void gwColorEditWinSetUserDestructor(GWHWND hWnd, void (*dest)());
void gwColorEditWinDestroy(GWHWND hWnd);
static void button_ok_callback(GWHWND hWnd, gwButtonFuncMode mode);

static Uint32 get_edit_color(GWHWND hWnd);

static void slider_callback(GWHWND hSlider);

static void textfield_callback(GWHWND hWnd);

static void gwColorEditWinDraw(GWHWND hWnd);

static void gwColorEditWinExec(GWHWND hWnd);

static void gwColorEditWinExit(GWHWND hWnd);

GWHWND gwColorEditWinCreate(Sint32 flag, Uint32 color, Sint32 x, Sint32 y, Sint32 w, Sint32 h, GWHWND parent);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_dump.c
// *****************************************************************************

static int gwDumpWinCmdFunc(int argc, char **argv);

static void dump_type_choicebox_callback(GWHWND hWnd, Sint32 index);

static void dump_byte_button_callback(GWHWND hWnd, gwButtonFuncMode mode);

Uint32 HexStrToInt(char *hex);

static void addr_input_field_callback(GWHWND hWnd);

static void draw_ascii_char(GWHWND hWnd, Sint32 x, Sint32 y, Sint8 *ptr, int cnt, Sint32 fsx);

static void draw_dump_byte(GWHWND hWnd, Sint32 x, Sint32 y, Sint8 *ptr, int cnt);

static void draw_dump_word(GWHWND hWnd, Sint32 x, Sint32 y, Sint16 *ptr, int cnt);

static void draw_dump_long(GWHWND hWnd, Sint32 x, Sint32 y, Sint32 *ptr, int cnt);

static void draw_dump_float(GWHWND hWnd, Sint32 x, Sint32 y, Float *ptr, int cnt);

static void gwDumpFrameDraw(GWHWND hWnd);

static void gwDumpFrameExec(GWHWND hWnd);

static void gwDumpWindowExec(GWHWND hWnd);

static void gwDumpWinExit(GWHWND hWnd);

GWHWND gwDumpWindowCreate(Uint32 start_addr, Uint32 end_addr, Sint32 x, Sint32 y, Sint32 w, Sint32 h, GWHWND parent);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_graphic.c
// *****************************************************************************

void gwGraphicFillRectWithShadow(GWHWND hWnd, Sint32 left, Sint32 top, Sint32 right, Sint32 bottom, Uint32 color, Float level, Bool shadowflag);

void gwGraphicDrawSeparaterHorizontal(GWHWND hWnd, Bool shadow, Sint32 sx, Sint32 sy, Sint32 ex, Uint32 color, Sint32 level);

void gwGraphicDrawSeparaterVertical(GWHWND hWnd, Bool shadow, Sint32 sx, Sint32 sy, Sint32 ey, Uint32 color, Sint32 level);

void gwGraphicDrawRect(GWHWND hWnd, Sint32 left, Sint32 top, Sint32 right, Sint32 bottom, Uint32 color, Sint32 level);

void gwGraphicFillRect(GWHWND hWnd, Sint32 left, Sint32 top, Sint32 right, Sint32 bottom, Uint32 color, Float level);

void gwGraphicFillRectShade(GWHWND hWnd, Sint32 left, Sint32 top, Sint32 right, Sint32 bottom, Uint32 *colors, Float level);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/kanji/src/kj.c
// *****************************************************************************

void kjInit2(ulTexture **ppTextureArray, kjFontInitParam *pParam);

void kjInit(ulTexture **ppTextureArray, kjFontInitParam *pParam);
void kjReInit2(ulTexture **ppTextureArray, kjFontInitParam *pParam);
void kjReInit(ulTexture **ppTextureArray, kjFontInitParam *pParam);
void kjExit();

Bool kjEUCtoSJIS(char *pSrc, char *pDst, int dst_size);

static Bool YkMemComp(char *p, char *q, int size);
void kjTranslateGaijiCtrlCode(char *pSrc, char *pDst);

Bool kjStrEntry(char *pStr);

void kjStrRelease(char *pStr);

void kjReleaseAll();
void kjGetSize(Float *pWidth, Float *pHeight);
void kjSetSize(Float width, Float height);
static Float kjPriorityMask(Float f);

Float kjSetPriority(Float priority);

Float kjSetPriorityOoz(Float ooz);

Float kjSetFramePriority(Float priority);

Float kjSetFramePriorityOoz(Float ooz);

Float kjSetShadePriority(Float priority);

Float kjSetShadePriorityOoz(Float ooz);

ulPCol kjSetColor(ulPCol color);

Bool kjEnablePro(Bool enable);

Float kjSetItalicRate(Float rate);

int kjSetBoldSize(int size);

int kjSetFrameSize(int size);

ulPCol kjSetFrameColor(ulPCol color);

int kjSetShadeSize(int size);

ulPCol kjSetShadeColor(ulPCol color);

int kjSetGapSize(int size);

Bool kjEnableAutoSuperSampling(Bool on);

static ulTexture* GetZenSize(int code, int *pWidth, Float *pU1, Float *pV1, Float *pU2, Float *pV2);

static ulTexture* GetHanSize(int code, int *pWidth, Float *pU1, Float *pV1, Float *pU2, Float *pV2);

static void kjPushAttr();
static void kjPopAttr();

static Bool YkGetPCol(char *pStr, ulPCol *pCol);

static void AnalizeCtrlStringClose(char *pStr, Float *pX, CtrlCodeResult *pResult, CtrlCodeStack *pStack);

static void AnalizeCtrlStringOpen(char *pStr, Float *pX, CtrlCodeResult *pResult, CtrlCodeStack *pStack);

static char* ExecCtrlCode(char *pStr, Float *pX, CtrlCodeResult *pResult, CtrlCodeStack *pStack);

static char* SkipCtrlCode(char *pStr);

static void DrawCore(Float x, Float y, Float width, Float u1, Float v1, Float u2, Float v2);

static void DrawChar(Float x, Float y, Float width, Float u1, Float v1, Float u2, Float v2);

static void DrawCoreDotLimited(Float x, Float x_add, Float y, Float width, Float u1, Float v1, Float u2, Float v2, Float limit);

static void DrawCharDotLimited(Float x, Float y, Float width, Float u1, Float v1, Float u2, Float v2, Float limit);

static void kjPutsSub(Float *pX, Float *pY, char **ppStr, CtrlCodeStack *pStackPrev, Float add);

Float kjPuts(Float x, Float y, char *pStr);

Float kjPrintf(Float x, Float y, char *pFormat);

static void kjPutsNumLimitedSub(Float *pX, Float *pY, char **ppStr, CtrlCodeStack *pStackPrev, int num, Float add);

Float kjPutsNumLimited(Float x, Float y, int num, char *pStr);

Float kjPrintfNumLimited(Float x, Float y, int num, char *pFormat);

static void kjPutsWidthLimitedSub(Float *pX, Float *pY, char **ppStr, CtrlCodeStack *pStackPrev, Float limit, Float add);

Float kjPutsWidthLimited(Float x, Float y, Float width, char *pStr);

Float kjPrintfWidthLimited(Float x, Float y, Float width, char *pFormat);

static void kjPutsDotLimitedSub(Float *pX, Float *pY, char **ppStr, CtrlCodeStack *pStackPrev, Float limit, Float add);

Float kjPutsDotLimited(Float x, Float y, Float width, char *pStr);

Float kjPrintfDotLimited(Float x, Float y, Float width, char *pFormat);

Float kjValDraw(int val, int digit, Float x, Float y);

Bool kjIsZen(char *pStr, int index);

int kjSearchZen(char *pStr);

int kjGetNum(char *pStr, int *pZenNum);

static Bool kjCalcWidthSub(char **ppStr, Float max, int *pNum, Float *pX, CtrlCodeStack *pStackPrev, Float rate);

Bool kjCalcWidth(char *pStr, Float max, int *pWidth, int *pNum);

// *****************************************************************************
// FILE -- /cs404.disk15/chnf6/soft/ch52/ps2/main/lib/kanji/src/kj_font.c
// *****************************************************************************

void kjClearMemory(void *pAddress, char value, size_t size);

static size_t kjFontGetZenWorkBufSize(char *pFontFile, kjFontFrame frame, int mergin, int tex_width);

static size_t kjFontGetHanWorkBufSize(char *pFontFile);

size_t kjFontGetWorkBufSize2(kjFontInitParam *pParam);

size_t kjFontGetWorkBufSize(kjFontInitParam *pParam);

static void SetFrame(Uint8 *p, int width, int height);

static void HanSetFontBit2Byte(Uint8 *pDst, Sint8 *pSrc, int bit_offset);

static void HanGetData(Uint8 *pBuf, Uint8 *pWork, int index, kjFontFrame frame, int x, int y);

static void HanSetProData(ProData *pDst, Uint8 *pSrc, int index);

static void InitHanFont(int index, int num, Uint8 *pDstTexMem, ProData *pDstPro, kjFontInitParam *pParam);

static void InitHan(kjFontInitParam *pParam);

static void InitZen(kjFontInitParam *pParam);

void kjFontZenCopyCLUT(void *pBuf);

void kjFontInit(ulTexture **ppTextureArray, kjFontInitParam *pParam);

void kjFontReInit(ulTexture **ppTextureArray, kjFontInitParam *pParam);

void kjFontExit();

static void kjFontZenBit2Byte(Uint8 *pDst, Sint8 *pSrc, int bit_offset);

static void kjFontZenConvert(Uint8 *pSrc, int index);

static int kjFontGetZenIndex(Uint16 code);

void* kjFontZenSetBuf(int texID, void *pBuf);

void* kjFontZenGetBuf(int texID);
void kjFontZenLockRender(Bool lock);

Bool kjFontZenEntry(Uint16 code);

Bool kjFontZenRelease(Uint16 code);

void kjFontZenReleaseAll();

int kjFontGetZenEntryNum();

void kjFontUpdateTexture();

void kjFontUpdateTexturePath2();

void kjFontReloadTexture();

void kjSJIStoJIS(int *ph, int *pl);
void kjJIStoSJIS(int *ph, int *pl);

void kjFontGetZenProSize(Uint16 code, int *pLeft, int *pWidth);

ulTexture* kjFontGetZenProUV(Uint16 code, int *pWidth, Float *pU1, Float *pV1, Float *pU2, Float *pV2);

static int kjFontGetHanIndex(Uint8 code);

void kjFontGetHanProSize(Uint8 code, int *pLeft, int *pWidth);

ulTexture* kjFontGetHanProUV(Uint8 code, int *pWidth, Float *pU1, Float *pV1, Float *pU2, Float *pV2);

ulTexture* kjFontGetHanUV(Uint8 code, Float *pU1, Float *pV1, Float *pU2, Float *pV2);

ulTexture* kjFontGetZenUV(Uint16 code, Float *pU1, Float *pV1, Float *pU2, Float *pV2);

int kjFontGetZenWidth();
int kjFontGetHanWidth();
int kjFontGetZenHeight();
int kjFontGetHanHeight();

Uint8* kjFontGetZenPtr(Uint16 code, int *pBitOffset);

void kjFontReleaseZenPtr();

Uint8* kjFontGetHanPtr(Uint8 code, int *pBitOffset);

void kjFontReleaseHanPtr();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/memcard/src/libulmc.c
// *****************************************************************************

static int calc_day_of_week(int year, int month, int day);

static void get_path(char *str, char *path);

static void call_complete_callback2(ulPeriPort port, int slot, int op, int result);

static void sequence_loadfile(int op, int result);

static void sequence_savefile(int op, int result);

static void sequence_setfileattr(int op, int result);

static void sequence_connectionserver(int op, int result);

static void sequence_initapplication(int op, int result);

static void callback(int op, int result);

static void semapho();

void ulMcInit(ulMcApplicationInfo *info);
void ulMcInitPort(ulPeriPort port, int slot);

Sint32 ulMcExit();

void ulMcServer();

void ulMcConnectionServer();

Bool ulMcSyncConnection();

Sint32 ulMcSync();

void ulMcSetCompleteCallback(UL_MC_COMPLETE_CALLBACK callback, Sint32 param);
void ulMcSetProgressCallback(UL_MC_PROGRESS_CALLBACK callback);

Sint32 ulMcFormat(ulPeriPort port, int slot);

Sint32 ulMcUnformat(ulPeriPort port, int slot);

Sint32 ulMcCreateDir(ulPeriPort port, int slot, char *path);

Sint32 ulMcChangeDir(ulPeriPort port, int slot, char *path);

Sint32 ulMcGetCurrentDir(ulPeriPort port, int slot, char *path);

Sint32 ulMcOpenFile(ulPeriPort port, int slot, char *name, int mode);

Sint32 ulMcCloseFile(int fd);

Sint32 ulMcRenameFile(ulPeriPort port, int slot, char *org_name, char *new_name);

Sint32 ulMcDeleteFile(ulPeriPort port, int slot, char *name);

Sint32 ulMcReadFile(int fd, void *buff, int size);
Sint32 ulMcWriteFile(int fd, void *buff, int size);
Sint32 ulMcSeekFile(int fd, int offset, int mode);

Sint32 ulMcLoadFile(ulPeriPort port, int slot, char *name, void *buff, int size);

Sint32 ulMcLoadFileEx(ulPeriPort port, int slot, char *name, void *buff, int offset, int size);

Sint32 ulMcSaveFile(ulPeriPort port, int slot, char *name, void *buff, int size, Sint32 flag);

Sint32 ulMcSaveFileEx(ulPeriPort port, int slot, char *name, void *buff, int offset, int size, Sint32 flag);

Sint32 ulMcSetFileAttr(ulPeriPort port, int slot, char *name, Sint32 attr, Sint32 mask);

sceMcTblGetDir* ulMcFindFirstFileInfoFilter(ulPeriPort port, int slot, char *filter);

sceMcTblGetDir* ulMcFindNextFileInfoFilter(char *filter);

Bool ulMcFindFirstFileFilter(ulPeriPort port, int slot, char *filter, char *name);

Bool ulMcFindNextFileFilter(char *filter, char *name);

Bool ulMcIsExistFile(ulPeriPort port, int slot, char *name);

Bool ulMcIsConnect(ulPeriPort port, int slot);
Bool ulMcIsFormat(ulPeriPort port, int slot);

Sint32 ulMcGetStatus(ulPeriPort port, int slot);

Sint32 ulMcGetDiskFreeBlockSize(ulPeriPort port, int slot);

Sint32 ulMcGetFileSize(ulPeriPort port, int slot, char *name);

Sint32 ulMcGetFileBlockSize(ulPeriPort port, int slot, char *name);

Sint32 ulMcGetLastError();

Sint32 ulMcInitApplication(ulPeriPort port, int slot);

Sint32 ulMcDumpFileList(ulPeriPort port, int slot, char *path);

Sint32 ulMcDumpFile(ulPeriPort port, int slot, char *name);

int ulMcPortSlot2Drive(int port, int slot);
int ulMcDrive2Port(Sint32 drive);
int ulMcDrive2Slot(Sint32 drive);

static void bu_in(ulPeriPort port, int slot);

Uint16 buCalcCRC(void *buf, Uint32 size);

Sint32 buAnalyzeBackupFileImage(BUS_BACKUPFILEHEADER *hdr, void *buf);

Sint32 buCalcBackupFileSize(Uint32 inum, Uint32 vtype, Uint32 size);

Sint32 buMakeBackupFileImage(void *buf, BUS_BACKUPFILEHEADER *hdr);
Sint32 buInit(Sint32 capa, Sint32 drive, void *work, BU_INITCALLBACK callback);
Sint32 buExit();

Sint32 buGetDiskInfo(Sint32 drive, BUS_DISKINFO *info);

Sint32 buGetFileInfo(Sint32 drive, char *fname, BUS_FILEINFO *info);

Sint32 buGetFileSize(Sint32 drive, char *fname);

Sint32 buIsExistFile(Sint32 drive, char *fname);

Sint32 buIsExistDir(Sint32 drive, char *name);

Sint32 buMount(Sint32 drive);
Sint32 buUnmount(Sint32 drive);
void buSetCompleteCallback(BU_COMPLETECALLBACK callback);
void buSetProgressCallback(BU_PROGRESSCALLBACK callback);
void buSetCallbackParam(Uint32 param);
Sint32 buSaveFile(Sint32 drive, char *fname, void *buf, Uint32 nblock, BUS_TIME *time, Uint32 flag);
Sint32 buRewriteFile(Sint32 drive, char *fname, void *buf, Uint32 start, Uint32 nblock);

Sint32 buLoadFile(Sint32 drive, char *fname, void *buf, Uint32 nblock);

Sint32 buLoadFileEx(Sint32 drive, char *fname, void *buf, Uint32 start, Uint32 nblock);

Sint32 buIsReady(Sint32 drive);

Sint32 buIsFormat(Sint32 drive);

Sint32 buGetDiskFree(Sint32 drive, Sint32 type);
Sint32 buStat(Sint32 drive);
Sint32 buMountDisk(Sint32 drive, void *addr, Sint32 size);
Sint32 buUnmountDisk(Sint32 drive);
Sint32 buRemount(Sint32 drive);

Sint32 buFindFirstFile(Sint32 drive, char *fname);

Sint32 buFindNextFile(Sint32 drive, char *fname);

Sint32 buDeleteFile(Sint32 drive, char *fname);

Sint32 buFormatDisk(Sint32 drive, Uint8 *volume, Sint32 icon, BUS_TIME *time, Uint32 flag);

Sint32 buRenameFile(Sint32 drive, char *from, char *to);

Sint32 buSetFileAttr(Sint32 drive, char *fname, Uint16 header, Uint8 copyflag);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/motion/src/mtn_play.c
// *****************************************************************************

static Float quat_ip(Float *src);

static void interp_ts(Float *out, Float *src, Float *dst, Float ratio);

static void interp_qslerp(Float *out, Float *src, Float *dst, Float ratio);
static Float* overwritezero(Float *ptr, Sint32 num, Sint32 element);

static Float calcratio(mtnMotionUnit *unit, Float framecount);

static Float alphamulti(Float dst, Float ratio);

static mtnMotionUnit* findkey(mtnMotionUnit *mval, Sint32 keys, Float framecount, Float keysearch);

void readq(mtnMotionUnit *mval, Float *result);

static void calcvalue(mtnMotionUnit *findp, Float *ptr, Sint32 element, Float framecount);

void mtnPosePlayMotion(mtnPose *target, mtnMotion *motion, Float framecount, Uint32 overwritemode);

static void calcvalue2(mtnMotionUnit *findp, Float *ptr, Sint32 element, Float framecount, Float blendratio);

void mtnPoseBlendPlayMotion(mtnPose *target, mtnMotion *motion, Float framecount, Uint32 overwritemode, Float blendratio);

static void overwrite_ts(Float *out, Float *src);
static void overwrite_q(Float *out, Float *src);

static void interp_ts_a(Float *out, Float *src, Float *dst, Float ratio);

static void interp_q_a(Float *out, Float *src, Float *dst, Float ratio);

static void blenddef_ts(Float *tgt, Float *src);

static void blenddef_q(Float *tgt, Float *src);

Float* mtnPoseGetJointTranslateAddress(mtnPose *source, Uint32 jointnum);

Float* mtnPoseGetJointQuaternionAddress(mtnPose *source, Uint32 jointnum);

Float* mtnPoseGetJointScaleAddress(mtnPose *source, Uint32 jointnum);

void mtnPoseOverwritePerJoint(mtnPose *target, mtnPose *source, Uint32 jointnum);

void mtnPoseBlend3ParametersPerJoint(mtnPose *target, mtnPose *destination, mtnPose *source, Float ratio, Uint32 jointnum);

void mtnPoseBlend3Parameters(mtnPose *target, mtnPose *destination, mtnPose *source, Float ratio);

void mtnPoseBlendWithDefaultPosePerJoint(mtnPose *target, mtnPose *defaultpose, Uint32 jointnum);

void mtnPoseBlendWithDefaultPose(mtnPose *target, mtnPose *defaultpose);

void mtnPoseBlend2ParametersPerJoint(mtnPose *target, mtnPose *source, Float ratio, Uint32 jointnum);
void mtnPoseBlend2Parameters(mtnPose *target, mtnPose *source, Float ratio);

void mtnPoseNormalizeQuaternions(mtnPose *target);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/motion/src/mtn_quaternion.c
// *****************************************************************************

void mtnMatrixMultiTranslateQuaternionScale(NJS_VECTOR *translate, NJS_QUATERNION *quaternion, NJS_VECTOR *scale);

void mtnQuaternionMakeFromEulerAngle(Angle x, Angle y, Angle z, NJS_QUATERNION *quaternion);

void mtnQuaternionInterpolationPrimitive(NJS_QUATERNION *target, NJS_QUATERNION *from, NJS_QUATERNION *to, Float ratio);

void mtnQuaternionInterpolationSlerp(NJS_QUATERNION *target, NJS_QUATERNION *from, NJS_QUATERNION *to, Float ratio);

Uint32 mtnPoseCopy(mtnPose *destination, mtnPose *source);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/motion/src/mtn_root.c
// *****************************************************************************

void mtnSystemRegisterMallocfunc(void* (*mallocfunc)(), void (*freefunc)());
mtnSystemQuaternionMode mtnSystemGetQuaternionMode();
void mtnSystemChangeQuaternionMode(mtnSystemQuaternionMode mode);

mtnPose* mtnPoseAlloc(Sint32 joints);

void mtnPoseFree(mtnPose *pose);
mtnMotion* mtnMotionSet(void *datablock);

// *****************************************************************************
// FILE -- src/_nj_math.s
// *****************************************************************************

njSqrt();
njInvertSqrt();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/gdfs_dummy.c
// *****************************************************************************

Sint32 gdFsInit(Sint32 max_open, void *gdfs_work, Sint32 max_dirent, void *dirbuf);
void gdFsInit2(Sint32 max_open, void *gdfs_work, Sint32 max_dirent, void *dirbuf);
Sint32 gdFsMount();
Sint32 gdFsReMount();
void gdFsFinish();
GDFS_DIRREC gdFsCreateDirhn(void *dirbuf, Sint32 max_dirent);
Sint32 gdFsLoadDir(char *dirname, GDFS_DIRREC gf_dirrec);
Sint32 gdFsSetDir(GDFS_DIRREC gf_dirrec);
Sint32 gdFsChangeDir(char *dirname);
Sint32 gdFsGetDirInfo(char *name, GDFS_DIRINFO *dirinfo);
GDFS gdFsOpen(char *fname, GDFS_DIRREC gf_dirrec);
GDFS gdFsOpenRange(Sint32 stsct, Sint32 nsct);
void gdFsClose(GDFS gdfs);
Sint32 gdFsSeek(GDFS gdfs, Sint32 sctno, Sint32 type);
Sint32 gdFsTell(GDFS gdfs);
Sint32 gdFsCheckEof(GDFS gdfs, Bool *iseof);
Bool gdFsGetFileSize(GDFS gdfs, Sint32 *fsize);
Bool gdFsGetFileSctSize(GDFS gdfs, Sint32 *fsctsize);
Bool gdFsGetFileFad(GDFS gdfs, Sint32 *fad);
Sint32 gdFsRead(GDFS gdfs, Sint32 nsct, void *buf);
Sint32 gdFsReqRd32(GDFS gdfs, Sint32 nsct, void *buf);
Sint32 gdFsGetStat(GDFS gdfs);
Sint32 gdFsGetErrStat(GDFS gdfs);
Sint32 gdFsGetNumRd(GDFS gdfs);
Sint32 gdFsStopRd(GDFS gdfs);
Sint32 gdFsMovePickup(GDFS gdfs);
Sint32 gdFsReqGdRd(GDFS gdfs, Sint32 nsct);
Sint32 gdFsTrans32(GDFS gdfs, Sint32 nbytes, void *buf);
Sint32 gdFsGetTransStat(GDFS gdfs);
GDFS gdFsGetWorkHn();
GDFS gdFsGetSysHn();
Sint32 gdFsGetToc(Sint32 type, void *buf);
Sint32 gdFsGetDrvStat();
Sint32 gdFsReqDrvStat();
Bool gdFsIsTrayOpen();
void gdFsEntryRdEndFunc(GDFS gdfs, GDFS_FUNC func, void *obj);
void gdFsEntryTrEndFunc(GDFS gdfs, GDFS_FUNC func, void *obj);
void gdFsEntryErrFunc(GDFS gdfs, GDFS_ERRFUNC erfunc, void *obj);
void gdFsEntryErrFuncAll(GDFS_ERRFUNC erfunc, void *obj);
Sint32 gdFsDaPlay(Sint32 st_track, Sint32 end_track, Sint32 reptime);
Sint32 gdFsDaPlaySct(Sint32 st_sct, Sint32 end_sct, Sint32 reptime);
Sint32 gdFsDaStop();
Sint32 gdFsDaPause();
Sint32 gdFsDaRelease(Sint32 reptime);
Sint32 gdFsDaGetInfo(GDFS_DAINFO *dainfo);
void gdFsExecServer();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_camera.c
// *****************************************************************************

void njInitCamera(NJS_CAMERA *camera);

void njSetCamera(NJS_CAMERA *camera);

void njPitchCameraInterestEx(Angle ang);
void njYawCameraInterestEx(Angle ang);
void njRollCameraInterestEx(Angle ang);
void njForwardCameraPositionEx(Float x);
void njForwardCameraPosition(NJS_CAMERA *c, Float x);

void njPitchCameraInterest(NJS_CAMERA *c, Angle ang);

void njYawCameraInterest(NJS_CAMERA *c, Angle ang);

void njCameraExLookAt(NJS_POINT3 *eye, NJS_POINT3 *center, NJS_VECTOR *up);

void njRotateXCameraEx(Angle ang);
void njRotateYCameraEx(Angle ang);
void njRotateZCameraEx(Angle ang);

void njTranslateCameraEx(Float x, Float y, Float z);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_cellsprite.c
// *****************************************************************************

void nj_cellsprite_draw(ulTextureVertex *vtx, int cnt, float z, int trans);

void njDrawCellSprite2D(NJS_CELL_SPRITE *csprite, NJS_CELL_SPRITE_VAL *cval);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_compile.c
// *****************************************************************************

void njCnkMakePacketCompileModelNoClip(Sint16 *plist);

static void print_plist_info(Sint16 *plist);

static void print_model_info(NJS_CNK_MODEL *model);
void njCnkPrintCompiledObjetInfo(NJS_CNK_OBJECT *object);
void njCnkDestroyCompiledObject(NJS_CNK_OBJECT *object);

size_t nj_compile_make_packet(Sint16 *plist, int cs_type, NJS_CNK_VLIST_INFO *vl_info, int *pktPtr);

void nj_recompile_plist(Sint16 *plist, Sint16 *cmp_plist, NJS_CNK_VLIST_INFO *vl_info);

NJS_CNK_OBJECT* njCnkRemakeCompiledObject(NJS_CNK_OBJECT *cmp_obj, NJS_CNK_OBJECT *object);

Sint16* nj_compile_plist(Sint16 *plist, NJS_CNK_VLIST_INFO *vl_info, char *buf, int *offset);

NJS_CNK_MODEL* nj_compile_model(NJS_CNK_MODEL *model, char *buf, int *offset);

NJS_CNK_OBJECT* nj_compile_object(NJS_CNK_OBJECT *object, char *buf, int *offset);

NJS_CNK_OBJECT* njCnkCreateCompiledObject(NJS_CNK_OBJECT *object);

void njCnkEntryMallocFunc(void* (*malloc_func)(), void (*free_func)());

static size_t nj_compile_get_cs_pkt_size(int chunk, Sint16 *plist, NJS_CNK_VLIST_INFO *vl_info);

size_t njCnkGetCompiledPlistSize(Sint16 *plist, NJS_CNK_VLIST_INFO *vl_info);

static void nj_compile_get_vlist_info(Sint32 *vlist, NJS_CNK_VLIST_INFO *info);

size_t njCnkGetCompiledModelSize(NJS_CNK_MODEL *model);

int njCnkGetCompiledObjectSizeLoop(NJS_CNK_OBJECT *object, size_t *size);

size_t njCnkGetCompiledObjectSize(NJS_CNK_OBJECT *object);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_context.c
// *****************************************************************************

void njSetPrimitiveAntiAlias(Bool flag);

void njFogEnable();
void njFogDisable();

void njSetFogColor(Uint32 c);

void njIgnoreTextureAlphaMode(Int mode);
void njMipmapAdjust(Int level);
void njSuperSampleMode(Int mode);
void njPolygonCullingSize(Float size);
void njPolygonCullingMode(Int mode);
void njSetCheapShadowMode(Int mode);
void njColorClampMode(Int mode);
void njSpecularMode(Int mode);
void njTextureFlipMode(Int mode);
void njSetColorClamp(Uint32 MaxARGB, Uint32 MinARGB);

void njColorBlendingMode(Int target, Int mode);

void njTextureFilterMode(Int mode);

void njTextureClampMode(Int mode);

void njTextureShadingMode(Int mode);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_control.c
// *****************************************************************************

void njSetCnkBlendMode(Uint32 attr);

void njControl3D(Uint32 flag);

void njSetConstantAttr(Uint32 and_attr, Uint32 or_attr);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_debug.c
// *****************************************************************************

Bool njIsEnableConsole();
void njPrintSize(Uint16 size);
void njPrintC(Int loc, char *s);

void njPrint(Int loc, char *fmt);

void njExitPrint();
void njInitPrint(Sint8 *pTexture, Uint32 size, Uint32 attr);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_direct_model.c
// *****************************************************************************

void njSetDirectLightIntensity(Float inten, Float ambient);

static void nj_direct_set_giftag();

static void nj_direct_setup_cs(ulGeoParam *geo, int cs_type, int headbits, int cv_type);

static void njCnkDirectPlistCompileClip(Sint16 *plist);

Sint32 njCnkDirectDrawModelCompileClip(NJS_CNK_MODEL *model);

static void njCnkDirectPlistCompileNoClip(Sint16 *plist);

Sint32 njCnkDirectDrawModelCompileNoClip(NJS_CNK_MODEL *model);

Sint32 njCnkDirectDrawModelCompile(NJS_CNK_MODEL *model);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_draw.c
// *****************************************************************************

void njDrawLine2D(NJS_POINT2COL *p, Int n, Float prio, Uint32 attr);
void njDrawLine3D(NJS_POINT3COL *p, Int n, Uint32 attr);

void njDrawPolygon3D(NJS_POINT3COL *p, Int n, Uint32 attr);

void njDrawTextureEx(NJS_TEXTURE_VTX *vtx, Int count, Int trans);

void njDrawPolygon(NJS_POLYGON_VTX *polygon, Int count, Int trans);

void njDrawTexture(NJS_TEXTURE_VTX *vtx, int count, int texno, int flag);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_draw2d.c
// *****************************************************************************

void njDrawTexture2DExStart(Int trans);

void njDrawTexture2DExSetData(NJS_TEXTURE_VTX *p, Int count);

void njDrawTexture2DExEnd();

void njDrawPolygon2DExStart(Int trans);

void njDrawPolygon2DExSetData(NJS_POLYGON_VTX *p, Int count);

void njDrawPolygon2DExEnd();

void njDrawLine2DExStart(Float r, Uint32 BaseColor, Sint32 Trans);

void njDrawLine2DExSetList(NJS_POINT2 *vtx, Float ooz, Sint32 Count);

void njDrawLine2DExSetStrip(NJS_POINT2 *vtx, Float ooz, Sint32 Count);

void njDrawLine2DExEnd();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_draw3d.c
// *****************************************************************************

void njCnkSetTransformPrimitive3D(ulMatrix *m);

void njDrawTexture3DExStart(int trans);

void njDrawTexture3DExSetData(NJS_TEXTURE_VTX *vertices, int nbVertices);

void njDrawTexture3DExEnd();

void njDrawTexture3DEx(NJS_TEXTURE_VTX *vtx, int cnt, int flag);

void njDrawPolygon3DExStart(int trans);

void njDrawPolygon3DExSetData(NJS_POLYGON_VTX *vertices, int nbVertices);

void njDrawPolygon3DExEnd();

void njDrawPolygon3DEx(NJS_POLYGON_VTX *vtx, int cnt, int flag);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_easy_model.c
// *****************************************************************************

void njCnkSetEasyLightIntensity(Float inten, Float ambient);
void njCnkSetEasyLightColor(Float r, Float g, Float b);
void njCnkSetEasyLight(Float x, Float y, Float z);

static void nj_easy_set_giftag();

static void nj_easy_setup_cs(ulGeoParam *geo, int cs_type, int headbits, int cv_type);

Bool nj_easy_is_ignore_light(ulGeoParam *geo, int cs_headbits);

static void njCnkEasyPlistCompileClip(Sint16 *plist);

Sint32 njCnkEasyDrawModelCompileClip(NJS_CNK_MODEL *model);

static void njCnkEasyPlistCompileNoClip(Sint16 *plist);

Sint32 njCnkEasyDrawModelCompileNoClip(NJS_CNK_MODEL *model);

Sint32 njCnkEasyDrawModelCompile(NJS_CNK_MODEL *model);

void njCnkEasyPlistClip(Sint16 *plist);

static Sint32 nj_easy_calc_cv_vn_nf_clip(ulGeoParam *geo, Sint32 *vlist);

static Sint32 njCnkEasyVlistClip(Sint32 *vlist);

static void njCnkEasyPlistNoClip(Sint16 *plist);

static Sint32 nj_easy_calc_cv_vn_nf_noclip(ulGeoParam *geo, Sint32 *vlist);

static Sint32 njCnkEasyVlistNoClip(Sint32 *vlist);

Sint32 njCnkEasyDrawModelClip(NJS_CNK_MODEL *model);
Sint32 njCnkEasyDrawModelNoClip(NJS_CNK_MODEL *model);

Sint32 njCnkEasyDrawModel(NJS_CNK_MODEL *model);

void njCnkEasyDrawObject(NJS_CNK_OBJECT *object);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_easy_multi_model.c
// *****************************************************************************

static void nj_easy_multi_set_giftag();

static void nj_easy_multi_setup_cs(ulGeoParam *geo, int cs_type, int headbits, int cv_type);

Bool nj_easy_multi_is_ignore_light(ulGeoParam *geo, int cs_headbits);

static void njCnkEasyMultiPlistCompileClip(Sint16 *plist);

Sint32 njCnkEasyMultiDrawModelCompileClip(NJS_CNK_MODEL *model);

static void njCnkEasyMultiPlistCompileNoClip(Sint16 *plist);

Sint32 njCnkEasyMultiDrawModelCompileNoClip(NJS_CNK_MODEL *model);

Sint32 njCnkEasyMultiDrawModelCompile(NJS_CNK_MODEL *model);

void njCnkEasyMultiPlistClip(Sint16 *plist);

static Sint32 nj_easy_multi_calc_cv_vn_nf_clip(ulGeoParam *geo, Sint32 *vlist);

static Sint32 njCnkEasyMultiVlistClip(Sint32 *vlist);

static void njCnkEasyMultiPlistNoClip(Sint16 *plist);

static Sint32 nj_easy_multi_calc_cv_vn_nf_noclip(ulGeoParam *geo, Sint32 *vlist);

static Sint32 njCnkEasyMultiVlistNoClip(Sint32 *vlist);

Sint32 njCnkEasyMultiDrawModelClip(NJS_CNK_MODEL *model);

Sint32 njCnkEasyMultiDrawModelNoClip(NJS_CNK_MODEL *model);

Sint32 njCnkEasyMultiDrawModel(NJS_CNK_MODEL *model);

void njCnkEasyMultiDrawObject(NJS_CNK_OBJECT *object);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_easy_multi_polygon.c
// *****************************************************************************

size_t nj_easy_multi_direct_setup_vupkt(psVifPkt *vp, int nbNodes, int **pktGifTag, int **pktFlag, int **pktVertex, int **pktNormal, int **pktColor, int **pktUv);

void nj_easy_multi_direct_mkpkt_cs_uvn_cv(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_easy_multi_direct_mkpkt_cs_uvn_cv_vn(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_easy_multi_direct_mkpkt_cs_uvn_cv_d8(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_easy_multi_direct_mkpkt_cs_uvn_cv_vn_d8(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_easy_multi_mkpkt_cs_uvn_direct(ulGeoParam *geo, Sint16 *plist, NJS_CNK_VLIST_INFO *vlinfo);

void nj_easy_multi_direct_mkpkt_cs_cv(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_easy_multi_direct_mkpkt_cs_cv_vn(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_easy_multi_direct_mkpkt_cs_cv_d8(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_easy_multi_mkpkt_cs_direct(ulGeoParam *geo, Sint16 *plist, NJS_CNK_VLIST_INFO *vlinfo);

size_t nj_easy_multi_setup_vupkt_16(psVifPkt *vp, int nbNodes, int **pktGifTag, int **pktFlag, int **pktVertex, int **pktColor, int **pktUv);

size_t nj_easy_multi_setup_vupkt(psVifPkt *vp, int nbNodes, int **pktGifTag, int **pktFlag, int **pktVertex, int **pktColor, int **pktUv);

void nj_easy_multi_mkpkt_cs_em_il_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_easy_multi_mkpkt_cs_em_il_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_uvn_il_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_easy_multi_mkpkt_cs_uvn_il_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_il_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_easy_multi_mkpkt_cs_il_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_em_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_uvn_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_easy_multi_mkpkt_cs_uvn_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_easy_multi_mkpkt_cs_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_em_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_easy_multi_mkpkt_cs_em_clip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_uvn_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_easy_multi_mkpkt_cs_uvn_clip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_easy_multi_mkpkt_cs_clip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_em_db_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_uvn_db_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_db_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_em_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_uvn_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_multi_mkpkt_cs_em_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_easy_polygon.c
// *****************************************************************************

size_t nj_easy_setup_vupkt(psVifPkt *vp, int nbNodes, int **pktGifTag, int **pktFlag, int **pktVertex, int **pktColor, int **pktUv);

void nj_easy_mkpkt_cs_em_il_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_easy_mkpkt_cs_em_il_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_uvn_il_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_easy_mkpkt_cs_uvn_il_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_il_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_easy_mkpkt_cs_il_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_em_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_uvn_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_easy_mkpkt_cs_uvn_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_easy_mkpkt_cs_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_em_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_easy_mkpkt_cs_em_clip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_uvn_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_easy_mkpkt_cs_uvn_clip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_easy_mkpkt_cs_clip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_em_db_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_uvn_db_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_db_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_em_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_uvn_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_easy_mkpkt_cs_em_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_intensity_light.c
// *****************************************************************************

void njCnkIntensityLightInit(Uint32 nNum);
void njCnkSetIntensityLightDiffColor(Float fR, Float fG, Float fB);
void njCnkSetIntensityLightSpecColor(Float fR, Float fG, Float fB);
void njCnkSetIntensityLightOffset(Float fOffsSpec, Float fOffsDiff);
void njCnkSetIntensityLightConst(Float fConstSpec, Float fConstDiff);
void njCnkSetIntensityLightEnvRatio(Float fU, Float fV);
void njCnkSetIntensityLightMode(NJD_CNK_INTENSITY_LIGHT eLight, NJD_CNK_INTENSITY_MODE eMode);
void njCnkSetIntensityLightSwitch(NJD_CNK_INTENSITY_LIGHT eLight, Sint32 bSwitch);
void njCnkSetIntensityLightVector(NJD_CNK_INTENSITY_LIGHT eLight, Float fX, Float fY, Float fZ);
void njCnkSetIntensityLightPoint(NJD_CNK_INTENSITY_LIGHT eLight, Float fX, Float fY, Float fZ);
void njCnkSetIntensityLightExp(NJD_CNK_INTENSITY_LIGHT eLight, NJD_CNK_INTENSITY_EXP eExp);
void njCnkSetIntensityLightSet(NJD_CNK_INTENSITY_LIGHT eLight, Float fSpec, Float fDiff);
void njCnkSetIntensityLightRange(NJD_CNK_INTENSITY_LIGHT eLight, Float fNear, Float fFar);
void njCnkSetIntensityLightMatrices();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_intensity_model.c
// *****************************************************************************

void njCnkIntensityLoadTexture();
void njCnkIntensityReleaseTexture();
Sint32 njCnkIntensityDrawModel(NJS_CNK_MODEL *model);
void njCnkIntensityDrawObject(NJS_CNK_OBJECT *object);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_light.c
// *****************************************************************************

void njCnkSetSimpleMultiLight(Int num);

void njCnkSetSimpleMultiLightSwitch(Int light, Int flag);

void njCnkSetSimpleMultiAmbient(Float ar, Float ag, Float ab);

void njCnkSetSimpleMultiLightColor(Int light, Float lr, Float lg, Float lb);

void njCnkSetSimpleMultiLightVector(Float vx, Float vy, Float vz);

void njCnkSetSimpleMultiLightVectorEx(Int light, Float vx, Float vy, Float vz);

void njCnkSetSimpleMultiLightPoint(Int light, Float px, Float py, Float pz);

void njCnkSetSimpleMultiLightRange(Int light, Float nrange, Float frange);

void njCnkSetSimpleMultiLightMatrices();

void njCnkSetEasyMultiLight(Int num);
void njCnkSetEasyMultiLightSwitch(Int light, Int flag);
void njCnkSetEasyMultiAmbient(Float ar, Float ag, Float ab);
void njCnkSetEasyMultiLightColor(Int light, Float lr, Float lg, Float lb);
void njCnkSetEasyMultiLightVector(Float vx, Float vy, Float vz);
void njCnkSetEasyMultiLightVectorEx(Int light, Float vx, Float vy, Float vz);
void njCnkSetEasyMultiLightPoint(Int light, Float px, Float py, Float pz);
void njCnkSetEasyMultiLightRange(Int light, Float nrange, Float frange);
void njCnkSetEasyMultiLightMatrices();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_line3d.c
// *****************************************************************************

void njDrawLine3DExStart(Float r, Uint32 BaseColor, Sint32 Trans);

void njDrawLine3DExEnd();

void njDrawLine3DExSetList(NJS_POINT3 *vtx, Sint32 Count);

void njDrawLine3DExSetStrip(NJS_POINT3 *vtx, Sint32 Count);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_material.c
// *****************************************************************************

void njSetConstantMaterial(NJS_ARGB *mat);

void njCnkSetMaterial(ulGeoParam *geo, int headbits, int chunk, Sint16 *plist);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_math.c
// *****************************************************************************

Float njRoundOff(Float n);

Float njFraction(Float n);

float njCalcScreen2(NJS_POINT3 *vpos, NJS_POINT2 *spos);

Float njTan(Angle ang);
Float njSin(Angle ang);
Float njCos(Angle ang);

void njLinear(Float *idata, Float *odata, NJS_SPLINE *attr, Float frame);

Float njRoundUp(Float n);
Float njDistanceP2P(NJS_POINT3 *p1, NJS_POINT3 *p2);

Sint32 njCombination(Sint32 n, Sint32 k);

void njBezierSpline(Float *idata, Float *odata, NJS_SPLINE *attr, Float frame);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_matrix.c
// *****************************************************************************

void njQuaternionEx2(Float re, Float *im);

void njQuaternionEx(NJS_QUATERNION *qua);

Float njScalor(NJS_VECTOR *v);
Float njScalor2(NJS_VECTOR *v);

void njMirror(NJS_MATRIX *m, NJS_PLANE *pl);

void njTransposeMatrix(NJS_MATRIX *m);
void njAddMatrix(NJS_MATRIX *md, NJS_MATRIX *ms);
void njSubMatrix(NJS_MATRIX *md, NJS_MATRIX *ms);
void njInitMatrix(NJS_MATRIX *pBuf, Uint32 nSize);
Bool njPushMatrix(NJS_MATRIX *m);
Bool njPushMatrixEx();

Bool njPopMatrix(Uint32 n);

Bool njPopMatrixEx();
void njUnitMatrix(NJS_MATRIX *m);
void njTranslate(NJS_MATRIX *m, Float x, Float y, Float z);
void njTranslateV(NJS_MATRIX *m, NJS_VECTOR *v);
void njTranslateEx(NJS_VECTOR *v);
void njScale(NJS_MATRIX *m, Float sx, Float sy, Float sz);
void njScaleV(NJS_MATRIX *m, NJS_VECTOR *v);
void njScaleEx(NJS_VECTOR *v);
void njRotateX(NJS_MATRIX *m, Angle ang);
void njRotateY(NJS_MATRIX *m, Angle ang);
void njRotateZ(NJS_MATRIX *m, Angle ang);
void njRotateZXY(NJS_MATRIX *m, Angle x, Angle y, Angle z);
void njRotateXYZ(NJS_MATRIX *m, Angle angx, Angle angy, Angle angz);
void njRotateEx(Angle *ang, Sint32 lv);
void njGetMatrix(NJS_MATRIX *m);
void njSetMatrix(NJS_MATRIX *md, NJS_MATRIX *ms);
void njMultiMatrix(NJS_MATRIX *md, NJS_MATRIX *ms);
Bool njInvertMatrix(NJS_MATRIX *m);
void njUnitRotPortion(NJS_MATRIX *m);
void njGetTranslation(NJS_MATRIX *m, NJS_POINT3 *p);

Float njUnitVector(NJS_VECTOR *v);

Float njInnerProduct(NJS_VECTOR *v1, NJS_VECTOR *v2);
Float njOuterProduct(NJS_VECTOR *v1, NJS_VECTOR *v2, NJS_VECTOR *vd);
void njAddVector(NJS_VECTOR *vd, NJS_VECTOR *vs);
void njSubVector(NJS_VECTOR *vd, NJS_VECTOR *vs);
void njCalcPoint(NJS_MATRIX *m, NJS_POINT3 *ps, NJS_POINT3 *pd);
void njCalcPointEx(NJS_POINT3 *ps, NJS_POINT3 *pd);

void njCalcPoints(NJS_MATRIX *m, NJS_POINT3 *ps, NJS_POINT3 *pd, Int num);

void njCalcVector(NJS_MATRIX *m, NJS_VECTOR *vs, NJS_VECTOR *vd);
void njCalcVectorEx(NJS_VECTOR *vs, NJS_VECTOR *vd);

void njCalcVectors(NJS_MATRIX *m, NJS_VECTOR *vs, NJS_VECTOR *vd, Int num);

Float njDetMatrix(NJS_MATRIX *m);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_model.c
// *****************************************************************************

void njCnkSetTid(ulGeoParam *geo, Sint16 headbits, Sint16 tid);

void njCnkSetTransformCompileClip(ulMatrix *m);

void njCnkSetTransformCompileNoClip(ulMatrix *m);

void njCnkSetTransformClip(ulMatrix *m);

void njCnkSetTransformNoClip(ulMatrix *m);

int njCnkIsClipModel(NJS_VECTOR *center, float r);

void njCnkSetUvScroll(Float u, Float v);

void njCnkTransformObject(NJS_CNK_OBJECT *obj, Sint32 (*func)());

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_particle.c
// *****************************************************************************

static void njCnkSetTransformParticle(ulMatrix *m);

void njPtclPolygonStart(Uint32 col);

void njPtclDrawPolygon(NJS_POINT3 *p, Sint32 n, Float h);

void njPtclPolygonEnd();

void njPtclSpriteStart(Sint32 texid, Uint32 col, Sint32 flag);

void njPtclDrawSprite(NJS_POINT3 *p, Sint32 n, Float w, Float h);

void njPtclSpriteEnd();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_quad_tex.c
// *****************************************************************************

void njQuadTextureStart(Sint32 trans);
void njQuadTextureEnd();

void njDrawQuadTexture(NJS_QUAD_TEXTURE *q, Float z);

void njDrawQuadTextureEx(NJS_QUAD_TEXTURE_EX *q);

void njSetQuadTexture(Sint32 texid, Uint32 col);

void njSetQuadTextureG(Sint32 gid, Uint32 col);

void njSetQuadTextureColor(Uint32 col);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_screen.c
// *****************************************************************************

void njClipZ(Float n, Float f);

void njSetScreenDist(Float dist);

void njSetPerspective(Angle ang);
void njSetAspect(Float ax, Float ay);

void njSetScreen(NJS_SCREEN *s);

void njInitScreen();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_shadow_tex_model.c
// *****************************************************************************

void njCnkSetShadowTexRatio(Float x, Float y);

void njCnkSetShadowTexNum(Uint32 nTexNo);
void njCnkSetShadowTexNumG(Uint32 GlobalIndex);

static void njCnkShadowTexPlistCompileNoClip(Sint16 *plist);

Sint32 njCnkShadowTexDrawModelCompileClip(NJS_CNK_MODEL *model);

Sint32 njCnkShadowTexDrawModelCompileNoClip(NJS_CNK_MODEL *model);

static void njCnkShadowTexPlistNoClip(Sint16 *plist);

static Sint32 njCnkShadowTexVlistNoClip(Sint32 *vlist);

Sint32 njCnkShadowTexDrawModelNoClip(NJS_CNK_MODEL *model);

void njCnkShadowTexPlistClip(Sint16 *plist, float ooz);

static Sint32 njCnkShadowTexVlistClip(Sint32 *vlist);

Sint32 njCnkShadowTexDrawModelClip(NJS_CNK_MODEL *model);

Sint32 njCnkShadowTexDrawModel(NJS_CNK_MODEL *model);

void njCnkShadowTexDrawObject(NJS_CNK_OBJECT *object);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_shadow_tex_polygon.c
// *****************************************************************************

size_t nj_shadowtex_setup_vupkt(psVifPkt *vp, int nbNodes, int **pktGifTag, int **pktVertex);

void nj_shadowtex_mkpkt_noclip_vu(ulGeoParam *geo, Sint16 *plist, Sint32 *vlist, int vlistSize, int plistSize);

void nj_shadow_tex_mkpkt_cs_uvn_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_shadow_tex_mkpkt_cs_noclip(ulGeoParam *geo, Sint16 *plist);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_simple_model.c
// *****************************************************************************

void njCnkSetSimpleLight(Float x, Float y, Float z);
void njCnkSetSimpleLightColor(Float r, Float g, Float b);
void njCnkSetSimpleLightIntensity(Float inten, Float ambient);

static void nj_simple_set_giftag();

static void nj_simple_setup_cs(ulGeoParam *geo, int cs_type, int headbits, int cv_type);

Bool nj_simple_is_ignore_light(ulGeoParam *geo, int cs_headbits);

static void njCnkSimplePlistCompileClip(Sint16 *plist);

Sint32 njCnkSimpleDrawModelCompileClip(NJS_CNK_MODEL *model);

static void njCnkSimplePlistCompileNoClip(Sint16 *plist);

Sint32 njCnkSimpleDrawModelCompileNoClip(NJS_CNK_MODEL *model);

Sint32 njCnkSimpleDrawModelCompile(NJS_CNK_MODEL *model);

static void njCnkSimplePlistDirectNoClip(Sint16 *plist);

static Sint32 njCnkSimpleVlistDirectNoClip(Sint32 *vlist);

Sint32 njCnkSimpleDrawModelDirectNoClip(NJS_CNK_MODEL *model);

void njCnkSimplePlistClip(Sint16 *plist);

static Sint32 nj_simple_calc_cv_vn_nf_clip(ulGeoParam *geo, Sint32 *vlist);

static Sint32 njCnkSimpleVlistClip(Sint32 *vlist);

static void njCnkSimplePlistNoClip(Sint16 *plist);

static Sint32 nj_simple_calc_cv_vn_nf_noclip(ulGeoParam *geo, Sint32 *vlist);

static Sint32 njCnkSimpleVlistNoClip(Sint32 *vlist);

Sint32 njCnkSimpleDrawModelClip(NJS_CNK_MODEL *model);
Sint32 njCnkSimpleDrawModelNoClip(NJS_CNK_MODEL *model);

Sint32 njCnkSimpleDrawModel(NJS_CNK_MODEL *model);

void njCnkSimpleDrawObject(NJS_CNK_OBJECT *object);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_simple_multi_model.c
// *****************************************************************************

static void nj_simple_multi_set_giftag();

static void nj_simple_multi_setup_cs(ulGeoParam *geo, int cs_type, int headbits, int cv_type);

Bool nj_simple_multi_is_ignore_light(ulGeoParam *geo, int cs_headbits);

static void njCnkSimpleMultiPlistCompileClip(Sint16 *plist);

Sint32 njCnkSimpleMultiDrawModelCompileClip(NJS_CNK_MODEL *model);

static void njCnkSimpleMultiPlistCompileNoClip(Sint16 *plist);

Sint32 njCnkSimpleMultiDrawModelCompileNoClip(NJS_CNK_MODEL *model);

Sint32 njCnkSimpleMultiDrawModelCompile(NJS_CNK_MODEL *model);

void njCnkSimpleMultiPlistClip(Sint16 *plist);

static Sint32 nj_simple_multi_calc_cv_vn_nf_clip(ulGeoParam *geo, Sint32 *vlist);

static Sint32 njCnkSimpleMultiVlistClip(Sint32 *vlist);

static void njCnkSimpleMultiPlistNoClip(Sint16 *plist);

static Sint32 nj_simple_multi_calc_cv_vn_nf_noclip(ulGeoParam *geo, Sint32 *vlist);

static Sint32 njCnkSimpleMultiVlistNoClip(Sint32 *vlist);

Sint32 njCnkSimpleMultiDrawModelClip(NJS_CNK_MODEL *model);
Sint32 njCnkSimpleMultiDrawModelNoClip(NJS_CNK_MODEL *model);

Sint32 njCnkSimpleMultiDrawModel(NJS_CNK_MODEL *model);

void njCnkSimpleMultiDrawObject(NJS_CNK_OBJECT *object);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_simple_multi_polygon.c
// *****************************************************************************

size_t nj_simple_multi_direct_setup_vupkt(psVifPkt *vp, int nbNodes, int **pktGifTag, int **pktFlag, int **pktVertex, int **pktNormal, int **pktColor, int **pktUv);

void nj_simple_multi_direct_mkpkt_cs_uvn_cv(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_multi_direct_mkpkt_cs_uvn_cv_vn(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_multi_direct_mkpkt_cs_uvn_cv_d8(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_multi_direct_mkpkt_cs_uvn_cv_vn_d8(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_multi_mkpkt_cs_uvn_direct(ulGeoParam *geo, Sint16 *plist, NJS_CNK_VLIST_INFO *vlinfo);

void nj_simple_multi_direct_mkpkt_cs_cv(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_multi_direct_mkpkt_cs_cv_vn(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_multi_direct_mkpkt_cs_cv_d8(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_multi_mkpkt_cs_direct(ulGeoParam *geo, Sint16 *plist, NJS_CNK_VLIST_INFO *vlinfo);

size_t nj_simple_multi_setup_vupkt_16(psVifPkt *vp, int nbNodes, int **pktGifTag, int **pktFlag, int **pktVertex, int **pktColor, int **pktUv);

size_t nj_simple_multi_setup_vupkt(psVifPkt *vp, int nbNodes, int **pktGifTag, int **pktFlag, int **pktVertex, int **pktColor, int **pktUv);

void nj_simple_multi_mkpkt_cs_em_il_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_simple_multi_mkpkt_cs_em_il_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_uvn_il_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_simple_multi_mkpkt_cs_uvn_il_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_il_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_simple_multi_mkpkt_cs_il_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_em_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_uvn_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_simple_multi_mkpkt_cs_uvn_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_simple_multi_mkpkt_cs_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_em_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_simple_multi_mkpkt_cs_em_clip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_uvn_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_simple_multi_mkpkt_cs_uvn_clip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_simple_multi_mkpkt_cs_clip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_em_db_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_uvn_db_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_db_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_em_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_uvn_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_multi_mkpkt_cs_em_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_simple_polygon.c
// *****************************************************************************

size_t nj_simple_direct_setup_vupkt(psVifPkt *vp, int nbNodes, int **pktGifTag, int **pktFlag, int **pktVertex, int **pktNormal, int **pktColor, int **pktUv);

void nj_simple_direct_mkpkt_cs_uvn_cv(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_direct_mkpkt_cs_uvn_cv_vn(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_direct_mkpkt_cs_uvn_cv_d8(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_direct_mkpkt_cs_uvn_cv_vn_d8(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_mkpkt_cs_uvn_direct(ulGeoParam *geo, Sint16 *plist, NJS_CNK_VLIST_INFO *vlinfo);

void nj_simple_direct_mkpkt_cs_cv(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_direct_mkpkt_cs_cv_vn(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_direct_mkpkt_cs_cv_d8(ulGeoParam *geo, Sint16 *plist, int nbNodes, Sint32 *vlist, int *pktVertex, int *pktNormal, int *pktColor, int *pktUv);

void nj_simple_mkpkt_cs_direct(ulGeoParam *geo, Sint16 *plist, NJS_CNK_VLIST_INFO *vlinfo);

size_t nj_simple_setup_vupkt_16(psVifPkt *vp, int nbNodes, int **pktGifTag, int **pktFlag, int **pktVertex, int **pktColor, int **pktUv);

size_t nj_simple_setup_vupkt(psVifPkt *vp, int nbNodes, int **pktGifTag, int **pktFlag, int **pktVertex, int **pktColor, int **pktUv);

void nj_simple_mkpkt_cs_em_il_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_simple_mkpkt_cs_em_il_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_uvn_il_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_simple_mkpkt_cs_uvn_il_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_il_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_simple_mkpkt_cs_il_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_em_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_uvn_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_simple_mkpkt_cs_uvn_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

void nj_simple_mkpkt_cs_clip_vu(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_em_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_simple_mkpkt_cs_em_clip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_uvn_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_simple_mkpkt_cs_uvn_clip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_simple_mkpkt_cs_clip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_em_db_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_uvn_db_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_db_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_em_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_uvn_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_simple_mkpkt_cs_em_node_clip_vu(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, float cull_flag);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_system.c
// *****************************************************************************

void njSetScreenRatio(int nj_width, int nj_height, int ps_width, int ps_height);

void njStartDraw();
Sint32 njRender();
void njInit3D(NJS_VERTEX_BUF *vbuf, Int vn);
void njSetBorderColor(Uint32 color);
void njSetBackColor(Uint32 col1, Uint32 col2, Uint32 col3);
Sint32 njInitSystem(Int mode, Int frame, Int count);
void njExitSystem();
void njStopDisplay();
void njChangeSystem(Int mode, Int frame, Int count);
void njWaitVSync();
void njSetVSyncFunction(void (*func)());
void njSetEORCallBackFunction(void (*func)());
void njGetSystemMetrics(NJS_SYSTEMMETRICS *sysm);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_texture.c
// *****************************************************************************

void njInitTexture(NJS_TEXMEMLIST *addr, Uint32 n);
void njExitTexture();
NJS_TEXERRSTAT* njGetTextureErrStat();
Sint32 njSetTexture(NJS_TEXLIST *texlist);
Sint32 njSetTextureNum(Uint32 n);
Sint32 njSetTextureNumG(Uint32 globalIndex);
void njSetTextureInfo(NJS_TEXINFO *info, Sint8 *pTexture, Sint32 nTextureType, Sint32 nWidth, Sint32 nHeight);
void njSetTextureName(NJS_TEXNAME *texname, void *addr, Uint32 globalIndex, Uint32 attr);
Sint32 njReleaseTexture(NJS_TEXLIST *texlist);
Sint32 njReleaseTextureNum(Uint32 n);
Sint32 njReleaseTextureNumG(Uint32 n);
void njReleaseTextureAll();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_wire_model.c
// *****************************************************************************

void njCnkSetWireR(Float r);

static void nj_wire_setup_cs(ulGeoParam *geo, int cs_type, int headbits, int cv_type);

void njCnkWirePlistClip(Sint16 *plist);

static Sint32 nj_wire_calc_cv_vn_nf_clip(ulGeoParam *geo, Sint32 *vlist, ulGeoVertex *vertexBuf);

Sint32 njCnkWireVlistClip(Sint32 *vlist, ulGeoVertex *vertexBuf);

Sint32 njCnkWireDrawModelClip(NJS_CNK_MODEL *model);
Sint32 njCnkWireDrawModelNoClip(NJS_CNK_MODEL *model);

Sint32 njCnkWireDrawModel(NJS_CNK_MODEL *model);

void njCnkWireDrawObject(NJS_CNK_OBJECT *object);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_wire_polygon.c
// *****************************************************************************

static void nj_wire_mkpkt_cs_uvn_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_wire_mkpkt_cs_uvn_clip(ulGeoParam *geo, Sint16 *plist);

static void nj_wire_mkpkt_cs_node_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void nj_wire_mkpkt_cs_clip(ulGeoParam *geo, Sint16 *plist);

void nj_wire_mkpkt_cs_uvn_noclip(ulGeoParam *geo, Sint16 *plist);

void nj_wire_mkpkt_cs_noclip(ulGeoParam *geo, Sint16 *plist);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nuBinary.c
// *****************************************************************************

Sint8* nuOpenBinary(char *fname);

void nuCloseBinary(Sint8 *wbuff);

Uint32 nuSwapCNK(Uint32 cnk);

void* nuReadBinary(Sint8 *wbuff, Uint32 *fpos, Uint32 *ptype);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/pd_dummy.c
// *****************************************************************************

void pdInitPeripheral(Sint32 logic, void *recvbuf, void *sendbuf);
void pdInitPeripheralEx(Sint32 logic, Sint32 *permap, void **recvbuf, void *sendbuf, Sint32 num);
void pdExitPeripheral();
void pdExecPeripheralServer();
void pdExecPeripheralServerUser();
PDS_PERIPHERAL* pdGetPeripheral(Uint32 port);
PDS_PERIPHERALINFO* pdGetPeripheralInfo(Uint32 port);
void pdSetMode(Sint32 mode);
Sint32 pdGetMode();
void pdSetOptimize(Uint32 count);
Uint32 pdGetOptimize();
void pdSetThreshold(Uint8 on, Uint8 off);
void pdSetIntFunction(void (*func)());
PDS_PERIPHERAL* pdGetPeripheralDirect(Uint32 port, PDS_PERIPHERAL *buf, void *rawdata, void *rawinfo);
void pdGunEnter(Uint32 portbit);
void pdGunLeave();
Sint32 pdGunCheck();
void pdGunGetPosition(Sint32 *x, Sint32 *y);
Sint32 pdGunGetLatchedPort();
void pdGunSetFlashColor(Uint32 color);
Uint32 pdGunGetFlashColor();
void pdGunSetRapid(Uint32 port, Uint32 num);
void pdGunSetTrigger(Uint32 port);
void pdGunSetCallback(Sint32 (*func)());
Sint32 pdIsPadReset(Uint32 port);
Sint32 pdVibMxStart(Uint32 port, PDS_VIBPARAM *param);
Sint32 pdVibMxStop(Uint32 port);
void pdLcdInit();
void pdLcdExit();
Sint32 pdLcdGetDirection(Uint32 port);
Sint32 pdVmsLcdWrite(Uint32 port, void *data, Uint32 flag);
Sint32 pdVmsLcdWrite1(Uint32 port, void *data);
Sint32 pdVmsLcdIsReady(Uint32 port);
void pdKbdInit();
void pdKbdExit();
PDS_KEYBOARD* pdKbdGetData(Uint32 port);
PDS_KEYBOARDINFO* pdKbdGetInfo(Uint32 port);
void pdKbdExecServer();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/sy_dummy.c
// *****************************************************************************

void* syBtFntGet(Uint32 num);
Sint32 syBtFntChkSmph();
void syBtFntClrSmph();
Uint32 syBtFntGetAddr(SYE_BT_FNT_FONTSET set, Sint16 code);
void syBtFntGetInfo(SYE_BT_FNT_FONTSET set, Sint16 code, SYS_BT_FNT_INFO *info);
Sint16 syBtFntSjis2Jis(Sint16 sjis);
void syCacheICI();
void syCacheOCI();
Sint32 syCblCheck();
Sint32 syCblCheckBroadcast();
Sint32 syCfgInit(void *p);
Sint32 syCfgExit();
Sint32 syCfgSetSoundMode(Sint32 n);
Sint32 syCfgGetSoundMode(Sint32 *p);
Sint32 syCfgGetCountryCode(Sint32 *p);
Sint32 syCfgGetLanguage(Sint32 *p);
Sint32 syCfgGetDefaultLanguage(Sint32 *p);
Sint32 syCfgGetBroadcastType(Sint32 *p);
Sint32 syCfgGetIndividualID(Sint8 *p);
void syHwInit(void *stackptr);
void syHwFinish();
void syHwInit2();
Void syBtExit();
Sint32 syBtCheckDisc();
Sint32 syBtGetBootSystemID(SYS_BT_SYSTEMID *id);
Sint32 syBtGetCurrentSystemID(SYS_BT_SYSTEMID *id);
void set_imask(int mask);
int get_imask();
Sint32 syVideoExit();
Sint32 syVideoGetBroadcastType();
Sint32 syVideoGetCableType();
Sint32 syVideoGetVideoMode();
Sint32 syVideoInit();
void syVideoSetBorderColor(Uint32 color);
void syVideoWaitVBlankSetBorderColor(Uint32 color);
void ADXF_GetFileRange(int part_no, int inside_no, long int *fad, long int *fnsct);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/sy_malloc.c
// *****************************************************************************

ulHeapHandle syMallocGetHeapHandle();
Void syMallocInit(Void *heap, Uint32 size);
Void syMallocFinish();
Void* syMalloc(Uint32 nbytes);
void* syRealloc(void *op, Uint32 nbytes);
void* syCalloc(Uint32 nobj, Uint32 size);
Void syFree(Void *ap);
Void syMallocStat(Uint32 *wholeFreeSize, Uint32 *biggestFreeBlockSize);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/sy_mem.c
// *****************************************************************************

void syMemSet(void *dst, Uint8 dat, Sint32 num);

void syMemSet2(void *dst, Uint16 dat, Sint32 num);

void syMemSet4(void *dst, Uint32 dat, Sint32 num);

void syMemSet8(void *dst, Uint32 dat, Sint32 num);

void syMemSet16(void *dst, Uint32 dat, Sint32 num);

void syMemSet32(void *dst, Uint32 dat, Sint32 num);

void syMemSetSQ(void *dst, Uint32 dat, Sint32 num);
void syMemCopy(void *dst, void *src, Sint32 num);

void syMemCopy2(void *dst, void *src, Sint32 num);

void syMemCopy4(void *dst, void *src, Sint32 num);

void syMemCopy8(void *dst, void *src, Sint32 num);

void syMemCopy16(void *dst, void *src, Sint32 num);

void syMemCopy32(void *dst, void *src, Sint32 num);

void syMemCopySQ(void *dst, void *src, Sint32 num);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/sy_timer.c
// *****************************************************************************

Uint32 syTmrGetCount();
Uint32 syTmrDiffCount(Uint32 count1, Uint32 count2);
Uint32 syTmrCountToMicro(Uint32 cnt);
void syTmrInit();
void syTmrFinish();
Sint32 syRtcInit();
void syRtcFinish();
Sint32 syRtcGetDate(SYS_RTC_DATE *date);

// *****************************************************************************
// FILE -- src/_nj_draw3d.s
// *****************************************************************************

nj_tex3d_set_scisvtx();
nj_mkpkt_tex3d_vertex_until_clip();
nj_poly3d_set_scisvtx();
nj_mkpkt_poly3d_vertex_until_clip();

// *****************************************************************************
// FILE -- src/_nj_easy_multi_polygon.s
// *****************************************************************************

nj_easy_multi_add_offset_material();
nj_easy_multi_get_cm();
nj_easy_multi_direct_mkpkt_cs_cv_vn_d8();
nj_easy_multi_mkpkt_cs_em_node_until_clip_vu_16();
nj_easy_multi_mkpkt_cs_uvn_node_until_clip_vu_16();
nj_easy_multi_mkpkt_cs_node_until_clip_vu_16();
nj_easy_multi_mkpkt_cs_em_il_node_until_clip_vu();
nj_easy_multi_mkpkt_cs_uvn_il_node_until_clip_vu();
nj_easy_multi_mkpkt_cs_il_node_until_clip_vu();
nj_easy_multi_mkpkt_cs_em_node_until_clip_vu();
nj_easy_multi_mkpkt_cs_uvn_node_until_clip_vu();
nj_easy_multi_mkpkt_cs_node_until_clip_vu();
nj_easy_multi_cs_em_il_set_scisvtx();
nj_easy_multi_cs_uvn_il_set_scisvtx();
nj_easy_multi_cs_il_set_scisvtx();
nj_easy_multi_cs_em_set_scisvtx();
nj_easy_multi_cs_uvn_set_scisvtx();
nj_easy_multi_cs_set_scisvtx();
nj_easy_multi_mkpkt_cs_em_node_until_clip();
nj_easy_multi_mkpkt_cs_uvn_node_until_clip();
nj_easy_multi_mkpkt_cs_node_until_clip();
nj_easy_multi_mkpkt_cs_em_il_node_noclip();
nj_easy_multi_mkpkt_cs_uvn_il_node_noclip();
nj_easy_multi_mkpkt_cs_il_node_noclip();
nj_easy_multi_mkpkt_cs_em_node_noclip();
nj_easy_multi_mkpkt_cs_uvn_node_noclip();
nj_easy_multi_mkpkt_cs_node_noclip();
nj_easy_multi_init_calc_plist();

// *****************************************************************************
// FILE -- src/_nj_easy_multi_vertex.s
// *****************************************************************************

nj_easy_multi_calc_cv_vn_d8_clip();
nj_easy_multi_calc_cv_d8_clip();
nj_easy_multi_calc_cv_clip();
nj_easy_multi_calc_cv_vn_clip();
nj_easy_multi_calc_cv_vn_nf_end_clip();
nj_easy_multi_calc_cv_vn_nf_end_noclip();
nj_easy_multi_calc_cv_vn_nf_middle();
nj_easy_multi_calc_cv_vn_nf_start();
nj_easy_multi_calc_cv_vn_d8_noclip();
nj_easy_multi_calc_cv_d8_noclip();
nj_easy_multi_calc_cv_noclip();
nj_easy_multi_calc_cv_vn_noclip();

// *****************************************************************************
// FILE -- src/_nj_easy_polygon.s
// *****************************************************************************

nj_easy_mkpkt_cs_em_il_node_until_clip_vu();
nj_easy_mkpkt_cs_uvn_il_node_until_clip_vu();
nj_easy_mkpkt_cs_il_node_until_clip_vu();
nj_easy_mkpkt_cs_em_node_until_clip_vu();
nj_easy_mkpkt_cs_uvn_node_until_clip_vu();
nj_easy_mkpkt_cs_node_until_clip_vu();
nj_easy_cs_em_il_set_scisvtx();
nj_easy_cs_uvn_il_set_scisvtx();
nj_easy_cs_il_set_scisvtx();
nj_easy_cs_em_set_scisvtx();
nj_easy_cs_uvn_set_scisvtx();
nj_easy_cs_set_scisvtx();
nj_easy_mkpkt_cs_em_node_until_clip();
nj_easy_mkpkt_cs_uvn_node_until_clip();
nj_easy_mkpkt_cs_node_until_clip();
nj_easy_mkpkt_cs_em_il_node_noclip();
nj_easy_mkpkt_cs_uvn_il_node_noclip();
nj_easy_mkpkt_cs_il_node_noclip();
nj_easy_mkpkt_cs_em_node_noclip();
nj_easy_mkpkt_cs_uvn_node_noclip();
nj_easy_mkpkt_cs_node_noclip();
nj_easy_init_calc_plist();

// *****************************************************************************
// FILE -- src/_nj_easy_vertex.s
// *****************************************************************************

nj_easy_calc_cv_vn_d8_clip();
nj_easy_calc_cv_d8_clip();
nj_easy_calc_cv_clip();
nj_easy_calc_cv_vn_clip();
nj_easy_calc_cv_vn_nf_end_clip();
nj_easy_calc_cv_vn_nf_end_noclip();
nj_easy_calc_cv_vn_nf_middle();
nj_easy_calc_cv_vn_nf_start();
nj_easy_calc_cv_vn_d8_noclip();
nj_easy_calc_cv_d8_noclip();
nj_easy_calc_cv_noclip();
nj_easy_calc_cv_vn_noclip();

// *****************************************************************************
// FILE -- src/_nj_material.s
// *****************************************************************************

nj_get_cnk_material();

// *****************************************************************************
// FILE -- src/_nj_model.s
// *****************************************************************************

nj_calc_light_rot_matrix_1();
nj_check_clip_vertices();
nj_cnk_get_material();
nj_model_check_clip();
nj_model_set_bounding_box();

// *****************************************************************************
// FILE -- src/_nj_particle.s
// *****************************************************************************

nj_ptcl_set_sprite_vertex();
nj_ptcl_set_polygon_vertex();

// *****************************************************************************
// FILE -- src/_nj_shadow_tex_polygon.s
// *****************************************************************************

nj_shadow_tex_mkpkt_cs_uvn_node_noclip();
nj_shadow_tex_mkpkt_cs_node_noclip();
nj_shadow_tex_init_cs_noclip();

// *****************************************************************************
// FILE -- src/_nj_shadow_tex_vertex.s
// *****************************************************************************

nj_shadow_tex_calc_vertex_clip_vu();
nj_shadow_tex_calc_vertex_clip();
nj_shadow_tex_calc_cv_vn_nf_end_clip();
nj_shadow_tex_calc_cv_vn_nf_start_noclip();
nj_shadow_tex_calc_cv_vn_nf_middle_noclip();
nj_shadow_tex_calc_cv_vn_nf_end_noclip();
nj_shadow_tex_calc_vertex_noclip();

// *****************************************************************************
// FILE -- src/_nj_simple_multi_polygon.s
// *****************************************************************************

nj_simple_multi_add_offset_material();
nj_simple_multi_get_cm();
nj_simple_multi_direct_mkpkt_cs_cv_vn_d8();
nj_simple_multi_mkpkt_cs_em_node_until_clip_vu_16();
nj_simple_multi_mkpkt_cs_uvn_node_until_clip_vu_16();
nj_simple_multi_mkpkt_cs_node_until_clip_vu_16();
nj_simple_multi_mkpkt_cs_em_il_node_until_clip_vu();
nj_simple_multi_mkpkt_cs_uvn_il_node_until_clip_vu();
nj_simple_multi_mkpkt_cs_il_node_until_clip_vu();
nj_simple_multi_mkpkt_cs_em_node_until_clip_vu();
nj_simple_multi_mkpkt_cs_uvn_node_until_clip_vu();
nj_simple_multi_mkpkt_cs_node_until_clip_vu();
nj_simple_multi_cs_em_il_set_scisvtx();
nj_simple_multi_cs_uvn_il_set_scisvtx();
nj_simple_multi_cs_il_set_scisvtx();
nj_simple_multi_cs_em_set_scisvtx();
nj_simple_multi_cs_uvn_set_scisvtx();
nj_simple_multi_cs_set_scisvtx();
nj_simple_multi_mkpkt_cs_em_node_until_clip();
nj_simple_multi_mkpkt_cs_uvn_node_until_clip();
nj_simple_multi_mkpkt_cs_node_until_clip();
nj_simple_multi_mkpkt_cs_em_il_node_noclip();
nj_simple_multi_mkpkt_cs_uvn_il_node_noclip();
nj_simple_multi_mkpkt_cs_il_node_noclip();
nj_simple_multi_mkpkt_cs_em_node_noclip();
nj_simple_multi_mkpkt_cs_uvn_node_noclip();
nj_simple_multi_mkpkt_cs_node_noclip();
nj_simple_multi_init_calc_plist();

// *****************************************************************************
// FILE -- src/_nj_simple_multi_vertex.s
// *****************************************************************************

nj_simple_multi_calc_cv_vn_d8_clip();
nj_simple_multi_calc_cv_d8_clip();
nj_simple_multi_calc_cv_clip();
nj_simple_multi_calc_cv_vn_clip();
nj_simple_multi_calc_cv_vn_nf_end_clip();
nj_simple_multi_calc_cv_vn_nf_end_noclip();
nj_simple_multi_calc_cv_vn_nf_middle();
nj_simple_multi_calc_cv_vn_nf_start();
nj_simple_multi_calc_cv_vn_d8_noclip();
nj_simple_multi_calc_cv_d8_noclip();
nj_simple_multi_calc_cv_noclip();
nj_simple_multi_calc_cv_vn_noclip();

// *****************************************************************************
// FILE -- src/_nj_simple_polygon.s
// *****************************************************************************

nj_simple_add_offset_material();
nj_simple_get_cm();
nj_simple_direct_mkpkt_cs_cv_vn_d8();
nj_simple_mkpkt_cs_em_node_until_clip_vu_16();
nj_simple_mkpkt_cs_uvn_node_until_clip_vu_16();
nj_simple_mkpkt_cs_node_until_clip_vu_16();
nj_simple_mkpkt_cs_em_il_node_until_clip_vu();
nj_simple_mkpkt_cs_uvn_il_node_until_clip_vu();
nj_simple_mkpkt_cs_il_node_until_clip_vu();
nj_simple_mkpkt_cs_em_node_until_clip_vu();
nj_simple_mkpkt_cs_uvn_node_until_clip_vu();
nj_simple_mkpkt_cs_node_until_clip_vu();
nj_simple_cs_em_il_set_scisvtx();
nj_simple_cs_uvn_il_set_scisvtx();
nj_simple_cs_il_set_scisvtx();
nj_simple_cs_em_set_scisvtx();
nj_simple_cs_uvn_set_scisvtx();
nj_simple_cs_set_scisvtx();
nj_simple_mkpkt_cs_em_node_until_clip();
nj_simple_mkpkt_cs_uvn_node_until_clip();
nj_simple_mkpkt_cs_node_until_clip();
nj_simple_mkpkt_cs_em_il_node_noclip();
nj_simple_mkpkt_cs_uvn_il_node_noclip();
nj_simple_mkpkt_cs_il_node_noclip();
nj_simple_mkpkt_cs_em_node_noclip();
nj_simple_mkpkt_cs_uvn_node_noclip();
nj_simple_mkpkt_cs_node_noclip();
nj_simple_init_calc_plist();

// *****************************************************************************
// FILE -- src/_nj_simple_vertex.s
// *****************************************************************************

nj_simple_calc_cv_vn_d8_clip();
nj_simple_calc_cv_d8_clip();
nj_simple_calc_cv_clip();
nj_simple_calc_cv_vn_clip();
nj_simple_calc_cv_vn_nf_end_clip();
nj_simple_calc_cv_vn_nf_end_noclip();
nj_simple_calc_cv_vn_nf_middle();
nj_simple_calc_cv_vn_nf_start();
nj_simple_calc_cv_vn_d8_noclip();
nj_simple_calc_cv_d8_noclip();
nj_simple_calc_cv_noclip();
nj_simple_calc_cv_vn_noclip();

// *****************************************************************************
// FILE -- src/_nj_wire_polygon.s
// *****************************************************************************

nj_wire_mkpkt_cs_uvn_node_until_clip();
nj_wire_mkpkt_cs_node_until_clip();
nj_wire_mkpkt_cs_uvn_node_noclip();
nj_wire_mkpkt_cs_node_noclip();
nj_wire_init_cs_noclip();

// *****************************************************************************
// FILE -- src/_nj_wire_vertex.s
// *****************************************************************************

nj_wire_calc_cv_vn_nf_end_clip();
nj_wire_calc_vertex_clip();
nj_wire_calc_cv_vn_nf_start_noclip();
nj_wire_calc_cv_vn_nf_middle_noclip();
nj_wire_calc_vertex_noclip();

// *****************************************************************************
// FILE -- src/libsceedemo.c
// *****************************************************************************

static simpleatoi.3();
sceeDemoStart();
sceeDemoEnd();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_gx.c
// *****************************************************************************

psDmaTag* psGxLoadVUMprg(void *mprg, int addr);

psDisplayList* psGxGetSystemDisplayList();

void psGxCloseVifPkt();

psVifPkt* psGxGetVifPkt();

psVifPkt* psGxOpenVifPkt();

psDisplayList* psGxGetDisplayList();

psDisplayList* psGxSetDisplayList(psDisplayList *dl);

void psGxSetGsSignal(int idmsk, int id);

void psGxSetAlphaTestMode(int ate, int atst, int aref, int afail);

void psGxSetAlphaTestMode2(int ate, int atst, int aref, int afail);

void psGxSetDitherMode(int dthe);

void psGxSetZTestMode(int zte, int ztst);

void psGxSetZMask(int zmsk);

void psGxSetMipmapLod(int LCM, int L, int K);

void psGxSetAlphaBlendMode(int a, int b, int c, int d, int fix);
void psGxGetAlphaBlendMode(psGxAlphaBlendModeParam *abm);

void psGxSetTextureFunction(int tfx, int tcc);

void psGxSetTextureFilterMode(int mmag, int mmin);

void psGxSetTextureClampMode(int wms, int wmt, int minu, int maxu, int minv, int maxv);

void psGxSetGsReg(int addr, u_long data);

void psGxSetDefaultTexHeap();

void psGxSetBackColor(int r, int g, int b);

void psGxGetLocalMemoryInfo(psGxLocalMemoryInfo *info);
void psGxGetFrameBufCenter(float *cx, float *cy);
void psGxGetFrameBufOffset(float *xofs, float *yofs);

sceGsDrawEnv1* psGxGetCurrentDrawEnv();

int psGxGetDisplayField();

u_long psGxGetFrameBufReg(int flag);

void psGxSwapFrameBuf();

void psGxBeginScene();

void psGxEndScene();

int psGxWaitVBlank();

psGxPacket* psGxGetPacket();
void psGxExit();

void psGxInitRegImg(psGxParam *gx);

psGxSys* psGxInit(psGxDesc *desc);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_gxpkt.c
// *****************************************************************************

u_int* psGxPktAddVifDatas(psGxPacket *gxPkt, u_int *datas, int nbDatas);

u_int* psGxPktAddVifData(psGxPacket *gxPkt, u_int data);
u_int* psGxPktAddVifCode(psGxPacket *gxPkt, u_int vifCode);

u_int* psGxPktBeginVifPkt(psGxPacket *gxPkt);

u_int* psGxPktEndVifPkt(psGxPacket *gxPkt);

u_int* psGxPktAddGsReg(psGxPacket *gxPkt, u_long addr, u_long data);
u_int* psGxPktAddGifData(psGxPacket *gxPkt, psQWData *gifData);

u_int* psGxPktAddGifTagImage(psGxPacket *gxPkt, int nloop);

u_int* psGxPktAddGifTagPackedAD(psGxPacket *gxPkt, int nloop);

u_int* psGxPktAddGifTag(psGxPacket *gxPkt, sceGifTag *gifTag);

u_int* psGxPktBeginGifPkt(psGxPacket *gxPkt);

u_int* psGxPktEndGifPkt(psGxPacket *gxPkt);
u_int* psGxPktAddDmaTag(psGxPacket *gxPkt, sceDmaTag *dmaTag);
u_int* psGxPktGetPtr(psGxPacket *gxPkt);
void psGxPktInit(psGxPacket *gxPkt, void *buf, size_t bufSize);
u_int* psGxPktOpen(psGxPacket *gxPkt);

void psGxPktClose(psGxPacket *gxPkt);

void psGxPktSendDma(psGxPacket *gxPkt);
psGxPacket* psGxPktCreate(psGxPacket *gxPkt, void *buf, size_t bufSize, int dmaId);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_gxtex.c
// *****************************************************************************

void psGxLoadTextureHostToLocalPath2(u_long bitbltbuf, u_long trxpos, u_long trxreg, void *image, size_t imageSize);

void psGxLoadTextureLocalToLocalPath2(u_long bitbltbuf, u_long trxpos, u_long trxreg, u_long trxdir);

void psGxMakePktLoadImagePath3(u_long bitbltbuf, u_long trxpos, u_long trxreg, u_long trxdir, void *image);
void psGxMakePktLoadImagePath2(u_long bitbltbuf, u_long trxpos, u_long trxreg, u_long trxdir, void *image);

static void make_gifpkt_texload(psGxPacket *gxPkt, int w, int h, int psm, int addr, int size, void *image);

static int get_clut_size(int psm, int cpsm);

void psGxLoadTexImagePath3(psGxTexSurface *tex, void *imgData);

static void make_vifpkt_texload(psGxPacket *gxPkt, int w, int h, int psm, int addr, int size, void *image);

void psGxLoadTexImagePath2(psGxTexSurface *tex, void *imgData);

void psGxSetTexture(psGxTexSurface *tex);

int psGxGetPixelBitSize(int pixelFmt);

static int gxtex_log2(int n);

int psGxGetTextureMemSize(psGxTexDesc *desc);
void psGxFreeTexSurface(psGxTexSurface *tex);

int psGxGetClutSize(int psm, int cpsm);

static int Tim2CalcBufWidth(int psm, int w);

psGxTexSurface* psGxCreateTexSurface(psGxTexDesc *desc, psGxTexSurface *tex);

int psGxGetFixTexAddr();
void psGxPrintTexStatus();
psGxTexHeap* psGxGetTexHeap();

psGxTexHeap* psGxSetTexHeap(psGxTexHeap *texHeap);

void psGxDestroyTexHeap(psGxTexHeap *texHeap);
psGxTexHeap* psGxCreateTexHeap(void *buf, size_t bufSize, u_int texAddr, u_int texSize, int nbTextures);
void psGxExitTexture();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_pkt.c
// *****************************************************************************

void psGifPktCloseGifTagEx(psGifPkt *gp, void *pkt, int gifDataSize);
void psGifPktCloseGifTag(psGifPkt *gp);
psGifTag* psGifPktOpenGifTag(psGifPkt *gp, psGifTag *pGifTag);
psDmaTag* psVifPktAddDmaTag(psVifPkt *vp, u_long tag, u_int opt1, u_int opt2);

void psVifPktAddGsReg(psVifPkt *vp, u_long addr, u_long data);

void psVifPktAddGifData(psVifPkt *vp, psGifData *data);
void psVifPktCloseGifTagEx(psVifPkt *vp, void *pkt, int gifDataSize);
void psVifPktCloseGifTag(psVifPkt *vp);
void psVifPktCancelGifTag(psVifPkt *vp);
sceGifTag* psVifPktOpenGifTag(psVifPkt *vp, sceGifTag *gifTag);
void psVifPktCloseDirectHLCode(psVifPkt *vp);

u_int* psVifPktOpenDirectHLCode(psVifPkt *vp);

u_int* psVifPktAddMatrix(psVifPkt *vp, int code, u_long128 *mtx);

u_int* psVifPktAddQWData(psVifPkt *vp, int code, u_long128 *data, int nbDatas);

u_int* psVifPktAddUnpackDatas(psVifPkt *vp, int *datas, int nbDatas);

u_int* psVifPktAddCode(psVifPkt *vp, u_int code);
size_t psVifPktGetSize(psVifPkt *vp);
psVifPkt* psVifPktCreate(psVifPkt *vifPkt, void *pktBuf);
void psPktBufGetInfo(psPktBuf *pktBuf, psPktBufInfo *info);

void psPktBufClose(psPktBuf *pktBuf);

void psPktBufOpen(psPktBuf *pktBuf);

struct { // 0x28
	void *buf;
	size_t bufSize;
	u_int *pktBufTop;
	size_t pktBufSize;
	u_int *pktPtr;
	size_t pktSize;
	int flags;
	int pad[3];
}* psPktBufCreate(void *buf, size_t bufSize);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_displist.c
// *****************************************************************************

void psDisplayListMakePktGsReg(psDisplayList *dl, psVifPkt *vp);

int psDisplayListIsUpdateGsReg(psDisplayList *dl);
u_long psDisplayListGetGsRegImg(psDisplayList *dl, int addr);

void psDisplayListSetGsRegForce(psDisplayList *dl, int addr, u_long data);

void psDisplayListSetGsRegImg(psDisplayList *dl, int addr, u_long data);
psVifPkt* psDisplayListGetVifPkt(psDisplayList *dl);

void psDisplayListCloseCallPkt(psDisplayList *dl);

psVifPkt* psDisplayListOpenCallPkt(psDisplayList *dl);
psDmaTag* psDisplayListAddRefPkt(psDisplayList *dl, void *addr, size_t size);

void psDisplayListCloseRefPkt(psDisplayList *dl);

psVifPkt* psDisplayListOpenRefPkt(psDisplayList *dl);

psDmaTag* psDisplayListAddDmaTag(psDisplayList *dl, u_long dmaTag, u_int opt0, u_int opt1);

psDmaTag* psDisplayListAddRefTag(psDisplayList *dl);
psDmaTag* psDisplayListAddEndTag(psDisplayList *dl);
int psDisplayListIsLock(psDisplayList *dl);
int psDisplayListLock(psDisplayList *dl);
int psDisplayListUnlock(psDisplayList *dl);
void psDisplayListFlushInt(psDisplayList *dl, int dmaId);
void psDisplayListFlush(psDisplayList *dl, int dmaId);
void psDisplayListEnd(psDisplayList *dl);
void psDisplayListAppend(psDisplayList *dl1, psDisplayList *dl2);
void psDisplayListClose(psDisplayList *dl);
void psDisplayListOpen(psDisplayList *dl);

void psDisplayListPurgeGsReg(psDisplayList *dl);

void psDisplayListGetInfo(psDisplayList *dl, psDisplayListInfo *info);
psDisplayList* psDisplayListCreate(void *buf, size_t bufSize, psDmaPktBuf *dmaPktBuf);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_debug.c
// *****************************************************************************

int psDebugPrintEnable(int flag);

void psDebugPrintf(int flag, char *fmt);

void __psAssert(char *filename, int line, char *e);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_matrix.c
// *****************************************************************************

int ulMatrixGetStackDepthMax();

void ulMatrixConsolePrint(ulMatrix *m);

void ulMatrixPrint(ulMatrix *m);

ulMatrix* ulMatrixSetCurrent(ulMatrix *m);
ulMatrix* ulMatrixPop();

ulMatrix* ulMatrixPush();

ulMatrix* ulMatrixInitStack(void *buf, int depth);
void ulMatrixGetRotPortion(ulMatrix *md, ulMatrix *ms);
void ulMatrixSetTranslation(ulMatrix *m, float x, float y, float z);
void ulMatrixGetTranslation3(ulMatrix *m, ulVector3 *v);
void ulMatrixUnitRotPortion(ulMatrix *m);

void ulMatrixRotateZRad(ulMatrix *m, float rad);

void ulMatrixRotateYRad(ulMatrix *m, float rad);

void ulMatrixRotateXRad(ulMatrix *m, float rad);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_view.c
// *****************************************************************************

ulMatrix* ulViewLookAt(ulMatrix *vm, ulVector3 *cp, ulVector3 *tp, float bank);

ulMatrix* ulViewRotateZRad(ulMatrix *vm, float rad);
ulMatrix* ulViewRotateYRad(ulMatrix *vm, float rad);
ulMatrix* ulViewRotateXRad(ulMatrix *vm, float rad);
ulMatrix* ulViewTranslate(ulMatrix *vm, float x, float y, float z);
ulMatrix* ulViewInit(ulMatrix *vm);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_math.c
// *****************************************************************************

void ulUnpackByte4ToFloat4(Uint32 pdata, float *fdata);
Uint32 ulPackFloat4ToByte4(float *fdata);
float ulDistancePoint4(ulPoint4 *p1, ulPoint4 *p2);
float ulDistancePoint3(ulPoint3 *p1, ulPoint3 *p2);

ulAngle ulArcTan(float x);

ulAngle ulArcSin(float x);

ulAngle ulArcCos(float x);

float ulTanAng(ulAngle ang);

float ulSinAngApprox(ulAngle ang);

float ulCosAngApprox(ulAngle ang);

float ulTanAngApprox(ulAngle ang);

float ulSinAng(ulAngle ang);

float ulCosAng(ulAngle ang);

void ulSinCosAng(ulAngle ang, float *sin_val, float *cos_val);
void ulSinCos(float rad, float *s, float *c);
float ulRoundUp(float n);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_peri.c
// *****************************************************************************

void ulPeripheralSetRepeatTimer(int wait_time, int interval_time);

UL_PERI_STATECALLBACK ulPeripheralSetStateCallback(UL_PERI_STATECALLBACK func);

int ulPeripheralGetPort(ulPeripheral *peri);
int ulPeripheralGetSlot(ulPeripheral *peri);
int ulPeripheralGetFlag(ulPeripheral *peri);
int ulPeripheralGetId(ulPeripheral *peri);
int ulPeripheralGetStatus(ulPeripheral *peri);

int psPadChangeAnalogMode(int port, int slot);

void psPeriNormalizeAnalogStick(u_char x, u_char y, int idle, float *fx, float *fy);

ulPeripheral* ulPeripheralGet(int port);
static void ul_peri_state_callback(ulPeripheral *peri, int state);
static void peri_clear_keydata(ulPeripheral *peri);
static void peri_clear_info(ulPeripheral *peri);
void ulPeriClearInfo(ulPeripheral *peri);

void ulPeriGetInfo(ulPeripheral *peri);

void ulPeripheralServer();

void ulPeripheralExit();

void ulPeripheralInit();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_heap.c
// *****************************************************************************

void* ulHeapCallocDebug(ulHeapHandle handle, size_t size, char *filename, int line);

void* ulHeapMallocDebug(ulHeapHandle handle, size_t size, char *filename, int line);

void* ulCallocDebug(size_t size, char *filename, int line);

void* ulMallocDebug(size_t size, char *filename, int line);

void ulHeapGetStatus(ulHeapHandle handle, ulHeapStatus *status);

void ulHeapPrintStatus(ulHeapHandle heap);

size_t ulHeapGetBlockSize(void *ptr);

void ulFree(void *ptr);

void* ulCalloc(size_t size);

void* ulMalloc(size_t size);

void* ulHeapCalloc(ulHeapHandle handle, size_t size);

void* ulHeapMalloc(ulHeapHandle handle, size_t size);

ulHeapHandle ulHeapGetCurrent();

ulHeapHandle ulHeapSetCurrent(ulHeapHandle handle);

void ulHeapDestroy(ulHeapHandle heap);
ulHeapHandle ulHeapCreate(void *buf, size_t size);
ulHeapHandle* ulHeapInit(void *buf, size_t size);

void ulHeapPushCuurent(ulHeapHandle heap);

void ulHeapPopCurrent();

void ulHeapExitSystem();
void ulHeapInitSystem();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_timer.c
// *****************************************************************************

float ulTimerCountToMicro(int count);
float ulTimerCountToMilli(int count);

int ulTimerDiffCount(int t1, int t0);

void ulTimerSetCount(int count);
int ulTimerGetCount();
void ulTimerExit();

void ulTimerInit();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_file.c
// *****************************************************************************

int ulFsLoadIopModule(char *filename, int args, char *argp);

static char* ulStrConvDirectorySeparater(char *path, char ds);

static char* str_toupper(char *str);

static void ulFsFreeFileObject(ulFile *fp);

static ulFile* ulFsFindFileObject();

int ulFsGetPS2Filename(char *filename, char *ps2name);

size_t ulFsGetFileSectSize(ulFile *fp);
size_t ulFsGetFileSize(ulFile *fp);

int ulFsRead(ulFile *fp, int sect, void *buf);

int ulFsSeek(ulFile *fp, int sect, int type);
int ulFsClose(ulFile *fp);

ulFile* ulFsOpen(char *filename, ulFsDirRec *dirrec);

int ulFsChangeDir(char *dirname);

void ulFsSetHostRoot(char *rootpath);
void ulFsSetHostType(int type);

int ulFsSetTargetDevice(int device);

void ulFsServer();
void ulFsExit();

void ulFsInit(int max_open, void *work, int max_dirent, void *dirbuf);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_texture.c
// *****************************************************************************

ulTexture* ulTexListGetSurfaceByIndex(ulTexList *texlist, int index);

ulTexture* ulTextureFindSurfaceByID(int id);

void ulTextureSetID(ulTexture *tex, int id);
void ulTextureCreateTexList(ulTexList *texlist, ulTexName *texnames, int nbTextures);

void ulTexListLoadImage(ulTexList *texlist);

size_t ulTextureGetTexMemSize(ulTexture *tex);
Uint32 ulTextureGetTexMemAddr(ulTexture *tex);
int ulTextureGetWidth(ulTexture *tex);
int ulTextureGetHeight(ulTexture *tex);
void ulTextureSetAttribute(ulTexture *tex, int attr, void *addr);
void ulTextureSetName(ulTexture *texture, char *name);
void ulTextureSetTexImage(ulTexture *texture, void *texImage);
void ulTexHeapDestroy(ulTexHeap *texHeap);
ulTexHeap* ulTexHeapCreate(void *work, size_t workSize, int addr, int size, int nbTextures);
void* ulTexDataGetPixelData(ulTexData *texData);

static void ulTextureVacantSurface(ulTexture *tex);

static ulTexture* ulTextureFindSurface();

void ulTextureLoad(ulTexture *tex);
void ulTextureLoadImagePath3(ulTexture *texture, void *image);
void ulTextureLoadImagePath2(ulTexture *tex, void *imageData);
ulTexture* ulTextureCreateLockedSurfaceByPst(ulPst *pst);

ulTexture* ulTextureCreateSurfaceByPst(ulPst *pst);

ulTexture* ulTextureCreateLockedSurfaceByTexData(ulTexData *texdata);

ulTexture* ulTextureCreateSurfaceByTexData(ulTexData *texdata);

ulTexture* ulTextureCreateSurface(ulTexDesc *desc);

int ulTextureFreeTexList(ulTexList *texlist);

void ulTextureFreeSurface(ulTexture *tex);

ulTexture* ulTextureCreateLockedSurface(ulTexDesc *desc);

void ulTextureFreeLockedSurface(ulTexture *tex);

ulTexture* ulTexSysGetSurfaceByID(int id);

ulTexture* ulTexSysGetSurfaceByEntryIndex(int entryIndex);
ulTexture* ulTexSysGetTexSurfList();
int ulTexSysGetTexSurfNum();

ulTexture* ulTexSysGetTextureByIndex(int index);

int ulTexSysGetNbEntries();

void ulTexSysGetInfo(ulTexSysInfo *info);

void ulTexSysPrintInfo();

void ulTexSysSetDefaultTexHeap();
ulTexHeap* ulTexSysGetTexHeap();
ulTexHeap* ulTexSysSetTexHeap(ulTexHeap *texHeap);
void ulTexSysExit();

void ulTexSysInit(void *texWork, int nbTextures);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_texutil.c
// *****************************************************************************

void ulTexUtilCopyImagePath2(ulTexture *tex_dst, ulTexture *tex_src);

void ulTexUtilCreateTextureSurfaceByPtm(ulTexList *texlist, ulPtm *ptm);

ulPst* ulPtmFindPstById(ulPtm *ptm, Uint32 id);

void* ulPstGetImage(ulPst *pst);

void ulTexUtilLoadPtmImageRez(ulPtm *ptm, ulTexList *texlist, int addr);

void ulTexUtilLoadPtmImagePath2(ulPtm *ptm, ulTexList *texlist);

void ulTexUtilLoadPtmImagePath3(ulPtm *ptm, ulTexList *texlist);

void ulTexUtilLoadPstImagePath2(ulTexture *tex, ulPst *pst);
void ulTexUtilLoadPstImagePath3(ulTexture *tex, ulPst *pst);
void ulTexUtilLoadPmiPath2(ulTexture *texture, PmiCnk *pmiCnk, int pictureNo);
void ulTexUtilLoadPmiPath3(ulTexture *texture, PmiCnk *pmiCnk, int pictureNo);
static void* pst_get_image(ulPst *pst);

ulTexture* ulTexUtilLoadPstPath2(ulPst *pst);

void ulTexUtilLoadPtmPath2(ulPtm *ptmh, ulTexList *texlist);

ulTexture* ulTexUtilLoadPstPath3(ulPst *pst);

void ulTexUtilLoadPtmPath3(ulPtm *ptmh, ulTexList *texlist);

static Uint32* load_sofdec_macro_block_path2(psDisplayList *dl, u_long bitbltbuf, int x, int y, int w, int h, void *image);

void ulTexUtilLoadSofdecImagePath2(ulTexture *tex, int width, int height, void *image);

static Uint32* load_sofdec_macro_block_path3(psGxPacket *gxPkt, u_long bitbltbuf, int x, int y, int w, int h, void *image);

void ulTexUtilLoadSofdecImagePath3(ulTexture *tex, int width, int height, void *image);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_console.c
// *****************************************************************************

psGifData* add_pkt_char_sprite(psGifData *gd, int c, u_int x, u_int y, u_int z, int w, int h);

void ulConsoleDraw();

void ulConsoleSetFontSize(int w, int h);
void ulConsoleSetFontColor(ulPackedColor color);

static void StrnCpyToBuf(char *buf, char *str, size_t len);

void ulConsolePut(char c);
void ulConsolePuts(char *str);

void ulConsolePrintf(char *fmt);

void ulConsoleLocate(int x, int y);
void ulConsoleSetZ(float z);
void ulConsoleClear();
void ulConsoleExit();
void ulConsoleInit(void *buf, int char_w, int char_h);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_system.c
// *****************************************************************************

int ulSysLoadIopModules(char **drivers, int nbDrivers, char *dir);

int ulSysLoadIopModule(char *filename, int args, char *argp);

void ulPrintf(char *fmt);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_geo.c
// *****************************************************************************

void ulGxSet2DClipRect(float x, float y, float w, float h);

void ulGeoInitScene();

static void init_screen(ulGeoParam *geo);

void ulGeoExitSystem();

void ulGeoInitSystem(ulGeoInfo *info);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_scissor2.c
// *****************************************************************************

int ulScissorLine(ulScissorNodeInfo *scisNode, ulScissorVertex *sv0, ulScissorVertex *sv1);

int ulScissorTriangle(ulScissorNodeInfo *scisNode, ulScissorVertex *sv0, ulScissorVertex *sv1, ulScissorVertex *sv2);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_cnkmaterial.c
// *****************************************************************************

void ulCnkSetMaterial(ulGeoParam *geo, int chunk, Sint16 *plist);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_meshdraw.c
// *****************************************************************************

void ul_cm_set_alphablendmode(ulGeoParam *geo, int headbits);

void ul_cs_setup_headbits(ulGeoParam *geo, int headbits);

void ul_plist_setup_tid(ulGeoParam *geo, Sint16 headbits, Sint16 tid);

static void draw_cs_envmap_clip(ulGeoParam *geo, Sint16 *plist, int headbits);

static void draw_cs_uvn_clip(ulGeoParam *geo, Sint16 *plist, int headbits, float uvRatio);

static void draw_cs_clip(ulGeoParam *geo, Sint16 *plist, int headbits);

static void make_packet_cs_uvn_noclip(ulGeoParam *geo, Sint16 *plist);

static void make_packet_cs_envmap_noclip(ulGeoParam *geo, Sint16 *plist);

static void make_packet_cs_noclip(ulGeoParam *geo, Sint16 *plist);

static void draw_cached_plist_clip(ulGeoParam *geo, int id);
static void draw_cached_plist_noclip(ulGeoParam *geo, int id);
static void cache_plist(ulGeoParam *geo, Sint16 *plist, int id);

static void ulMeshAnalyzePlistClip(ulGeoParam *geo, Sint16 *plist);

static void ulMeshAnalyzeVlistClip(ulGeoParam *geo, Sint32 *vlist);

static void ulMeshAnalyzePlistNoClip(ulGeoParam *geo, Sint16 *plist);

static void ulMeshAnalyzeVlistNoClip(ulGeoParam *geo, Sint32 *vlist);

int ulMeshGetClipFlag(ulGeoVuParam *vu, ulMesh *mesh);

void ulMeshDrawClip(ulMesh *mesh);

void ulMeshDrawNoClip(ulMesh *mesh);

void ulMeshDraw(ulMesh *mesh, int evalFlag);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_gx.c
// *****************************************************************************

void ulGxGetFogParam(ulFogParam *fog);

void ulGxSetFogParam(float near, float far, float min, float max);

void ulGxSetFogFlag(Bool flag);

void ulGxSetFogColor(float r, float g, float b);

static void ulGxSetScreenParamForDC(float ax, float ay);

void ulGxSetAspect2D(float ax, float ay);

Sint32 ulGxGetSystemFlag();

Sint32 ulGxSetSystemFlag(Sint32 flag);

void ulGxSetDirectionalLightParameter(ulMatrix *vecMtx, ulMatrix *colMtx);

void ulGxSetScreenSize(float width, float height);

void ulGxSetScreenCenter(float x, float y);

void ulGxGetTransform(int type, ulMatrix *m);

void ulGxSetTransform(int type, ulMatrix *m);

static void ulGxGetClipTransParam(ulVector4 *posMin, ulVector4 *posMax, ulVector4 *coordScale, ulVector4 *coordOffset);

void ulGxGetClipZ(float *near, float *far);

void ulGxSetClipZ(float near, float far);

void ulGxGetAspectPS2(float *ax, float *ay);

static void ulGxSetAspectPS2(float ax, float ay);

void ulGxSetAspect(float ax, float ay);

float ulGxSetScreenDist(float dist);

float ulGxCalcScreenDist(float fov, float size);

void ulGxSetFieldOfViewX(float fovx);

void ulGxSetFieldOfViewY(float fovy);

void ulGxCreateProjectMatrix2(ulMatrix *m, float dist, float ax, float ay, float cx, float cy, float near, float far, float zmin, float zmax);

void ulGxCreateProjectMatrix(ulMatrix *m, float dist, float ax, float ay, float cx, float cy);

void ulGxCreateViewClipMatrix(ulMatrix *m, float dist, float near, float far, float clipx, float clipy);

void ulGxCreateViewScreenClipMatrix(ulMatrix *mvs, ulMatrix *mvc, ulMatrix *mcs, float dist, float ax, float ay, float cx, float cy, float zmin, float zmax, float near, float far, float clipx, float clipy);

void ulGxGetViewVolume(ulViewVolume *view);

void ulGxSetViewVolume(ulViewVolume *view);

void ulGxSetBackColor(ulPColor color);

void ulGxSetAlphaBlendFunction(int src, int dst);

void ulGxSetMipmapLodFromZ(float z);

void ulGxSetTextureFilterMode(int mode);
void ulGxSetTextureShadeMode(int mode);
void ulGxSetTextureClampMode(int hmode, int vmode);
void ulGxSetTexListIndex(ulTexList *texlist, int index);
ulTexList* ulGxGetTexList();

ulTexList* ulGxSetTexList(ulTexList *texlist);

void ulGxSetTexture(ulTexture *tex);

void ulGxTransVUParam();

void ulGxBeginPassEx(int type);
void ulGxEndPassEx(int type);
void ulGxBeginPass();
void ulGxEndPass();
int ulGxWaitVBlank();
void ulGxBeginScene();
void ulGxEndScene();

void ulGxSetVertexBuffer(void *buf, size_t bufSize);

void ulGxSetVerexBuffer(void *buf, size_t bufSize);

size_t ulGxGetWorkSize(ulGxDesc *desc);

void ulGxExit();

static void init_vu1_mprg();

static void init_view_volume(ulViewVolume *view);

void ulGxInit(ulGxDesc *desc);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_primitive.c
// *****************************************************************************

int ulGxSetPrimitiveMode(int mode);

int ulGxGetPrimitiveMode();

size_t ul_prim2d_setup_vupkt(psVifPkt *vp, int nbNodes, int **pktGifTag, int **pktVertex, int **pktColor, int **pktUv);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_sprite.c
// *****************************************************************************

void ulSpriteBeginVU1(Uint32 attr);

void ulSpriteSetVertexVU1(ulSpriteVertex *vertices, int nbVertices);

void ulSpriteEndVU1();

void ulSpriteBegin(Uint32 attr);

void ulSpriteSetVertex(ulSpriteVertex *vtx, int nbVertices);

void ulSpriteEnd();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_polygon2d.c
// *****************************************************************************

void ulPolygon2DBeginVU1(Uint32 attr);

void ulPolygon2DSetVertexVU1(ulPolygonVertex *vertices, int nbVertices);

void ulPolygon2DEndVU1();

void ulPolygon2DBegin(int attr);

void ulPolygon2DSetVertex(ulPolygonVertex *vertices, int nbVertices);

void ulPolygon2DEnd();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_texture2d.c
// *****************************************************************************

void ulTexture2DBeginVU1(Uint32 attr);

void ulTexture2DSetVertexVU1(ulTextureVertex *vertices, int nbVertices);

void ulTexture2DEndVU1();

void ulTexture2DBegin(Uint32 attr);

void ulTexture2DSetVertex(ulTextureVertex *vertices, int nbVertices);

void ulTexture2DEnd();

// *****************************************************************************
// FILE -- _ul_vector4.s
// *****************************************************************************

ulVector4Scalor();
ulVector4Max();
ulVector4Min();
ulVector4XyzDivW();
ulVector4OuterProduct();
ulVector4InnerProduct();
ulVector4Normalize();
ulVector4Scale();
ulVector4Clamp();
ulVector4Multiply();
ulVector4AddXyz();
ulVector4Add();
ulVector4Copy();

// *****************************************************************************
// FILE -- _ul_matrix.s
// *****************************************************************************

ulMatrixMultiVector3();
ulMatrixRotVector3();
ulMatrixAdd();
ulMatrixSub();
ulMatrixProjectPoint4();
ulMatrixMultiVector3ToVector4();
ulMatrixMultiVector4();
ulMatrixUnitScalePortion();
ulMatrixInverse();
ulMatrixRotateZSC();
ulMatrixRotateYSC();
ulMatrixRotateXSC();
ulMatrixRotateXYZAng();
ulMatrixRotateZAng();
ulMatrixRotateYAng();
ulMatrixRotateXAng();
ulMatrixScale();
ulMatrixTranslateVector4();
ulMatrixTranslateVector3();
ulMatrixTranslate();
ulMatrixMultiply();
ulMatrixTranspose();
ulMatrixUnit();
ulMatrixCopy();
ulMatrixClear();

// *****************************************************************************
// FILE -- _ul_math.s
// *****************************************************************************

ulCheckClipVertices2();
ulCheckClipVertices();
ulInvertSqrt();

// *****************************************************************************
// FILE -- _ul_cv_vn_noclip.s
// *****************************************************************************

calc_cv_vn_noclip();

// *****************************************************************************
// FILE -- _ul_cv_vn_d8_noclip.s
// *****************************************************************************

calc_cv_vn_d8_noclip();

// *****************************************************************************
// FILE -- _ul_cv_d8_noclip.s
// *****************************************************************************

calc_cv_d8_noclip();

// *****************************************************************************
// FILE -- _ul_cv_noclip.s
// *****************************************************************************

calc_cv_noclip();

// *****************************************************************************
// FILE -- _ul_cv_vn_clip.s
// *****************************************************************************

calc_cv_vn_clip();

// *****************************************************************************
// FILE -- _ul_cv_vn_d8_clip.s
// *****************************************************************************

calc_cv_vn_d8_clip();

// *****************************************************************************
// FILE -- _ul_cv_d8_clip.s
// *****************************************************************************

calc_cv_d8_clip();

// *****************************************************************************
// FILE -- _ul_cv_clip.s
// *****************************************************************************

calc_cv_clip();

// *****************************************************************************
// FILE -- _ul_cs_noclip.s
// *****************************************************************************

make_gifpkt_cs_node_noclip_cull();
init_gifpkt_cs_noclip();
make_gifpkt_cs_node_noclip2();
make_gifpkt_cs_node_noclip();

// *****************************************************************************
// FILE -- _ul_cs_uvn_noclip.s
// *****************************************************************************

make_gifpkt_cs_uvn_node_noclip_cull();
make_gifpkt_cs_uvn_node_noclip();

// *****************************************************************************
// FILE -- _ul_cs_em_noclip.s
// *****************************************************************************

make_gifpkt_cs_em_node_noclip_cull();
make_gifpkt_cs_em_node_noclip();

// *****************************************************************************
// FILE -- _ul_scissor2.s
// *****************************************************************************

ul_scis_mkpkt_texture_vertex_vu();
ul_scis_mkpkt_polygon_vertex_vu();
ul_scis_mkpkt_texture_vertex();
ul_scis_mkpkt_polygon_vertex();
ul_scis_get_near_clipflag3();
ul_scis_get_clipflag();
ul_scis_interpolate_z();
ul_scis_interp_node();

// *****************************************************************************
// FILE -- _ul_sprite.s
// *****************************************************************************

ul_sprite_set_vertices();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_dma.c
// *****************************************************************************

int psDmaSync(int id);

void psDmaSendChain(int id, void *addr);

void psDmaSendNormal(int id, void *addr, int size);

void psDmaInit();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_vheap.c
// *****************************************************************************

void psVHeapGetInfo(psVHeap *heap, psVHeapInfo *info);

void psVHeapPrintStatus(psVHeap *heap);

size_t psVHeapGetMemBlkSize(psVMemBlk *mb);
u_int psVHeapGetMemBlkAddr(psVMemBlk *mb);

void psVHeapFreeAll(psVHeap *heap);

void psVHeapFree(psVMemBlk *mb);

static psVMemBlk* psVHeapFindEmptyMemBlk(psVHeap *heap);

psVMemBlk* psVHeapMalloc(psVHeap *heap, size_t size);

void psVHeapDestroy(psVHeap *heap);

psVHeap* psVHeapCreate(void *buf, size_t buf_size, u_int vaddr, size_t vsize, int alignment);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_chunk.c
// *****************************************************************************

ulCnk* ulCnkGetNext(ulCnk *cnk);
Uint32 ulCnkSwapType(Uint32 type);

int ulCnkLoadFile(ulFile *fp, ulCnk *cnkData, void *buf);

void ulCnkPrintStatus(ulChunkHeader *chunk);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_geoutil.c
// *****************************************************************************

void ulGeoGetMeshBoundingBox(ulMesh *mesh, ulBoundingBox *box);

int ulGeoClipVertex(ulVector4 *v, ulVector4 *vmin, ulVector4 *vmax);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_geovtx.c
// *****************************************************************************

static void geo_calc_direction_light(ulGeoParam *geo, ulVector4 *normal, ulColor *color);

static float geo_transform_point_clip(ulGeoParam *geo, ulVector4 *p, ulVector4 *vp, ulVector4 *sp);

static int geo_calc_vertice_pn(ulGeoParam *geo, int attr, ulVector3 *vertice, int nbVertice, ulVertexBuf *vertBuf);

int ulGeoCalcVlist_VN_Clip(ulGeoParam *geo, int attr, void *vertice, int nbVertice, int vofs);

float ulGeoProjectPoint3(ulVector3 *v3d, ulVector3 *v2d);

float ulGeoTranformPoint3(ulVector3 *p3d, ulVector3 *p2d);

float ulGeoProjectPoint4(ulPoint4 *ps, ulPoint4 *pd);

void ulGeoTransformPoint4(ulPoint4 *ps, ulPoint4 *pd);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_cnkvtx.c
// *****************************************************************************

int ulCnkVtxSetClipFlag(ulGeoParam *geo, ulVertexBuf *vbuf);

int ulCnkVtx_VN_NF_Clip(ulGeoParam *geo, Sint32 *vlist);

void ulCnkVtx_VN_NF_NoClip(ulGeoParam *geo, Sint32 *vlist);

int ulCnkVtx_VN_Clip(ulGeoParam *geo, Sint32 *vlist);

void ulCnkVtx_VN_NoClip(ulGeoParam *geo, Sint32 *vlist);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_cs_clip.c
// *****************************************************************************

void make_gifpkt_cs_clip_cull(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, ulData128 *pkt);

void make_gifpkt_cs_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, ulData128 *pkt);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_cs_uvn_clip.c
// *****************************************************************************

void make_gifpkt_cs_uvn_clip_cull(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf);

void make_gifpkt_cs_uvn_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, ulData128 *pkt);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_cs_em_clip.c
// *****************************************************************************

void make_gifpkt_cs_em_clip_cull(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, ulData128 *pkt);

void make_gifpkt_cs_em_clip(ulGeoParam *geo, Sint16 *plist, int nbNodes, ulGeoVertex *vbuf, ulData128 *pkt);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_scissor.c
// *****************************************************************************

static void c_get_tex_scis_vtx_xplane(ulGeoParam *geo, ulScisVertex *v0, ulScisVertex *v1, ulScisVertex *vd, float cx);

static void c_get_tex_scis_vtx_yplane(ulGeoParam *geo, ulScisVertex *v0, ulScisVertex *v1, ulScisVertex *vd, float cy);

void make_gifpkt_scis_tri_tex(ulGeoParam *geo, ulScisVertex *v0, ulScisVertex *v1, ulScisVertex *v2, int rotFlag);

void make_gifpkt_scis_tri_nontex(ulGeoParam *geo, ulScisVertex *v0, ulScisVertex *v1, ulScisVertex *v2, int rotFlag);

// *****************************************************************************
// FILE -- _ul_cv_vn_nf_noclip.s
// *****************************************************************************

calc_cv_vn_nf_start_noclip();
calc_cv_vn_nf_middle_noclip();
calc_cv_vn_nf_end_noclip();

// *****************************************************************************
// FILE -- _ul_cv_vn_nf_clip.s
// *****************************************************************************

calc_cv_vn_nf_end_clip();

// *****************************************************************************
// FILE -- _ul_cs_clip.s
// *****************************************************************************

make_gifpkt_cs_node_until_clip_cull();
make_gifpkt_cs_node_until_clip();
ul_cs_setup_scisvtx();

// *****************************************************************************
// FILE -- _ul_cs_uvn_clip.s
// *****************************************************************************

make_gifpkt_cs_uvn_node_until_clip_cull();
make_gifpkt_cs_uvn_node_until_clip();
ul_cs_uvn_setup_scisvtx();

// *****************************************************************************
// FILE -- _ul_cs_em_clip.s
// *****************************************************************************

make_gifpkt_cs_em_node_until_clip_cull();
make_gifpkt_cs_em_node_until_clip();
setup_cs_em_scisvtx();

// *****************************************************************************
// FILE -- _ul_scissor.s
// *****************************************************************************

scisvtx_is_culling();
set_scisvtx_to_gsvtx_tex();
get_tex_scis_vtx_yplane();
get_tex_scis_vtx_xplane();
get_tex_scis_vtx_zplane();
set_scisvtx_to_gsvtx_nontex();
set_nontex_scis_vtx_yplane();
set_nontex_scis_vtx_xplane();
set_nontex_scis_vtx_zplane();
init_scis_regs();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uliop/src/ul_iop_ee_module.c
// *****************************************************************************

static char* changeToCdReadFilename(char *filename);

UL_IOP_ERROR ulIopModuleInit(char *driver_filename, int dvd_flag, int check_2mb_flag);

UL_IOP_ERROR ulIopModuleSetPath(char *path);

UL_IOP_ERROR ulIopModuleLoad(char *filename, int cmd_size, char *command);

UL_IOP_ERROR ulIopModuleLoadFromMemory(void *module, int size, int cmd_size, char *command);

UL_IOP_ERROR ulIopModuleCheck(char *filename);

int ulIopModuleCheckInit();

int ulIopModuleSetOption(char *buff, Sint8 *fmt);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uliop/src/ul_iop_ee_system.c
// *****************************************************************************

UL_IOP_ERROR ulIopSysLibraryInit();
UL_IOP_ERROR ulIopSysSetDebugMode(int mode);
UL_IOP_ERROR ulIopSysErrorCallBack(void (*error_func)());

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uliop/src/ul_iop_ee_loc_debug.c
// *****************************************************************************

void locIopDbgErrorCallBackInternal(UL_IOP_ERROR error);
void locIopDbgErrorCallBack(UL_IOP_ERROR error);

void locIopDbgPrintf(Sint8 *fmt);

void IopDbgPrintf(Sint8 *fmt);

void locIopDbgScnLocate(int x, int y);
void IopDbgScnLocate(int x, int y);

void locIopDbgScnPrintf(Sint8 *fmt);

void IopDbgScnPrintf(Sint8 *fmt);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_mseq.c
// *****************************************************************************

UL_SND_ERROR ulSndMidiSeqPortOpen(UL_SND_MSEQ_HANDLE *handle);

UL_SND_ERROR ulSndMidiSeqPortClose(UL_SND_MSEQ_HANDLE handle);

UL_SND_ERROR ulSndMidiSeqPortPlay(UL_SND_MSEQ_HANDLE handle, int bank, int block);

UL_SND_ERROR ulSndMidiSeqPortStop(UL_SND_MSEQ_HANDLE handle);

UL_SND_ERROR ulSndMidiSeqPortPause(UL_SND_MSEQ_HANDLE handle);

UL_SND_ERROR ulSndMidiSeqPortContinue(UL_SND_MSEQ_HANDLE handle);

UL_SND_ERROR ulSndMidiSeqPortNoteOff(UL_SND_MSEQ_HANDLE handle);

UL_SND_ERROR ulSndMidiSeqPortSoundOff(UL_SND_MSEQ_HANDLE handle);

UL_SND_ERROR ulSndMidiSeqPortSetVolume(UL_SND_MSEQ_HANDLE handle, Float volume);

UL_SND_ERROR ulSndMidiSeqPortSetChannelVolume(UL_SND_MSEQ_HANDLE handle, int ch, Float volume);

UL_SND_ERROR locSndMidiSeqPortSetChannelMute(UL_SND_MSEQ_HANDLE handle, Uint16 mask);

UL_SND_ERROR ulSndMidiSeqPortSetHSynVolume(UL_SND_MSEQ_HANDLE handle, Float volume);

UL_SND_ERROR ulSndMidiSeqPortSetPanpotAbsolute(UL_SND_MSEQ_HANDLE handle, Float panpot);

UL_SND_ERROR ulSndMidiSeqPortSetTempo(UL_SND_MSEQ_HANDLE handle, Float tempo);

UL_SND_ERROR ulSndMidiSeqPortReset(UL_SND_MSEQ_HANDLE handle);

UL_SND_ERROR ulSndMidiSeqPortIsPlay(UL_SND_MSEQ_HANDLE handle, int *play_flag, int *pause_flag);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_osht.c
// *****************************************************************************

UL_SND_ERROR ulSndOneShotPortOpen(UL_SND_OSHT_HANDLE *handle);

UL_SND_ERROR ulSndOneShotPortClose(UL_SND_OSHT_HANDLE handle);

UL_SND_ERROR ulSndOneShotPortPlay(UL_SND_OSHT_HANDLE handle, int bank, int block, int priority);

UL_SND_ERROR ulSndOneShotPortStop(UL_SND_OSHT_HANDLE handle);

UL_SND_ERROR ulSndOneShotPortSetVolume(UL_SND_OSHT_HANDLE handle, Float volume);

UL_SND_ERROR ulSndOneShotPortSetVolumeAbsolute(UL_SND_OSHT_HANDLE handle, Float volume);

UL_SND_ERROR ulSndOneShotPortSetPanpot(UL_SND_OSHT_HANDLE handle, Float panpot);

UL_SND_ERROR ulSndOneShotPortSetPanpotAbsolute(UL_SND_OSHT_HANDLE handle, Float panpot);

UL_SND_ERROR ulSndOneShotPortSetSpeed(UL_SND_OSHT_HANDLE handle, Float speed);

UL_SND_ERROR ulSndOneShotPortSetFrequency(UL_SND_OSHT_HANDLE handle, Float frequency);

UL_SND_ERROR ulSndOneShotPortIsPlay(UL_SND_OSHT_HANDLE handle, int *flag);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_spu2.c
// *****************************************************************************

UL_SND_ERROR psSndSpuSetBVOL(int core, int vol_l, int vol_r);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_system.c
// *****************************************************************************

Sint32 ulSndSysSetWorkSize(Sint32 hcmd_buf, Sint32 spu_tmp_buf, Sint32 iop_data_buf);

UL_SND_ERROR ulSndSysLibraryInit(void *work);

UL_SND_ERROR ulSndSysDriverInit();

UL_SND_ERROR ulSndSysServer();

int ulSndSysCheckDriverInit();
UL_SND_ERROR ulSndSysErrorCallBack(void (*error_func)());
UL_SND_ERROR ulSndSysSetDebugMode(int mode);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_mbcmp_global.c
// *****************************************************************************

SDE_ERR sdSndSetMasterVol(Sint8 vol);

SDE_ERR sdSndSetPanMode(SDE_PAN_MODE pan_mode);

SDE_ERR sdSndSetFxPrg(Sint8 new_fx_prg_num, Sint8 new_fx_out_num);
SDE_ERR sdSndClearFxPrg();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_mbcmp_mem.c
// *****************************************************************************

SDE_ERR sdMemBlkCreate(SDMEMBLK *handle);
SDE_ERR sdMemBlkDestroy(SDMEMBLK handle);

SDE_ERR sdMemBlkSetPrm(SDMEMBLK handle, Void *src_blk_ptr, Sint32 src_blk_sz, SD_MEMBLK_CALLBACK_FUNC callback_func, Void *callback_first_arg);

SDE_ERR sdMemBlkGetStat(SDMEMBLK handle, SDE_MEMBLK_STAT *stat);

SDE_ERR sdMultiUnitDownload(SDMEMBLK handle);
SDE_ERR sdMltDownload(SDMEMBLK handle);

SDE_ERR sdBankDownload(SDMEMBLK handle, SDE_DATA_TYPE bank_type, Sint8 bank_num);

SDE_ERR sdMemBlkSetTransferMode(SDE_MEMBLK_TRANSFER_MODE transfer_mode);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_mbcmp_midi.c
// *****************************************************************************

SDE_ERR sdMidiOpen(SDMIDI *handle);
SDE_ERR sdMidiOpenPort(SDMIDI *handle);
SDE_ERR sdMidiClose(SDMIDI handle);
SDE_ERR sdMidiClosePort(SDMIDI handle);
SDE_ERR sdMidiSeqPlay(SDMIDI handle, Sint8 bank_num, Sint8 data_num, Sint8 priority);
SDE_ERR sdMidiPlay(SDMIDI handle, Sint8 bank_num, Sint8 data_num, Sint8 priority);
SDE_ERR sdMidiSeqStop(SDMIDI handle);
SDE_ERR sdMidiStop(SDMIDI handle);
SDE_ERR sdMidiSeqContinue(SDMIDI handle);
SDE_ERR sdMidiContinue(SDMIDI handle);
SDE_ERR sdMidiSeqPause(SDMIDI handle);
SDE_ERR sdMidiPause(SDMIDI handle);

SDE_ERR sdMidiSetVol(SDMIDI handle, Sint8 vol, Sint32 fade_time);

SDE_ERR sdMidiSetMuteCh(SDMIDI handle, Uint16 mask);

SDE_ERR sdMidiSeqSetSpeed(SDMIDI handle, Sint16 speed, Sint32 fade_time);

SDE_ERR sdMidiSetSpeed(SDMIDI handle, Sint16 speed, Sint32 fade_time);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_mbcmp_osht.c
// *****************************************************************************

SDE_ERR sdShotOpen(SDSHOT *handle);
SDE_ERR sdShotOpenPort(SDSHOT *handle);
SDE_ERR sdShotClose(SDSHOT handle);
SDE_ERR sdShotClosePort(SDSHOT handle);
SDE_ERR sdShotPlay(SDSHOT handle, Sint8 bank_num, Sint8 data_num, Sint8 priority);
SDE_ERR sdShotStop(SDSHOT handle);

SDE_ERR sdShotSetVol(SDSHOT handle, Sint8 vol, Sint32 fade_time);

SDE_ERR sdShotSetPan(SDSHOT handle, Sint8 pan, Sint32 fade_time);
SDE_ERR sdShotSetPitch(SDSHOT handle, Sint16 pitch, Sint32 fade_time);
SDE_ERR sdShotGetStat(SDSHOT handle, SDS_SHOT_STAT *shot_stat);
SDE_ERR sdShotGetCurAdr(SDSHOT handle, Sint32 *cur_smp_adr);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_mbcmp_sys.c
// *****************************************************************************

SDE_ERR sdSysFinish();
SDE_ERR sdSysServer();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_global.c
// *****************************************************************************

UL_SND_ERROR ulSndSysSetOutputMode(int mode);

UL_SND_ERROR ulSndSysSetMasterVolume(Float vol);

UL_SND_ERROR ulSndSysSetFxParameter(int bank, int block);

UL_SND_ERROR ulSndSysSetFxVolume(int core, Float vol_l, Float vol_r);

UL_SND_ERROR ulSndSysClearFx(int core);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_loc_debug.c
// *****************************************************************************

void locDbgErrorCallBackInternal(UL_SND_ERROR error);
void locDbgErrorCallBack(UL_SND_ERROR error);
void locSndPrintTask(Uint32 *ptr);
void locSndPrintIopReq(UL_PRINT_REQ *req);

void locDbgPrintf(Sint8 *fmt);

void locDbgPrintfLv(int level, Sint8 *fmt);

void DbgPrintf(Sint8 *fmt);

void locDbgScnLocate(int x, int y);
void DbgScnLocate(int x, int y);

void locDbgScnPrintf(Sint8 *fmt);

void DbgScnPrintf(Sint8 *fmt);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_loc_dma.c
// *****************************************************************************

void locSndIopDmaList();

void locSndSpuDmaList();

UL_SND_ERROR locSifDmaRegist(void *data, void *iop_adr, size_t size, Uint32 *id);

int locSifDmaGetRestBuf();

UL_SND_ERROR locSifDmaSend();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_loc_hcmd.c
// *****************************************************************************

UL_SND_ERROR locSndSetHostCommand(UL_HCMD *hcmd);

UL_SND_ERROR locSndSendHostCommandList();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_loc_heap.c
// *****************************************************************************

void* locSndMalloc(size_t size);

void* locSndCalloc(size_t size);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_loc_mem.c
// *****************************************************************************

char* locSndBankDataRegistDma(char *bank, int type, int no, UL_MEMBLK *memblock);

static Sint32 locSndMultiDataRegistDma(void *mlt_data, UL_MEMBLK *memblock);

static void locSndMemTranceMulti(UL_MEMBLK *memblock);

static void locSndMemTranceBank(UL_MEMBLK *memblock);

static void locSndMemBlkListExec();

void locSndMemTrance();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_loc_sub.c
// *****************************************************************************

void locSndSyncDCache(void *adr, size_t size);
void locSndInvalidDCache(void *adr, size_t size);

void locSndMemCopy(void *dis, void *src, size_t size);

void locSndMemCopy4(void *dis, void *src, size_t size);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_mdir.c
// *****************************************************************************

UL_SND_ERROR ulSndMidiDirectPortOpen(UL_SND_MDIR_HANDLE *handle);
UL_SND_ERROR ulSndMidiDirectPortClose(UL_SND_MDIR_HANDLE handle);

UL_SND_ERROR ulSndMidiDirectPortSendMess(UL_SND_MDIR_HANDLE handle, int mess_size, char *mess);

UL_SND_ERROR locMidiSetProgram(int bank_no);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_mem.c
// *****************************************************************************

UL_SND_ERROR ulSndMemBlkCreate(UL_SND_MEMBLK *handle);

UL_SND_ERROR ulSndMemBlkDestroy(UL_SND_MEMBLK handle);

UL_SND_ERROR ulSndMemBlkSetPrm(UL_SND_MEMBLK handle, void *data_adr, size_t data_size, int mode);

UL_SND_ERROR ulSndMemBlkGetStat(UL_SND_MEMBLK handle, int *flag);

UL_SND_ERROR ulSndMemDownloadMulti(UL_SND_MEMBLK handle);

static void getDataSize(UL_MEMBLK *memblk, int *iop_size, int *spu_size);

UL_SND_ERROR ulSndMemDownloadBank(UL_SND_MEMBLK handle, Sint32 type, Sint32 no);

UL_SND_ERROR ulSndMemDownloadWave(UL_SND_MEMBLK handle);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_loc_map.c
// *****************************************************************************

void locSetBankFlag(int flag, int type, int no);
static char* locSndMapMakeGetIopInfo(char *adr, UL_DATA_INFO *iop);
static char* locSndMapMakeGetSpuInfo(char *adr, UL_DATA_INFO *spu);

int locSndMapMakeFromMulti(void *mlt_data);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/vibration/src/libulvib.c
// *****************************************************************************

static void print_error(char *func, char *mes);

static Bool is_tvr_use();

static ulVibTask* task_create(ulVibUnitData *unit);

static void task_delete(ulVibTask *task);

static Bool task_exec(ulVibMixingTask *mixing_task, ulVibTask *task);

static void mixing_init(ulVibMixingTask *task, ulPeriPort port, int slot);

static void mixing_exit(ulVibMixingTask *task);

static void mixing_exec(ulVibMixingTask *task);

Bool ulVibInit(void* (*malloc_func)(), void (*free_func)(), int tvr_max);
Bool ulVibExit();

Bool ulVibInitPort(ulPeriPort port, int slot);

void ulVibServer();

Bool ulVibIsReady(ulPeriPort port, int slot);

void ulVibSearch(UL_VIB_SEARCH_CALLBACK callback, int param);

void ulVibSetEnable(Bool enable);
Bool ulVibIsEnable();
void ulVibSetPause(Bool pause);
Bool ulVibIsPause();

Bool ulVibPlaySimple(ulPeriPort port, int slot, ulVibUnitID id, int count, int power);

Bool ulVibPlayUnit(ulPeriPort port, int slot, ulVibUnitData *unit);

Bool ulVibPlayPack(ulPeriPort port, int slot, ulVibPackData *pack);

Bool ulVibStop(ulPeriPort port, int slot);

Bool ulVibStopAll();

Bool ulVibTvrIsConnect();
int ulVibTvrGetConnectNum();

Bool ulVibTvrSetDualMode(ulVibTvrDualMode mode);

ulVibTvrDualMode ulVibTvrGetDualMode();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/vibration/src/usbtvr.c
// *****************************************************************************

int UsbTvrInit(int max_connect);

void UsbTvrConnectionServer();

int UsbTvrSync(int mode, int *result);

int UsbTvrSetStatus(int no, USBTVRDATA_t *status);

int UsbTvrSetStatusAll(USBTVRDATA_t *status);

int UsbTvrGetInfo(USBTVRINFO_t *info);

int UsbTvrGetLocation(int no, u_char *locations);

Bool UsbTvrIsConnect();
int UsbTvrGetConnectNum();

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/vibration/src/libusbtvr.c
// *****************************************************************************

static int irpc_cl_init();

static void irpc_cl_end();
static void irpc_cl_cb(void *arg);
static int irpc_cl_sync(int mode, int *result);

static int irpc_cl_call(int cmd, u_int *send, int ssize, void *receive, int rsize);

int asciiUsbTvrInit(int max_connect);

int asciiUsbTvrEnd();

int asciiUsbTvrSetStatus(int no, USBTVRDATA_t *status);

int asciiUsbTvrGetInfo(USBTVRINFO_t *info);

int asciiUsbTvrGetLocation(int no, u_char *locations);

int asciiUsbTvrSync(int mode, int *result);

// *****************************************************************************
// FILE -- ../mwsfd.c
// *****************************************************************************

MWSFD_GetLibWorkPtr();
mwPlyLock();
mwPlyUnlock();
mwPlyCalcCompoBufSize();
mwPlyCreateSofdec();
mwSfdDestroy();
mw_sfd_start_ex();
mwSfdStartFname();
mwSfdStartFnameSub();
mwSfdStartMem();
mwSfdStartSj();
mwSfdStopDec();
mwSfdStop();
mwSfdGetStat();
mwSfdSetErrCode();
mwPlySetAsync();
mwPlySetSyncMode();
mwPlyGetInputSj();
mwPlyEntryFxCb();
mwPlyLinkStm();
mwPlyGetNumDecPool();
mwPlyGetNumTotalDec();
mwPlyGetNumTotalSkip();
mwPlyGetNumIbufRoom();
mwlSfdExecDecSvrPrep();
mwl_sfd_dmy();
mwlSfdExecDecSvrPlaying();
mwSfdExecDecSvrHndl();
mwSfdExecDecServer();
MWSFD_ExecDecServer();
mwSfdExecServer();
mwSfdExecSvrHndl();
MWSFD_ExecSvrHndl();
mwSfdVsync();
MWSFD_Vsync();
mwSfdGetTime();
mwSfdPause();
mwPlySetFastHalfpel();
mwPlySetAdjustY16();
mwPlySetMat();
mwSfdSetOutVol();
mwSfdGetOutVol();
mwSfdSetOutPan();
mwSfdGetOutPan();
mwPlySetIpicOnly();
mwPlySetNeverSkip();
mwPlyEntryDecExecCb();
mwPlyEntryDecSkipCb();
mwPlyStartAfs();

// *****************************************************************************
// FILE -- ../mwsfdfrm.c
// *****************************************************************************

mwPlyGetCurFrm();
mwl_convFrmInfFromSFD();
mwl_convBufFmtFromSFD();
mwl_convPtypeFromSFD();
mwPlyCalcYccPlane();
mwl_convFrmInfToSFD();
mwl_convBufFmtToSFD();
mwl_convPtypeToSFD();
mwl_convYccPlaneFromSFD();
mwPlyRelCurFrm();
mwPlyIsNextFrmReady();

// *****************************************************************************
// FILE -- ../mwsfdifx.c
// *****************************************************************************

mwlSfdSleepDecSvr();
mwSfdTrapLscError();
mwPlyInitSfdFx();
mwsfd_InitLibWork();
mwPlyResetSfdFx();
mwPlyFinishSfdFx();

// *****************************************************************************
// FILE -- ../mwsfdrna.c
// *****************************************************************************

MWSFRNA_SetOutVol();
MWSFRNA_GetOutVol();
MWSFRNA_SetOutPan();
MWSFRNA_GetOutPan();

// *****************************************************************************
// FILE -- ../mwsfdrsc.c
// *****************************************************************************

mwPlySwitchToIdle();
mwPlySaveRsc();
mwPlyRestoreRsc();

// *****************************************************************************
// FILE -- ../mwrscps2.c
// *****************************************************************************

MWRSC_SaveRsc();
MWRSC_RestoreRsc();
mwrsc_WaitSprDmaEnd();
MWSPR_SaveSprMem();
MWSPR_RestoreSprMem();
MWDMA_WaitEnd();
MWDMA_GetStat();

// *****************************************************************************
// FILE -- ../mwsfdsl.c
// *****************************************************************************

mwPlyEntryFname();
mwPlyStartSeamless();
mwPlySetLpFlg();
mwPlyStartFnameLp();
mwPlyReleaseSeamless();
mwPlyGetNumSlFiles();
mwPlyEntryAfs();
mwPlyStartAfsLp();
mwPlyGetSlFname();
MWSFLSC_GetStat();
MWSFLSC_GetStmId();
MWSFLSC_GetStmFname();
MWSFLSC_GetStmStat();
MWSFLSC_GetStmRdSct();

// *****************************************************************************
// FILE -- ../mwsfdsub.c
// *****************************************************************************

mwPlySfdCalcWorkStmBuf();
mwPlySfdCalcFrmRes();
mwPlySfdCalcWorkFrmBuf();
mwPlyCalcWorkSofdec();
mwPlyCalcWorkCompo();
mwPlyCalcWorkSfd();
mwPlyCalcWorkCprmSfd();
mwPlySfdInit();
mwPlySfdFinish();
mwPlySetSupplySj();
mwPlySfdCreate();
mwPlySfdDestroy();
mwPlySfdSetCond();
mwPlySfdStandby();
mwPlySfdStart();
mwPlySfdStop();
mwPlySfdGetWritePtr();
mwPlySfdAddWritePtr();
mwPlySfdIsEndDec();
mwPlySfdErrFunc();
mwPlySfdCreateSj();
mwPlySetAudioSw();
mwPlyGetSfdHn();
mwPlyGetNumDropFrm();
mwPlySetBpicSkip();
MWSFD_GetPlyInf();
MWSFD_GetMvInf();
MWSFD_SetCond();
MWSFD_GetStmHn();
MWSFD_IsPause();
MWSFD_TermSupply();

// *****************************************************************************
// FILE -- ../mwsfdsvm.c
// *****************************************************************************

MWSFDMNG_Init();
MWSFDMNG_Finish();
MWSFDMNG_CreateThd();
MWSFDMNG_DestroyThd();
MWSFDMNG_EntryVfunc();
MWSFDMNG_DeleteVfunc();
MWSFDMNG_EntryIdleFunc();
MWSFDMNG_DeleteIdleFunc();
MWSFDMNG_EntryMainFunc();
MWSFDMNG_DeleteMainFunc();
MWSFDMNG_SuspendIdleThd();
MWSFDMNG_ResumeIdleThd();
MWSFDMNG_Lock();
MWSFDMNG_Unlock();
MWSFDMNG_Error();
mwPlyExecServer();
MWSFDMNG_ExecMainServer();
MWSFDMNG_ExecIdleServer();
MWSFDMNG_GotoIdleBorder();
mwPlyEntryErrFn();
mwl_callErrCb();

// *****************************************************************************
// FILE -- ../mwstm.c
// *****************************************************************************

MWSTM_Init();
MWSTM_InitStatic();
MWSTM_Finish();
MWSTM_FinishStatic();
MWSTM_OpenFname();
MWSTM_OpenFnameEx();
MWSTM_Close();
MWSTM_SetRdSct();
MWSTM_SetTrSct();
MWSTM_SeekSct();
MWSTM_Start();
MWSTM_Stop();
MWSTM_GetStat();
MWSTM_IsFsStatErr();
MWSTM_ExecServer();
MWSTM_SetFlowLimit();
MWSTM_OpenFileRangeExRt();

// *****************************************************************************
// FILE -- ../sfd_adxt.c
// *****************************************************************************

SFADXT_IsHeader();
SFADXT_IsEndcode();
SFD_SetAdxtPara();
static SFADXT_Init();
static SFADXT_Finish();
static sfadxt_HeadDecCallBack();
static SFADXT_ExecServer();
static sfadxt_ExecServerSub();
static sfadxt_SupplyData();
static sfadxt_GetFreeChunk();
static sfadxt_PutDataChunk();
static sfadxt_CopyData();
static sfadxt_AdjustSync();
static sfadxt_AdjDiscard();
static sfadxt_InsertSilence();
static sfadxt_ExcludeHdr();
static sfadxt_SearchAlign();
static sfadxt_ExcludeSilence();
static sfadxt_GetNchSfreq();
static sfadxt_ChkPrepFlg();
static sfadxt_IsPrepEnd();
static sfadxt_ChkTermFlg();
static sfadxt_RingGetRead();
static sfadxt_RingAddRead();
static sfadxt_GetTermSrc();
static sfadxt_GetTermDst();
static sfadxt_SetTermDst();
static sfadxt_SetAdxtHd();
static sfadxt_IsEndDecinfo();
static sfadxt_SetSvrFreq();
static SFADXT_Create();
static sfadxt_InitInf();
static sfadxt_CreateEx();
static sfadxt_SetTimeFn();
static sfadxt_GetTime();
static SFADXT_Destroy();
static sfadxt_DestroySub();
static SFADXT_Standby();
static SFADXT_Start();
static SFADXT_Stop();
static SFADXT_Pause();
static sfadxt_WaitStart();
static sfadxt_WtPause();
static SFADXT_GetWrite();
static SFADXT_AddWrite();
static SFADXT_GetRead();
static SFADXT_AddRead();
static SFADXT_Seek();
static sfadxt_GetHd();

// *****************************************************************************
// FILE -- ../sfd_aoap.c
// *****************************************************************************

static SFAOAP_Init();
static SFAOAP_Finish();
static SFAOAP_ExecServer();
static sfaoap_OutputServer();
static sfaoap_ChkPrepFlg();
static sfaoap_ChkTermFlg();
static SFAOAP_Create();
static SFAOAP_Destroy();
static SFAOAP_Standby();
static SFAOAP_Start();
static SFAOAP_Stop();
static SFAOAP_Pause();
static SFAOAP_GetWrite();
static SFAOAP_AddWrite();
static SFAOAP_GetRead();
static SFAOAP_AddRead();
static SFAOAP_Seek();

// *****************************************************************************
// FILE -- ../sfd_buf.c
// *****************************************************************************

SFBUF_Init();
SFBUF_Finish();
SFBUF_InitHn();
static sfbuf_MakeBufPtr();
static sfbuf_InitRingSj();
static sfbuf_CreateSj();
SFBUF_DestroySj();
static sfbuf_DestroySjSub();
static sfbuf_InitVfrmBuf();
static sfbuf_InitAringBuf();
SFBUF_FixAringBuf();
static sfbuf_InitUoSjBuf();
static sfbuf_InitBufData();
static sfbuf_InitUoSj();
SFBUF_SetSupplySj();
static sfbuf_ChkSupSj();
static sfbuf_SetSupplySjSub();
static sfbuf_SetSupSj();
static sfbuf_InitConti();
SFBUF_SetUoch();
SFBUF_GetUoch();
SFBUF_GetRingSj();
SFBUF_RingGetWrite();
SFBUF_RingGetRead();
static sfbuf_RingGetSub();
SFBUF_RingAddWrite();
SFBUF_RingAddRead();
static sfbuf_RingAddSub();
static sfbuf_ResetConti();
static sfbuf_PeekChunk();
static sfbuf_MoveChunk();
SFBUF_RingGetDlm();
SFBUF_RingSetDlm();
SFBUF_GetRingBufSiz();
SFBUF_GetRTot();
SFBUF_GetWTot();
SFBUF_AringGetWrite();
SFBUF_AringAddWrite();
SFBUF_AringGetRead();
SFBUF_AringAddRead();
SFBUF_VfrmGetWrite();
SFBUF_VfrmAddWrite();
SFBUF_VfrmGetRead();
SFBUF_VfrmAddRead();
SFBUF_SetPrepFlg();
SFBUF_GetPrepFlg();
SFBUF_SetTermFlg();
SFBUF_GetTermFlg();

// *****************************************************************************
// FILE -- ../sfd_con.c
// *****************************************************************************

SFD_SetConcatPlay();
SFCON_IsEndcodeSkip();
SFCON_IsSystemEndcodeSkip();
SFCON_IsVideoEndcodeSkip();
SFCON_UpdateConcatTime();
SFCON_WriteTotSmplQue();
SFCON_ReadTotSmplQue();
SFD_GetTimePerFile();

// *****************************************************************************
// FILE -- ../sfd_hds.c
// *****************************************************************************

SFHDS_Init();
SFHDS_Finish();
SFHDS_InitFhd();
SFHDS_FinishFhd();
SFHDS_SetHdr();
static sfhds_IsPrvate2PketStart();
static sfhds_ReadLong();
SFHDS_IsSfdHeader();
static sfhds_SetHdrRaw();
static sfhds_SetHdrSeek();
static sfhds_CopyFhd();
SFHDS_ReprocessHdr();
static sfhds_GetHd();
SFHDS_ProcessHdr();
static sfhds_DoProcessHdr();
static sfhds_AnlyHead();
static sfhds_AnlySys();
static sfhds_AnlyUsedStmid();
static sfhds_AnlyAudio();
static sfhds_AnlyVideo();
static sfhds_CallN();
static sfhds_CallS();
SFHDS_GetPketLenField();
SFHDS_GetMuxVerNum();
SFHDS_GetColType();

// *****************************************************************************
// FILE -- ../sfd_lib.c
// *****************************************************************************

SFD_GetVersionStr();
SFD_Init();
static sflib_InitLibWork();
SFD_Finish();
static sflib_InitErr();
SFLIB_InitErrInf();
SFLIB_SetErr();
static sflib_SetErrSub();
SFD_SetErrFn();
static sflib_SetErrFnSub();
SFD_GetErrInf();
SFLIB_CheckHn();
static sflib_InitBaseLib();
static sflib_FinishBaseLib();
static sflib_InitSub();
static sflib_FinishSub();
static sflib_InitCs();
static sflib_FinishCs();
SFLIB_LockCs();
SFLIB_UnlockCs();

// *****************************************************************************
// FILE -- ../sfd_mem.c
// *****************************************************************************

static SFMEM_Init();
static SFMEM_Finish();
static SFMEM_ExecServer();
static SFMEM_Create();
static SFMEM_Destroy();
static SFMEM_Standby();
static SFMEM_Start();
static SFMEM_Stop();
static SFMEM_Pause();
static SFMEM_GetWrite();
static SFMEM_AddWrite();
static SFMEM_GetRead();
static SFMEM_AddRead();
static SFMEM_Seek();

// *****************************************************************************
// FILE -- ../sfd_mps.c
// *****************************************************************************

static SFMPS_Init();
static sfmps_ChkFatal();
static SFMPS_Finish();
static SFMPS_ExecServer();
static sfmps_ExecServerSub();
static sfmps_DecodeSomeUnit();
static sfmps_RingGetRead();
static sfmps_RingAddRead();
static sfmps_DecodeOneUnit();
static sfmps_SkipNext();
static sfmps_IsZero();
static sfmps_IsEndOfRingBuf();
static sfmps_CopyPketData();
static sfmps_CopyAudio();
static sfmps_CopyVideo();
static sfmps_AutoVchPlay();
static sfmps_CopyPrvate();
static sfmps_CopyUsrSj();
static sfmps_CopySj();
static sfmps_ExecCopySj();
static sfmps_CopyPadding();
static sfmps_CopyDstBuft();
static sfmps_SetTermDst();
static sfmps_GetTermDst();
static sfmps_Concat();
static sfmps_ChkSupply();
static sfmps_IsEffectiveEndcode();
static sfmps_ProcPrep();
static sfmps_ChkPrepFlg();
static sfmps_GetPrepDst();
static sfmps_SetPrepDst();
static sfmps_IsPrepEnd();
static sfmps_AdjustAvPlay();
static sfmps_GetStmNum();
static sfmps_SetMvInf();
static sfmps_SetMpsHd();
static sfmps_SetMpsRaw();
static SFMPS_Create();
static sfmps_InitInf();
static sfmps_ErrFn();
static SFMPS_Destroy();
static sfmps_DestroySub();
static SFMPS_Standby();
static SFMPS_Start();
static SFMPS_Stop();
static SFMPS_Pause();
static SFMPS_GetWrite();
static SFMPS_AddWrite();
static SFMPS_GetRead();
static SFMPS_AddRead();
static SFMPS_Seek();
static sfmps_SetCustomPketLen();
static sfmps_ReprocessHdr();
static sfmps_GetHd();
SFMPS_GetConcatCnt();

// *****************************************************************************
// FILE -- ../sfd_mpv.c
// *****************************************************************************

SFD_SetMpvPara();
SFD_MakeRfbInfo();
SFD_CalcYccPlane();
SFD_SetMpvCond();
SFD_GetNumFrm();
SFD_IsNextFrmReady();
static SFMPV_Init();
static sfmpv_ChkFatal();
static SFMPV_Finish();
static SFMPV_ExecServer();
static sfmpv_ExecServerSub();
static sfmpv_SetCondY16();
static sfmpv_GetTermDst();
static sfmpv_ChkPrepFlg();
static sfmpv_IsPrepEnd();
static sfmpv_IsPrepFrmEnough();
static sfmpv_IsVbvEnough();
static sfmpv_FixedStartTtu();
static sfmpv_ChkTermFlg();
static sfmpv_SetTermDst();
static sfmpv_DecodeSomePic();
static sfmpv_RingGetRead();
static sfmpv_CopyFlap();
static sfmpv_SearchSafeDlm();
static sfmpv_RingAddRead();
static sfmpv_DecodeOneUnit();
static sfmpv_GetCurDelim();
static sfmpv_FixedForSeek();
static sfmpv_Concat();
static sfmpv_ConcatSub();
static sfmpv_CalcVideoTotTime();
static sfmpv_CalcAudioTotTime();
static sfmpv_DiscardSec();
static sfmpv_IsTerm();
static sfmpv_GetTermSrc();
static sfmpv_ChkMpvErr();
static sfmpv_DecodePicAtr();
static sfmpv_ReadPtsQue();
static sfmpv_InitComplementPts();
static sfmpv_ComplementPts();
static sfmpv_Nfrm2Pts();
static sfmpv_ReformTc();
static sfmpv_DetectTcErr();
static sfmpv_DoReformTc();
static sfmpv_Pts2Tc();
static sfmpv_NextTc();
static sfmpv_SetHeadTtu();
static sfmpv_SetDecTtu();
static sfmpv_ReadTcode();
static sfmpv_FirstPicAtr();
static sfmpv_SetMpvHd();
static sfmpv_SetMvInf();
static sfmpv_ChkBufSiz();
static sfmpv_IsConcatTimeFix();
static sfmpv_IsSkip();
static sfmpv_IsDefect();
static sfmpv_UpdateDefect();
static sfmpv_IsSeekSkip();
static sfmpv_IsPtypeSkip();
static sfmpv_IsEmptyBpic();
static sfmpv_IsLate();
static sfmpv_GetDtime();
static sfmpv_SkipFrm();
static sfmpv_SetSkipTtu();
static sfmpv_DecodeFrm();
static sfmpv_SetFrmPara();
static sfmpv_SetStartTtu();
static sfmpv_SetFrmTime();
static sfmpv_GoDdelim();
static sfmpv_GoDdelimSub();
static SFMPV_Create();
static sfmpv_InitInf();
static sfmpv_InitFrmObj();
static sfmpv_InitPicAtr();
static sfmpv_ErrFn();
static SFMPV_Destroy();
static sfmpv_DestroySub();
static SFMPV_Standby();
static SFMPV_Start();
static SFMPV_Stop();
static SFMPV_Pause();
static SFMPV_GetWrite();
static SFMPV_AddWrite();
static SFMPV_GetRead();
static sfmpv_SetFrmInf();
static SFMPV_AddRead();
static sfmpv_AddReadSub();
static SFMPV_Seek();
static sfmpv_ReprocessShc();
static sfmpv_GetHd();

// *****************************************************************************
// FILE -- ../sfd_mpvd.c
// *****************************************************************************

SFMPVD_IsShc();
static sfmpvd_ReadParPr();
static sfmpvd_ReadBrMb();

// *****************************************************************************
// FILE -- ../sfd_mpvf.c
// *****************************************************************************

SFMPVF_TermDec();
SFMPVF_IsTermDec();
SFMPVF_SetGopStat();
SFMPVF_GetNumFrm();
SFMPVF_AllocFrm();
SFMPVF_FreeFrm();
SFMPVF_StbyFrm();
SFMPVF_RefStbyFrm();
SFMPVF_EndDrawFrm();
SFMPVF_EndRefFrm();
SFMPVF_HoldFrm();
SFMPVF_IsNextFrmReady();
static sfmpvf_IsChkFirst();

// *****************************************************************************
// FILE -- ../sfd_mpvp.c
// *****************************************************************************

SFD_SetSceMpeg();
SFMPVP_IsSceMpegUsed();
SFMPVP_Init();
SFMPVP_GetViBufInf();
SFMPVP_Create();
SFD_GetSceErrMessage();
static mpegError();
static sfmpvp_PutVibuf();
static mpegNodata();
static mpegStopDMA();
static mpegRestartDMA();
SFMPVP_Destroy();
SFMPVP_Put();
SFMPVP_Unput();
SFMPVP_Flush();
static copy2area();
SFMPVP_DecodeFrm();
SFMPVP_GetFrameCount();
SFMPVP_SearchPsc();
static sfmpvp_ConsumePsc();
SFMPVP_IsPscEnough();

// *****************************************************************************
// FILE -- ../sfd_vib.c
// *****************************************************************************

static getFIFOindex();
static setD3_CHCR();
static setD4_CHCR();
static scTag2();
static viBufCreate();
static viBufReset();
static viBufBeginPut();
static viBufEndPut();
static viBufUnput();
static viBufAddDMA();
static viBufStopDMA();
static viBufRestartDMA();
static viBufDelete();
static viBufCount();
static viBufFlush();

// *****************************************************************************
// FILE -- ../sfd_pl2.c
// *****************************************************************************

SFD_GetPaStat();
SFD_Pause();
static sfpl2_Pause();
static sfpl2_TrPause();
SFD_Standby();
SFPL2_Standby();
SFD_SetSpeed();
SFD_SetAudioCh();
SFD_SetVideoCh();

// *****************************************************************************
// FILE -- ../sfd_ply.c
// *****************************************************************************

SFPLY_Init();
static sfply_ChkCondDfl();
SFD_VbIn();
SFPLY_IsPeriodVbin();
SFD_VbOut();
SFD_IsHnSvrWait();
SFD_IsSvrWait();
SFD_ExecOne();
SFD_ExecServer();
static sfply_ExecOne();
static sfply_ExecOneSub();
static sfply_TrExecServer();
static sfply_StatStop();
static sfply_StatPrep();
static sfply_IsPrepEnd();
static sfply_AdjustPrepEnd();
static sfply_FixAvPlay();
static sfply_AdjustSyncMode();
static sfply_AdjustEtrg();
static sfply_StatStby();
static sfply_StatPlay();
static sfply_StatFin();
static sfply_IsStartSync();
static sfply_ChkFin();
static sfply_IsEtime();
static sfply_IsEtrg();
static sfply_IsStagnant();
static sfply_IsPlayTimeAutoStop();
static sfply_Fin();
SFPLY_DecideSvrStat();
SFD_Create();
static sfply_ChkCrePara();
static sfply_SearchFreeHn();
static sfply_InitHn();
static sfply_InitMvInf();
static sfply_InitPlyInf();
static sfply_InitTmrInf();
SFPLY_AddDecPic();
SFPLY_AddSkipPic();
static sfply_TrCreate();
SFD_Destroy();
static sfply_TrDestroy();
SFD_Start();
static sfply_Start();
static sfply_TrStart();
SFD_Stop();
SFPLY_Stop();
static sfply_TrStop();
SFD_GetWritePtr();
SFD_AddWritePtr();
SFD_TermSupply();
SFD_GetFrm();
SFD_RelFrm();
SFD_SetSupplySj();

// *****************************************************************************
// FILE -- ../sfd_pts.c
// *****************************************************************************

SFPTS_InitPtsQue();
SFD_SetVideoPts();
static sfpts_SetupPtsQue();
SFPTS_WritePtsQue();
static sfpts_WritePtsQueSub();
SFPTS_ReadPtsQue();
static sfpts_ReadPtsQueSub();
static sfpts_SearchPtsQue();

// *****************************************************************************
// FILE -- ../sfd_rna.c
// *****************************************************************************

SFRNA_SetSpeed();

// *****************************************************************************
// FILE -- ../sfd_see.c
// *****************************************************************************

SFSEE_InitHn();
SFD_InitSeek();
static sfsee_InitSeekInf();
static sfsee_InitHeadInf();
SFD_EntrySeek();
SFD_SetSeekPosTbl();
SFD_StartHeadAnaly();
SFD_IsHeadAnalyEnd();
static sfsee_IsHeadAnalyEnd();
SFSEE_FixAvPlay();
SFSEE_ExecServer();
static sfsee_ExecHeadAnaly();
static sfsee_IsAudioAnalyzing();
static sfsee_IsVideoAnalyzing();
static sfsee_IsMpsStream();
SFD_IsSeekAble();
static sfsee_IsSeekAble();
SFD_CnvTimeToPos();
static sfsee_CnvTimeToPos();
static sfsee_SearchTimeToPos();
SFD_CnvPosToTime();
static sfsee_CnvPosToTime();
static sfsee_SearchPosToTime();
SFD_Seek();
SFD_SetFileSize();
SFD_SetTotTime();
SFD_SetByteRate();
SFD_SetSeekPos();
static sfsee_ExecFinAnaly();
static sfsee_GetInSjReadTot();
static sfsee_UpdateEByteRate();

// *****************************************************************************
// FILE -- ../sfd_set.c
// *****************************************************************************

SFD_GetSvrStat();
SFD_GetHnStat();
SFD_SetCond();
static sfset_SetCondAll();
SFSET_SetCond();
static sfset_IsCondValid();
SFD_GetCond();
SFSET_GetCond();
SFD_GetMvInf();
SFD_GetPlyInf();
SFD_GetTmrInf();
SFD_GetTrHn();
SFSET_GetTrHn();

// *****************************************************************************
// FILE -- ../sfd_tim.c
// *****************************************************************************

SFTIM_Init();
SFTIM_Finish();
SFTIM_InitHn();
SFTIM_InitTtu();
SFTIM_InitTcode();
SFTIM_UpdateItime();
SFTIM_GetNextItime();
SFTIM_VbIn();
static sftim_HnVbIn();
static sftim_CntupHnVbIn();
static sftim_IsTimeIncre();
static sftim_IsShortSupply();
static sftim_IsVbinStIncre();
static sftim_ResetVtimeTmr();
static sftim_GetVtimeTmr();
SFTIM_IsStagnant();
static sftim_IsAudioStagnant();
SFTIM_GetAudioStartSample();
SFTIM_GetVideoStartSample();
SFTIM_SetStartTime();
SFD_GetTime();
SFTIM_GetTimeSub();
SFD_GetTimeAfterSeek();
static sfdtim_GetTimeAfterSeek();
SFTIM_GetTime();
SFD_GetNowTime();
SFTIM_GetNowTime();
static sftim_GetTimeNone();
static sftim_GetTimeVsync();
static sftim_GetTimeUfrm();
SFTIM_ChkRegularTime();
SFD_OutUsrFrmSync();
SFD_SetUsrIsSkipFn();
SFD_CmpTime();
SFD_SetUsrTimeFn();
SFTIM_SetTimeFn();
SFTIM_Tc2Time();
static sftim_Tc2TimeN();
static sftim_Tc2Time23N();
static sftim_Tc2Time29N();
static sftim_Tc2Time59N();
static sftim_Tc2Time23D();
static sftim_Tc2Time29D();
static sftim_Tc2Time59D();
SFTIM_Pause();
static sftim_AddHnVbIn();
SFTIM_GetTimeOneFrmVideo();
SFD_GetPlayFps();
SFTIM_IsGetFrmTime();
SFTIM_IsGetFrmTimeTunit();
SFD_OutDispSync();
SFD_IsDrawTime();
SFTIM_IsExecTime();
static sftim_IsTakeOffExecTime();
static sftim_IsGrExecTime();
SFTIM_IsVideoTerm();
SFTIM_SetSpeed();
SFTIM_GetSpeed();

// *****************************************************************************
// FILE -- ../sfd_tmr.c
// *****************************************************************************

SFTMR_InitTsum();
SFTMR_AddTsum();

// *****************************************************************************
// FILE -- ../sfd_trn.c
// *****************************************************************************

SFTRN_Init();
SFTRN_Finish();
static sftrn_CallTrEntry();
SFTRN_InitHn();
static sftrn_InitTrData();
static sftrn_BuildAll();
static sftrn_BuildSystem();
static sftrn_BuildVideo();
static sftrn_BuildAudio();
static sftrn_BuildUsr();
static sftrn_ConnTrnBuf0();
static sftrn_ConnTrnBufV();
static sftrn_ConnTrnBufA();
static sftrn_ConnTrnBufU();
static sftrn_ConnTrnBuf();
static sftrn_ConnBufTrn();
SFTRN_CallTrSetup();
SFTRN_CallTrtTrif();
SFTRN_SetPrepFlg();
SFTRN_GetPrepFlg();
SFTRN_SetTermFlg();
SFTRN_GetTermFlg();
SFTRN_IsSetup();

// *****************************************************************************
// FILE -- ../sfd_uo.c
// *****************************************************************************

SFD_SetUsrSj();
static SFUO_Init();
static SFUO_Finish();
static SFUO_ExecServer();
static sfuo_ChkTermFlg();
static sfuo_IsTerm();
static sfuo_ChkPrepFlg();
static sfuo_IsPrepEnd();
static sfuo_OutputServer();
static SFUO_Create();
static sfuo_InitInf();
static sfuo_InitUoch();
static sfuo_SetUoch();
static SFUO_Destroy();
static SFUO_Standby();
static SFUO_Start();
static SFUO_Stop();
static SFUO_Pause();
static SFUO_GetWrite();
static SFUO_AddWrite();
static SFUO_GetRead();
static SFUO_AddRead();
static SFUO_Seek();

// *****************************************************************************
// FILE -- ../sfd_vom.c
// *****************************************************************************

static SFVOM_Init();
static SFVOM_Finish();
static SFVOM_ExecServer();
static sfvom_ChkTermFlg();
static sfvom_IsTerm();
static sfvom_ChkPrepFlg();
static sfvom_IsPrepEnd();
static sfvom_OutputServer();
static SFVOM_Create();
static SFVOM_Destroy();
static SFVOM_Standby();
static SFVOM_Start();
static SFVOM_Stop();
static SFVOM_Pause();
static SFVOM_GetWrite();
static SFVOM_AddWrite();
static SFVOM_GetRead();
static SFVOM_AddRead();
static SFVOM_Seek();

// *****************************************************************************
// FILE -- ../sfh_main.c
// *****************************************************************************

SFH_GetSbverStr();
SFH_Init();
SFH_Finish();
SFH_Create();
SFH_Destroy();
static clearObjInf();
static initObjInf();
static initSfhObj();
static setHnCreate();
static initLibWork();
static isFreeObj();
static isEffectiveVer();
static isEffectiveObj();
SFH_IsSfdHeader();
SFH_IsExistStmId();
SFH_IsEffFtrInf();
static searchStmId();
SFH_AnlySfdFname();
SFH_AnlySfdTimStmp();
SFH_AnlyHdrToolInf();
SFH_AnlyHdrToolVer();
SFH_AnalyHdrComment();
SFH_AnlyHdrSiz();
SFH_AnlyPackType();
SFH_AnlyPketSizLen();
SFH_AnlyPackSiz();
static getToolVer();
static convAsciiToDigit();
SFH_AnlyNumElemTot();
SFH_AnlyNumElemAud();
SFH_AnlyNumElemVid();
SFH_AnlyNumElemPrv();
SFH_AnlyByteRate();
SFH_AnlyMaxPlyLenAud();
SFH_AnlyMaxPlyLenVid();
SFH_AnlyMaxFrmNum();
SFH_AnlyElemFname();
SFH_AnlyElemTimStmp();
static getElemInfPtr();
SFH_AnlyElemCodecAud();
SFH_AnlyElemLayer();
SFH_AnlyElemChNum();
SFH_AnlyElemSmpHz();
SFH_AnlyElemCodecVid();
SFH_AnlyElemBitRate();
SFH_AnlyElemPicSz();
SFH_AnlyElemPicRate();
SFH_AnlyFtrColType();
SFH_AnlyFtrPicType();
SFH_AnlyFtrFixFlg();
SFH_AnlyFtrShcFixFlg();
SFH_AnlyFtrExpand();
SFH_AnlyFtrGopN();
SFH_AnlyFtrGopM();
static getPicRate();
static isEnableAudFtr();
static isEnableVidFtr();
static chkStmId();

// *****************************************************************************
// FILE -- ../uty_tmr.c
// *****************************************************************************

UTY_GetTmr();
UTY_GetTmrUnit();
UTY_TmrToUsec();
UTY_TmrToMsec();
UTY_TmrToSec();
UTY_InitTsum();
UTY_AddTsum();

// *****************************************************************************
// FILE -- ../cmptime.c
// *****************************************************************************

UTY_CmpTime();

// *****************************************************************************
// FILE -- ../mcp_not.c
// *****************************************************************************

MEM_Copy();
MEM_Copy4();
MEM_Copy8();
MEM_Copy32();
MEM_CopySq();
MEM_CopySq4();
MEM_CopySq8();
MEM_CopySq32();

// *****************************************************************************
// FILE -- ../memsetd.c
// *****************************************************************************

UTY_MemsetDword();

// *****************************************************************************
// FILE -- ../mps_dec.c
// *****************************************************************************

MPSDEC_Init();
MPSDEC_Finish();
MPS_SetPketLenField();
MPS_DecHd();
static mpsdec_DecOneHd();
static mpsdec_DecPackHd();
static mpsdec_DecSysHd();
static mpsdec_DecPketHd();

// *****************************************************************************
// FILE -- ../mps_del.c
// *****************************************************************************

MPS_CheckDelim();
MPSDEL_CheckDelim();

// *****************************************************************************
// FILE -- ../mps_get.c
// *****************************************************************************

MPSGET_Init();
MPSGET_Finish();
MPS_GetPackHd();
MPS_GetSysHd();
MPS_GetLastSysHd();
MPS_GetPketHd();

// *****************************************************************************
// FILE -- ../mps_lib.c
// *****************************************************************************

MPS_GetVersionStr();
MPS_Init();
static mpslib_InitLibWork();
MPS_Finish();
static mpslib_InitErr();
MPSLIB_InitErrInf();
MPSLIB_SetErr();
static mpslib_SetErrSub();
MPS_SetErrFn();
static mpslib_SetErrFnSub();
MPS_GetErrInf();
MPSLIB_CheckHn();
MPS_Create();
static mpslib_SearchFreeHn();
static mpslib_InitHn();
static mpslib_InitPack();
static mpslib_InitSys();
static mpslib_InitPket();
MPS_Destroy();

// *****************************************************************************
// FILE -- ../mpv_deli.c
// *****************************************************************************

MPV_CheckDelim();
MPV_BsearchDelim();
MPV_SearchDelim();
MPV_CopyStm();

// *****************************************************************************
// FILE -- ../mpv_emp.c
// *****************************************************************************

MPV_IsEmptyBpic();

// *****************************************************************************
// FILE -- ../mpv_err.c
// *****************************************************************************

MPVERR_Init();
MPVERR_InitErrInf();
MPV_SetErrFunc();
MPV_GetErrInf();
MPVERR_SetCode();
static mpverr_SetCodeSub();

// *****************************************************************************
// FILE -- ../mpv_frm.c
// *****************************************************************************

MPV_DecodeFrm();
MPV_SkipFrm();
MPVFRM_Init();

// *****************************************************************************
// FILE -- ../mpv_get.c
// *****************************************************************************

MPV_GetPicAtr();
MPV_GetBitRate();
MPV_GetVbvBufSiz();
MPV_GetLinkFlg();

// *****************************************************************************
// FILE -- ../mpv_hdec.c
// *****************************************************************************

MPV_DecodePicAtr();
static mpvhdec_DecShc();
static mpvhdec_InitIqm();
static mpvhdec_InitNqm();
static mpvhdec_InitMbAdr2Pos();
static mpvhdec_DecGsc();
static mpvhdec_DecPsc();
static mpvhdec_GoNextLayer();
MPVHDEC_GoNextDelim();
MPVHDEC_DecPicture();
static mpvhdec_Recover();
static mpvhdec_DecSlice();

// *****************************************************************************
// FILE -- ../mpv_lib.c
// *****************************************************************************

MPV_GetVersionStr();
MPV_Init();
static mpvlib_ChkFatal();
static mpvlib_ChkCacheMode();
MPVLIB_ConvIix();
MPVLIB_ConvOix();
static mpvlib_InitObjTbl();
static mpvlib_InitObj();
static mpvlib_InitUseLib();
static mpvlib_InitWork();
static mpvlib_InitPicAtr();
MPV_Finish();
MPV_Create();
static mpvlib_SearchFreeHn();
static mpvlib_InitHn();
static mpvlib_InitDctPa();
MPV_GetDctCnt();
MPV_Destroy();
static mpvlib_AllocLc();
static mpvlib_FreeLc();
MPV_SetCond();
static mpvlib_SetCondAll();
MPVLIB_CheckHn();

// *****************************************************************************
// FILE -- ../mpv_umc.c
// *****************************************************************************

MPVUMC_InitOutRfb();
MPVUMC_Intra();
static mpvumc_OutputIntra6blk();
MPVUMC_Forward();
MPVUMC_Backward();
MPVUMC_BiDirect();
static mpvumc_OneReadMb();
static mpvumc_OneMakeMb();
static mpvumc_BiMakeMb();
MPVUMC_PpicSkipped();
static mpvumc_PpicSkipMb();
MPVUMC_BpicSkipped();
static mpvumc_CalcOfs();

// *****************************************************************************
// FILE -- ../mpv_vlc.c
// *****************************************************************************

MPVVLC_IsVlcSizErr();
MPVVLC_Init();
mpvvlc_InitMbai();
mpvvlc_InitMbaiIpic();
mpvvlc_InitMbaiPpic();
mpvvlc_InitMbaiBpic();
mpvvlc_InitMbType();
mpvvlc_InitMbTypePpic();
mpvvlc_InitMbTypeBpic();
mpvvlc_InitMotion();
mpvvlc_InitCbp();
mpvvlc_InitCbpSub1();
mpvvlc_InitCbpSub2();
mpvvlc_InitDcSiz();
mpvvlc_InitDcSizY();
mpvvlc_InitDcSizC();
mpvvlc_InitIntRunLevel();
mpvvlc_InitRunLevel();
mpvvlc_SetDflPtr();
mpvvlc_SetupVlc();
mpvvlc_SetVlcRunLevel();
mpvvlc_SetVlcDcSiz();
mpvvlc_SetVlcMotion();
mpvvlc_SetVlcMbType();

// *****************************************************************************
// FILE -- ../muldiv.c
// *****************************************************************************

UTY_MulAbDivC();

// *****************************************************************************
// FILE -- ../muldivr.c
// *****************************************************************************

UTY_MulDivRound();

// *****************************************************************************
// FILE -- ../mwsfdcmp.c
// *****************************************************************************

MWSFD_CompoAlpha256();

// *****************************************************************************
// FILE -- ../dct_isr.c
// *****************************************************************************

DCT_IsrInit();
static initScaleTbl();
DCT_IsrInitScaleTbl();
DCT_IsrTrans();
static swap_pre_idct_tbl();
MSID_JRevDctDenseSafe();
static initSparseTbl();
MSID_JRevDctSparse();
MSID_JRevDctDense();
static IdctColumn_0000_0();
static IdctColumn_0000_1();
static IdctColumn_0001_0();
static IdctColumn_0001_1();
static IdctColumn_0010_0();
static IdctColumn_0010_1();
static IdctColumn_0100_0();
static IdctColumn_0100_1();
static IdctColumn_1000_0();
static IdctColumn_1000_1();
static IdctColumn_1010_0();
static IdctColumn_1010_1();
static IdctColumn_1111_0();
static IdctColumn_1111_1();

// *****************************************************************************
// FILE -- ../dct_ver.c
// *****************************************************************************

DCT_GetVerStr();

// *****************************************************************************
// FILE -- ../memcpyd.c
// *****************************************************************************

UTY_MemcpyDword();

// *****************************************************************************
// FILE -- ../mpv_bdec.c
// *****************************************************************************

MPVBDEC_Init();
static mpvbdec_CheckOfsAcDataErr();
MPV_IsAcDataErr();
MPV_GetAcDataErrCnt();
static mpvbdec_SetupIxa();
MPVBDEC_IntraBlock();
MPVBDEC_NintraBlock();
static mpvbdec_IntraAc();

// *****************************************************************************
// FILE -- ../mpv_cdec.c
// *****************************************************************************

MPVCDEC_IntraBlocks();
MPVCDEC_NintraBlocks();

// *****************************************************************************
// FILE -- ../mpv_cmc.c
// *****************************************************************************

MPVCMC_Init();
static mpvcmc_InitClip0255();
MPVCMC_InitObj();
static mpvcmc_InitMcOiTa();
MPVCMC_InitMcOiRt();
MPVCMC_SetCcnt();
MPVCMC_IntraRt();
MPVCMC_IntraTa();
static mpvcmc_OutputIntra6blk();
MPVCMC_ForwardRt();
MPVCMC_ForwardTa();
MPVCMC_Backward();
MPVCMC_BiDirect();
static mpvcmc_OneReadMb();
static mpvcmc_OneMakeMbTa();
static mpvcmc_OneMakeMbTaSub();
static mpvcmc_BiMakeMbTa();
static mpvcmc_BiMakeMbTaSub();
static mpvcmc_OutputMbRfb();
MPVCMC_PpicSkipped();
static mpvcmc_PpicSkipBlk();
MPVCMC_BpicSkipped();
static mpvcmc_CalcOfs();
static mpvcmc_CalcMv();

// *****************************************************************************
// FILE -- ../mpv_dec.c
// *****************************************************************************

MPVDEC_DecIpicMb();
MPVDEC_DecPpicMb();
MPVDEC_ResetMv();
MPVDEC_ResetDc();
static mpvdec_MotionSub();
MPVDEC_DecBpicMb();
MPVDEC_DecDpicMb();

// *****************************************************************************
// FILE -- ../mpv_mc.c
// *****************************************************************************

MPVMC_Init();
MPVMC_OneRef1();
mpvmc_OneRef1Byte();
mpvmc_OneRef1Word();
mpvmc_OneRef1Long();
MPVMC_OneRefV2();
MPVMC_OneRefH2();
MPVMC_OneRef4();

// *****************************************************************************
// FILE -- ../dct_ac.c
// *****************************************************************************

DCT_AcInit();
DCT_AcFdctShort();
DCT_AcIdctShort();
DCT_AcFdctDouble();
DCT_AcIdctDouble();
dctac_TransDouble();

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/adxf.613/adx_fini.c
// *****************************************************************************

void ADXF_Init();
void ADXF_Finish();

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/adxf.613/adx_fro.c
// *****************************************************************************

void ADXF_SetupRofs(void *sprmr);
void ADXF_ShutdownRofs();

Sint32 ADXF_AddRofsVol(Char8 *volname, Char8 *imgname);

void ADXF_DelRofsVol(Char8 *volname);

Bool ADXF_IsRofsVol(Char8 *volname);

void ADXF_SetDefDev(Char8 *volname);

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/adxf.613/adx_fs.c
// *****************************************************************************

void adxf_SetCmdHstry(Sint32 cmdid, Sint32 fg, Sint32 prm0, Sint32 prm1, Sint32 prm2);

void adxf_wait_1ms();

Sint32 adxf_ChkPrmPt(Sint32 ptid, void *ptinfo);

Sint32 adxf_LoadData(ADXF adxf, Sint32 nsct, void *rdbuf);

Sint32 ADXF_LoadPartition(Sint32 ptid, Char8 *fname, void *ptinfo, Sint32 nfile);

Sint32 ADXF_LoadPartitionEx(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo);

Sint32 ADXF_LoadPartitionNw(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo);

void adxf_CloseLdptnwHn();
void ADXF_StopPtLd();

Sint32 ADXF_GetPtStat(Sint32 ptid);

Sint32 ADXF_AddPartition(Sint32 ptid, Char8 *fname, void *ptinfo, Sint32 nfile);

Sint32 ADXF_GetPtinfoSize(Sint32 ptid);

ADXF adxf_AllocAdxFs();

ADXF adxf_CreateAdxFs();

Sint32 adxf_SetFileInfoEx(ADXF adxf, Sint8 *fname, void *atr);

ADXF ADXF_Open(Char8 *fname, void *atr);

Sint32 adxf_SetAfsFileInfo(ADXF adxf, Sint32 ptid, Sint32 flid);

ADXF ADXF_OpenAfs(Sint32 ptid, Sint32 flid);

void adxf_CloseSjStm(ADXF adxf);
void ADXF_Close(ADXF adxf);
void ADXF_CloseAll();

Sint32 adxf_read_sj32(ADXF adxf, Sint32 nsct, SJ sj);

Sint32 ADXF_ReadSj32(ADXF adxf, Sint32 nsct, SJ sj);

Sint32 ADXF_ReadNw32(ADXF adxf, Sint32 nsct, void *buf);

Sint32 ADXF_ReadNw(ADXF adxf, Sint32 nsct, void *buf);

Sint32 ADXF_Stop(ADXF adxf);

void adxf_ExecOne(ADXF adxf);

void ADXF_ExecServer();
Sint32 ADXF_Seek(ADXF adxf, Sint32 pos, Sint32 type);
Sint32 ADXF_Tell(ADXF adxf);
Sint32 ADXF_GetFsizeSct(ADXF adxf);
Sint32 ADXF_GetFsizeByte(ADXF adxf);
Sint32 ADXF_GetNumReqSct(ADXF adxf, Sint32 *seekpos);
Sint32 ADXF_GetNumReadSct(ADXF adxf);
Sint32 ADXF_GetStat(ADXF adxf);

Sint32 adxf_ChkPrmGfr(Sint32 ptid, Sint32 flid);

Sint32 ADXF_GetFnameRange(Sint32 ptid, Sint32 flid, Char8 *fname, Sint32 *ofst, Sint32 *fnsct);

Sint32 ADXF_GetFnameRangeEx(Sint32 ptid, Sint32 flid, Char8 *fname, void **dir, Sint32 *ofst, Sint32 *fnsct);

void ADXF_SetOcbiSw(Sint32 sw);
void ADXF_SetReqRdSct(ADXF adxf, Sint32 nsct);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_inis.c
// *****************************************************************************

void ADXT_ConfigVsyncSvr(Sint32 vsync_svr_flag);
void adxini_rnaerr_cbfn(void *obj, Char8 *msg);
void ADXT_VsyncProc();
void ADXT_Init();
void ADXT_ResetLibrary();
void ADXT_Finish();

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_insh.c
// *****************************************************************************

void ADXT_InsertHdrSfa(ADXT adxt, Sint32 nch, Sint32 sfreq, Sint32 nsmpl);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_lsc.c
// *****************************************************************************

void ADXT_EntryFname(ADXT adxt, Char8 *fname);

void ADXT_EntryAfs(ADXT adxt, Sint32 patid, Sint32 fid);

void ADXT_StartSeamless(ADXT adxt);

void ADXT_SetSeamlessLp(ADXT adxt, Sint32 flg);

void ADXT_StartFnameLp(ADXT adxt, Char8 *fname);

void ADXT_ReleaseSeamless(ADXT adxt);
Sint32 ADXT_GetNumFiles(ADXT adxt);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_mps2.c
// *****************************************************************************

void adxm_lock(void *obj);

void adxm_unlock(void *obj);

void adxm_goto_svr_border(Sint32 tid, Sint32 prio_org);

void adxm_goto_mwidle_border(void *obj);
void adxm_goto_usridle_border(void *obj);
void adxm_safe_trap();
void adxm_safe_proc();
void adxm_usrvsync_proc();
void adxm_vsync_proc();

void adxm_mwidle_proc();

void adxm_usridle_proc();

void adxm_iWakeupThread(Sint32 tid);

void adxm_WakeupThread(Sint32 tid);

void adxm_SleepThread();

Sint32 adxm_ResumeThread(Sint32 tid);

Sint32 adxm_SuspendThread(Sint32 tid);

void adxm_SetupSafeThrd();

void adxm_SetupUsrVsyncThrd();

void adxm_SetupVsyncThrd();

void adxm_SetupMwIdleThrd();

void adxm_SetupUsrIdleThrd();

Bool adxm_IsSetupThrdEx();
Sint32 ADXM_ExecSvrUsrVsync();
Sint32 ADXM_ExecSvrVsync();
Sint32 ADXM_ExecSvrMain();
Sint32 ADXM_ExecSvrMwIdle();
Sint32 ADXM_ExecSvrUsrIdle();
Sint32 ADXM_ExecSvrAll();
Bool ADXM_IsSetupThrd();
void ADXM_SetCbErr(void (*fn)(), void *obj);

void ADXM_SetupThrd(ADXM_TPRM *tprm);

void ADXM_ShutdownThrd();
void adxm_ShutdownUsrIdleThrd();
void adxm_ShutdownMwIdleThrd();
void adxm_ShutdownVsyncThrd();
void adxm_ShutdownUsrVsyncThrd();
void adxm_ShutdownSafeThrd();
void ADXM_Lock();
void ADXM_Unlock();
int ADXPS2_ExecVint(int arg);
Sint32 ADXM_ExecVint(Sint32 arg);
void ADXPS2_ResumeIdleThrd();
void ADXPS2_SleepMainThrd();
void ADXM_WaitVsync();
void ADXPS2_WaitVsync();
Bool ADXPS2_ExecServerEx(void *obj);

void ADXPS2_SetupThrd(ADXPS2_TPRM *tprm);

void ADXPS2_ShutdownThrd();
void ADXPS2_ExecServer();
void ADXPS2_Lock();
void ADXPS2_Unlock();

void ADXM_SetupThrdEx(ADXM_TPRM_EX *tprm);

void ADXM_ShutdownThrdEx();
void ADXM_SetCbUsrVsync(Bool (*func)(), void *obj);
void ADXM_SetCbUsrIdle(Bool (*func)(), void *obj);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_rnap.c
// *****************************************************************************

void ADXRNA_Init();
void ADXRNA_Finish();
ADXRNA ADXRNA_Create(SJ *sj, Sint32 maxnch);
void ADXRNA_Destroy(ADXRNA rna);
void ADXRNA_Start(ADXRNA rna);
void ADXRNA_Stop(ADXRNA rna);
void ADXRNA_SetTransSw(ADXRNA rna, Sint32 sw);
void ADXRNA_SetPlaySw(ADXRNA rna, Sint32 sw);
void ADXRNA_GetTime(ADXRNA rna, Sint32 *ncount, Sint32 *tscale);
Sint32 ADXRNA_GetNumData(ADXRNA rna);
Sint32 ADXRNA_GetNumRoom(ADXRNA rna);
Sint32 ADXRNA_GetStat(ADXRNA rna);
void ADXRNA_ExecServer();
void ADXRNA_SetStartSmpl(ADXRNA rna, Sint32 nsmpl);
void ADXRNA_SetNumChan(ADXRNA rna, Sint32 nch);
void ADXRNA_SetSfreq(ADXRNA rna, Sint32 sfreq);
void ADXRNA_SetOutVol(ADXRNA rna, Sint32 vol);
void ADXRNA_SetOutPan(ADXRNA rna, Sint32 chno, Sint32 pan);
void ADXRNA_SetBitPerSmpl(ADXRNA rna, Sint32 bps);
Sint32 ADXRNA_GetSfreq(ADXRNA rna);
Sint32 ADXRNA_GetOutVol(ADXRNA rna);
Sint32 ADXRNA_GetOutPan(ADXRNA rna, Sint32 chno);
Sint32 ADXRNA_GetBitPerSmpl(ADXRNA rna);
Sint32 ADXRNA_DiscardData(ADXRNA rna, Sint32 nsmpl);
void ADXRNA_ClearBuf(ADXRNA rna);
void ADXRNA_SetPcmType(ADXRNA rna, Sint32 type);
void ADXRNA_SetTotalNumSmpl(ADXRNA rna, Sint32 nsmpl);
void ADXRNA_SetWavFname(ADXRNA rna, Sint8 *fname);
Sint32 ADXRNA_SetStmHdInfo(ADXRNA rna, void *snddat);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_sfa.c
// *****************************************************************************

void SFA_Init();
void SFA_Finish();

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_sjd.c
// *****************************************************************************

void ADXSJD_Init();
void ADXSJD_Finish();
void adxsjd_clear(ADXSJD sjd);

ADXSJD ADXSJD_Create(SJ sji, Sint32 maxnch, SJ *sjo);

void ADXSJD_Destroy(ADXSJD sjd);
Sint32 ADXSJD_GetStat(ADXSJD sjd);
void ADXSJD_SetInSj(ADXSJD sjd, SJ sj);
void ADXSJD_SetOutSj(ADXSJD sjd, Sint32 chno, SJ sj);
void ADXSJD_SetMaxDecSmpl(ADXSJD sjd, Sint32 nsmpl);
void ADXSJD_Start(ADXSJD sjd);
void ADXSJD_Stop(ADXSJD sjd);

void adxsjd_decode_prep(ADXSJD sjd);

void* adxsjd_get_wr(void *obj, Sint32 *wpos, Sint32 *nroom, Sint32 *lp_nsmpl);

void adxsjd_decexec_start(ADXSJD sjd);

void adxsjd_decexec_end(ADXSJD sjd);

void adxsjd_decexec_ahx(ADXSJD sjd);

void adxsjd_decode_exec(ADXSJD sjd);

void ADXSJD_ExecHndl(ADXSJD sjd);

void ADXSJD_ExecServer();

Sint32 ADXSJD_GetDecDtLen(ADXSJD sjd);
Sint32 ADXSJD_GetDecNumSmpl(ADXSJD sjd);
void ADXSJD_SetDecPos(ADXSJD sjd, Sint32 decpos);
Sint32 ADXSJD_GetDecPos(ADXSJD sjd);
void ADXSJD_EntryFltFunc(ADXSJD sjd, void (*f)(), void *obj);
void ADXSJD_EntryTrapFunc(ADXSJD sjd, void (*f)(), void *obj);
void ADXSJD_SetTrapNumSmpl(ADXSJD sjd, Sint32 nsmpl);
Sint32 ADXSJD_GetTrapNumSmpl(ADXSJD sjd);
void ADXSJD_SetTrapCnt(ADXSJD sjd, Sint32 nsmpl);
Sint32 ADXSJD_GetTrapCnt(ADXSJD sjd);
void ADXSJD_SetTrapDtLen(ADXSJD sjd, Sint32 nbyte);
Sint32 ADXSJD_GetTrapDtLen(ADXSJD sjd);
Sint32 ADXSJD_GetFormat(ADXSJD sjd);
Sint32 ADXSJD_GetSfreq(ADXSJD sjd);
Sint32 ADXSJD_GetNumChan(ADXSJD sjd);
Sint32 ADXSJD_GetOutBps(ADXSJD sjd);
Sint32 ADXSJD_GetBlkSmpl(ADXSJD sjd);
Sint32 ADXSJD_GetBlkLen(ADXSJD sjd);
Sint32 ADXSJD_GetTotalNumSmpl(ADXSJD sjd);
Sint32 ADXSJD_GetCof(ADXSJD sjd);
Sint32 ADXSJD_GetNumLoop(ADXSJD sjd);
Sint32 ADXSJD_GetLpInsNsmpl(ADXSJD sjd);
Sint32 ADXSJD_GetLpStartPos(ADXSJD sjd);
Sint32 ADXSJD_GetLpStartOfst(ADXSJD sjd);
Sint32 ADXSJD_GetLpEndPos(ADXSJD sjd);
Sint32 ADXSJD_GetLpEndOfst(ADXSJD sjd);
Sint32 ADXSJD_GetHdrLen(ADXSJD sjd);
Sint32 ADXSJD_GetFmtBps(ADXSJD sjd);
void* ADXSJD_GetSpsdInfo(ADXSJD sjd);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_sje.c
// *****************************************************************************

Uint16 ADXSJE_GetVersion();
Sint8* ADXSJE_GetVerStr();

Sint32 ADXSJE_GetInfo(void *data, Sint32 dtlen, Sint32 *bps, Sint32 *nch, Sint32 *sfreq, Sint32 *total_nsmpl);

Sint32 adxsje_write68(void *data, Sint32 len, Sint32 ndata, SJ sj);

void iirflt_init();

IIRFLT iirflt_create();

void iirflt_destroy(IIRFLT iirflt);
void iirflt_set_coef(IIRFLT iirflt, Sint16 k0, Sint16 k1);
void iirflt_set_delay(IIRFLT iirflt, Sint16 dly0, Sint16 dly1);
void iirflt_get_delay(IIRFLT iirflt, Sint16 *dly0, Sint16 *dly1);

Sint16 iirflt_put_sig(IIRFLT iirflt, Sint16 rsig);

PRDFLT pflt_create(Sint32 nsmpl);

void pflt_destroy(PRDFLT pflt);
void pflt_set_coef(PRDFLT pflt, Sint16 k0, Sint16 k1);

void pflt_calc_coef(PRDFLT pflt, Sint32 cof, Sint32 sfreq);

void pflt_set_delay(PRDFLT pflt, Sint16 dly0, Sint16 dly1);

void pflt_put_sig(PRDFLT pflt, Sint32 sno, Sint16 osig);

void pflt_calc_gain(PRDFLT pflt);

Sint16 pflt_get_rsig(PRDFLT pflt, Sint32 sno);
Sint8 pflt_get_rsig_q(PRDFLT pflt, Sint32 sno);
void pflt_set_rsig_q(PRDFLT pflt, Sint32 sno, Sint8 val);

Sint32 adxsje_get_pcm_data(ADXSJE sje, Sint32 sno, Sint32 nsmpl, Sint16 **pcm);

Sint32 adxsje_calc_rsig(ADXSJE sje, Sint32 ch);

void adxsje_set_rsig(ADXSJE sje, Sint32 ch);

Sint32 adxsje_encode_blk(ADXSJE sje);

Sint32 adxsje_output_sdata(ADXSJE sje);

Sint32 adxsje_encode_data(ADXSJE sje);

Sint32 adxsje_write_end_code(ADXSJE sje);

Sint32 adxsje_output_header(ADXSJE sje, SJ sjo);

void adxsje_adjust_hdinfo_size(ADXSJE sje);

void ADXSJE_Init();
void ADXSJE_Finish();

ADXSJE ADXSJE_Create(Sint32 maxnch, SJ *sji, SJ sjo);

void ADXSJE_Destroy(ADXSJE sje);
Sint32 ADXSJE_GetStat(ADXSJE sje);
void ADXSJE_Start(ADXSJE sje);
void ADXSJE_Stop(ADXSJE sje);
void ADXSJE_SetSfreq(ADXSJE sje, Sint32 sfreq);
void ADXSJE_SetHdInfoSize(ADXSJE sje, Sint32 hdinfo_size);
void ADXSJE_SetNumChan(ADXSJE sje, Sint32 nch);
void ADXSJE_SetOutBps(ADXSJE sje, Sint32 bps);
void ADXSJE_SetBlkSmpl(ADXSJE sje, Sint32 nsmpl_blk);
void ADXSJE_SetBlkLen(ADXSJE sje, Sint32 blklen);
void ADXSJE_SetTotalNumSmpl(ADXSJE sje, Sint32 total_nsmpl);
void ADXSJE_SetCof(ADXSJE sje, Sint32 cof);
void ADXSJE_SetNumLoop(ADXSJE sje, Sint32 nloop);
void ADXSJE_SetLpInsNsmpl(ADXSJE sje, Sint32 ins_nsmpl);
void ADXSJE_SetLpStartPos(ADXSJE sje, Sint32 lp_spos);
void ADXSJE_SetLpStartOfst(ADXSJE sje, Sint32 lp_sofst);
void ADXSJE_SetLpEndPos(ADXSJE sje, Sint32 lp_epos);
void ADXSJE_SetLpEndOfst(ADXSJE sje, Sint32 lp_eofst);
void ADXSJE_SetConfigSfa(ADXSJE sje, Sint32 nch, Sint32 sfreq, Sint32 total_nsmpl);
Sint32 ADXSJE_GetEncDtLen(ADXSJE sje);
Sint32 ADXSJE_GetEncNumSmpl(ADXSJE sje);
void ADXSJE_SetEncPos(ADXSJE sje, Sint32 encpos);
Sint32 ADXSJE_GetEncPos(ADXSJE sje);
void ADXSJE_SetInSj(ADXSJE sje, Sint32 ch, SJ sj);
void ADXSJE_SetOutSj(ADXSJE sje, SJ sj);

void adxsje_encode_prep(ADXSJE sje);

void adxsje_encode_exec(ADXSJE sje);

void ADXSJE_ExecHndl(ADXSJE sje);
void ADXSJE_ExecServer();

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_stmc.c
// *****************************************************************************

void ADXT_SetupRtimeNumStm(Sint32 num);
void ADXT_SetupNrmlNumStm(Sint32 num);
Sint32 ADXSTM_Init();
void ADXSTM_Reset();
void ADXSTM_Finish();
void ADXSTMF_SetupHandleMember(ADXSTMF stmf, CVFS fp, Sint32 fofst, Sint32 fsize, SJ sj);

ADXSTMF ADXSTMF_CreateCvfsRt(CVFS fp, Sint32 fofst, Sint32 fsize, SJ sj);

ADXSTMF ADXSTMF_CreateCvfs(CVFS fp, Sint32 fofst, Sint32 fsize, SJ sj);

void ADXSTMF_Destroy(ADXSTMF stmf);

ADXSTM ADXSTM_OpenFileRangeEx(Sint8 *fname, void *dir, Sint32 ofst, Sint32 nsct, SJ sj);

ADXSTM ADXSTM_OpenFileRangeExRt(Sint8 *fname, void *dir, Sint32 ofst, Sint32 nsct, SJ sj);

ADXSTM ADXSTM_OpenFnameEx(Sint8 *fname, void *dir, SJ sj);

ADXSTM ADXSTM_OpenFname(Sint8 *fname, SJ sj);

ADXSTM ADXSTM_OpenFileRange(Sint8 *fname, Sint32 ofst, Sint32 nsct, SJ sj);

void ADXSTM_Close(ADXSTM stm);

Sint32 ADXSTM_GetStat(ADXSTM stm);
Sint32 ADXSTM_Seek(ADXSTM stm, Sint32 ofst);
Sint32 ADXSTM_Tell(ADXSTM stm);

Sint32 ADXSTM_Start(ADXSTM stm);

void ADXSTM_Stop(ADXSTM stm);

void ADXSTM_EntryEosFunc(ADXSTM stm, void (*fn)(), void *obj);
void ADXSTM_SetEos(ADXSTM stm, Sint32 esct);
void adxstm_sj_internal_error();

void adxstmf_stat_exec(ADXSTMF stmf);

void ADXSTMF_ExecHndl(ADXSTMF stmf);

void ADXSTM_ExecServer();

Sint32 ADXSTM_GetCurOfst(ADXSTM stm, Sint32 *ofst);
Sint32 ADXSTM_GetBufSize(ADXSTM stm, Sint32 *min, Sint32 *max);
SJ ADXSTM_GetSj(ADXSTM stm);
Sint32 ADXSTM_SetBufSize(ADXSTM stm, Sint32 min, Sint32 max);
Sint32 ADXSTM_SetReqRdSize(ADXSTM stm, Sint32 sct);
void ADXSTM_EntryErrFunc(void (*errfn)(), void *obj);
Sint32 ADXSTM_GetFileLen(ADXSTM stm);
void ADXSTM_GetCvdfsStat(ADXSTM stm, Sint32 *cvfsst);
Sint32 ADXSTM_GetFad(Sint8 *fname, Sint32 *fad);

Sint32 ADXSTM_GetFsizeSct(Sint8 *fname, Sint32 *fnsct);

Sint32 ADXSTM_GetFsizeByte(Sint8 *fname, Sint32 *fsize);
void ADXSTM_SetSj(ADXSTM stm, SJ sj);
void ADXSTM_SetRdSct(ADXSTM stm, Sint32 nsct);
void ADXSTM_SetOfst(ADXSTM stm, Sint32 ofst);
void ADXT_SetNumRetry(Sint32 num);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_sudv.c
// *****************************************************************************

void adxps2_err_dvd(void *obj, char *msg, void *hndl);
void ADXPS2_SetupDvdFs(ADXPS2_SPRM_DVD *sprmd);

Sint32 ADXPS2_LoadFcacheDvd(ADXPS2_FCPRM *fcprm);

void ADXPS2_SetRdModeDvd(ADXPS2_SPRM_DVD *sprmd);
Sint32 ADXPS2_IsExistFcacheDvd(Sint8 *fname);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_suht.c
// *****************************************************************************

void adxps2_err_host(void *obj, char *msg, void *hndl);
void ADXPS2_SetupHostFs(ADXPS2_SPRM_HOST *sprm);

Sint32 ADXPS2_LoadFcacheHost(ADXPS2_FCPRM *sprm);

Sint32 ADXPS2_IsExistFcacheHost(Sint8 *fname);
void ADXPS2_SetRdModeHost(ADXPS2_SPRM_HOST *sprm);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_tlk.c
// *****************************************************************************

void adxt_disp_rna_stat(ADXT adxt);

ADXT ADXT_Create(Sint32 maxnch, void *work, Sint32 worksize);

void ADXT_Destroy(ADXT adxt);

void ADXT_DestroyAll();

void ADXT_CloseAllHandles();

void adxt_start_sj(ADXT adxt, SJ sj);

void adxt_start_stm(ADXT adxt);

void ADXT_StartSj(ADXT adxt, SJ sj);

void ADXT_StopWithoutLsc(ADXT adxt);

void ADXT_Stop(ADXT adxt);
Sint32 ADXT_GetStat(ADXT adxt);
void ADXT_SetTimeMode(Sint32 mode);
void ADXT_GetTimeSfreq(ADXT adxt, Sint32 *ncount, Sint32 *tscale);

void ADXT_GetTimeSfreq2(ADXT adxt, Sint32 *ncount, Sint32 *tscale);

void adxt_time_adjust_trap();

void ADXT_GetTime(ADXT adxt, Sint32 *ncount, Sint32 *tscale);

Sint32 ADXT_GetTimeReal(ADXT adxt);

Sint32 ADXT_GetNumSmpl(ADXT adxt);
Sint32 ADXT_GetSfreq(ADXT adxt);
Sint32 ADXT_GetNumChan(ADXT adxt);
Sint32 ADXT_GetHdrLen(ADXT adxt);
Sint32 ADXT_GetFmtBps(ADXT adxt);
void ADXT_SetOutPan(ADXT adxt, Sint32 ch, Sint32 pan);
Sint32 ADXT_GetOutPan(ADXT adxt, Sint32 ch);
void ADXT_SetOutVol(ADXT adxt, Sint32 vol);
Sint32 ADXT_GetOutVol(ADXT adxt);
void ADXT_SetSvrFreq(ADXT adxt, Sint32 freq);

void ADXT_SetReloadTime(ADXT adxt, float time, Sint32 nch, Sint32 sfreq);

void ADXT_SetReloadSct(ADXT adxt, Sint32 minsct);
Sint32 ADXT_GetNumSctIbuf(ADXT adxt);
Sint32 ADXT_GetNumSmplObuf(ADXT adxt, Sint32 chno);

float ADXT_GetIbufRemainTime(ADXT adxt);

Sint32 ADXT_IsIbufSafety(ADXT adxt);
void ADXT_SetAutoRcvr(ADXT adxt, Sint32 rmode);
Sint32 ADXT_IsCompleted(ADXT adxt);

void ADXT_ExecServer();

Sint32 ADXT_GetErrCode(ADXT adxt);
void ADXT_ClearErrCode(ADXT adxt);
Sint32 ADXT_GetLpCnt(ADXT adxt);
void ADXT_SetLpFlg(ADXT adxt, Sint32 flg);
SJ ADXT_GetInputSj(ADXT adxt);
void ADXT_SetWaitPlayStart(ADXT adxt, Sint32 flg);
Sint32 ADXT_IsReadyPlayStart(ADXT adxt);

void ADXT_Pause(ADXT adxt, Sint32 sw);

void ADXT_SetDrctLvl(ADXT adxt, Sint32 drctlvl);
Sint32 ADXT_GetDrctLvl(ADXT adxt);
void ADXT_SetFx(ADXT adxt, Sint32 fxch, Sint32 fxlvl);
void ADXT_GetFx(ADXT adxt, Sint32 *fxch, Sint32 *fxlvl);
void ADXT_SetFilter(ADXT adxt, Sint32 coff, Sint32 q);
void ADXT_GetFilter(ADXT adxt, Sint32 *coff, Sint32 *q);
void ADXT_SetTranspose(ADXT adxt, Sint32 transps, Sint32 detune);
void ADXT_GetTranspose(ADXT adxt, Sint32 *transps, Sint32 *detune);
void ADXT_EntryErrFunc(void (*func)(), void *obj);
Sint32 ADXT_SetPauseBuf(ADXT adxt, void *buf, Sint32 bsize);

Sint32 ADXT_DiscardSmpl(ADXT adxt, Sint32 nsmpl);

void ADXT_SetTimeOfst(ADXT adxt, Sint32 ofst);
void ADXT_SetLnkSw(ADXT adxt, Sint32 sw);
Sint32 ADXT_GetLnkSw(ADXT adxt);
void ADXT_EntryFltFunc(ADXT adxt, void (*f)(), void *obj);
Sint32 ADXT_GetDecNumSmpl(ADXT adxt);

Sint32 ADXT_IsHeader(Sint8 *adr, Sint32 siz, Sint32 *hdrsiz);

Sint32 ADXT_IsEndcode(Sint8 *adr, Sint32 siz, Sint32 *endsiz);

Sint32 ADXT_InsertSilence(ADXT adxt, Sint32 nch, Sint32 nsmpl);

void ADXT_SetOutputMono(Sint32 flag);
void ADXT_DetachAhx(ADXT adxt);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_tlk2.c
// *****************************************************************************

void ADXT_StartAfs(ADXT adxt, Sint32 patid, Sint32 fid);

void ADXT_StartFname(ADXT adxt, Char8 *fname);
void ADXT_StartMem(ADXT adxt, void *adxdat);

void ADXT_StartMem2(ADXT adxt, void *adxdat, Sint32 datlen);

void ADXT_StartMemIdx(ADXT adxt, void *acx, Sint32 no);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_tsvr.c
// *****************************************************************************

void adxt_trap_entry(void *obj);

void adxt_eos_entry(void *obj);

void adxt_set_outpan(ADXT adxt);

void adxt_nlp_trap_entry(void *obj);

void adxt_stat_decinfo(ADXT adxt);

void adxt_stat_prep(ADXT adxt);

void adxt_stat_playing(ADXT adxt);

void adxt_stat_decend(ADXT adxt);
void adxt_stat_playend(ADXT adxt);

void adxt_RcvrReplay(ADXT adxt);

void ADXT_ExecErrChk(ADXT adxt);

void ADXT_ExecErrChkPS2(ADXT adxt);
void ADXT_ExecErrChkGc(ADXT adxt);
void ADXT_ExecHndl(ADXT adxt);

// *****************************************************************************
// FILE -- /home/satouo/users/satouo/cvfs.220/cri_cvfs.c
// *****************************************************************************

void cvFsCallUsrErrFn(void *obj, Sint8 *msg, void *hndl);
void cvFsError(Sint8 *msg);

void cvFsInit();

void cvFsFinish();

void cvFsAddDev(Sint8 *devname, CVF_FS_VTBLFN vtblfn, void *init_prm);

static CVFS_IF addDevice(Sint8 *devname, CVF_FS_VTBLFN func);

static CVFS_IF getDevice(Sint8 *devname);

static void toUpperStr(Sint8 *src);

void cvFsDelDev(Sint8 *devname);

void cvFsSetDefDev(Sint8 *devname);

static Sint32 isExistDev(Sint8 *devname, Sint32 len);

Sint8* cvFsGetDefDev();

static CVFS_IF variousProc(Sint8 *dev, Sint8 *file, Sint8 *fname);

CVFS cvFsOpen(Sint8 *fname, void *prm, CVE_FS_OP op_mode);

static void* allocCvFsHn();

static void releaseCvFsHn(CVFS cvfs);

void getDevName(Sint8 *dname, Sint8 *fname, Sint8 *fn);

static void getDefDev(Sint8 *dev);

void cvFsClose(CVFS cvfs);

Sint32 cvFsTell(CVFS cvfs);

Sint32 cvFsSeek(CVFS cvfs, Sint32 nsct, CVE_FS_SK sk_mode);

Sint32 cvFsReqRd(CVFS cvfs, Sint32 nsct, void *buf);

Sint32 cvFsReqWr(CVFS cvfs, Sint32 nsct, void *buf);

void cvFsStopTr(CVFS cvfs);

void cvFsExecServer();

CVE_FS_ST cvFsGetStat(CVFS cvfs);

Sint32 cvFsGetFileSize(Sint8 *fname);

Sint32 cvFsGetFileSizeEx(Sint8 *fname, void *prm);

Sint32 cvFsGetFreeSize(Sint8 *devname);

Sint32 cvFsGetSctLen(CVFS cvfs);

void cvFsSetSctLen(CVFS cvfs, Sint32 sctlen);

Sint32 cvFsGetNumTr(CVFS cvfs);

Sint32 cvFsChangeDir(Sint8 *dirname);

Sint32 cvFsIsExistFile(Sint8 *fname);

Sint32 cvFsGetNumFiles(Sint8 *devname);

Sint32 cvFsLoadDirInfo(Sint8 *name, void *inf, Sint32 num);

Sint32 cvFsGetMaxByteRate(CVFS cvfs);

Sint32 cvFsMakeDir(Sint8 *dirname);

Sint32 cvFsRemoveDir(Sint8 *dirname);

Sint32 cvFsDeleteFile(Sint8 *fname);

Sint8* cvFsGetDevName(CVFS cvfs);

void cvFsEntryErrFunc(CVF_FS_ERRFN errfn, void *obj);

Sint32 cvFsOptFn1(CVFS cvfs, Sint32 p0, Sint32 p1, Sint32 p2);

Sint32 cvFsOptFn2(CVFS cvfs, Sint32 p0, Sint32 p1, Sint32 p2);

Sint32 cvFsSetCurVolume(Sint8 *devname, void *img_hn);

Sint32 cvFsAddVolume(Sint8 *devname, Sint8 *volname, void *img_hn);

Sint32 cvFsDelVolume(Sint8 *devname, Sint8 *volname);

Sint32 cvFsGetVolumeInfo(Sint8 *devname, Sint8 *volname, CVS_FS_VOLINFO *volinf);

static Bool isNeedDevName(Sint8 *devname);

static void addDevName(Sint8 *devname, Sint8 *fname);
Sint32 cvFsIsExistDevice(Char8 *devname);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/dtx.101/dtx.c
// *****************************************************************************

void* dtx_rpc_func(unsigned int fno, void *data, int size);

int dtx_svr_proc();

DTX dtx_create_rmt(Sint32 id, Sint8 *eewk, Sint8 *iopwk, Sint32 wklen);
void dtx_destroy_rmt(DTX dtx);

void dtx_def_rcvcbf(void *obj, void *dt, Sint32 dtlen);

void dtx_def_sndcbf(void *obj, void *dt, Sint32 dtlen);

DTX DTX_Open(Sint32 id);
void DTX_Close(DTX dtx);

DTX DTX_Create(Sint32 id, Sint8 *eewk, Sint8 *iopwk, Sint32 wklen);

void DTX_Destroy(DTX dtx);
void DTX_SetRcvCbf(DTX dtx, void (*fn)(), void *obj);
void DTX_SetSndCbf(DTX dtx, void (*fn)(), void *obj);

void DTX_ExecHndl(DTX dtx);

void DTX_Init();

void DTX_Finish();

Sint32 DTX_CallUrpc(Sint32 fno, Sint32 *in, Sint32 nin, Sint32 *out, Sint32 nout);

void DTX_ExecServer();

// *****************************************************************************
// FILE -- /home/satouo/users/satouo/dvci.230/dvci.c
// *****************************************************************************

CVFS_IF dvCiGetInterface();
static void rdmode_wait();
void dvci_call_errfn(DVCI dvci, char *msg);

Sint32 dvci_is_exec_hn();

void dvCiExecHndl(DVCI dvci);

void dvCiExecServer();

void dvCiEntryErrFunc(CVF_FS_ERRFN errfn, void *obj);

void dvci_to_large_to_yen(Sint8 *fname);

Sint32 dvCiGetFileSize(Sint8 *fname);

static DVCI dvci_alloc();

static void dvci_free(DVCI dvci);

void* dvCiOpen(Sint8 *fname, void *prm, CVE_FS_OP rw);

void dvCiClose(void *obj);

Sint32 dvCiSeek(void *obj, Sint32 nsct, CVE_FS_SK mode);

Sint32 dvCiTell(void *obj);

Sint32 dvCiReqRd(void *obj, Sint32 nsct, void *buf);

void dvCiStopTr(void *obj);

CVE_FS_ST dvCiGetStat(void *obj);

Sint32 dvCiGetSctLen(void *obj);

Sint32 dvCiGetNumTr(void *obj);

// *****************************************************************************
// FILE -- /home/satouo/users/satouo/dvci.230/dvci_sub.c
// *****************************************************************************

void dvci_conv_fname(Sint8 *spath, Sint8 *tpath);

static char conv_cmp(char in);

static Sint32 dvci_charicmp(char chin1, char chin2);

static Sint32 dvci_stricmp(char *str1, char *str2);

static Sint32 analysis_flist(void *inf, Sint8 *buf, Sint32 num, Sint32 fmax);

static Sint32 load_flist(Sint8 *fname, Sint8 *rbuf);

static Sint32 search_fstate(void *inf, Sint32 num);

static void get_fp_from_fname(sceCdlFILE *fp, Sint8 *fname, void *inf, Sint32 num);

void dvci_init_flist();
void dvci_get_fstate(Sint8 *fname, sceCdlFILE *fp);
Sint32 dvCiLoadFcache(Sint8 *fls_fname, Sint8 *fpc_ptr, Sint32 fpc_size, Sint32 fname_max);
Sint32 dvCiLoadFpCache(Sint8 *fls_fname, Sint8 *fpc_ptr, Sint32 fpc_size);

Sint32 dvCiIsExistFcache(Sint8 *fname);

void dvCiSetRdMode(Sint32 nrtry, Sint32 speed, Sint32 dtype, Sint32 rdmode);
void dvCiSetRootDir(Sint8 *dirname);
Sint8* dvCiGetRootDir();

// *****************************************************************************
// FILE -- /home/satouo/users/satouo/htci.231/htci.c
// *****************************************************************************

CVFS_IF htCiGetInterface();

void htci_wait();

void htci_call_errfn(HTCI htci, char *msg);
Sint32 htci_is_exec_hn();

Sint32 htci_is_one_excute(HTCI htci);

Sint32 htci_is_all_excute();
void htci_wait_io();
Sint32 htci_wait_by_fd(int fd);
void htCiExecHndl(HTCI htci);

void htCiExecServer();

void htCiEntryErrFunc(CVF_FS_ERRFN errfn, void *obj);

Sint32 htCiGetFileSize(Sint8 *fname);

Sint32 htci_get_fsize_opened(Sint32 fd);

HTCI htci_alloc();

void htci_free(HTCI htci);

void* htCiOpen(Sint8 *fname, void *prm, CVE_FS_OP rw);

void htCiClose(void *obj);

Sint32 htCiSeek(void *obj, Sint32 nsct, CVE_FS_SK mode);

Sint32 htCiTell(void *obj);

Sint32 htCiReqRd(void *obj, Sint32 nsct, void *buf);

void htCiStopTr(void *obj);

CVE_FS_ST htCiGetStat(void *obj);

Sint32 htCiGetSctLen(void *obj);

Sint32 htCiGetNumTr(void *obj);

// *****************************************************************************
// FILE -- /home/satouo/users/satouo/htci.231/htci_sub.c
// *****************************************************************************

static Sint32 htci_is_inc_colon(Char8 *str);

static Sint32 htci_is_bgn_host(Char8 *str);

void htci_conv_fname(Char8 *spath, Char8 *tpath);

static char conv_cmp(char in);
static Sint32 htci_charicmp(char chin1, char chin2);

static Sint32 htci_stricmp(char *str1, char *str2);

static Sint32 analysis_flist(void *inf, Sint8 *buf, Sint32 num, Sint32 maxflen);

Sint32 htci_load_flist(Sint8 *fname, Sint8 *rbuf);

static Sint32 open_file_all(void *inf, Sint32 num);

static Sint32 close_file_all();

static void get_fstate(HTS_CI_FCACHE *finf, Uint8 *fname, HTS_CI_FCACHE *inf, Sint32 num);

void htci_init_flist();
void htci_get_finf(Uint8 *fname, HTS_CI_FCACHE *inf);
Sint32 htCiLoadFcache(Sint8 *fls_fname, Sint8 *fpc_ptr, Sint32 fpc_size, Sint32 fname_max);
Sint32 htCiLoadFpCache(Sint8 *fls_fname, Sint8 *fpc_ptr, Sint32 fpc_size);

Sint32 htCiIsExistFcache(Sint8 *fname);

void htCiSetOpenMode(Sint32 mode);
void htCiSetRootDir(Sint8 *dirname);
Sint8* htCiGetRootDir();
void htCiSetAccessName(Sint8 *acsname);
Sint8* htCiGetAccessName();
Sint32 htci_get_opmode();

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/lsc.201/lsc.c
// *****************************************************************************

LSC lsc_Alloc();

LSC LSC_Create(SJ sj);

void LSC_Destroy(LSC lsc);

Sint32 LSC_EntryFname(LSC lsc, Sint8 *fname);

Sint32 LSC_EntryFileRange(LSC lsc, Sint8 *fname, void *dir, Sint32 ofst, Sint32 nsct);

void LSC_Start(LSC lsc);

void LSC_Stop(LSC lsc);

void LSC_Pause(LSC lsc, Sint32 sw);

void LSC_ExecServer();

Sint32 LSC_GetStat(LSC lsc);
Sint32 LSC_GetNumStm(LSC lsc);

Sint32 LSC_GetStmId(LSC lsc, Sint32 no);

Sint8* LSC_GetStmFname(LSC lsc, Sint32 sid);

Sint32 LSC_GetStmStat(LSC lsc, Sint32 sid);

Sint32 LSC_GetStmRdSct(LSC lsc, Sint32 sid);

void LSC_SetFlowLimit(LSC lsc, Sint32 min);
Sint32 LSC_GetFlowLimit(LSC lsc);
void LSC_EntryChgStatFunc(LSC_STATFN statfn, void *obj1, void *obj2);
void LSC_CallStatFunc();
void LSC_SetLpFlg(LSC lsc, Sint32 flg);

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/lsc.201/lsc_crs.c
// *****************************************************************************

void LSC_LockCrs(LSC_CRS *crs);
void LSC_UnlockCrs(LSC_CRS *crs);

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/lsc.201/lsc_err.c
// *****************************************************************************

void LSC_EntryErrFunc(LSC_ERRFN errfn, void *obj);
void LSC_CallErrFunc(Sint8 *fmt);

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/lsc.201/lsc_ini.c
// *****************************************************************************

void lsc_EntrySvrInt();
void lsc_DeleteSvrInt();

void LSC_Init();

void LSC_Finish();

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/lsc.201/lsc_svr.c
// *****************************************************************************

void lsc_StatWait(LSC lsc);

void lsc_StatRead(LSC lsc);

void lsc_StatEnd(LSC lsc);

void lsc_ExecHndl(LSC lsc);

// *****************************************************************************
// FILE -- /home/hosaka/users/hosaka/common/ps2rna.104a/ps2_rna.c
// *****************************************************************************

void ps2rna_init_psj();

void ps2rna_finish_psj();

PS2PSJ ps2rna_get_psj();

void ps2rna_release_psj(PS2PSJ psj);

void ps2rna_rcvcbf(void *obj, void *dt, Sint32 dtlen);

void ps2rna_sndcbf(void *obj, void *dt, Sint32 dtlen);

void PS2RNA_Init();
void PS2RNA_Finish();

PS2RNA PS2RNA_Create(SJ *sj, Sint32 maxnch);

void PS2RNA_Destroy(PS2RNA ps2rna);

void PS2RNA_Start(PS2RNA rna);
void PS2RNA_Stop(PS2RNA rna);

void PS2RNA_SetTransSw(PS2RNA rna, Sint32 sw);

void PS2RNA_SetPlaySw(PS2RNA rna, Sint32 sw);

void PS2RNA_ClearBuf(PS2RNA rna);
void PS2RNA_SetPcmType(PS2RNA rna, Sint32 type);
void PS2RNA_GetTime(PS2RNA rna, Sint32 *ncount, Sint32 *tscale);
Sint32 PS2RNA_GetNumData(PS2RNA rna);
Sint32 PS2RNA_GetNumRoom(PS2RNA rna);

void PS2RNA_ExecHndl(PS2RNA rna);

void PS2RNA_ExecServer();

void PS2RNA_SetStartSmpl(PS2RNA rna, Sint32 nsmpl);
void PS2RNA_SetNumChan(PS2RNA rna, Sint32 nch);
void PS2RNA_SetSfreq(PS2RNA rna, Sint32 sfreq);

void PS2RNA_SetOutVol(PS2RNA rna, Sint32 vol);

void PS2RNA_SetOutPan(PS2RNA rna, Sint32 chno, Sint32 pan);

void PS2RNA_SetBitPerSmpl(PS2RNA rna, Sint32 bps);
Sint32 PS2RNA_GetStartSmpl(PS2RNA rna);
Sint32 PS2RNA_GetSfreq(PS2RNA rna);
Sint32 PS2RNA_GetOutVol(PS2RNA rna);
Sint32 PS2RNA_GetOutPan(PS2RNA rna, Sint32 chno);
Sint32 PS2RNA_GetBitPerSmpl(PS2RNA rna);
Sint32 PS2RNA_IsOverflow(PS2RNA rna);
void PS2RNA_ClearOverflow(PS2RNA rna);
void PS2RNA_Flush(PS2RNA rna);
Sint32 PS2RNA_DiscardData(PS2RNA rna, Sint32 nsmpl);
void PS2RNA_SetTotalNumSmpl(PS2RNA rna, Sint32 nsmpl);
Sint32 PS2RNA_SetStmHdInfo(PS2RNA rna, void *snddat);
SJ PS2RNA_GetSjtmp(PS2RNA rna, Sint32 chno);
SJ PS2RNA_GetSjiop(PS2RNA rna, Sint32 chno);

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/_rt240/ps2rna.104rt240/rna_crs.c
// *****************************************************************************

void RNACRS_Init();
void RNACRS_Finish();
void RNACRS_Lock();
void RNACRS_Unlock();

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sj.601/sj_crs.c
// *****************************************************************************

void SJCRS_Init();
void SJCRS_Lock();
void SJCRS_Unlock();

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sj.601/sj_mem.c
// *****************************************************************************

void SJMEM_Error(void *obj, Sint32 errcode);
void SJMEM_Init();
void SJMEM_Finish();

SJ SJMEM_Create(Sint8 *data, Sint32 dtsize);

void SJMEM_Destroy(SJ sj);
UUID* SJMEM_GetUuid(SJ sj);
void SJMEM_EntryErrFunc(SJ sj, void (*func)(), void *obj);
void SJMEM_Reset(SJ sj);
Sint32 SJMEM_GetNumData(SJ sj, Sint32 id);
void SJMEM_GetChunk(SJ sj, Sint32 id, Sint32 nbyte, SJCK *ck);
void SJMEM_PutChunk(SJ sj, Sint32 id, SJCK *ck);

void SJMEM_UngetChunk(SJ sj, Sint32 id, SJCK *ck);

Sint32 SJMEM_IsGetChunk(SJ sj, Sint32 id, Sint32 nbyte, Sint32 *rbyte);

Sint8* SJMEM_GetBufPtr(SJMEM sjmem);
Sint32 SJMEM_GetBufSize(SJMEM sjmem);

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sj.601/sj_rbf.c
// *****************************************************************************

void SJRBF_Error(SJRBF rbf, Sint32 errcode);
void SJRBF_Init();
void SJRBF_Finish();

SJ SJRBF_Create(Sint8 *buf, Sint32 bsize, Sint32 xsize);

void SJRBF_Destroy(SJ sj);
UUID* SJRBF_GetUuid(SJ sj);
void SJRBF_EntryErrFunc(SJ sj, void (*func)(), void *obj);
void SJRBF_Reset(SJ sj);
Sint32 SJRBF_GetNumData(SJ sj, Sint32 id);
void SJRBF_GetChunk(SJ sj, Sint32 id, Sint32 nbyte, SJCK *ck);

void SJRBF_PutChunk(SJ sj, Sint32 id, SJCK *ck);

void SJRBF_UngetChunk(SJ sj, Sint32 id, SJCK *ck);

Sint32 SJRBF_IsGetChunk(SJ sj, Sint32 id, Sint32 nbyte, Sint32 *rbyte);

Sint8* SJRBF_GetBufPtr(SJRBF sjrbf);
Sint32 SJRBF_GetBufSize(SJRBF sjrbf);
Sint32 SJRBF_GetXtrSize(SJRBF sjrbf);

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sj.601/sj_uni.c
// *****************************************************************************

void SJUNI_Error(SJUNI uni, Sint32 errcode);
void SJUNI_Init();
void SJUNI_Finish();

SJ SJUNI_Create(Sint32 mode, Sint8 *work, Sint32 wksize);

void SJUNI_Destroy(SJ sj);
UUID* SJUNI_GetUuid(SJ sj);
void SJUNI_EntryErrFunc(SJ sj, void (*func)(), void *obj);

void SJUNI_Reset(SJ sj);

Sint32 SJUNI_GetNumData(SJ sj, Sint32 id);

void SJUNI_GetChunk(SJ sj, Sint32 id, Sint32 nbyte, SJCK *ck);

void SJUNI_PutChunk(SJ sj, Sint32 id, SJCK *ck);

void SJUNI_UngetChunk(SJ sj, Sint32 id, SJCK *ck);

Sint32 SJUNI_IsGetChunk(SJ sj, Sint32 id, Sint32 nbyte, Sint32 *rbyte);

Sint32 SJUNI_GetNumChunk(SJ sj, Sint32 id);

Sint32 SJUNI_GetNumChainPool(SJ sj);

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sj.601/sj_utl.c
// *****************************************************************************

void SJ_SplitChunk(SJCK *ck, Sint32 nbyte, SJCK *ck1, SJCK *ck2);

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sjr.100/sjr_clt.c
// *****************************************************************************

SJ SJRBF_CreateRmt(Sint8 *buf, Sint32 bsize, Sint32 xsize);
SJ SJMEM_CreateRmt(Sint8 *data, Sint32 dtsize);
SJ SJUNI_CreateRmt(Sint32 mode, Sint8 *wk, Sint32 wksize);
void SJRMT_Destroy(SJ sj);

UUID* SJRMT_GetUuid(SJ sj);

void SJRMT_Reset(SJ sj);
void SJRMT_GetChunk(SJ sj, Sint32 id, Sint32 nbyte, SJCK *ck);
void SJRMT_UngetChunk(SJ sj, Sint32 id, SJCK *ck);
void SJRMT_PutChunk(SJ sj, Sint32 id, SJCK *ck);
Sint32 SJRMT_GetNumData(SJ sj, Sint32 id);
Sint32 SJRMT_IsGetChunk(SJ sj, Sint32 id, Sint32 nbyte, Sint32 *rbyte);
void SJRMT_Init();
void SJRMT_Finish();

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sjx.101/sjx.c
// *****************************************************************************

void sjx_rcvcbf(void *obj, void *dt, Sint32 dtlen);

void sjx_sndcbf(void *obj, void *dt, Sint32 dtlen);

void SJX_ExecServer();
void SJX_Init();
void SJX_Finish();

SJX SJX_Create(SJ sjsrc, SJ sjdst, Sint32 lin);

void SJX_Destroy(SJX sjx);

void SJX_Reset(SJX sjx);

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/svm.106/svm.c
// *****************************************************************************

void SVM_Lock();
void SVM_Unlock();
void SVM_CallErr(char *fmt);
void SVM_CallErr1(Char8 *msg1);
void SVM_CallErr2(Char8 *msg1, Char8 *msg2);

void SVM_ItoA(long int val, char *str, long int len);

void SVM_ItoA2(long int val, long int val2, char *str, long int len);

Sint32 SVM_SetCbSvr(Sint32 svtype, Bool (*func)(), void *obj);

void SVM_DelCbSvr(Sint32 svtype, Sint32 id);

void SVM_SetCbSvrId(Sint32 svtype, Sint32 id, Bool (*func)(), void *obj);

void SVM_SetCbBdr(Sint32 svtype, void (*fn)(), void *obj);
void SVM_GotoSvrBorder(Sint32 svtype);
void SVM_SetCbErr(void (*fn)(), void *obj);
void SVM_SetCbLock(void (*fn)(), void *obj);
void SVM_SetCbUnlock(void (*fn)(), void *obj);

Sint32 SVM_ExecSvrFunc(Sint32 svtype);

Sint32 SVM_ExecSvrFuncId(Sint32 svtype, Sint32 id);

Sint32 SVM_ExecSvrVint();
Sint32 SVM_ExecSvrUsrVsync();
Sint32 SVM_ExecSvrVsync();
Sint32 SVM_ExecSvrVsync0();
Sint32 SVM_ExecSvrVsync1();
Sint32 SVM_ExecSvrUhigh();
Sint32 SVM_ExecSvrMain();
Sint32 SVM_ExecSvrMwIdle();
Sint32 SVM_ExecSvrUsrIdle();
Sint32 SVM_GetExecCount(Sint32 svtype);

void SVM_Init();

void SVM_Finish();

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_amp.c
// *****************************************************************************

void ADXAMP_Init();
void ADXAMP_Finish();

ADXAMP ADXAMP_Create(Sint32 maxnch, SJ *sji, SJ *sjo);

void ADXAMP_Destroy(ADXAMP amp);
Sint32 ADXAMP_GetStat(ADXAMP amp);

void ADXAMP_Start(ADXAMP amp);

void ADXAMP_Stop(ADXAMP amp);

void adxamp_extract(ADXAMP amp);

void ADXAMP_ExecHndl(ADXAMP amp);

void ADXAMP_ExecServer();

Sint32 ADXAMP_GetExtractNumSmpl(ADXAMP amp);
void ADXAMP_SetSfreq(ADXAMP amp, Sint32 sfreq);
Sint32 ADXAMP_GetSfreq(ADXAMP amp);
void ADXAMP_SetFrmLen(ADXAMP amp, float len_sec);
float ADXAMP_GetFrmLen(ADXAMP amp);
void ADXAMP_SetFrmPrd(ADXAMP amp, float prd_sec);
float ADXAMP_GetFrmPrd(ADXAMP amp);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_bahx.c
// *****************************************************************************

void ADXB_SetAhxInSj(ADXB adxb, void *sj);
void ADXB_SetAhxDecSmpl(ADXB adxb, Sint32 nsmpl);
void ADXB_ExecOneAhx(ADXB adxb);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_bsc.c
// *****************************************************************************

void ADXB_Init();
void* adxb_DefGetWr(void *obj, Sint32 *wpos, Sint32 *nroom, Sint32 *lp_nsmpl);
void adxb_DefAddWr(void *obj, Sint32 wlen, Sint32 wnsmpl);

ADXB ADXB_Create(Sint32 maxnch, Sint16 *obuf, Sint32 bsize, Sint32 bdist);

void ADXB_Destroy(ADXB adxb);

Sint32 ADXB_DecodeHeaderAdx(ADXB adxb, Sint8 *ibuf, Sint32 ibuflen);

Sint32 ADXB_DecodeHeader(ADXB adxb, Sint8 *ibuf, Sint32 ibuflen);
void ADXB_EntryGetWrFunc(ADXB adxb, void* (*func)(), void *obj);
void ADXB_EntryAddWrFunc(ADXB adxb, void (*func)(), void *obj);
Sint16* ADXB_GetPcmBuf(ADXB adxb);
Sint32 ADXB_GetFormat(ADXB adxb);
Sint32 ADXB_GetSfreq(ADXB adxb);
Sint32 ADXB_GetNumChan(ADXB adxb);
Sint32 ADXB_GetFmtBps(ADXB adxb);
Sint32 ADXB_GetOutBps(ADXB adxb);
Sint32 ADXB_GetBlkSmpl(ADXB adxb);
Sint32 ADXB_GetBlkLen(ADXB adxb);
Sint32 ADXB_GetTotalNumSmpl(ADXB adxb);
Sint32 ADXB_GetCof(ADXB adxb);
Sint32 ADXB_GetLpInsNsmpl(ADXB adxb);
Sint32 ADXB_GetNumLoop(ADXB adxb);
Sint32 ADXB_GetLpStartPos(ADXB adxb);
Sint32 ADXB_GetLpStartOfst(ADXB adxb);
Sint32 ADXB_GetLpEndPos(ADXB adxb);
Sint32 ADXB_GetLpEndOfst(ADXB adxb);
Sint32 ADXB_GetStat(ADXB adxb);
void ADXB_EntryData(ADXB adxb, Sint8 *ibuf, Sint32 ibuflen);
void ADXB_Start(ADXB adxb);
void ADXB_Stop(ADXB adxb);
void ADXB_Reset(ADXB adxb);
Sint32 ADXB_GetDecDtLen(ADXB adxb);
Sint32 ADXB_GetDecNumSmpl(ADXB adxb);
ADXPD ADXB_GetAdxpd(ADXB adxb);

void ADXB_EvokeExpandMono(ADXB adxb, Sint32 nblk);

void ADXB_EvokeExpandSte(ADXB adxb, Sint32 nblk);

void ADXB_EvokeDecode(ADXB adxb);

void memcpy2(Sint16 *dst, Sint16 *src, Sint32 nword);
void ADXB_CopyExtraBufSte(Sint16 *obuf, Sint32 obsize, Sint32 obdist, Sint32 nxsmpl);
void ADXB_CopyExtraBufMono(Sint16 *obuf, Sint32 obsize, Sint32 xsize, Sint32 nxsmpl);

void ADXB_EndDecode(ADXB adxb);

void ADXB_ExecOneAdx(ADXB adxb);
void ADXB_ExecHndl(ADXB adxb);

void ADXB_ExecServer();

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_bsps.c
// *****************************************************************************

Sint32 ADX_DecodeInfoSpsd(Sint8 *ibuf, Sint32 ibuflen, Sint16 *dlen, Sint8 *code, Sint8 *bps, Sint8 *blksize, Sint8 *nch, Sint32 *sfreq, Sint32 *total_nsmpl, Sint32 *nsmpl_blk, Sint16 *cdc);

Sint32 ADXB_DecodeHeaderSpsd(ADXB adxb, Sint8 *ibuf, Sint32 ibuflen);

void ADXB_ExecOneSpsd(ADXB adxb);

Sint32 ADXB_CheckSpsd(Sint8 *ibuf);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_bwav.c
// *****************************************************************************

Sint32 ADX_DecodeInfoWav(Sint8 *ibuf, Sint32 ibuflen, Sint16 *dlen, Sint8 *code, Sint8 *bps, Sint8 *blksize, Sint8 *nch, Sint32 *sfreq, Sint32 *total_nsmpl, Sint32 *nsmpl_blk, Sint16 *cdc);

Sint32 ADXB_DecodeHeaderWav(ADXB adxb, Sint8 *ibuf, Sint32 ibuflen);

void ADXB_ExecOneWav16(ADXB adxb);

void ADXB_ExecOneWav8(ADXB adxb);

void ADXB_ExecOneWav4(ADXB adxb);

Sint32 ADXB_CheckWav(Sint8 *ibuf);
void ADXB_ExecOneWav(ADXB adxb);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_crs.c
// *****************************************************************************

void ADXCRS_Init();
void ADXCRS_Lock();
void ADXCRS_Unlock();

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_dcd.c
// *****************************************************************************

void ADX_GetCoefficient(Sint32 cof, Sint32 sfreq, Sint16 *k0, Sint16 *k1);

Sint32 ADX_ScanInfoCode(Sint8 *ibuf, Sint32 ibuflen, Sint16 *dlen);

Sint32 ADX_DecodeInfo(Sint8 *ibuf, Sint32 ibuflen, Sint16 *dlen, Sint8 *code, Sint8 *bps, Sint8 *blksize, Sint8 *nch, Sint32 *sfreq, Sint32 *total_nsmpl, Sint32 *nsmpl_blk);

Sint32 ADX_DecodeInfoExADPCM2(Sint8 *ibuf, Sint32 ibuflen, Sint16 *cof);

Sint32 ADX_DecodeInfoExLoop(Sint8 *ibuf, Sint32 ibuflen, Sint32 *lp_ins_nsmpl, Sint16 *nloop, Sint16 *lp_type, Sint32 *lp_spos, Sint32 *lp_sofst, Sint32 *lp_epos, Sint32 *lp_eofst);

Sint32 ADX_DecodeFooter(Sint8 *ibuf, Sint32 ibuflen, Sint16 *dlen);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_dcd3.c
// *****************************************************************************

void ADX_SetDecodeSteAsMonoSw(Sint32 flag);

Sint32 ADX_DecodeMonoFloat(Sint8 *ibuf, Sint32 nblk, Sint16 *obuf_l, Sint16 *dly_l, Sint16 k0, Sint16 k1);

Sint32 ADX_DecodeSteFloatAsSte(Sint8 *ibuf, Sint32 nblk, Sint16 *obuf_l, Sint16 *dly_l, Sint16 *obuf_r, Sint16 *dly_r, Sint16 k0, Sint16 k1);

Sint32 ADX_DecodeSteFloatAsMono(Sint8 *ibuf, Sint32 nblk, Sint16 *obuf_l, Sint16 *dly_l, Sint16 *obuf_r, Sint16 *dly_r, Sint16 k0, Sint16 k1);

Sint32 ADX_DecodeSteFloat(Sint8 *ibuf, Sint32 nblk, Sint16 *obuf_l, Sint16 *dly_l, Sint16 *obuf_r, Sint16 *dly_r, Sint16 k0, Sint16 k1);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_errs.c
// *****************************************************************************

void ADXERR_Init();
void ADXERR_Finish();
void ADXERR_EntryErrFunc(void (*func)(), void *obj);
void ADXERR_CallErrFunc1(Sint8 *msg);
void ADXERR_CallErrFunc2(Sint8 *msg1, Sint8 *msg2);

void ADXERR_ItoA(Sint32 val, Sint8 *str, Sint32 len);

void ADXERR_ItoA2(Sint32 val, Sint32 val2, Sint8 *str, Sint32 len);

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/adxf.613/adx_fcch.c
// *****************************************************************************

void ADXF_Ocbi(void *address, long unsigned int size);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_fsvr.c
// *****************************************************************************

void ADXT_ExecFsSvr();
Sint32 ADXT_IsActiveFsSvr();

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_xpnd.c
// *****************************************************************************

void ADXPD_Init();

ADXPD ADXPD_Create();

void ADXPD_SetCoef(ADXPD xpd, Sint32 sfreq, Sint32 cof);
void ADXPD_Destroy(ADXPD xpd);
void ADXPD_SetMode(ADXPD xpd, Sint32 mode);
Sint32 ADXPD_GetStat(ADXPD xpd);
Sint32 ADXPD_EntryMono(ADXPD xpd, Sint8 *ibuf, Sint32 nblk, Sint16 *obuf_l);
Sint32 ADXPD_EntrySte(ADXPD xpd, Sint8 *ibuf, Sint32 nblk, Sint16 *obuf_l, Sint16 *obuf_r);
void ADXPD_Start(ADXPD xpd);
void ADXPD_Stop(ADXPD xpd);
void ADXPD_Reset(ADXPD xpd);
Sint32 ADXPD_GetNumBlk(ADXPD xpd);
void adxpd_error();
void ADXPD_ExecHndl(ADXPD xpd);

void ADXPD_ExecServer();

// *****************************************************************************
// FILE -- /home/satouo/users/satouo/srd.100/cri_srd.c
// *****************************************************************************

static void srd_reset_obj();

Bool SRD_ReqRdDvd(u_int d_lsn, u_int d_sct, void *d_buf, sceCdRMode *d_mode);

Bool SRD_ReqRdHst(int h_fd, void *h_buf, int h_size);

int SRD_GetStat();

static void srd_wait();

static void srd_wait_dvd();

static void srd_wait_hst();

void SRD_WaitComplete();
void SRD_Break();

static void srd_check_err_dvd();

static void srd_exec_dvd();

static void srd_exec_hst();

Bool SRD_IsExecute();
void SRD_ExecServer();
int SRD_GetDevTypeNow();
int SRD_GetErrCode();
void SRD_WaitForExecServer();
void SRD_Lock();
void SRD_Unlock();
void SRD_LockedForDvdExec(Bool flg);
void SRD_LockedForGetError(Bool flg);
void SRD_CallForGetError(Bool flg);
void SRD_SetError();

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/dtr.100/dtr.c
// *****************************************************************************

void DTR_ExecHndl(DTR dtr);

void DTR_ExecServer();

void DTR_Init();
void DTR_Finish();

DTR DTR_Create(SJ sjsrc, SJ sjdst);

void DTR_Destroy(DTR dtr);
void DTR_Start(DTR dtr);
void DTR_Stop(DTR dtr);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_baif.c
// *****************************************************************************

static void* AIFF_GetInfo(void *hdr, Sint32 *sfreq, Sint32 *nch, Sint32 *bps, Sint32 *nsmpl);

Sint32 ADXB_CheckAiff(Sint8 *ibuf);

Sint32 ADX_DecodeInfoAiff(Sint8 *ibuf, Sint32 ibuflen, Sint16 *dlen, Sint8 *code, Sint8 *bps, Sint8 *blksize, Sint8 *nch, Sint32 *sfreq, Sint32 *total_nsmpl, Sint32 *nsmpl_blk);

Sint32 ADXB_DecodeHeaderAiff(ADXB adxb, Sint8 *ibuf, Sint32 ibuflen);

void ADXB_ExecOneAiff16(ADXB adxb);

void ADXB_ExecOneAiff8(ADXB adxb);

void ADXB_ExecOneAiff(ADXB adxb);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_bau.c
// *****************************************************************************

static void* AU_GetInfo(void *hdr, Sint32 hdrlen, Sint32 *sfreq, Sint32 *nch, Sint32 *bps, Sint32 *nsmpl, Sint32 *cdc);

Sint32 ADXB_CheckAu(Sint8 *ibuf);

Sint32 ADX_DecodeInfoAu(Sint8 *ibuf, Sint32 ibuflen, Sint16 *dlen, Sint8 *code, Sint8 *bps, Sint8 *blksize, Sint8 *nch, Sint32 *sfreq, Sint32 *total_nsmpl, Sint32 *nsmpl_blk, Sint32 *cdc);

Sint32 ADXB_DecodeHeaderAu(ADXB adxb, Sint8 *ibuf, Sint32 ibuflen);

void ADXB_ExecOneAu16(ADXB adxb);

void ADXB_ExecOneAu8(ADXB adxb);

void ADXB_ExecOneAuUlaw(ADXB adxb);

void ADXB_ExecOneAu(ADXB adxb);

// *****************************************************************************
// FILE -- rofs_hn.c
// *****************************************************************************

RFHN_WaitCompleteReq();
static setHandle();
RFHN_CreateHnG();
RFHN_ReopenHn();
RFHN_CreateDirhn();
RFHN_IsUseImgHn();
ROFS_ChangeDir();
ROFS_Close();
ROFS_Seek();
ROFS_Tell();
ROFS_ReqRd();
ROFS_GetStat();
ROFS_GetNumTr();
ROFS_StopTr();

// *****************************************************************************
// FILE -- rofs_if.c
// *****************************************************************************

static waitRetrial();
RFIF_InitOvl();
ROFS_Finish();
ROFS_SetPfsFuncTbl();
ROFS_AddVolume();
ROFS_DelVolume();
ROFS_SetDefVolume();
ROFS_GetDefVolume();
ROFS_Open();
ROFS_OpenRange();
ROFS_ExecServer();
ROFS_GetFileSiz();
ROFS_GetFileSizEx();
ROFS_GetSctLen();
ROFS_GetVolumeInf();
ROFS_LoadDir();
ROFS_SetDir();
ROFS_GetDirInf();
ROFS_IsExistFile();
ROFS_GetNumFiles();
ROFS_EntryErrFunc();

// *****************************************************************************
// FILE -- rofs_mai.c
// *****************************************************************************

static checkMedia();
static divideFname();
static getDirBufAdr();
static getVolume();
static addVolList();
static delVolume();
static isDvdRomAccess();
static getCvmfInfo();
static setCvmfInfo();
static readPvd();
static readRootDirRec();
ROFS_Init();
RFMAI_InitG();
RFMAI_FinishG();
RFMAI_SetPfsFuncTblG();
RFMAI_MountG();
static mountVolume();
RFMAI_UnMountG();
static unMountVolume();
RFMAI_SetDefVolumeG();
RFMAI_GetDefVolumeG();
RFMAI_OpenG();
RFMAI_OpenRangeG();
static updateHnStat();
RFMAI_ExecServerG();
RFMAI_CheckTimeOutStart();
RFMAI_CheckTimeOut();
RFMAI_GetFileSiz();
RFMAI_GetVolumeInfG();
RFMAI_LoadDirG();
RFMAI_SetDirG();
RFMAI_IsExistFile();
RFMAI_GetNumFiles();
RFMAI_GetDirInfG();
RFMAI_EntryErrFuncG();
RFMAI_ReadWG();
RFMAI_Error();
RFMAI_ToUpperStr();
ROFS_GetExecCnt();

// *****************************************************************************
// FILE -- rofs_pfs.c
// *****************************************************************************

static dcfInit();
static dcfFinish();
static dcfSeek();
static dcfTell();
static dcfReqRd();
static dcfStopTr();
static dcfExecServer();
static dcfGetStat();
static dcfGetSctLen();
static dcfGetNumTr();
static dcfReqRdBlk();
static dcfReadBlk();
static dcfReqRdCda();
static dcfReadCda();
RFPFS_PfsWait();
RFPFS_PfsLock();
RFPFS_PfsUnLock();
static waitRdComplete();
static parentSeek();
RFPFS_SetPfsTbl();
RFPFS_GetDevTbl();
RFPFS_GetCallbackCnt();

// *****************************************************************************
// FILE -- cri_cvmh.c
// *****************************************************************************

static cvmh_GetSize();
static cvmh_GetVerInfo();
static cvmh_GetTimInfo();
static cvmh_AnalyMainHdrCvm();
static cvmh_AnalyCvmHdr();
static cvmh_GetZoneDataLoc();
static cvmh_AnalyZoneHdr();
CVMH_AnalyCvmHdr();
CVMH_AnalyZoneHdr();

// *****************************************************************************
// FILE -- cvmh_cim.c
// *****************************************************************************

static cvmh_AnalyMainHdrCim();
CVMH_AnalyCvmHdrCim();
CVMH_AnalyZoneHdrCim();
CVMH_CnvCba2ByteCim();

// *****************************************************************************
// FILE -- rofs_dir.c
// *****************************************************************************

static toUpper();
static rfdirStrncmpi();
static rfdirStrcmpDirName();
static rfdirStrcmpFileName();
static getTokenSize();
static getSearchID();
static toUpperFname();
static getOneDirEnt();
static getDirEnt();
RFDIR_GetDirEnt();
static isContainPeriod();
static nameBinarySearch();
static nameSequentialSearch();
RFDIR_SearchName();
static searchPath();
RFDIR_SearchPath();

// *****************************************************************************
// FILE -- cri_roci.c
// *****************************************************************************

ROCI_GetInterface();
static getSubInterface();
ROCI_ExecServer();
ROCI_EntryErrFunc();
ROCI_GetFileSize();
ROCI_Open();
ROCI_Close();
ROCI_Seek();
ROCI_Tell();
ROCI_ReqRd();
ROCI_StopTr();
ROCI_GetStat();
ROCI_GetSctLen();
ROCI_GetNumTr();
ROCI_ChangeDir();
ROCI_IsExistFile();
ROCI_GetNumFiles();
ROCI_LoadDirInfo();
ROCI_GetFileSizeEx();
static optAddVolume();
static optDelVolume();
ROCI_OptFn1();

// *****************************************************************************
// FILE -- pfs_cvfs.c
// *****************************************************************************

static pfsCvfsSeek();
static pfsCvfsTell();
static pfsCvfsReqRd();
static pfsCvfsStopTr();
static pfsCvfsGetStat();
static pfsCvfsGetSctLen();
static pfsCvfsGetNumTr();
static pfsCvfsExecServer();
PFSCVFS_GetPfsTbl();

// *****************************************************************************
// FILE -- mpeg.c
// *****************************************************************************

sceMpegInit();
sceMpegCreate();
sceMpegDelete();
sceMpegAddBs();
sceMpegGetPicture();
sceMpegGetPictureRAW8();
sceMpegGetPictureRAW8xy();
sceMpegSetDecodeMode();
sceMpegGetDecodeMode();
sceMpegIsEnd();
sceMpegIsRefBuffEmpty();
sceMpegReset();
sceMpegClearRefBuff();
sceMpegAddCallback();
_dispatchMpegCallback();
_dispatchMpegCbNodata();
sceMpegSetDefaultPtsGap();
sceMpegResetDefaultPtsGap();
sceMpegSetImageBuff();
sceMpegDispWidth();
sceMpegDispHeight();
sceMpegDispCenterOffX();
sceMpegDispCenterOffY();
sceSetBrokenLink();
sceSetPtm();
_alalcInit();
_alalcSetDynamic();
_alalcFree();
_alalcAlloc();
_alalcRest();
static _getpic();
static _decodeOrSkipFrame();
static _decodeOrSkip();
static _decodeOrSkipField();
_sceMpegFlush();

// *****************************************************************************
// FILE -- init.c
// *****************************************************************************

_initSeqAgain();
_lastFrame();
_clearOnce();
_clearEach();
_ErrMessage();
_Error1();
_Error();
_sendDataToIPU();
static _RefImageInit();
_sequenceHeader();
_initSeq();
static _initRefImages();
static _setDefaultQM();
_sequenceExtension();
_sequenceDisplayExtension();
_sequenceScalableExtension();
_unknown_extension();
_pictureSpatialScalableExtension();
_pictureTemporalScalableExtension();

// *****************************************************************************
// FILE -- defhandler.c
// *****************************************************************************

_defStopDMA();
_defRestartDMA();

// *****************************************************************************
// FILE -- mpc.c
// *****************************************************************************

static _motionComp0();
_getAllRefs();
_getRef0();
static _doMC();
_rix_000();
_ri0_000();
_rix_001();
_ri0_001();
_rix_010();
_ri0_010();
_rix_011();
_ri0_011();
_rix_100();
_ri0_100();
_rix_101();
_ri0_101();
_rix_110();
_ri0_110();
_rix_111();
_ri0_111();
_copyAddRefImage();
_copyRefImage();
_ipuSetMPEG1();
_waitBdecOut();
_dmVector();
_dualPrimeVector();
_mbAddressIncrement();
_pictureData0();
static _sliceA0();
static _slice0();
static _skipMB0();
static _decMB0();
static _decode_motion_vector();
_motionVectors();
_motionVector();
_sendIpuCommand();
_waitIpuIdle();
_waitIpuIdle64();
_ipuVdec();
_peepBit();
_flushBuf();
_nextBit();
_nextStartCode();
_sliceB();
_nextHeader();
_pictureHeader();
_extensionAndUserData();
_pictureCodingExtension();
_extrainfo();
static _updateTempTackData();
_groupOfPicturesHeader();
_quantMatrixExtension();
_pictureDisplayExtension();
_copyrightExtension();
_decPicture();
_outputFrame();
_updateRefImage();
static _isOutSizeOK();
_cpr8();
static _markOutput();
static _getPtsDtsFlags();
_dispRefImage();
_dispRefImageField();

// *****************************************************************************
// FILE -- csc.c
// *****************************************************************************

static _doCSC();
static _ch3dmaCSC();
static _doCSC2();
static _ch4dma();
_csc_storeRefImage();

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

static CB_DelayTh();
sceCdDelayThread();
sceCdCallback();
_sceCd_cd_callback();
_Cdvd_cbLoop();
sceCdInitEeCB();
_sceCd_cd_read_intr();
static cmd_sem_init();
static cdvd_exit();
sceCdPOffCallback();
static _sceCd_Poff_Intr();
static PowerOffCB();
sceCdSearchFile();
_sceCd_ncmd_prechk();
sceCdNcmdDiskReady();
sceCdSync();
sceCdSyncS();
_sceCd_scmd_prechk();
sceCdInit();
sceCdDiskReady();
sceCdMmode();

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

sceCdRead();

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

sceCdGetError();

// *****************************************************************************
// FILE -- ../eecdvd.c
// *****************************************************************************

sceCdBreak();

// *****************************************************************************
// FILE -- libdma.c
// *****************************************************************************

static memclr();
sceDmaGetChan();
sceDmaReset();
sceDmaDebug();
sceDmaPutEnv();
sceDmaGetEnv();
sceDmaPutStallAddr();
sceDmaSend();
sceDmaSendN();
sceDmaSendI();
sceDmaRecv();
sceDmaRecvN();
sceDmaRecvI();
sceDmaSync();
sceDmaWatch();
sceDmaPause();
sceDmaRestart();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsResetGraph();
sceGsGetGParam();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsResetPath();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsPutDrawEnv();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsSetDefDBuff();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsSwapDBuff();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsSyncV();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsSyncPath();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsSyncVCallback();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsPutIMR();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsSetHalfOffset();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsGetIMR();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

isceGsPutIMR();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsSetDefDispEnv();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsPutDispEnv();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGszbufaddr();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsSetDefDrawEnv();

// *****************************************************************************
// FILE -- graphdev.c
// *****************************************************************************

sceGsSetDefClear();

// *****************************************************************************
// FILE -- libipu.c
// *****************************************************************************

static setD3_CHCR();
static setD4_CHCR();
sceIpuStopDMA();
sceIpuRestartDMA();
sceIpuSync();

// *****************************************************************************
// FILE -- ipuinit.c
// *****************************************************************************

static setD4_CHCR();
sceIpuInit();

// *****************************************************************************
// FILE -- klib.s
// *****************************************************************************

RFU000_FullReset();
ResetEE();
SetGsCrt();
RFU003();
Exit();
RFU005();
LoadExecPS2();
ExecPS2();
RFU008();
RFU009();
AddSbusIntcHandler();
RemoveSbusIntcHandler();
Interrupt2Iop();
SetVTLBRefillHandler();
SetVCommonHandler();
SetVInterruptHandler();
AddIntcHandler();
AddIntcHandler2();
RemoveIntcHandler();
AddDmacHandler();
AddDmacHandler2();
RemoveDmacHandler();
_EnableIntc();
_DisableIntc();
_EnableDmac();
_DisableDmac();
SetAlarm();
ReleaseAlarm();
_iEnableIntc();
_iDisableIntc();
_iEnableDmac();
_iDisableDmac();
iSetAlarm();
iReleaseAlarm();
CreateThread();
DeleteThread();
StartThread();
ExitThread();
ExitDeleteThread();
TerminateThread();
iTerminateThread();
DisableDispatchThread();
EnableDispatchThread();
ChangeThreadPriority();
iChangeThreadPriority();
RotateThreadReadyQueue();
_iRotateThreadReadyQueue();
ReleaseWaitThread();
iReleaseWaitThread();
GetThreadId();
ReferThreadStatus();
iReferThreadStatus();
SleepThread();
WakeupThread();
_iWakeupThread();
CancelWakeupThread();
iCancelWakeupThread();
SuspendThread();
_iSuspendThread();
ResumeThread();
iResumeThread();
JoinThread();
RFU060();
RFU061();
EndOfHeap();
RFU063();
CreateSema();
DeleteSema();
SignalSema();
iSignalSema();
WaitSema();
PollSema();
iPollSema();
ReferSemaStatus();
iReferSemaStatus();
RFU073();
SetOsdConfigParam();
GetOsdConfigParam();
GetGsHParam();
GetGsVParam();
SetGsHParam();
SetGsVParam();
RFU080_CreateEventFlag();
RFU081_DeleteEventFlag();
RFU082_SetEventFlag();
RFU083_iSetEventFlag();
RFU084_ClearEventFlag();
RFU085_iClearEventFlag();
RFU086_WaitEvnetFlag();
RFU087_PollEvnetFlag();
RFU088_iPollEvnetFlag();
RFU089_ReferEventFlagStatus();
RFU090_iReferEventFlagStatus();
RFU091();
EnableIntcHandler();
iEnableIntcHandler();
DisableIntcHandler();
iDisableIntcHandler();
EnableDmacHandler();
iEnableDmacHandler();
DisableDmacHandler();
iDisableDmacHandler();
KSeg0();
EnableCache();
DisableCache();
GetCop0();
FlushCache();
CpuConfig();
iGetCop0();
iFlushCache();
iCpuConfig();
sceSifStopDma();
SetCPUTimerHandler();
SetCPUTimer();
SetOsdConfigParam2();
GetOsdConfigParam2();
GsGetIMR();
iGsGetIMR();
GsPutIMR();
iGsPutIMR();
SetPgifHandler();
SetVSyncFlag();
RFU116();
_print();
sceSifDmaStat();
isceSifDmaStat();
sceSifSetDma();
isceSifSetDma();
sceSifSetDChain();
isceSifSetDChain();
sceSifSetReg();
sceSifGetReg();
ExecOSD();
Deci2Call();
PSMode();
MachineType();
GetMemorySize();

// *****************************************************************************
// FILE -- glue.c
// *****************************************************************************

sceResetttyinit();
VSync();
VSync2();
write();
read();
open();
close();
ioctl();
lseek();
sbrk();
isatty();
fstat();
getpid();
kill();
stat();
unlink();

// *****************************************************************************
// FILE -- cache.c
// *****************************************************************************

_sceSDC();
SyncDCache();
iSyncDCache();
_sceIDC();
InvalidDCache();
iInvalidDCache();

// *****************************************************************************
// FILE -- intr.c
// *****************************************************************************

DisableIntc();
EnableIntc();
DisableDmac();
EnableDmac();
iEnableIntc();
iDisableIntc();
iEnableDmac();
iDisableDmac();
static setup();
static Copy();
static kCopy();
static GetEntryAddress();
InitAlarm();

// *****************************************************************************
// FILE -- thread.c
// *****************************************************************************

static topThread();
InitThread();
iWakeupThread();
iRotateThreadReadyQueue();
iSuspendThread();

// *****************************************************************************
// FILE -- tty.c
// *****************************************************************************

static QueueInit();
static QueuePeekWriteDone();
static QueuePeekReadDone();
static sceTtyHandler();
sceTtyWrite();
sceTtyRead();
sceTtyInit();

// *****************************************************************************
// FILE -- kprintf.c
// *****************************************************************************

static kputchar();
static deci2Putchar();
static serialPutchar();
static ftoi();
static printfloat();
_printf();
kprintf();
scePrintf();

// *****************************************************************************
// FILE -- sifcmd.c
// *****************************************************************************

static _set_sreg();
static _change_addr();
sceSifGetSreg();
sceSifSetSreg();
sceSifGetDataTable();
sceSifInitCmd();
sceSifExitCmd();
sceSifSetCmdBuffer();
sceSifSetSysCmdBuffer();
sceSifAddCmdHandler();
sceSifRemoveCmdHandler();
static _sceSifSendCmd();
sceSifSendCmd();
isceSifSendCmd();
static _sceSifCmdIntrHdlr();
sceSifWriteBackDCache();

// *****************************************************************************
// FILE -- sifrpc.c
// *****************************************************************************

sceSifInitRpc();
sceSifExitRpc();
static _sceRpcGetPacket();
static _sceRpcFreePacket();
static _sceRpcGetFPacket();
static _sceRpcGetFPacket2();
static _request_end();
static _request_rdata();
sceSifGetOtherData();
static _search_svdata();
static _request_bind();
sceSifBindRpc();
static _request_call();
sceSifCallRpc();
sceSifCheckStatRpc();
sceSifSetRpcQueue();
sceSifRegisterRpc();
sceSifRemoveRpc();
sceSifRemoveRpcQueue();
sceSifGetNextRequest();
sceSifExecRequest();
sceSifRpcLoop();

// *****************************************************************************
// FILE -- filestub.c
// *****************************************************************************

static _sceFsIobSemaMK();
static new_iob();
static get_iob();
static _sceFs_Rcv_Intr();
static _sceFsSemInit();
static _sceFsWaitS();
static _sceFsSigSema();
sceFsInit();
static _fs_version();
sceFsReset();
sceOpen();
sceClose();
sceLseek();
sceRead();
sceWrite();
sceIoctl();
sceIoctl2();
static _sceCallCode();
sceRemove();
sceMkdir();
sceRmdir();
sceFormat();
sceAddDrv();
sceDelDrv();
sceDopen();
sceDclose();
sceDread();
sceGetstat();
sceChstat();
sceRename();
sceChdir();
sceSync();
sceMount();
sceUmount();
sceLseek64();
sceDevctl();
sceSymlink();
sceReadlink();

// *****************************************************************************
// FILE -- iopheap.c
// *****************************************************************************

sceSifInitIopHeap();
sceSifAllocIopHeap();
sceSifAllocSysMemory();
sceSifFreeSysMemory();
sceSifFreeIopHeap();
sceSifLoadIopHeap();

// *****************************************************************************
// FILE -- eeloadfile.c
// *****************************************************************************

static _lf_bind();
static _lf_version();
sceSifLoadFileReset();
static _sceSifLoadModuleBuffer();
sceSifStopModule();
sceSifUnloadModule();
sceSifSearchModuleByName();
sceSifSearchModuleByAddress();
sceSifLoadModuleBuffer();
sceSifLoadStartModuleBuffer();
static _sceSifLoadModule();
sceSifLoadModule();
sceSifLoadStartModule();
static _sceSifLoadElfPart();
sceSifLoadElfPart();
sceSifLoadElf();
sceSifGetIopAddr();
sceSifSetIopAddr();

// *****************************************************************************
// FILE -- iopreset.c
// *****************************************************************************

sceSifResetIop();
sceSifIsAliveIop();
sceSifSyncIop();
sceSifRebootIop();

// *****************************************************************************
// FILE -- diei.c
// *****************************************************************************

DIntr();
EIntr();

// *****************************************************************************
// FILE -- initsys.c
// *****************************************************************************

static supplement_crt0();
_InitSys();

// *****************************************************************************
// FILE -- deci2.c
// *****************************************************************************

sceDeci2Open();
sceDeci2Close();
sceDeci2ReqSend();
sceDeci2Poll();
sceDeci2ExRecv();
sceDeci2ExSend();
sceDeci2ExReqSend();
sceDeci2ExLock();
sceDeci2ExUnLock();
kputs();

// *****************************************************************************
// FILE -- ../libmc.c
// *****************************************************************************

sceMcInit();
_lmcGetClientPtr();
sceMcChangeThreadPriority();
sceMcGetSlotMax();
sceMcOpen();
sceMcMkdir();
sceMcClose();
sceMcSeek();
static mceIntrReadFixAlign();
sceMcRead();
sceMcWrite();
static mcHearAlarm();
static mcDelayThread();
sceMcSync();
static mceGetInfoApdx();
sceMcGetInfo();
sceMcGetDir();
static mceStorePwd();
sceMcChdir();
sceMcFormat();
sceMcDelete();
sceMcFlush();
sceMcSetFileInfo();
sceMcRename();
sceMcUnformat();
sceMcGetEntSpace();

// *****************************************************************************
// FILE -- libpad.c
// *****************************************************************************

static _send_to_iop();
scePadInit();
static scePadInit2();
scePadEnd();
scePadPortOpen();
scePadPortClose();
static scePadGetDmaStr();
scePadGetFrameCount();
scePadRead();
scePadGetState();
scePadStateIntToStr();
static scePadSetReqState();
scePadGetReqState();
scePadReqIntToStr();
scePadInfoAct();
scePadInfoComb();
scePadInfoMode();
scePadSetMainMode();
scePadSetActDirect();
scePadSetActAlign();
static scePadGetButtonMask();
static scePadSetButtonInfo();
scePadInfoPressMode();
scePadEnterPressMode();
scePadExitPressMode();
static scePadSetVrefParam();
static scePadGetPortMax();
scePadGetSlotMax();
static scePadGetModVersion();
scePadSetWarningLevel();

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

void __do_global_dtors();
void __do_global_ctors();
void __main();

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

DItype __divdi3(DItype u, DItype v);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

DItype __fixunsdfdi(DFtype a);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

DFtype __floatdidf(DItype u);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

DItype __moddi3(DItype u, DItype v);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

DItype __muldi3(DItype u, DItype v);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

UDItype __udivdi3(UDItype n, UDItype d);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

UDItype __umoddi3(UDItype u, UDItype v);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

FLO_type __pack_d(fp_number_type *src);
void __unpack_d(FLO_union_type *src, fp_number_type *dst);
static fp_number_type* _fpadd_parts(fp_number_type *a, fp_number_type *b, fp_number_type *tmp);
FLO_type dpadd(FLO_type arg_a, FLO_type arg_b);
FLO_type dpsub(FLO_type arg_a, FLO_type arg_b);
FLO_type dpmul(FLO_type arg_a, FLO_type arg_b);
FLO_type dpdiv(FLO_type arg_a, FLO_type arg_b);
int __fpcmp_parts_d(fp_number_type *a, fp_number_type *b);
SItype dpcmp(FLO_type arg_a, FLO_type arg_b);
FLO_type litodp(SItype arg_a);
SItype dptoli(FLO_type arg_a);
USItype dptoul(FLO_type arg_a);
FLO_type __negdf2(FLO_type arg_a);
DFtype __make_dp(fp_class_type class, unsigned int sign, int exp, UDItype frac);
SFtype dptofp(DFtype arg_a);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/fp-bit.c
// *****************************************************************************

FLO_type __pack_f(fp_number_type *src);
void __unpack_f(FLO_union_type *src, fp_number_type *dst);
static fp_number_type* _fpadd_parts(fp_number_type *a, fp_number_type *b, fp_number_type *tmp);
FLO_type fpadd(FLO_type arg_a, FLO_type arg_b);
FLO_type fpsub(FLO_type arg_a, FLO_type arg_b);
FLO_type fpmul(FLO_type arg_a, FLO_type arg_b);
FLO_type fpdiv(FLO_type arg_a, FLO_type arg_b);
int __fpcmp_parts_f(fp_number_type *a, fp_number_type *b);
SItype fpcmp(FLO_type arg_a, FLO_type arg_b);
FLO_type sitofp(SItype arg_a);
SItype fptosi(FLO_type arg_a);
USItype fptoui(FLO_type arg_a);
FLO_type __negsf2(FLO_type arg_a);
SFtype __make_fp(fp_class_type class, unsigned int sign, int exp, USItype frac);
DFtype fptodp(SFtype arg_a);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_cos.c
// *****************************************************************************

double cos(double x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_floor.c
// *****************************************************************************

double floor(double x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_atan.c
// *****************************************************************************

float atanf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_ceil.c
// *****************************************************************************

float ceilf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_cos.c
// *****************************************************************************

float cosf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_fabs.c
// *****************************************************************************

float fabsf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_floor.c
// *****************************************************************************

float floorf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_modf.c
// *****************************************************************************

float modff(float x, float *iptr);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_sin.c
// *****************************************************************************

float sinf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_tan.c
// *****************************************************************************

float tanf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_tanh.c
// *****************************************************************************

float tanhf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/w_atan2.c
// *****************************************************************************

double atan2(double y, double x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_acos.c
// *****************************************************************************

float acosf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_asin.c
// *****************************************************************************

float asinf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_atan2.c
// *****************************************************************************

float atan2f(float y, float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_cosh.c
// *****************************************************************************

float coshf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_exp.c
// *****************************************************************************

float expf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_log.c
// *****************************************************************************

float logf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_log10.c
// *****************************************************************************

float log10f(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_pow.c
// *****************************************************************************

float powf(float x, float y);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_sinh.c
// *****************************************************************************

float sinhf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_sqrt.c
// *****************************************************************************

float sqrtf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/e_atan2.c
// *****************************************************************************

double __ieee754_atan2(double y, double x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/e_rem_pio2.c
// *****************************************************************************

__int32_t __ieee754_rem_pio2(double x, double *y);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_acos.c
// *****************************************************************************

float __ieee754_acosf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_asin.c
// *****************************************************************************

float __ieee754_asinf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_atan2.c
// *****************************************************************************

float __ieee754_atan2f(float y, float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_cosh.c
// *****************************************************************************

float __ieee754_coshf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_exp.c
// *****************************************************************************

float __ieee754_expf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_log.c
// *****************************************************************************

float __ieee754_logf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_log10.c
// *****************************************************************************

float __ieee754_log10f(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_pow.c
// *****************************************************************************

float __ieee754_powf(float x, float y);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_rem_pio2.c
// *****************************************************************************

__int32_t __ieee754_rem_pio2f(float x, float *y);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_sinh.c
// *****************************************************************************

float __ieee754_sinhf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_sqrt.c
// *****************************************************************************

float __ieee754_sqrtf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/k_cos.c
// *****************************************************************************

double __kernel_cos(double x, double y);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/k_rem_pio2.c
// *****************************************************************************

int __kernel_rem_pio2(double *x, double *y, int e0, int nx, int prec, __int32_t *ipio2);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/k_sin.c
// *****************************************************************************

double __kernel_sin(double x, double y, int iy);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_cos.c
// *****************************************************************************

float __kernel_cosf(float x, float y);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_rem_pio2.c
// *****************************************************************************

int __kernel_rem_pio2f(float *x, float *y, int e0, int nx, int prec, __int32_t *ipio2);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_sin.c
// *****************************************************************************

float __kernel_sinf(float x, float y, int iy);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_tan.c
// *****************************************************************************

float __kernel_tanf(float x, float y, int iy);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_atan.c
// *****************************************************************************

double atan(double x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_fabs.c
// *****************************************************************************

double fabs(double x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_isnan.c
// *****************************************************************************

int isnan(double x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/s_matherr.c
// *****************************************************************************

int matherr(exception *x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/s_rint.c
// *****************************************************************************

double rint(double x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/s_scalbn.c
// *****************************************************************************

double scalbn(double x, int n);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_expm1.c
// *****************************************************************************

float expm1f(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_finite.c
// *****************************************************************************

int finitef(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_isnan.c
// *****************************************************************************

int isnanf(float x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_scalbn.c
// *****************************************************************************

float scalbnf(float x, int n);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/s_copysign.c
// *****************************************************************************

double copysign(double x, double y);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_copysign.c
// *****************************************************************************

float copysignf(float x, float y);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/assert.c
// *****************************************************************************

void __assert(char *file, int line, char *failedexpr);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/atof.c
// *****************************************************************************

double atof(char *s);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/atoi.c
// *****************************************************************************

int atoi(char *s);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/errno/errno.c
// *****************************************************************************

int* __errno();

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/fiprintf.c
// *****************************************************************************

int fiprintf(FILE *fp, char *fmt);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/malloc.c
// *****************************************************************************

void* malloc(size_t nbytes);
void free(void *aptr);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

static void malloc_extend_top(_reent *reent_ptr, size_t nb);

void* _malloc_r(_reent *reent_ptr, size_t bytes);

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memcmp.S
// *****************************************************************************

memcmp();

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memcpy.S
// *****************************************************************************

memcpy();

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memset.S
// *****************************************************************************

memset();

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mlock.c
// *****************************************************************************

void __malloc_lock(_reent *ptr);
void __malloc_unlock(_reent *ptr);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mstats.c
// *****************************************************************************

mallinfo mallinfo();
void malloc_stats();
int mallopt(int p, int v);
void _mstats_r(_reent *ptr, char *s);
void mstats(char *s);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/puts.c
// *****************************************************************************

int _puts_r(_reent *ptr, char *s);

int puts(char *s);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/rand.c
// *****************************************************************************

void srand(unsigned int seed);
int rand();

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/sbrkr.c
// *****************************************************************************

void* _sbrk_r(_reent *ptr, size_t incr);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/sprintf.c
// *****************************************************************************

int _sprintf_r(_reent *ptr, char *str, char *fmt);

int sprintf(char *str, char *fmt);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/sscanf.c
// *****************************************************************************

static int eofread(void *cookie, char *buf, int len);

int sscanf(char *str, char *fmt);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/string/strcasecmp.c
// *****************************************************************************

int strcasecmp(char *s1, char *s2);

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strcat.S
// *****************************************************************************

strcat();

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strchr.S
// *****************************************************************************

strchr();

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strcmp.S
// *****************************************************************************

strcmp();

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strcpy.S
// *****************************************************************************

strcpy();

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strlen.S
// *****************************************************************************

strlen();

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strncat.S
// *****************************************************************************

strncat();

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strncmp.S
// *****************************************************************************

strncmp();

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/strncpy.S
// *****************************************************************************

strncpy();

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/string/strrchr.c
// *****************************************************************************

char* strrchr(char *s, int i);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/string/strstr.c
// *****************************************************************************

char* strstr(char *searchee, char *lookfor);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/strtod.c
// *****************************************************************************

double _strtod_r(_reent *ptr, char *s00, char **se);

double strtod(char *s00, char **se);
float strtodf(char *s00, char **se);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/string/strtok.c
// *****************************************************************************

char* strtok(char *s, char *delim);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/string/strtok_r.c
// *****************************************************************************

char* strtok_r(char *s, char *delim, char **lasts);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/strtol.c
// *****************************************************************************

long int _strtol_r(_reent *rptr, char *nptr, char **endptr, int base);

long int strtol(char *s, char **ptr, int base);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/string/strupr.c
// *****************************************************************************

char* strupr(char *a);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/vfprintf.c
// *****************************************************************************

static int __sprint(FILE *fp, __suio *uio);

static int __sbprintf(FILE *fp, char *fmt, va_list ap);

int vfiprintf(FILE *fp, char *fmt0, va_list ap);

int _vfiprintf_r(_reent *data, FILE *fp, char *fmt0, va_list ap);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/vfprintf.c
// *****************************************************************************

static int __sprint(FILE *fp, __suio *uio);

static int __sbprintf(FILE *fp, char *fmt, va_list ap);

int vfprintf(FILE *fp, char *fmt0, va_list ap);

int _vfprintf_r(_reent *data, FILE *fp, char *fmt0, va_list ap);

static char* cvt(_reent *data, double value, int ndigits, int flags, char *sign, int *decpt, int ch, int *length);

static int exponent(char *p0, int exp, int fmtch);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/vfscanf.c
// *****************************************************************************

int __svfscanf(FILE *fp, char *fmt0, va_list ap);

char* __sccl(char *tab, char *fmt);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/vsprintf.c
// *****************************************************************************

int vsprintf(char *str, char *fmt, va_list ap);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/wsetup.c
// *****************************************************************************

int __swsetup(FILE *fp);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/abort.c
// *****************************************************************************

void abort();

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/dtoa.c
// *****************************************************************************

static int quorem(_Bigint *b, _Bigint *S);

char* _dtoa_r(_reent *ptr, double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/fflush.c
// *****************************************************************************

int fflush(FILE *fp);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/findfp.c
// *****************************************************************************

static void std(FILE *ptr, int flags, int file, _reent *data);

_glue* __sfmoreglue(_reent *d, int n);

FILE* __sfp(_reent *d);

void _cleanup_r(_reent *ptr);
void _cleanup();
void __sinit(_reent *s);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/fread.c
// *****************************************************************************

size_t fread(void *buf, size_t size, size_t count, FILE *fp);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

void _free_r(_reent *reent_ptr, void *mem);

int _malloc_trim_r(_reent *reent_ptr, size_t pad);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/fvwrite.c
// *****************************************************************************

int __sfvwrite(FILE *fp, __suio *uio);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/fwalk.c
// *****************************************************************************

int _fwalk(_reent *ptr, int (*function)());

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/locale/locale.c
// *****************************************************************************

char* _setlocale_r(_reent *p, int category, char *locale);

lconv* _localeconv_r(_reent *data);
char* setlocale(int category, char *locale);
lconv* localeconv();

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/makebuf.c
// *****************************************************************************

void __smakebuf(FILE *fp);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

void __malloc_update_mallinfo();

mallinfo _mallinfo_r(_reent *reent_ptr);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

int _mallopt_r(_reent *reent_ptr, int param_number, int value);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

void _malloc_stats_r(_reent *reent_ptr);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mbtowc_r.c
// *****************************************************************************

int _mbtowc_r(_reent *r, wchar_t *pwc, char *s, size_t n, int *state);

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memchr.S
// *****************************************************************************

memchr();

// *****************************************************************************
// FILE -- ../../../../../../src/newlib/libc/machine/r5900/memmove.S
// *****************************************************************************

memmove();

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mprec.c
// *****************************************************************************

_Bigint* _Balloc(_reent *ptr, int k);

void _Bfree(_reent *ptr, _Bigint *v);

_Bigint* _multadd(_reent *ptr, _Bigint *b, int m, int a);

_Bigint* _s2b(_reent *ptr, char *s, int nd0, int nd, ULong y9);

int _hi0bits(ULong x);

int _lo0bits(ULong *y);

_Bigint* _i2b(_reent *ptr, int i);

_Bigint* _multiply(_reent *ptr, _Bigint *a, _Bigint *b);

_Bigint* _pow5mult(_reent *ptr, _Bigint *b, int k);

_Bigint* _lshift(_reent *ptr, _Bigint *b, int k);

int __mcmp(_Bigint *a, _Bigint *b);

_Bigint* __mdiff(_reent *ptr, _Bigint *a, _Bigint *b);

double _ulp(double _x);

double _b2d(_Bigint *a, int *e);

_Bigint* _d2b(_reent *ptr, double _d, int *e, int *bits);

double _ratio(_Bigint *a, _Bigint *b);

double _mprec_log10(int dig);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/refill.c
// *****************************************************************************

static int lflush(FILE *fp);
int __srefill(FILE *fp);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_isinf.c
// *****************************************************************************

int isinf(double x);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/signal/signal.c
// *****************************************************************************

int _init_signal_r(_reent *ptr);

_sig_func_ptr _signal_r(_reent *ptr, int sig, _sig_func_ptr func);

int _raise_r(_reent *ptr, int sig);

int __sigtramp_r(_reent *ptr, int sig);

int raise(int sig);
_sig_func_ptr signal(int sig, _sig_func_ptr func);
int _init_signal();
int __sigtramp(int sig);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/signalr.c
// *****************************************************************************

int _kill_r(_reent *ptr, int pid, int sig);

int _getpid_r(_reent *ptr);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/stdio.c
// *****************************************************************************

int __sread(void *cookie, char *buf, int n);

int __swrite(void *cookie, char *buf, int n);

fpos_t __sseek(void *cookie, fpos_t offset, int whence);

int __sclose(void *cookie);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/strtoul.c
// *****************************************************************************

long unsigned int _strtoul_r(_reent *rptr, char *nptr, char **endptr, int base);

long unsigned int strtoul(char *s, char **ptr, int base);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdio/ungetc.c
// *****************************************************************************

int __submore(FILE *fp);

int ungetc(int c, FILE *fp);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/writer.c
// *****************************************************************************

_ssize_t _write_r(_reent *ptr, int fd, void *buf, size_t cnt);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

void* _calloc_r(_reent *reent_ptr, size_t n, size_t elem_size);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/closer.c
// *****************************************************************************

int _close_r(_reent *ptr, int fd);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/fstatr.c
// *****************************************************************************

int _fstat_r(_reent *ptr, int fd, stat *pstat);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/lseekr.c
// *****************************************************************************

_off_t _lseek_r(_reent *ptr, int fd, off_t pos, int whence);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/readr.c
// *****************************************************************************

_ssize_t _read_r(_reent *ptr, int fd, void *buf, size_t cnt);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

void* _realloc_r(_reent *reent_ptr, void *oldmem, size_t bytes);

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

DItype __fixdfdi(DFtype a);
