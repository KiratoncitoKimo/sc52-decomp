// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/src/enddemo.c
// *****************************************************************************

/* rdata 326900 */ static Float mem_mode_frame[3];
/* bss 35f444 */ static EndDemoTask *mem_demo_task_p;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/src/game.c
// *****************************************************************************

/* rdata 3269d0 */ static gwVarEditData edit_group;
/* rdata 326a08 */ static gwVarEditData edit_data[0];
/* bss 35f448 */ static BlockTask *btask;
/* bss 35f44c */ static GameTask *gtask;
/* bss 35f450 */ static Bool game_over_enable_flag;
/* bss 35f454 */ static Bool dummy_flag;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/src/sequence.c
// *****************************************************************************

/* rdata 326d00 */ static dgPadDig galaxy_new_com[0];
/* rdata 326d10 */ static dgPadDig galaxy_new_mirror_com[0];
/* rdata 326d20 */ static dgPadDig galaxy_old_com[0];
/* rdata 326d48 */ static SeqGalaxyData galaxy_data_tbl[0];
/* rdata 326d60 */ static SeqDemoData seq_demo_tbl[0];
/* rdata 326d70 */ static gwVarEditData edit_group;
/* rdata 326db8 */ static gwVarEditData edit_data[0];
/* rdata 326e70 */ static int (*tl_func[0])(/* parameters unknown */);
/* bss 35f458 */ static SeqTask *stask;
/* bss 35f45c */ static SeqTitleLoopTask *stl_task;
/* bss 35f460 */ static SeqEditParam seq_edit_param;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/src/version.c
// *****************************************************************************

/* data 271680 */ char version[21];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/audirate.c
// *****************************************************************************

/* rdata 3270a0 */ static dgDebugEditInfo param_info[0];
/* bss 35f468 */ static AudiTask *atask;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/bup_icondata.c
// *****************************************************************************

/* rdata 327268 */ char IconData_IconSysBuf[0];
/* rdata 327630 */ char IconData_Ch5IcoBuf[0];
/* data 271698 */ int IconData_Ch5IcoSize;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/bupflag.c
// *****************************************************************************

/* rdata 339f30 */ static Uint8 bit_or[0];
/* rdata 339f38 */ static Uint8 bit_and[0];
/* rdata 339f40 */ static Sint8 secret_r1[0];
/* rdata 339f48 */ static Sint8 secret_r2[0];
/* rdata 339f50 */ static Sint8 secret_r3[0];
/* rdata 339f58 */ static Sint8 secret_r4[0];
/* rdata 339f60 */ static Sint8 secret_r5[0];
/* rdata 339f68 */ static Sint8 secret_r6[0];
/* data 2716a0 */ static BupSecret secret_data[0];
/* rdata 339f70 */ static dgPadDig key_to_paddig[0];
/* data 2716d0 */ static Sint16 stereo_vol_tbl[0];
/* data 2716e0 */ static Sint16 mono_vol_tbl[0];
/* rdata 339fa0 */ static dgBupInitData bup_initdata;
/* rdata 339fa8 */ static Sint8 round_tbl[0];
/* data 2716f0 */ static BupWarningData bup_warning_data[0];
/* bss 35f490 */ static FlagData usr_flag;
/* bss 35f690 */ static FlagData mem_flag;
/* bss 35f890 */ static dgCaptionHeader *caption_ptr;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/camctrl.c
// *****************************************************************************

/* bss 35f894 */ static CamCtrlTask *cc_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/cdb_charno.c
// *****************************************************************************

/* rdata 33a760 */ char *cdb_char_name[0];
/* rdata 33cbf0 */ char *cdb_char_roman_name[0];
/* rdata 33e640 */ int cdb_char_max;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/cds.c
// *****************************************************************************

/* rdata 33e648 */ static dgDebugEditInfo grid_edit_tbl[0];
/* bss 35f898 */ static CdsManTask *cur_man_task_p;
/* bss 35f89c */ static Bool mem_use_force_level;
/* bss 35f8a0 */ static dgShCdsLevel mem_force_level;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/char_common.c
// *****************************************************************************

/* rdata 33e8a0 */ static gwVarEditData edit_group;
/* rdata 33e8f0 */ static gwVarEditData edit_data[0];
/* bss 35f8a8 */ static Bool data_flag;
/* bss 35f8ac */ static Bool edit_on;
/* bss 35f8b0 */ static Bool save_flag;
/* bss 35f8b4 */ static Bool load_flag;
/* bss 35f8b8 */ static char bup_name[12];
/* bss 35f8c4 */ static Sint32 edit_round;
/* bss 35f8c8 */ static Sint32 edit_block;
/* bss 35f8cc */ static PosEditTask *mem_edit_task_p;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/char_effect.c
// *****************************************************************************

/* rdata 33ed08 */ static EffectParam mem_param_tbl[14];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/char_man.c
// *****************************************************************************

/* rdata 33edf0 */ static dgTaskParam charman_param;
/* rdata 33ee20 */ static gwCommandData charman_com_data[0];
/* rdata 33ef70 */ static gwVarEditData edit_group;
/* rdata 33efb0 */ static gwVarEditData edit_data[0];
/* rdata 33f0e0 */ static CharDebugMember debug_party_member[0];
/* rdata 33f138 */ static CharDebugMember debug_dance_member[0];
/* rdata 33f148 */ static CharDebugMember debug_gakkibito_member[0];
/* rdata 33f180 */ static CharDebugMember *default_debug_member_pp[0];
/* rdata 33f190 */ static float default_level_tbl[2][4];
/* rdata 33f1b0 */ static CdsLvlTbl def_cds_level_tbl[4];
/* bss 35f1e8 */ enum CharManStatus {
	CHAR_MAN_NOT_READY = -1,
	CHAR_MAN_MTP_READEN = 0,
	CHAR_MAN_READY_LIMIT = 0,
	CHAR_MAN_READY = 1,
	CHAR_MAN_END = 2
};
/* bss 35f8d0 */ static CharManTask *mem_charman_task_p;
/* bss 35f8d4 */ static CdsBreakLevel debug_break_level;
/* bss 35f8d8 */ static Bool set_debug_flag;
/* bss 35f8dc */ static Bool danceman_flag;
/* bss 35f8e0 */ static Bool gakkibito_flag;
/* bss 35f8e4 */ static Sint32 start_member_num;
/* bss 35f8e8 */ static CharDebugMember **mem_debug_member_pp;
/* bss 35f8ec */ static CharManDefaultLevel mem_char_level;
/* bss 35f8f0 */ static CdsLvlTbl *mem_cds_level_tbl_p;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/clipcharacter.c
// *****************************************************************************

/* rdata 33f4d0 */ static dgTaskParam _clpchar_taskfunc_set;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/clipdatabase.c
// *****************************************************************************

/* data 271728 */ ClpDBTaskPtr _clpdb_task_ptr;
/* rdata 33f590 */ static dgTaskParam _clpdb_taskfunc_set;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/clipdeb.c
// *****************************************************************************

/* data 27172c */ ClpDebTaskPtr _clpdeb_task_ptr;
/* rdata 340320 */ static dgTaskParam _clpdeb_taskfunc_set;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/clipmanager.c
// *****************************************************************************

/* data 271730 */ ClpManTaskPtr _clpman_task_ptr;
/* rdata 340a38 */ static dgTaskParam _clpman_taskfunc_set;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/clipplayer.c
// *****************************************************************************

/* rdata 340aa8 */ static dgTaskParam _clpply_taskfunc_set;
/* data 271734 */ Float _lip_time_ofs;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/clipstream.c
// *****************************************************************************

/* data 271738 */ ClpStmTaskPtr _clpstm_task_ptr;
/* rdata 340ba8 */ static dgTaskParam _clpstm_taskfunc_set;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/costume_cspr.c
// *****************************************************************************

/* data 271740 */ NJS_CELL cell_isyou_text_256_scene1_isyou_text_256_model1[0];
/* data 271c00 */ NJS_CELL_SPRITE csprite_isyou_text_256_scene1_isyou_text_256_model1;
/* data 271c40 */ NJS_CELL cell_isyou_waku_scene1_isyou_waku_model1[0];
/* data 271e80 */ NJS_CELL_SPRITE csprite_isyou_waku_scene1_isyou_waku_model1;
/* rdata 340c18 */ static dgMathVector2 appear_scale_tbl[0];
/* rdata 340c60 */ static Sint32 cspr_cos_str[0];
/* rdata 340c68 */ static Sint32 cspr_item_str[0];
/* rdata 340c70 */ static Sint32 cspr_cos_tri[0];
/* rdata 340c78 */ static Sint32 cspr_item_tri[0];
/* rdata 340c80 */ static Sint32 cspr_cos_num[0];
/* rdata 340c88 */ static Sint32 cspr_item_num[0];
/* rdata 340c90 */ static Sint32 cspr_cos_max[0];
/* rdata 340ca0 */ static Sint32 cspr_item_max[0];
/* rdata 340cb0 */ static Sint32 cspr_ab[0];
/* rdata 340cb8 */ static Sint32 cspr_select[0];
/* rdata 340cc0 */ static CellPartsDef cell_parts_cos_str;
/* rdata 340cc8 */ static CellPartsDef cell_parts_item_str;
/* rdata 340cd0 */ static CellPartsDef cell_parts_cos_tri;
/* rdata 340cd8 */ static CellPartsDef cell_parts_item_tri;
/* rdata 340ce0 */ static CellPartsDef cell_parts_cos_num;
/* rdata 340ce8 */ static CellPartsDef cell_parts_item_num;
/* rdata 340cf0 */ static CellPartsDef cell_parts_cos_max;
/* rdata 340cf8 */ static CellPartsDef cell_parts_item_max;
/* rdata 340d00 */ static CellPartsDef cell_parts_ab;
/* rdata 340d08 */ static CellPartsDef cell_parts_select;
/* rdata 340d10 */ static CellPartsDef *cell_parts_tbl[0];
/* rdata 340d38 */ static Uint32 cval_flag_tbl[0];
/* rdata 340d60 */ static dgCellsprTexData cell_number_tbl[0];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/costume_room.c
// *****************************************************************************

/* rdata 340ea0 */ static dgCharNo item_tbl[0];
/* rdata 340ed0 */ static dgCharNo other_obj_tbl[0];
/* rdata 340ef8 */ static Sint16 bgcol_black[0];
/* rdata 340f00 */ static Sint16 bgcol_blue[0];
/* rdata 340f08 */ static Sint16 bgcol_red[0];
/* rdata 341290 */ static void (*cosroom_init_func_tbl[0])(/* parameters unknown */);
/* rdata 3412c0 */ static void (*cosroom_exec_func_tbl[0])(/* parameters unknown */);
/* bss 35f8f4 */ static CosRoom *cos_room_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dance.c
// *****************************************************************************

/* bss 35f8f8 */ static DanceManTask *cur_dance_task_p;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_app.c
// *****************************************************************************

/* rdata 3414b0 */ static Sint32 to_mw_tbl[0];
/* rdata 3414c8 */ static Sint32 cable_type[0];
/* rdata 3414d8 */ static float aspect_y[0];
/* bss 35f8fc */ static Sint8 app_init_flag;
/* bss 35f900 */ static dgMathQuaternion *quat;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_audio.c
// *****************************************************************************

/* data 271ec0 */ char *_dgaudio_stream_def_name;
/* data 271ec8 */ char *_dgaudio_stream_name[0];
/* data 271f48 */ static dgDebugEditInfo _dgaudio_edit_moreinfo_info[0];
/* bss 9acff0 */ dgAudioSystemInfo dgaudio_system_info;
/* bss 35faa0 */ static char dgaudio_getname_buf[37];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_backup.c
// *****************************************************************************

/* rdata 342400 */ static dgBupInitData bup_default_initdata;
/* rdata 342408 */ static char *slot_str[0];
/* bss 35fac8 */ static BupCtrl bup_ctrl_buf;
/* bss 35fd30 */ static dgBupReqCallback *bup_callback;
/* bss 35fd34 */ static void *bwork;
/* bss 35fd38 */ static Bool bup_connect_new_flag;
/* bss 35fd3c */ static Bool bup_autosave_flag;
/* bss 35fd40 */ static BupDebugTask *btask;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_camdebug.c
// *****************************************************************************

/* rdata 342700 */ static void (*init_camera[0])(/* parameters unknown */);
/* rdata 342730 */ static int choice_camera_key[0];
/* bss 35fd44 */ static CamDebugTask *camdebug_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_camedit.c
// *****************************************************************************

/* rdata 342740 */ static dgMathVector3 cvec_init[0];
/* rdata 342be0 */ static void (*edit_point_cedit_type[0])(/* parameters unknown */);
/* rdata 342bf8 */ static int ctype_tbl[0];
/* rdata 342c10 */ static int choice_camera_key[0];
/* rdata 342c28 */ static void (*camedit_disp_mode[0])(/* parameters unknown */);
/* bss 35fd48 */ static CamEditWork cam_edit_work;
/* bss 35fd80 */ static CamEditPlay cam_edit_play;
/* bss 35fd90 */ static CamEditTask *camedit_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_camedit_neo.c
// *****************************************************************************

/* rdata 342c70 */ static Uint32 gw_bg_colors[0];
/* rdata 342c80 */ static int cam_button_tbl[0];
/* rdata 342c98 */ static void (*camdebug_get_func_v3[0])(/* parameters unknown */);
/* rdata 342ca0 */ static dgMathAngle1 (*camdebug_get_func_a1[0])(/* parameters unknown */);
/* rdata 342ca8 */ static void (*camdebug_set_func_v3[0])(/* parameters unknown */);
/* rdata 342cb0 */ static void (*camdebug_set_func_a1[0])(/* parameters unknown */);
/* rdata 342f08 */ static ButtonData seq_button_play[0];
/* rdata 342f80 */ static ButtonData seq_button_play_set[0];
/* rdata 342ff8 */ static ButtonData seq_button_file[0];
/* rdata 343028 */ static ButtonData seq_button_file_asread[0];
/* rdata 343048 */ static ButtonData seq_button_file_switch[0];
/* rdata 343060 */ static ButtonData seq_button_copy[0];
/* rdata 343090 */ static ButtonData seq_button_edit[0];
/* rdata 3430d8 */ static ButtonData seq_button_select[0];
/* rdata 343120 */ static ButtonData seq_button_camera[0];
/* rdata 343198 */ static ButtonData seq_button_camera_set[0];
/* rdata 343208 */ static ButtonData seq_button_debug[0];
/* rdata 343238 */ static ButtonData seq_button_exit[0];
/* rdata 343250 */ static ButtonRowData seq_button_tbl[0];
/* rdata 3435f8 */ static void (*base_win_disp_tbl[0])(/* parameters unknown */);
/* rdata 343610 */ static dgDebugEditInfo param_info[0];
/* rdata 343848 */ static ceForce ce_force_param[0];
/* bss 35fda0 */ static ceTask *ce_task;
/* bss 35fda8 */ static ceWork ce_work;
/* bss 35fdb8 */ static ceForce ce_force[8];
/* bss 35ff00 */ static dgCenBuf cen_buf;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_camera.c
// *****************************************************************************

/* rdata 3438d0 */ static dgDebugEditInfo param_info[0];
/* bss 360020 */ static Camera *ctask;
/* bss 360030 */ static Camera cam_buf;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_caption.c
// *****************************************************************************

/* rdata 343aa8 */ static Float dialog_x[0];
/* bss 3601c0 */ static int capstm_prep_count;
/* bss 3601c4 */ static dgCaption *capstm_current_caption;
/* bss 3601c8 */ static dgCaptionHeader *dg_caption_header;
/* bss 3601d0 */ static dgCaptionStreamHeader *dg_capstm_tim_header[3];
/* bss 3601e0 */ static dgCaptionHeader *dg_capstm_cap_header[3];
/* bss 3601f0 */ static dgCaptionStreamParent *dg_capstm_task[3];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_cdb.c
// *****************************************************************************

/* rdata 343b98 */ static char *_cdb_kanji_moji[0];
/* data 271fd8 */ static dgDebugEditInfo _dgcdb_edit_info[0];
/* bss 9afa80 */ dgCdbSystemInfo dgcdb_system_info;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_char.c
// *****************************************************************************

/* rdata 344e70 */ static dgTaskParam man_watch_task_param;
/* bss 360200 */ static Bool wire_mode;
/* bss 360208 */ static CharManData man_task_tbl[32];
/* bss 360408 */ static CharManWatchTask *watch_task_p;
/* bss 36040c */ static float frame_speed;
/* bss 360410 */ static void *mem_obj_parent_task_p;
/* bss 360414 */ static Bool mem_draw_disable;
/* bss 360420 */ static dgMathMatrix mem_constrain_matrix_tbl[8];
/* bss 360620 */ static ConstrainData mem_constrain_data_tbl[8];
/* bss 3606a0 */ static Sint32 mem_constrain_counter;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_charlevel.c
// *****************************************************************************

/* rdata 345090 */ static gwVarEditData edit_group;
/* rdata 3450e0 */ static gwVarEditData edit_data[0];
/* bss 3606a8 */ static float level_dist[4];
/* bss 3606b8 */ static float level_margin;
/* bss 3606bc */ static gwVarEditList *edit_list_p;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_charmotion.c
// *****************************************************************************

/* bss 3606c0 */ static float motion_speed;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_debfile.c
// *****************************************************************************

/* bss 9ba7e0 */ dgDebFileKeepCwd dgdebfile_keep_cwd;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_debug.c
// *****************************************************************************

/* rdata 3452f0 */ static char *who_name[0];
/* rdata 345470 */ static Uint32 gw_bg_colors[0][4];
/* rdata 345690 */ static PortInfoData port_data_tbl[0];
/* bss 3606c8 */ static DebugBuf dbuf;
/* bss 3606f0 */ static DebugTask *debug_task;
/* bss 3606f4 */ static Uint32 exec_start;
/* bss 3606f8 */ static Uint32 exec_time;
/* bss 3606fc */ static Uint32 gindows_start;
/* bss 360700 */ static Uint32 gindows_time;
/* bss 360704 */ static Uint32 render_time;
/* bss 360708 */ static Uint32 prev_loop_count;
/* bss 36070c */ static Uint32 loop_total_time;
/* bss 360710 */ static Uint32 frame_time;
/* bss 360714 */ static GWHWND gindows_handle;
/* bss 360718 */ static GWHWND peri_gwnd;
/* bss 36071c */ static GWHWND right_button_handle;
/* bss 360720 */ static GWHWND left_button_handle;
/* bss 360724 */ static Sint32 cur_port_index;
/* bss 360728 */ static GWHWND rend_gwnd;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_drawcallback.c
// *****************************************************************************

/* bss 9ba8e8 */ dgDrawCallBackSystemInfo dgdrawcallback_system_info;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_basic.c
// *****************************************************************************

/* rdata 345a60 */ static Float uv_16_tbl[16][2][2];
/* rdata 345b60 */ static Float uv_4_tbl[4][2][2];
/* rdata 345ba0 */ static dgMathVector3 poly_offset_pos_xy[4];
/* rdata 345bd0 */ static dgMathVector3 poly_offset_pos_xz[4];
/* rdata 345c00 */ static dgMathVector3 quarter_offset_pos_ul[4];
/* rdata 345c30 */ static dgMathVector3 quarter_offset_pos_ur[4];
/* rdata 345c60 */ static dgMathVector3 quarter_offset_pos_dl[4];
/* rdata 345c90 */ static dgMathVector3 quarter_offset_pos_dr[4];
/* bss 360730 */ static dgMathVector3 *player_col_wpos_ptr[10];
/* bss 360758 */ static dgMathVector3 *player_col_vpos_ptr[10];
/* bss 360780 */ static dgMathVector3 player_base_pos;
/* bss 360790 */ static dgMathAngle3 player_base_ang;
/* bss 36079c */ static Bool seq_play2_flg;
/* bss 3607a0 */ static Uint32 eff_texnum_tbl[77];
/* bss 3608d8 */ static Uint32 eff_cix_tbl[14];
/* bss 360910 */ static EffTexTask *eff_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_beam.c
// *****************************************************************************

/* bss 360914 */ static dgMathMatrix *beam_relative_mtrx_ptr;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_hit.c
// *****************************************************************************

/* rdata 346058 */ static EffSprInitData ihit02_init_data[0];
/* rdata 3460b0 */ static EffSprInitData jhit_init_data[0];
/* data 272028 */ static EffSprInitData ihit01_init_data[0];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_eff_other.c
// *****************************************************************************

/* rdata 346368 */ static EffSprInitData dance_eff_init_data[0];
/* rdata 3464b8 */ static Float rot_v_tbl[0][6];
/* rdata 346568 */ static Float fire_scale[10];
/* rdata 346590 */ static dgMathVector3 poly_offset_pos_xy[4];
/* rdata 346680 */ static dgMathVector3 purge_chu_pos[2][2];
/* bss 360920 */ static dgMathMatrix rel2abs_mtrx;
/* bss 360960 */ static dgMathMatrix abs2rel_mtrx;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_filecache.c
// *****************************************************************************

/* bss 9bab78 */ dgFilecacheSystemInfo dgfilecache_system_info;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_files.c
// *****************************************************************************

/* data 272080 */ static char *_dgfile_cachemode_tbl[0];
/* data 272090 */ Sint32 _dgfile_localvol_locate_hdd_;
/* data 272094 */ static char *_dgfile_notfound;
/* bss 9bb208 */ dgFileSystemInfo dgfile_system_info;
/* bss 3616d0 */ static char _dgfile_kazu_name[4];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_font.c
// *****************************************************************************

/* data 2720c8 */ char NAME_ZENFONT_GD[11];
/* data 2720d8 */ char FILE_ZENFONT_GD[0];
/* data 298ddc */ Uint32 SIZE_ZENFONT_GD;
/* data 298de0 */ char NAME_HANFONT_GD[11];
/* data 298df0 */ char FILE_HANFONT_GD[0];
/* data 29c3c8 */ Uint32 SIZE_HANFONT_GD;
/* bss 3616d8 */ static kjFontInitParam p;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_indicate.c
// *****************************************************************************

/* rdata 348890 */ static dgTexRectSprite num_spr[0];
/* rdata 3489b0 */ static dgTexRectSprite num_spr_red[0];
/* rdata 348ad0 */ static dgTexRectSprite heart_spr[0];
/* rdata 348b30 */ static dgTexRectSprite ring_spr;
/* rdata 348b48 */ static dgTexRectSprite flash_spr[0];
/* rdata 348b78 */ static dgTexRectSprite rating_spr;
/* rdata 348b90 */ static dgTexRectSprite rating_spr_red;
/* rdata 348ba8 */ static dgTexRectSprite change_spr;
/* rdata 348bc0 */ static dgTexRectSprite turn_spr;
/* bss 361708 */ static Uint32 indicate_tex_tbl[10];
/* bss 361730 */ static IndicateTask *indicate_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_input.c
// *****************************************************************************

/* rdata 348f08 */ static dgSoundData se_00[0];
/* rdata 348f10 */ static dgSoundData se_01[0];
/* rdata 348f18 */ static dgSoundData se_02[0];
/* rdata 348f20 */ static dgSoundData se_03[0];
/* rdata 348f28 */ static dgSoundData se_04[0];
/* rdata 348f30 */ static dgSoundData se_05[0];
/* rdata 348f38 */ static dgSoundData se_06[0];
/* rdata 348f40 */ static dgSoundData se_07[0];
/* rdata 348f48 */ static dgSoundData se_08[0];
/* rdata 348f50 */ static dgSoundData se_09[0];
/* rdata 348f58 */ static dgSoundData se_10[0];
/* rdata 348f60 */ static dgSoundData se_11[0];
/* rdata 348f68 */ static dgSoundData se_12[0];
/* rdata 348f70 */ static dgSoundData se_13[0];
/* rdata 348f78 */ static dgSoundData se_14[0];
/* rdata 348f80 */ static dgSoundData se_15[0];
/* rdata 348f88 */ static dgSoundData se_16[0];
/* rdata 348f90 */ static dgSoundData se_17[0];
/* rdata 348f98 */ static dgSoundData se_18[0];
/* rdata 348fa0 */ static dgSoundData se_19[0];
/* rdata 348fa8 */ static dgSoundData se_20[0];
/* rdata 348fb0 */ static dgSoundData se_21[0];
/* rdata 348fb8 */ static dgSoundData se_22[0];
/* rdata 348fc0 */ static dgSoundData se_23[0];
/* rdata 348fc8 */ static dgSoundData se_24[0];
/* rdata 348fd0 */ static dgSoundData se_25[0];
/* rdata 348fd8 */ static dgSoundData se_26[0];
/* rdata 348fe0 */ static dgSoundData se_27[0];
/* rdata 348fe8 */ static dgSoundData se_28[0];
/* rdata 348ff0 */ static dgSoundData se_29[0];
/* rdata 348ff8 */ static dgSoundData se_30[0];
/* rdata 349000 */ static dgSoundData se_31[0];
/* rdata 349008 */ static dgSoundData se_32[0];
/* rdata 349010 */ static dgSoundData se_33[0];
/* rdata 349018 */ static dgSoundData se_34[0];
/* rdata 349020 */ static dgSoundData se_35[0];
/* rdata 349028 */ static dgSoundData se_36[0];
/* rdata 349030 */ static dgSoundData se_37[0];
/* rdata 349038 */ static dgSoundData se_38[0];
/* rdata 349040 */ static dgInputSeData default_se_list[0];
/* bss 361738 */ static Sint8 galaxy_mode;
/* bss 361740 */ static inpMainBuf_Rap inp_main;
/* bss 380720 */ static inpMemory inp_mem;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_karaoke.c
// *****************************************************************************

/* bss 380774 */ static Sint8 karaoke_hide_flag;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_key.c
// *****************************************************************************

/* rdata 3492c0 */ static Sint8 ctrl_key_1[0];
/* rdata 3492c8 */ static Sint8 ctrl_key_2[0];
/* rdata 3492d0 */ static Sint8 ctrl_key_3[0];
/* rdata 3492d8 */ static Sint8 ctrl_key_4[0];
/* rdata 3492e0 */ static Sint8 ctrl_key_5[0];
/* rdata 3492e8 */ static Sint8 ctrl_key_6[0];
/* rdata 3492f0 */ static Sint8 ctrl_key_7[0];
/* rdata 3492f8 */ static Sint8 *ctrl_key_tbl[0];
/* bss 380778 */ static Keyboard keyboard;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_light.c
// *****************************************************************************

/* rdata 349318 */ static int sm_light[0];
/* rdata 349328 */ static int em_light[0];
/* rdata 349338 */ static NJD_CNK_INTENSITY_LIGHT intensity_light_num_tbl[0];
/* rdata 349348 */ static dgDebugEditInfo param_info[0];
/* bss 3807ec */ static LightTask *ltask;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_main.c
// *****************************************************************************

/* data 1d42480 */ char mem_end[128];
/* data 29c3d0 */ static int vsync_cnt;
/* data 29c3d4 */ static int vsync_waitrender;
/* data 29c3d8 */ static int vsync_mysterious;
/* data 29c3dc */ static int _enable_flush_flag_;
/* data 29c3e0 */ static int appDispListSize[16];
/* data 29c420 */ static int appCurrentDisplayLists;
/* data 29c424 */ static dgMainDisplayListPrio current_displaylist_prio;
/* data 29c428 */ static int _gs_finish_callback_;
/* data 29c42c */ static int _app_render_flag_;
/* data 29c430 */ static int callback_entry_num;
/* data 29c434 */ static int waitDisplayListTimes;
/* bss 35f1f0 */ int CableType;
/* bss 35f1ec */ int LanguageType;
/* bss 1c94a00 */ char mem_round[262144];
/* bss 1ce4a00 */ char mem_data_kj[196608];
/* bss 1cd4a00 */ char mem_datac[65536];
/* bss 1394a00 */ char mem_heap1[9437184];
/* bss bd4a00 */ char mem_heap2[8126464];
/* bss 380800 */ static psDisplayList *_trans_displaylist_;
/* bss 380804 */ static psDisplayList *_dmareq_displaylist_;
/* bss 380840 */ static char mem_app_heap[2097152];
/* bss 580840 */ static char fileSysWork[1504];
/* bss 580e20 */ static char curDirRecBuf[848];
/* bss 1d14a00 */ ulMatrix MatrixStackBuf[96];
/* bss 581180 */ static char vertexBuf[262144];
/* bss 5c1180 */ static ulHeapHandle appHeap;
/* bss 5c11c0 */ static char appDmaPktBuf[2][1835008];
/* bss 9411c0 */ static char *displayListBuf[2][16];
/* bss 941240 */ static psPktBuf *appPktBuf[2];
/* bss 941248 */ static psDisplayList *appDisplayList[2][16];
/* bss 941300 */ static char texHeapBuf[24640];
/* bss 947340 */ static ulGxDesc gxDesc;
/* bss 947360 */ static int _app_render_start_time_;
/* bss 947364 */ static int _app_render_time_;
/* bss 947368 */ static dgVSyncCallbackInfo callback_list[8];
/* bss 9473e8 */ static int waitDisplayListFlag;
/* bss 9473ec */ static Bool ino_pause_endless_on;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_map.c
// *****************************************************************************

/* bss 9473f0 */ static MapTask *map_task;
/* bss 9473f4 */ static Bool map_compile_ignore_flg;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_mem.c
// *****************************************************************************

/* bss 35f1f4 */ dgMemHeader *heap_area;
/* bss 9473f8 */ static dgMemHeader *freep_top;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_motion.c
// *****************************************************************************

/* rdata 3499f8 */ static Sint16 player_sym_list[0];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_movie.c
// *****************************************************************************

/* data 29c4b0 */ static dgDebugEditInfo _dgmovie_edit_cue_info[0];
/* bss 1d16200 */ dgMovieSystemInfo dgmovie_system_info;
/* bss 947508 */ static char dgmovie_getname_buf[37];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_obj.c
// *****************************************************************************

/* rdata 34a3f0 */ static Sint32 (*draw_model_func[0])(/* parameters unknown */);
/* rdata 34a440 */ static Sint32 (*draw_model_noclip_func[0])(/* parameters unknown */);
/* bss 947530 */ static int vertex_buffer_stack_no;
/* bss 947534 */ static Float *tmp_pos;
/* bss 947538 */ static Float *tmp_quat;
/* bss 94753c */ static Float *tmp_scl;
/* bss 947540 */ static Uint32 nj_cnk_clip_num_tmp;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_pad.c
// *****************************************************************************

/* rdata 34a7b0 */ static Sint8 peri_tbl[0];
/* bss 1d167c0 */ dgPadCtrl dgPadCtrlBuf;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_prestream.c
// *****************************************************************************

/* rdata 34acb8 */ static char *_dgprestream_stm_name[0];
/* bss 1d169c8 */ dgPrestreamSystemInfo dgprestream_system_info;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_printf.c
// *****************************************************************************

/* rdata 34ad00 */ static Uint32 debug_color[0];
/* bss 947548 */ static PrintfBuf pbuf;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_quaternion.c
// *****************************************************************************

/* bss 9475d0 */ static dgQuaternionStack qstack;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_sbinit.c
// *****************************************************************************

/* bss 1d1bc80 */ Uint8 gMapleRecvBuf[49184];
/* bss 1d27ca0 */ Uint8 gMapleSendBuf[49184];
/* bss 1d3ecf0 */ Uint8 gdfswork[5684];
/* bss 1d33cc0 */ Uint8 gdfscurdir[45104];
/* bss 1d16c80 */ Uint32 gIntStackBuf[5120];
/* bss 1d40328 */ SYS_FBR_INFO gFiberInfo[16];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_shape.c
// *****************************************************************************

/* rdata 34ad98 */ static Sint8 shape_type_tbl[0][3];
/* rdata 34adc0 */ static Sint8 type_for_chunk_vertex[0];
/* rdata 34add8 */ static Sint8 type_for_chunk_shape[0];
/* rdata 34ae90 */ static void (*vc_copy_func_tbl[0])(/* parameters unknown */);
/* rdata 34aeb0 */ static void (*vc_blend_func_tbl[0])(/* parameters unknown */);
/* rdata 34aed0 */ static void (*vc_ratioset_func_tbl[0])(/* parameters unknown */);
/* rdata 34aef0 */ static void (*vc_ratioadd_func_tbl[0])(/* parameters unknown */);
/* bss 9475e0 */ static KeyGroup key_group[8];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_sound.c
// *****************************************************************************

/* rdata 34b090 */ static char *m_Flg_str[0];
/* rdata 34b158 */ static BankData bank_data[0];
/* bss 947620 */ static SoundCtrl soundCtrl;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_sound_ev.c
// *****************************************************************************

/* bss 9479a8 */ static sndEvCtrl snd_ev_ctrl;
/* bss 947fd8 */ static sndEvCtrl adx_ev_ctrl;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_spledit.c
// *****************************************************************************

/* rdata 34b428 */ static Uint32 debug_line_color[0];
/* rdata 34b440 */ static int cmd_key[0];
/* rdata 34b458 */ static void (*node_edit_func_v3[0])(/* parameters unknown */);
/* rdata 34b470 */ static void (*node_edit_func_a1[0])(/* parameters unknown */);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_spline.c
// *****************************************************************************

/* rdata 34b4d0 */ static Sint8 data_element_num[0];
/* rdata 34b4f8 */ static void (*v1_play[0])(/* parameters unknown */);
/* rdata 34b508 */ static void (*v2_play[0])(/* parameters unknown */);
/* rdata 34b518 */ static void (*v3_play[0])(/* parameters unknown */);
/* rdata 34b528 */ static void (*a1_play[0])(/* parameters unknown */);
/* rdata 34b538 */ static void (*a2_play[0])(/* parameters unknown */);
/* rdata 34b548 */ static void (*a3_play[0])(/* parameters unknown */);
/* rdata 34b598 */ static void (*copy_point_data_functbl[0])(/* parameters unknown */);
/* rdata 34b5a8 */ static void (*swap_point_data_functbl[0])(/* parameters unknown */);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_stream.c
// *****************************************************************************

/* data 29c4d8 */ static char *_dgstream_streamname[0];
/* bss 1d403a8 */ dgStreamSystemInfo dgstream_system_info;
/* bss 1d40a48 */ char _dgstream_fileinfo_buf[100];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_superh.c
// *****************************************************************************

/* rdata 34c908 */ static dgDebugEditInfo param_info[0];
/* rdata 34c9b8 */ static char *status_str[0];
/* rdata 34cc68 */ static void (*window_draw_sub[0])(/* parameters unknown */);
/* bss 948620 */ static shMainBuf_Rap sh_main;
/* bss 948780 */ static void *sh_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_superh_ev.c
// *****************************************************************************

/* rdata 34cf20 */ static dgShEventCmd all_cmd[0];
/* bss 948784 */ static dgShEventTask *ev_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_superh_spy.c
// *****************************************************************************

/* bss 948788 */ static dgShSpyTask *sh_spy_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_system.c
// *****************************************************************************

/* bss 1d40ab0 */ dgSysVar dg_sys_var;
/* bss 94878c */ static Sint8 inter_flag;
/* bss 948790 */ static Sint32 init_cnt;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_task.c
// *****************************************************************************

/* bss 35f1f8 */ dgTaskRoot *root_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_task_debug.c
// *****************************************************************************

/* data 29c570 */ static dgDebugEditInfo param_info[0];
/* bss 948798 */ static TaskDebug td_buf;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_util.c
// *****************************************************************************

/* rdata 34dae8 */ static dgTaskParam free_cam_task_func;
/* rdata 34db08 */ static gwVarEditData edit_group;
/* rdata 34db40 */ static gwVarEditData edit_data[0];
/* rdata 34de40 */ static gwCommandData module_com_data[0];
/* rdata 34de78 */ static dgTaskParam dialog_task_param;
/* rdata 34de90 */ static char dialog_dummy_space[11];
/* rdata 34dea0 */ static dgMathAngle3 zero_ang;
/* bss 9487b8 */ static FreeCamParam cam_param;
/* bss 9487ec */ static Sint32 cascade_wnd_x;
/* bss 9487f0 */ static Sint32 cascade_wnd_y;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_uv.c
// *****************************************************************************

/* data 29c5e0 */ static dgUVFloat uv_tbl[18][2];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_vblanktimer.c
// *****************************************************************************

/* bss 1d40ac8 */ dgVblanktimerSystemInfo dgvblank_systeminfo;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dg_vibrator.c
// *****************************************************************************

/* bss 9487f4 */ static dgVibTask *vib_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/dummy_func.c
// *****************************************************************************

/* data 29c700 */ Int _nj_calc_polygon_;
/* data 29c704 */ Int _nj_calc_vertex_;
/* data 29c708 */ Int _nj_draw_polygon_;
/* data 29c70c */ int _nj_sq_;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/effect.c
// *****************************************************************************

/* rdata 34e1c0 */ static Uint32 common_eff_texnum_tbl[77];
/* rdata 34e2f8 */ static Uint32 common_eff_cix_tbl[14];
/* rdata 34e3e8 */ static PlayerNode node_no[10];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/enemy_effect.c
// *****************************************************************************

/* rdata 34e438 */ static dgTaskParam param;
/* rdata 34e450 */ static dgMathAngle1 set_rot_base[0];
/* rdata 34e460 */ static dgMathAngle1 set_rot_bias[0];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/eneset_editor.c
// *****************************************************************************

/* rdata 34e540 */ static dgTaskParam eneset_editor_func;
/* rdata 34e568 */ static dgMathVector3 default_pos;
/* rdata 34e578 */ static dgMathAngle3 default_ang;
/* rdata 34e620 */ static char *dir_str[0];
/* rdata 34ecd0 */ static Sint8 eneset_dir_table[0];
/* rdata 34ed20 */ static dgMathVector3 cube_pos;
/* bss 948800 */ static EneEditorTask *eneset_editor_p;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/facepatchg.c
// *****************************************************************************

/* data 29c710 */ Float facepatchg_change_beat;
/* rdata 34f038 */ static dgTaskParam facepatchg_taskfunc_set;
/* bss 948804 */ static FacePatChgTaskPtr _facepatchg_task_ptr;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/finishbattle.c
// *****************************************************************************

/* bss 948808 */ static FinishTask *mem_finish_task_p;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/karaoke.c
// *****************************************************************************

/* rdata 34f1d8 */ static Uint32 color_tbl[0];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/lcd.c
// *****************************************************************************

/* rdata 34f240 */ static Uint32 mem_search_port_tbl[4];
/* bss 94880c */ static LcdTask *mem_lcdtask_p;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/lcd_data.c
// *****************************************************************************

/* rdata 34f268 */ static Uint8 LcdPicLogo_1[0];
/* rdata 34f328 */ static Uint8 LcdPicLoad_2[0];
/* rdata 34f3e8 */ static Uint8 LcdPicSave_3[0];
/* rdata 34f4a8 */ Uint8 *LcdSystemIconSetTbl[3];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/makuma.c
// *****************************************************************************

/* rdata 34f550 */ static char *stm_cap_fname[0];
/* rdata 34f5a8 */ static char *stm_tim_fname[0];
/* rdata 34f600 */ static MakumaFileData adv_data;
/* rdata 34f628 */ static MakumaFileData opening_data;
/* rdata 34f6b0 */ static MakumaFileData makuma1_data;
/* rdata 34f738 */ static MakumaFileData makuma2_data;
/* rdata 34f7c0 */ static MakumaFileData makuma3_data;
/* rdata 34f848 */ static MakumaFileData makuma4_data;
/* rdata 34f8d0 */ static MakumaFileData makuma5_data;
/* rdata 34f958 */ static MakumaFileData swingin1_data;
/* rdata 34f990 */ static MakumaFileData swingin2_data;
/* rdata 34f9c8 */ static MakumaFileData swingin3_data;
/* rdata 34fa00 */ static MakumaFileData swingin4_data;
/* rdata 34fa38 */ static MakumaFileData swingin5_data;
/* rdata 34fa70 */ static MakumaFileData *ad_file_tbl[0];
/* rdata 34fa78 */ static MakumaFileData *r1_file_tbl[0];
/* rdata 34fa88 */ static MakumaFileData *r2_file_tbl[0];
/* rdata 34fa98 */ static MakumaFileData *r3_file_tbl[0];
/* rdata 34faa8 */ static MakumaFileData *r4_file_tbl[0];
/* rdata 34fab8 */ static MakumaFileData *r5_file_tbl[0];
/* rdata 34fac8 */ static MakumaFileData *r6_file_tbl[0];
/* rdata 34fad0 */ static MakumaFileData **makuma_file_tbl[0];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/module_data.c
// *****************************************************************************

/* rdata 34fb90 */ char *ModuleDataTbl[0];
/* rdata 34fc8c */ int ModuleDataNum;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/mtp_man.c
// *****************************************************************************

/* rdata 34fc90 */ static dgTaskParam load_task_param;
/* rdata 34fcb0 */ static dgTaskParam load_wait_task_param;
/* rdata 34fcd8 */ static dgTaskParam afs_load_task_param;
/* rdata 34fd00 */ static dgTaskParam afs_load_wait_task_param;
/* rdata 34fd10 */ static gwVarEditData edit_group;
/* rdata 34fd50 */ static gwVarEditData edit_data[0];
/* bss 948810 */ static char with_ext_filename_p[128];
/* bss 948890 */ static char **afsmtp_p;
/* bss 948894 */ static Bool mem_read_enable;
/* bss 948898 */ static Sint32 mem_debug_delay;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/musicman.c
// *****************************************************************************

/* bss 94889c */ static MusicManTask *mm_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/nowloading.c
// *****************************************************************************

/* data 29c718 */ NJS_CELL cell_loading_scene1_loading_model1[0];
/* data 29c8d8 */ NJS_CELL_SPRITE csprite_loading_scene1_loading_model1;
/* rdata 34ff98 */ static dgTexRectSprite nowloading_bg_parts;
/* rdata 34ffb0 */ static Sint32 ulala_tbl[0];
/* rdata 34ffb8 */ static NJS_POLYGON_VTX poly_vtx[0];
/* rdata 34fff8 */ static NJS_POLYGON_VTX black_vtx[0];
/* rdata 350038 */ static char nowloading_str[27];
/* rdata 350058 */ static char point_str[3];
/* rdata 350068 */ static Sint32 nkb_str_cell_tbl[0];
/* rdata 350078 */ static Sint32 nkb_back_cell_tbl[0];
/* data 29c918 */ static NkbCellData nkb_cell_data[0];
/* bss 9488a0 */ static dgTexInfo *nowloading_texinfo;
/* bss 9488a4 */ static void *nl_task;
/* bss 9488a8 */ static void *nl_user_dummy_task;
/* bss 9488ac */ static void* (*nl_user_task_func)(/* parameters unknown */);

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/party.c
// *****************************************************************************

/* rdata 3500e0 */ static dgTaskParam party_task_param;
/* rdata 350100 */ static Sint32 party_limit_member[3];
/* bss 9488b0 */ static PartyManTask *mem_partyman_task_p;
/* bss 9488b4 */ static PartyMasterTask *mem_partymaster_task_p;
/* bss 9488b8 */ static Sint32 mem_array_index;
/* bss 9488c0 */ static PartyControl mem_member_array[32];
/* bss 948cc0 */ static PartyControl mem_save_member_array[32];
/* bss 9490c0 */ static PartyControl *mem_save_control_p_top[3];
/* bss 9490cc */ static Sint32 mem_save_array_index;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/party_collect.c
// *****************************************************************************

/* bss 9490d0 */ static CollectTask *mem_collect_task_p;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/party_common.c
// *****************************************************************************

/* bss 9490d4 */ static dgCharNo mem_dai_charno;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/party_edit.c
// *****************************************************************************

/* rdata 350270 */ static Sint32 member_limit_tbl[0];
/* rdata 350280 */ static gwVarEditData edit_group;
/* rdata 3502d8 */ static gwVarEditData edit_data[0];
/* bss 9490d8 */ static PartyEditManager *mem_man_task_p;
/* bss 9490dc */ static Bool edit_flag;
/* bss 9490e0 */ static Sint32 edit_round;
/* bss 9490e4 */ static Sint32 edit_block;
/* bss 9490e8 */ static Bool load_flag;
/* bss 9490ec */ static Bool save_flag;
/* bss 9490f0 */ static Bool data_flag;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/pause.c
// *****************************************************************************

/* data 29c928 */ NJS_CELL cell_pause_scene1_pressstart_model1[0];
/* data 29c968 */ NJS_CELL_SPRITE csprite_pause_scene1_pressstart_model1;
/* data 29c9a8 */ NJS_CELL cell_pause_scene1_pause_continue[0];
/* data 29c9e8 */ NJS_CELL cell_pause_scene1_pause_restart[0];
/* data 29ca28 */ NJS_CELL cell_pause_scene1_pause_gameend[0];
/* data 29ca68 */ NJS_CELL cell_pause_scene1_common_model1[0];
/* data 29cb68 */ NJS_CELL cell_pause_scene1_pause_model1[0];
/* data 29cc28 */ NJS_CELL cell_pause_scene1_gameover_model1[0];
/* data 29cce8 */ NJS_CELL_SPRITE csprite_pause_scene1_pause_continue;
/* data 29cd28 */ NJS_CELL_SPRITE csprite_pause_scene1_pause_restart;
/* data 29cd68 */ NJS_CELL_SPRITE csprite_pause_scene1_pause_gameend;
/* data 29cda8 */ NJS_CELL_SPRITE csprite_pause_scene1_common_model1;
/* data 29cde8 */ NJS_CELL_SPRITE csprite_pause_scene1_pause_model1;
/* data 29ce28 */ NJS_CELL_SPRITE csprite_pause_scene1_gameover_model1;
/* rdata 350ba8 */ static NJS_CELL_SPRITE *pause_cspr_tbl[0];
/* rdata 350bc0 */ static NJS_CELL_SPRITE *gameover_cspr_tbl[0];
/* rdata 350bd8 */ static Sint8 caption_no_tbl[0];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/player.c
// *****************************************************************************

/* rdata 350ce0 */ static DanceIndexPlayer dance_inp2motion_index[0][7];
/* rdata 350d18 */ static ShootIndexPlayer shoot_normal_inp2motion_index[0][7];
/* rdata 350d50 */ static ShootIndexPlayer shoot_action_inp2motion_index[0][3][7];
/* rdata 350df8 */ static gwVarEditData edit_group;
/* rdata 350e40 */ static gwVarEditData edit_data[0];
/* bss 9490f4 */ static Sint32 player_type;
/* bss 9490f8 */ static Sint32 player_cut_frame;
/* bss 9490fc */ static PlayerType player_default_type;
/* bss 949100 */ static Bool player_another_type;
/* bss 949104 */ static PlayerTask *mem_player_task_p;
/* bss 949108 */ static PlayerSeTask *mem_se_task_p;
/* bss 94910c */ static PlayerCallbackFunc *player_callback_func_p;
/* bss 949110 */ static DebugTelopTask *mem_temp_task;
/* bss 949114 */ static PlayerModelTask *mem_model_task_p;
/* bss 949118 */ static dgCharNo mem_player_mic;
/* bss 94911c */ static Bool motion_no_cut;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/player_enum.c
// *****************************************************************************

/* rdata 3513d0 */ static PlayerNode ulala_node_tbl[0];
/* rdata 351420 */ static PlayerNode jaguar_node_tbl[0];
/* rdata 351470 */ static PlayerNode pudding_node_tbl[0];
/* rdata 3514c0 */ PlayerSet PlayerSetTbl[41];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/poison_light.c
// *****************************************************************************

/* rdata 351608 */ static PoisonLight poison_tbl;
/* rdata 351650 */ static dgDebugEditInfo param_info[0];
/* bss 949120 */ static PoisonLight poison_sys_buf;
/* bss 949168 */ static PoisonLight poison_buf;
/* bss 9491b0 */ static GWHWND poison_hwnd;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/ps2assert.c
// *****************************************************************************

/* bss 1d40b38 */ char s_assert[256];
/* bss 35f204 */ char *s_file;
/* bss 35f208 */ int s_line;
/* bss 35f200 */ int g_bAssert;
/* bss 35f1fc */ int g_nAssert;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/result.c
// *****************************************************************************

/* rdata 351808 */ static Sint32 cell_res_n_str_top[0];
/* rdata 351818 */ static Sint32 cell_res_n_waku_rate[0];
/* rdata 351838 */ static Sint32 cell_res_n_waku_rescue[0];
/* rdata 351858 */ static Sint32 cell_res_n_waku_secret[0];
/* rdata 351878 */ static Sint32 cell_res_n_str_rate[0];
/* rdata 351880 */ static Sint32 cell_res_n_str_rescue[0];
/* rdata 351888 */ static Sint32 cell_res_n_str_secret[0];
/* rdata 351890 */ static Sint32 cell_res_n_num_rate[0];
/* rdata 3518a8 */ static Sint32 cell_res_n_num_rescue[0];
/* rdata 3518c0 */ static Sint32 cell_res_n_num_secret0[0];
/* rdata 3518d0 */ static Sint32 cell_res_n_num_secret1[0];
/* rdata 3518e0 */ static Sint32 cell_res_n_str_costume[0];
/* rdata 3518e8 */ static Sint32 cell_res_n_mark_ch5[0];
/* rdata 3518f0 */ static Sint32 cell_res_d_str_top[0];
/* rdata 351900 */ static Sint32 cell_res_d_waku_rate[0];
/* rdata 351920 */ static Sint32 cell_res_d_waku_maxrate[0];
/* rdata 351940 */ static Sint32 cell_res_d_str_rate[0];
/* rdata 351948 */ static Sint32 cell_res_d_str_maxrate[0];
/* rdata 351950 */ static Sint32 cell_res_d_num_rate[0];
/* rdata 351968 */ static Sint32 cell_res_d_num_maxrate[0];
/* rdata 351980 */ static Sint32 cell_res_d_str_costume[0];
/* rdata 351988 */ static Sint32 cell_res_d_mark_ch5[0];
/* rdata 351990 */ static char *result_pvm_fname[0];
/* rdata 3519b8 */ static NJS_CELL_SPRITE *csprite_tbl[0];
/* rdata 3519c0 */ static CellsprData cell_res_n_tbl[0];
/* rdata 351ac8 */ static CellsprData cell_res_d_tbl[0];
/* rdata 351bd0 */ static CellsprData *cell_res_tbl[0];
/* rdata 351bd8 */ static dgCellsprTexData cell_number_tbl[0];
/* rdata 351cc8 */ static Ps2WakuTexData ps2_normal_waku_tex_data[0];
/* rdata 351dc8 */ static Ps2WakuTexData ps2_dance_waku_tex_data[0];
/* bss 9491b4 */ static ResultTask *res_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/result_spa_data.c
// *****************************************************************************

/* data 29ce68 */ NJS_CELL cell_result_scene1_result_model1[0];
/* data 29dc28 */ NJS_CELL_SPRITE csprite_result_scene1_result_model1;
/* data 29dc68 */ NJS_CELL cell_result_02dance_scene1_result_02dance_model1[0];
/* data 29e5a8 */ NJS_CELL_SPRITE csprite_result_02dance_scene1_result_02dance_model1;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/secret_moro0.c
// *****************************************************************************

/* rdata 351fc0 */ static MoveParam move_param[0];
/* rdata 352060 */ static dgDebugEditInfo param_info[0];
/* bss 9491b8 */ static SecretMoroLoadTask *moro0_load_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/shadow.c
// *****************************************************************************

/* data 29e5e8 */ static dgTaskParam shadow_obj_data_func;
/* rdata 352390 */ static ShadowEventObjData event_data_appear[0];
/* rdata 3523b0 */ static ShadowEventObjData event_data_win[0];
/* rdata 3523d0 */ static ShadowEventObjData event_data_lose[0];
/* rdata 3523f0 */ static ShadowEventObjData event_data_appear_2[0];
/* rdata 352410 */ static ShadowEventObjData event_data_dissapear_win[0];
/* rdata 352430 */ static ShadowEventObjData event_data_dissapear_lose[0];
/* rdata 352450 */ static ShadowEventData shadow_event_data[4];
/* rdata 352460 */ static int shadow_charno_table[0];
/* rdata 352470 */ static int shadow_callback_node[0];
/* bss 9491bc */ static ShadowTask *shadow_root_task;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/shoot.c
// *****************************************************************************

/* bss 9491c0 */ static ShootManTask *cur_shoot_task_p;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/simmld_ctrl.c
// *****************************************************************************

/* data 29e5f8 */ SimmLdCtrlTaskPtr _simmldctrl_task_ptr;
/* rdata 3525c8 */ static dgTaskParam _simmldctrl_taskfunc_set;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/simmload.c
// *****************************************************************************

/* bss 9491c4 */ static SIMMENTRY *s_root;
/* bss 35f20c */ enum g_nFileLastErr {
	ERR_NONE = 0,
	ERR_DIRECTORY_NOT_FOUND = 1,
	ERR_FILE_NOT_FOUND = 2,
	ERR_CANNOT_CHANGE_DIRECTORY = 3,
	ERR_CANNOT_OPEN_FILE = 4
};

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/target.c
// *****************************************************************************

/* bss 9491c8 */ static TargetTask *mem_target_task_p;

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/title.c
// *****************************************************************************

/* data 29e600 */ NJS_CELL cell_sega_logo_l_scene1_sega_logo_l_model1[0];
/* data 29e640 */ NJS_CELL_SPRITE csprite_sega_logo_l_scene1_sega_logo_l_model1;
/* data 29e680 */ NJS_CELL cell_sega_logo_r_scene1_sega_logo_r_model1[0];
/* data 29e6c0 */ NJS_CELL_SPRITE csprite_sega_logo_r_scene1_sega_logo_r_model1;
/* data 29e700 */ NJS_CELL cell_uga_logo_l_scene1_uga_logo_l_model1[0];
/* data 29e740 */ NJS_CELL_SPRITE csprite_uga_logo_l_scene1_uga_logo_l_model1;
/* data 29e780 */ NJS_CELL cell_uga_logo_r_scene1_uga_logo_r_model1[0];
/* data 29e7c0 */ NJS_CELL_SPRITE csprite_uga_logo_r_scene1_uga_logo_r_model1;
/* data 29e800 */ NJS_CELL cell_mw_logo_scene1_mw_logo_model1[0];
/* data 29e840 */ NJS_CELL_SPRITE csprite_mw_logo_scene1_mw_logo_model1;
/* data 29e880 */ NJS_CELL cell_text_l_scene1_text_l_model1[0];
/* data 29e8c0 */ NJS_CELL_SPRITE csprite_text_l_scene1_text_l_model1;
/* data 29e900 */ NJS_CELL cell_text_r_scene1_text_r_model1[0];
/* data 29e940 */ NJS_CELL_SPRITE csprite_text_r_scene1_text_r_model1;
/* rdata 352700 */ static NJS_CELL_SPRITE *segalogo_cspr_tbl[0];
/* rdata 352708 */ static NJS_CELL_SPRITE *ugalogo_cspr_tbl[0];
/* rdata 352710 */ static NJS_CELL_SPRITE *mwlogo_cspr_tbl[0];
/* rdata 352718 */ static NJS_CELL_SPRITE *text_cspr_tbl[0];
/* rdata 352720 */ static TitleLogoCsprData cspr_data[0];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/tv_setting.c
// *****************************************************************************

/* data 29e980 */ static char *test_e[0];
/* data 29e988 */ static char *comment50_e[0];
/* data 29e998 */ static char *comment60_e[0];
/* data 29e9b8 */ static char *comment_test_e[0];
/* data 29e9c8 */ static char *test_f[0];
/* data 29e9d0 */ static char *comment50_f[0];
/* data 29e9e0 */ static char *comment60_f[0];
/* data 29ea00 */ static char *comment_test_f[0];
/* data 29ea10 */ static char *test_g[0];
/* data 29ea18 */ static char *comment50_g[0];
/* data 29ea28 */ static char *comment60_g[0];
/* data 29ea48 */ static char *comment_test_g[0];
/* data 29ea58 */ static char *test_i[0];
/* data 29ea60 */ static char *comment50_i[0];
/* data 29ea70 */ static char *comment60_i[0];
/* data 29ea90 */ static char *comment_test_i[0];
/* data 29eaa0 */ static char *test_s[0];
/* data 29eaa8 */ static char *comment50_s[0];
/* data 29eab8 */ static char *comment60_s[0];
/* data 29ead8 */ static char *comment_test_s[0];
/* data 29eae8 */ static char *mem_tv_mode_50[0];
/* data 29eaf0 */ static char *mem_tv_mode_60[0];
/* rdata 353048 */ static TvSetStrData mem_tv_mode[0];
/* rdata 3530a0 */ static TvSetStrData mem_comment[0];
/* rdata 3530f8 */ static char *_tvset_countdown_str[0];

// *****************************************************************************
// FILE -- /cs402.home/soft/people/hatakeyama/works/ch52demo/.mirror/src/walk_level.c
// *****************************************************************************

/* bss 9491cc */ static WalkLevelTask *mem_walklevel_task_p;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_button.c
// *****************************************************************************

/* data 29eaf8 */ Sint8 gwButtonIconTbl[0];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_command.c
// *****************************************************************************

/* data 29eb10 */ static gwCommandData_LIST *ComList;
/* data 29eb14 */ static int last_status;
/* rdata 3533f8 */ static gwCommandData default_com[0];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_console.c
// *****************************************************************************

/* data 29eb18 */ static char *LogBuf;
/* data 29eb1c */ static char *LogLastPtr;
/* data 29eb20 */ static ConsoleLine **LineBuf;
/* rdata 353420 */ static gwVarEditData varedit_data_group;
/* rdata 353450 */ static gwVarEditData varedit_data[0];
/* data 29eb28 */ static gwMenuData gwConsoleMenuTbl[0];
/* data 29eb48 */ static gwMenuData GwFontMenuTbl[0];
/* bss 9491d0 */ static ConsoleCtrl ConsoleCtrlBuf;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_desktop.c
// *****************************************************************************

/* data 29eb88 */ static gwMenuData FontMenuTbl[0];
/* data 29ebc8 */ static gwMenuData SystemMenuTbl[0];
/* data 29ec18 */ gwMenuData gwDeskTopMenuTbl[0];
/* bss 35f210 */ gwMenu *gwDeskTopMenu;
/* bss 9493b8 */ static GWHWND hWndDeskTopMenu;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_keyboard.c
// *****************************************************************************

/* rdata 353640 */ static Uint32 port_tbl[0];
/* rdata 353650 */ static gwVarEditData varedit_data_group;
/* rdata 353698 */ static gwVarEditData varedit_data[0];
/* rdata 353798 */ static gwVarEditData varedit_data2[0];
/* data 29ec88 */ static Uint8 control_code_num_map[0];
/* data 29eca8 */ static Uint8 control_code_alpha_map[0];
/* rdata 353808 */ static Uint8 code_map[140];
/* rdata 353898 */ static Uint8 code_map_shift[140];
/* rdata 353928 */ static Uint8 code_map_pckey[128];
/* bss 1d40c38 */ gwKbd gwKbdBuf;
/* bss 9493bc */ static int kbd_repeat_start_time;
/* bss 9493c0 */ static int kbd_repeat_interval_time;
/* bss 9493c4 */ static gwVarEditList *varedit_group;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_malloc.c
// *****************************************************************************

/* bss 35f218 */ gwMemBlock *GwHeapTop;
/* bss 35f21c */ size_t GwHeapSize;
/* bss 1d40c60 */ gwMemBlock HeapRoot;
/* bss 35f214 */ gwMemBlock *GwCurMemBlock;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_menuwin.c
// *****************************************************************************

/* data 29ed28 */ Sint32 gwMenuCheckIconTbl[0];
/* bss 35f220 */ GWHWND ActiveMenuWindow;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_mouse.c
// *****************************************************************************

/* bss 1d40c80 */ gwMouse gwMouseData;
/* bss 35f224 */ Float gwMouseSpeed;
/* bss 9493c8 */ static Sint32 gwMouseInvisibleTime;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_print.c
// *****************************************************************************

/* rdata 353c70 */ static Uint32 u_table_s[0][2];
/* rdata 353cf0 */ static Uint32 v_table_s[0];
/* rdata 353d10 */ static Uint32 u_table_n[0][2];
/* rdata 353d90 */ static Uint32 v_table_n[0];
/* rdata 353db0 */ static Uint32 u_table_l[0][2];
/* rdata 353e30 */ static Uint32 v_table_l[0];
/* rdata 353eb8 */ static Float cursor_target[0][2];
/* rdata 353ef8 */ static Uint32 icon_uv_table[0][3];
/* bss 35f230 */ int GwCharSizeX;
/* bss 35f22c */ int GwCharSizeY;
/* bss 35f228 */ gwPrintSize _gwPrintSize_;
/* bss 9493cc */ static ulTexture *texGwFont;
/* bss 9493d0 */ static Float gw_char_z;
/* bss 9493d4 */ static Float gw_char_ooz;
/* bss 9493d8 */ static Uint32 gw_char_col;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_system.c
// *****************************************************************************

/* data 29ed88 */ gwCommandData gwSystemCommandTbl[0];
/* bss 1d40d28 */ gwInitInfo GwInfo;
/* bss 35f244 */ Float GwPrioTop;
/* bss 35f240 */ Float GwPrioCur;
/* bss 35f238 */ Float GwPrioDiff;
/* bss 35f234 */ Sint32 gwSystemFlag;
/* bss 35f23c */ Sint32 gwSystemCableType;
/* bss 1d40d08 */ gwKbdCtrlData _gwKbdCtrlData_;
/* bss 1d40d18 */ gwRect gwSystemScreenRect;
/* bss 9493e4 */ static Sint32 gw_super_sample_mode;
/* bss 9493e8 */ static Sint32 gw_texture_filter_mode;
/* bss 9493ec */ static Sint32 gw_color_blending_mode_src;
/* bss 9493f0 */ static Sint32 gw_color_blending_mode_dst;
/* bss 9493f4 */ static GWHWND hWndWindowManager;
/* bss 9493f8 */ static Sint32 nbMaxFiles;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_texture_viewer.c
// *****************************************************************************

/* data 29edb0 */ static TexViewCtrl TexViewCtrlBuf;
/* data 29ee60 */ static Float tex_rate_tbl[0];
/* data 29eea8 */ static gwMenuData gwTextureViewerMenuTbl[0];
/* bss 9493fc */ static gwMenu *TextureViewerMenu;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_varedit.c
// *****************************************************************************

/* data 29eec8 */ static gwMenuData gwVarEditMenuTbl[0];
/* data 29eee8 */ gwVarEditList *VarListRoot;
/* rdata 3543f0 */ static char *type_name[0];
/* rdata 354460 */ static gwVarEditData varedit_data_group;
/* rdata 354690 */ static gwCommandData com_data[0];
/* rdata 354720 */ static char SetDataDiscrimination[5];
/* bss 35f248 */ gwMenu *VarEditMenu;
/* bss 949400 */ static gwVarEditList *gwVarEditGroupGindows;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_varedit_win.c
// *****************************************************************************

/* data 29eeec */ static GWHWND hWndVarEditRoot;
/* rdata 354750 */ static char *type_name[0];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_window.c
// *****************************************************************************

/* data 29eef0 */ Uint32 gwWindowDefaultColor[0];
/* bss 35f24c */ GWHWND hWndRoot;
/* bss 35f254 */ GWHWND hWndActive;
/* bss 35f258 */ GWHWND hWndActiveBase;
/* bss 35f250 */ GWHWND hWndFocus;
/* bss 35f25c */ GWHWND hWndDeskTop;
/* bss 1d40d58 */ gwWindow gwDeskTop;
/* bss 1d40e00 */ GWHWND GwSelWindowBuf[64];
/* bss 949408 */ static Uint32 gwWindowDefaultBgColor[4];
/* bss 949418 */ static Uint32 gwWindowDefaultTextColor;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gwu_periinfo.c
// *****************************************************************************

/* data 29ef28 */ static char *peri_name_tbl[0];
/* rdata 354980 */ static int port_tbl[0];
/* data 29ef48 */ static char *port_str_tbl[0];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gindows_font.c
// *****************************************************************************

/* data 29ef80 */ char PSTH_gindows_font[0];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_coloredit_win.c
// *****************************************************************************

/* data 2a7100 */ gwCommandData gwColorEditWinCmdTbl[0];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/gindows/src/gw_dump.c
// *****************************************************************************

/* data 2a7120 */ gwCommandData gwDumpWinCmdTbl[0];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/kanji/src/kj.c
// *****************************************************************************

/* data 2a712c */ static char *pStrDefaultExtract;
/* bss 9494a0 */ static ulTexture *pKjTexture;
/* bss 9494a4 */ static int hanWidth;
/* bss 9494a8 */ static int zenWidth;
/* bss 9494ac */ static int hanHeight;
/* bss 9494b0 */ static int zenHeight;
/* bss 9494b4 */ static kjFontType font_type;
/* bss 9494b8 */ static Bool kj_pro;
/* bss 9494bc */ static Bool kj_super_sample;
/* bss 9494c0 */ static Bool kj_super_sample_zen;
/* bss 9494c4 */ static Bool kj_super_sample_han;
/* bss 9494c8 */ static Float kj_width;
/* bss 9494cc */ static Float kj_height;
/* bss 9494d0 */ static Float kj_z;
/* bss 9494d4 */ static Float kj_ooz;
/* bss 9494d8 */ static Float kj_gap;
/* bss 9494dc */ static Float kj_shade_z;
/* bss 9494e0 */ static Float kj_shade_ooz;
/* bss 9494e4 */ static Float kj_frame_z;
/* bss 9494e8 */ static Float kj_frame_ooz;
/* bss 9494ec */ static Float kj_italic_rate;
/* bss 9494f0 */ static Float kj_italic_size;
/* bss 9494f4 */ static ulPCol kj_col;
/* bss 9494f8 */ static ulPCol kj_frame_col;
/* bss 9494fc */ static ulPCol kj_shade_col;
/* bss 949500 */ static int kj_frame_size;
/* bss 949504 */ static int kj_shade_size;
/* bss 949508 */ static int kj_bold_size;
/* bss 94950c */ static Float kj_italic_rate_save;
/* bss 949510 */ static ulPCol kj_col_save;
/* bss 949514 */ static ulPCol kj_frame_col_save;
/* bss 949518 */ static ulPCol kj_shade_col_save;
/* bss 94951c */ static int kj_frame_size_save;
/* bss 949520 */ static int kj_shade_size_save;
/* bss 949524 */ static int kj_bold_size_save;

// *****************************************************************************
// FILE -- /cs404.disk15/chnf6/soft/ch52/ps2/main/lib/kanji/src/kj_font.c
// *****************************************************************************

/* data 2a7130 */ static Uint16 col[16];
/* data 2a7150 */ static ZenTexEntryList *pZenEntryList;
/* data 2a7154 */ static int zen_tex_width;
/* bss 949540 */ static Uint8 HanCGBuf[2][32800];
/* bss 959580 */ static Uint8 ZenCGBuf[1][131104];
/* bss 9795a0 */ static Uint8 *pZenImageBuf[1];
/* bss 9795a8 */ static ulTexture *pTexture[3];
/* bss 9795b4 */ static char *pZenFontFile;
/* bss 9795b8 */ static char *pHanFontFile;
/* bss 9795bc */ static Sint8 *pZenImageAddr;
/* bss 9795c0 */ static int *pZenProAddr;
/* bss 9795c4 */ static int zenMaxEntryNum;
/* bss 9795c8 */ static int zenCodeNum;
/* bss 9795cc */ static int zenFrameWidth;
/* bss 9795d0 */ static int zenFrameHeight;
/* bss 9795d4 */ static int zenWidth;
/* bss 9795d8 */ static int zenHeight;
/* bss 9795dc */ static int zenArrayX;
/* bss 9795e0 */ static int zenArrayY;
/* bss 9795e4 */ static int zenExtendWidth;
/* bss 9795e8 */ static int zenExtendHeight;
/* bss 9795ec */ static Float zenU;
/* bss 9795f0 */ static Float zenV;
/* bss 9795f4 */ static Float zenUWidth;
/* bss 9795f8 */ static Float zenVHeight;
/* bss 9795fc */ static int hanWidth;
/* bss 979600 */ static int hanHeight;
/* bss 979604 */ static int hanArrayX;
/* bss 979608 */ static int hanArrayY;
/* bss 97960c */ static int hanExtendWidth;
/* bss 979610 */ static int hanExtendHeight;
/* bss 979614 */ static int hanFrameWidth;
/* bss 979618 */ static int hanFrameHeight;
/* bss 97961c */ static Float hanU;
/* bss 979620 */ static Float hanV;
/* bss 979624 */ static Float hanUWidth;
/* bss 979628 */ static Float hanVHeight;
/* bss 97962c */ static Uint8 *pZenExtendAddr;
/* bss 979630 */ static kjFontFrame zenFrame;
/* bss 979634 */ static Bool zenLockRender;
/* bss 979638 */ static Bool zenFlagRender[1];
/* bss 979640 */ static int zenUpdateFrom[1];
/* bss 979648 */ static int zenUpdateTo[1];
/* bss 97964c */ static Uint32 font_type;
/* bss 979650 */ static ZenHashList **ppZenHashTable;
/* bss 1d40f00 */ ProData hanProData[192];
/* bss 979654 */ static int zen_tex_height;
/* bss 979658 */ static int zen_tex_width_byte;
/* bss 97965c */ static int zen_tex_size;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/memcard/src/libulmc.c
// *****************************************************************************

/* data 2a7158 */ static int initialize_num;
/* data 2a715c */ static Sint32 last_error;
/* data 2a7160 */ static void *callback_complete;
/* data 2a7164 */ static void *callback_progress;
/* data 2a7168 */ static Uint32 callback_complete_param;
/* data 2a716c */ static ulPeriPort callback_port;
/* data 2a7170 */ static int callback_slot;
/* data 2a7174 */ static ulMcCallbackFlag callback_flag;
/* data 2a7178 */ static ulMcSequence sequence_id;
/* data 2a717c */ static ulMcSequence sequence_id_next;
/* data 2a7180 */ static void *sequence_buff;
/* data 2a7184 */ static int sequence_offset;
/* data 2a7188 */ static int sequence_size;
/* data 2a718c */ static Sint32 sequence_flag;
/* data 2a7190 */ static Sint32 sequence_mask;
/* data 2a7194 */ static Sint32 sequence_icon;
/* data 2a7198 */ static Bool dynamic_alloc;
/* data 2a719c */ static Bool call_from_shinobi;
/* data 2a71a0 */ static ulMcApplicationInfo *application_info;
/* rdata 3550d0 */ static char icon_sys_fname[9];
/* rdata 3550dc */ static size_t icon_sys_size;
/* data 2a71c0 */ static ulPeriPort find_port;
/* data 2a71c4 */ static int find_slot;
/* bss 979680 */ static Bool initialize[2][4];
/* bss 9796a0 */ static Bool connection[2][4];
/* bss 9796c0 */ static sceMcTblGetDir tbl_get_dir;
/* bss 979700 */ static char sequence_fname[32];
/* bss 979720 */ static Bool bu_in_init[2][4];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/motion/src/mtn_root.c
// *****************************************************************************

/* data 2a71c8 */ Uint32 quaternion_mode;
/* data 2a71cc */ void* (*the_mallocfunc)(/* parameters unknown */);
/* data 2a71d0 */ void (*the_freefunc)(/* parameters unknown */);
/* data 2a71d8 */ char mtnVersionString[64];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_cellsprite.c
// *****************************************************************************

/* data 2a7218 */ Int _nj_cellsprite_callbackfunc_n_;
/* data 2a721c */ Int _nj_cellsprite_material_mode_;
/* data 2a7220 */ Uint16 _nj_cellsprite_attr_and_;
/* data 2a7222 */ Uint16 _nj_cellsprite_attr_or_;
/* bss 35f260 */ void (**_nj_cellsprite_callbackfunc_)(/* parameters unknown */);
/* bss 1d41090 */ NJS_ARGB _nj_cellsprite_material_const_diff_;
/* bss 1d410b0 */ NJS_ARGB _nj_cellsprite_material_offset_diff_;
/* bss 1d410a0 */ NJS_ARGB _nj_cellsprite_material_const_spec_;
/* bss 1d41080 */ NJS_ARGB _nj_cellsprite_material_offset_spec_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_compile.c
// *****************************************************************************

/* bss 9797c4 */ static void* (*_nj_compile_malloc_)(/* parameters unknown */);
/* bss 9797c8 */ static void (*_nj_compile_free_)(/* parameters unknown */);

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_context.c
// *****************************************************************************

/* bss 9797cc */ static int _blend_func_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_control.c
// *****************************************************************************

/* bss 35f264 */ float _nj_cull_flag_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_debug.c
// *****************************************************************************

/* bss 979850 */ static char consoleBuf[4879];
/* bss 97ab60 */ static int consoleFlag;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_direct_model.c
// *****************************************************************************

/* data 2a7230 */ static ulColor _nj_direct_light_ambient_;
/* bss 97ab70 */ static ulColor _nj_direct_light_intensity_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_draw.c
// *****************************************************************************

/* rdata 355590 */ static u_long polyStripGifTag[0];
/* rdata 3555a0 */ static u_long texStripGifTag[0];
/* bss 97ab80 */ static u_long _primGifTag_[2];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_draw2d.c
// *****************************************************************************

/* data 2a7240 */ static int _nj_line2dex_start_flag_;
/* bss 97ab90 */ static psQWData _primGifTag_;
/* bss 97aba0 */ static Uint32 _line_color_;
/* bss 97aba4 */ static int _nj_line2d_prim_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_easy_model.c
// *****************************************************************************

/* data 2a7250 */ static ulColor _nj_easy_light_ambient_;
/* bss 97abb0 */ static ulColor _nj_easy_light_intensity_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_light.c
// *****************************************************************************

/* bss 97abc0 */ static njLight _nj_light_buf_[7];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_line3d.c
// *****************************************************************************

/* data 2a7260 */ int _nj_lineex_start_flag_;
/* data 2a7264 */ static int _nj_line3dex_start_flag_;
/* bss 97ad80 */ static float _nj_line3d_r_;
/* bss 97ad84 */ static Uint32 _nj_line3d_color_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_material.c
// *****************************************************************************

/* bss 97ad90 */ static ulColor _nj_material_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_model.c
// *****************************************************************************

/* bss 35f26c */ int _nj_dev_tmp_time_;
/* bss 35f278 */ int _nj_dev_vlist_time_;
/* bss 35f274 */ int _nj_dev_plist_time_;
/* bss 35f268 */ int _nj_dev_calc_vertex_cnt;
/* bss 35f27c */ int _nj_dev_calc_polygon_cnt;
/* bss 35f280 */ int _vlist_data_size_;
/* bss 35f28c */ Sint32 *_current_vlist_;
/* bss 35f270 */ float *_current_vertex_;
/* bss 35f288 */ float *_current_normal_;
/* bss 35f284 */ int *_current_color_;
/* bss 1d410c0 */ NJS_CNK_VLIST_INFO _nj_cnk_vlist_info_;
/* bss 97ada0 */ static NJS_MATRIX m;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_particle.c
// *****************************************************************************

/* bss 97ade0 */ static psQWData _primGifTag_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_quad_tex.c
// *****************************************************************************

/* bss 97adf0 */ static Uint32 _nj_quad_tex_color_;
/* bss 97adf4 */ static Sint32 _nj_quad_prim_flag_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_shadow_tex_model.c
// *****************************************************************************

/* data 2a7268 */ Float _nj_shadowtex_xratio_;
/* data 2a726c */ Float _nj_shadowtex_yratio_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_simple_model.c
// *****************************************************************************

/* data 2a7270 */ static ulColor _nj_simple_light_ambient_;
/* bss 97ae00 */ static ulColor _nj_simple_light_intensity_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_system.c
// *****************************************************************************

/* bss 1d410e0 */ NJS_SCREEN _nj_screen_;
/* bss 1d41110 */ NJS_CLIP _nj_clip_;
/* bss 35f2a8 */ Int _nj_display_mode_;
/* bss 35f2a0 */ Int _nj_frame_mode_;
/* bss 35f2b4 */ Int _nj_waitvsync_count;
/* bss 35f2ac */ Uint32 _nj_control_3d_flag_;
/* bss 35f2a4 */ Int _nj_frame_size_w;
/* bss 35f2c0 */ Int _nj_frame_size_h;
/* bss 35f2bc */ void *_nj_vertex_buf_;
/* bss 35f294 */ Uint32 _nj_constant_attr_and_;
/* bss 35f290 */ Uint32 _nj_constant_attr_or_;
/* bss 1d41138 */ NJS_ARGB _nj_constant_material_;
/* bss 35f2b8 */ Uint32 _nj_cnk_blend_mode_;
/* bss 35f298 */ njGlobalWork _njGlobalWork_;
/* bss 35f2b0 */ Sint32 _nj_cnk_clip_num_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_texture.c
// *****************************************************************************

/* bss 1d41148 */ NJS_TEXERRSTAT _nj_texerr_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_wire_model.c
// *****************************************************************************

/* bss 35f2c4 */ float _nj_cnk_wire_r_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/pd_dummy.c
// *****************************************************************************

/* bss 97ae10 */ static PDS_PERIPHERAL periData[1];
/* bss 97ae48 */ static PDS_PERIPHERALINFO periInfo[1];
/* bss 97aec0 */ static PDS_KEYBOARD _dmy_pds_keyboard_;
/* bss 97aed0 */ static PDS_KEYBOARDINFO _dmy_pds_keyboard_info_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/sy_malloc.c
// *****************************************************************************

/* bss 97aed4 */ static ulHeapHandle syHeap;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ninja/src/nj_alphablend_tbl.c
// *****************************************************************************

/* data 2a7280 */ u_long nj_alphablend_func_tbl[0];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_gx.c
// *****************************************************************************

/* data 2a7480 */ psGxParam GxParam;
/* bss 97aee0 */ static char _ps_gx_sys_pktbuf_[16384];
/* bss 97eee0 */ static char _ps_gx_sys_displistbuf_[5872];
/* sbss 35f180 */ static psPktBuf *_ps_gx_sys_pkt_;
/* sbss 35f184 */ static psDisplayList *_ps_gx_sys_displist_;
/* bss 9805d0 */ static char systemTexHeapBuf[224];
/* sbss 35f188 */ static psDisplayList *_ps_gx_current_displaylist_;
/* sbss 35f18c */ static psVifPkt *_ps_gx_current_vifpkt_;
/* bss 9806b0 */ static psGxAlphaBlendModeParam s_alapha_blend_mode;
/* sbss 35f190 */ static int _draw_end_flag;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_gxpkt.c
// *****************************************************************************

/* sdata 35ee00 */ psGxPacket *psGxPktCurrent;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_gxtex.c
// *****************************************************************************

/* bss 9806c8 */ static psGxTexSys gxTexSys;
/* data 2a7800 */ psGxTexLoadImageEnv texLoadImageEnv[8];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_displist.c
// *****************************************************************************

/* data 2a7c00 */ psDmaPktBuf _ps_dma_pktbuf_;
/* sdata 35ee14 */ psDisplayList *_ps_current_displist_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_debug.c
// *****************************************************************************

/* sbss 35f194 */ static int _ps_debug_flag_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_matrix.c
// *****************************************************************************

/* sdata 35ee18 */ ulMatrix *ulMatrixCurrent;
/* sbss 35f198 */ static ulMatrix *matrix_stack;
/* sbss 35f19c */ static int matrix_stack_depth;
/* sbss 35f1a0 */ static int matrix_stack_depth_max;
/* sbss 35f1a4 */ static int matrix_stack_current_depth;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_sintbl.c
// *****************************************************************************

/* data 2a7d80 */ float ulSinTbl[0];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_peri.c
// *****************************************************************************

/* data 2e7d80 */ ulPeripheral ulPeriDataBuf[2];
/* data 2e7e60 */ ulPeriInfo ulPeriInfoBuf[2];
/* data 2e7f00 */ u_long128 padWorkBuf[32];
/* sdata 35ee1c */ UL_PERI_STATECALLBACK _ul_peri_state_user_callback_;
/* sbss 35f1a8 */ static int _ul_peri_repeat_wait_;
/* sbss 35f1ac */ static int _ul_peri_repeat_interval_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_heap.c
// *****************************************************************************

/* bss 9806e8 */ static ulHeapSysWork heapSysWork;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_file.c
// *****************************************************************************

/* sbss 35f1b0 */ static ulFsWork *fsWork;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_texture.c
// *****************************************************************************

/* bss 980710 */ static ulTexSystem TexSys;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_console.c
// *****************************************************************************

/* sdata 35ee6c */ static int _ul_console_init_flag_;
/* sdata 35ee70 */ ulConsole *console;
/* sbss 35f1b4 */ static ulTexture *texAscii;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_geo.c
// *****************************************************************************

/* data 2e8100 */ ulGeoParam GeoParam;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_meshdraw.c
// *****************************************************************************

/* sdata 35ee84 */ int _ul_control_3d_flag_;
/* sdata 35ee88 */ int _ul_constant_attr_and_;
/* sdata 35ee8c */ int _ul_constant_attr_or_;
/* data 2e8a80 */ ulColor _ul_constant_material_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_blendfunc_tbl.c
// *****************************************************************************

/* data 2e8ac0 */ u_long ul_alphablend_func_tbl[0];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_gx.c
// *****************************************************************************

/* data 2e8cc0 */ static ulMatrix unit_matrix;
/* data 2e8d00 */ ulGxSys GxSys;
/* sbss 35f1b8 */ static int _ul_vif_pass_cnt_;
/* sbss 35f1bc */ static int _ul_gif_pass_cnt_;
/* sbss 35f1c0 */ static psGxPacket *_old_pkt_;
/* bss 9807b0 */ static ulFogParam s_fog;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_sprite.c
// *****************************************************************************

/* rdata 356c20 */ static u_long spriteGifTag[0];
/* sbss 35f1c4 */ static int _nbSpriteVetices_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ps_dma.c
// *****************************************************************************

/* bss 9807d0 */ static psDmaInfo dmaInfo[9];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/njfont.c
// *****************************************************************************

/* data 2e8e00 */ char PSTH_njfont[0];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uga/ul_scissor.c
// *****************************************************************************

/* bss 980840 */ static ulScisVertex *_scis_vtx_list1_[16];
/* bss 980880 */ static ulScisVertex *_scis_vtx_list2_[16];
/* sbss 35f1c8 */ static int _scis_vtx_cnt_;
/* bss 9808c0 */ static ulScisVertex _new_scis_vtx_[16];
/* sbss 35f1cc */ static int _new_scis_vtx_cnt_;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/uliop/src/ul_iop_ee_work.c
// *****************************************************************************

/* bss 1d41180 */ ULIOP_SYS _uliop;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_work.c
// *****************************************************************************

/* bss 35f2d0 */ UL_SND_DRIVER_STATUS *_ul_snd_driver_status;
/* bss 1d41a40 */ ULSND_SYS _ulsnd;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/ulsnd/src/ul_snd_ee_loc_hcmd.c
// *****************************************************************************

/* bss 981200 */ static UL_HCMD_FLAG hcmd_flag;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/vibration/src/libulvib.c
// *****************************************************************************

/* rdata 3572e0 */ static int send_buffer_max[6];
/* data 2eaf80 */ static void* (*_malloc_func)(/* parameters unknown */);
/* data 2eaf84 */ static void (*_free_func)(/* parameters unknown */);
/* data 2eaf88 */ static ulVibTvrDualMode _tvr_dualmode;
/* data 2eaf8c */ static Bool _initialize;
/* data 2eaf90 */ static Bool _enable;
/* data 2eaf94 */ static Bool _pause;
/* data 2eaf98 */ static Bool _tvr_use;
/* bss 981300 */ static ulVibMixingTask *mixing_task[2][4];

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/vibration/src/usbtvr.c
// *****************************************************************************

/* bss 981320 */ static USBTVRINFO_t _info;

// *****************************************************************************
// FILE -- /cs403.disk10/sprj/ch52/ps2/main/lib/vibration/src/libusbtvr.c
// *****************************************************************************

/* bss 9813c0 */ static sceSifClientData _cd;
/* bss 9813e8 */ static int _sema;
/* bss 981400 */ static unsigned int _send[64];
/* bss 981500 */ static unsigned int _receive[64];
/* bss 981600 */ static unsigned int *_receive_usr;
/* bss 981604 */ static int _rsize;

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/adxf.613/adx_fini.c
// *****************************************************************************

/* data 30c7c8 */ char *adxf_build;
/* data 30c7cc */ Sint32 adxf_init_cnt;
/* data 30c7d0 */ ADX_FS adxf_obj[16];
/* data 30db50 */ ADXF_PTINFO *adxf_ptinfo[256];
/* data 30df50 */ Sint32 adxf_ocbi_fg;
/* data 30df58 */ ADXF_CMD_HSTRY adxf_cmd_hstry[256];
/* data 30ef58 */ Uint16 adxf_cmd_ncall[16];
/* data 30ef78 */ Sint32 adxf_hstry_no;
/* data 30ef7c */ Sint32 adxf_flno;
/* data 30ef80 */ ADXF adxf_ldptnw_hn;
/* data 30ef84 */ Sint32 adxf_ldptnw_ptid;

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/adxf.613/adx_fs.c
// *****************************************************************************

/* data 30ef88 */ Uint32 adxf_tcnt[10];
/* data 30efb0 */ Uint32 adxf_chkp_tcnt[10];
/* bss 9a1af8 */ static Sint32 work[2112];
/* bss 9a3bf8 */ static Sint8 *wrk32;
/* bss 9a3bfc */ static Sint32 *buf;

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_inis.c
// *****************************************************************************

/* data 30efd8 */ Sint8 adxt_obj_mark[16];
/* sdata 35eeb8 */ Sint32 adxt_init_cnt;
/* sdata 35eebc */ Sint32 adxt_svr_id;
/* sdata 35eec0 */ Sint32 adxt_vsync_svr_flag;
/* sdata 35eec4 */ Uint32 adxt_vsync_cnt;
/* data 30efe8 */ ADX_TALK adxt_obj[8];

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_insh.c
// *****************************************************************************

/* data 30f528 */ Sint8 adxt_hdbuf[1024];
/* data 30f928 */ Sint8 adxt_dmybuf[2][32];

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_mps2.c
// *****************************************************************************

/* sdata 35eec8 */ char *adxps2_build;
/* sdata 35eecc */ Sint32 adxm_init_level;
/* sdata 35eed0 */ Bool adxm_init_ex;
/* data 30f970 */ static ADXM_TPRM_EX adxm_save_tprm;
/* sdata 35eed4 */ Sint32 adxm_lock_level;
/* sdata 35eed8 */ Bool adxm_goto_border_flag;
/* sdata 35eedc */ Bool adxm_vsyncproc_exec_flag;
/* sdata 35eee0 */ long unsigned int adxm_safe_cnt;
/* sdata 35eee8 */ long unsigned int adxm_usrvsync_cnt;
/* sdata 35eef0 */ long unsigned int adxm_vsync_cnt;
/* sdata 35eef8 */ long unsigned int adxm_mwidle_cnt;
/* sdata 35ef00 */ long unsigned int adxm_usridle_cnt;
/* sdata 35ef08 */ long unsigned int adxm_vint_cnt;
/* sdata 35ef10 */ int adxm_id_safe;
/* sdata 35ef14 */ int adxm_id_usrvsync;
/* sdata 35ef18 */ int adxm_id_vsync;
/* sdata 35ef1c */ int adxm_id_main;
/* sdata 35ef20 */ int adxm_id_mwidle;
/* sdata 35ef24 */ int adxm_id_usridle;
/* sdata 35ef28 */ long unsigned int adxm_safe_loop;
/* sdata 35ef30 */ long unsigned int adxm_safe_exit;
/* sdata 35ef38 */ long unsigned int adxm_usrvsync_loop;
/* sdata 35ef40 */ long unsigned int adxm_usrvsync_exit;
/* sdata 35ef48 */ long unsigned int adxm_vsync_loop;
/* sdata 35ef50 */ long unsigned int adxm_vsync_exit;
/* sdata 35ef58 */ long unsigned int adxm_mwidle_loop;
/* sdata 35ef60 */ long unsigned int adxm_mwidle_exit;
/* sdata 35ef68 */ long unsigned int adxm_usridle_loop;
/* sdata 35ef70 */ long unsigned int adxm_usridle_exit;
/* sdata 35ef78 */ int (*adxm_old_cbf)(/* parameters unknown */);
/* sdata 35ef7c */ Sint32 adxps2_exec_svr;
/* sdata 35ef80 */ Bool adxps2_exec_vint;
/* data 30f990 */ char adxm_stack_safe[4096];
/* data 310990 */ char adxm_stack_usrvsync[4096];
/* data 311990 */ char adxm_stack_vsync[4096];
/* data 312990 */ char adxm_stack_mwidle[8192];
/* data 314990 */ char adxm_stack_usridle[8192];
/* sdata 35ef84 */ int adxm_cur_prio;
/* sdata 35ef88 */ int adxm_cur_tid;
/* sdata 35ef8c */ int adxm_main_prio_def;

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_sfa.c
// *****************************************************************************

/* sdata 35ef90 */ char *sfa_build;
/* sdata 35ef94 */ Sint32 sfa_init_cnt;

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_sjd.c
// *****************************************************************************

/* data 316990 */ ADX_SJDEC adxsjd_obj[8];

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_sje.c
// *****************************************************************************

/* sdata 35ef98 */ char *adxenc_build;
/* sdata 35ef9c */ static Sint32 AdxGainDataMax;
/* sdata 35efa8 */ static Sint8 *cri_str;
/* data 316e70 */ ADX_SJENC adxsje_obj[8];
/* data 3184b0 */ IIR_FILT adxsje_iirflt_obj[16];
/* data 318570 */ PRDCT_FILT adxsje_prdflt_obj[16];

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_stmc.c
// *****************************************************************************

/* sdata 35efac */ Sint32 adxstmf_rtim_ofst;
/* sdata 35efb0 */ Sint32 adxstmf_rtim_num;
/* sdata 35efb4 */ Sint32 adxstmf_nrml_ofst;
/* sdata 35efb8 */ Sint32 adxstmf_nrml_num;
/* sdata 35efbc */ Sint32 adxstmf_num_rtry;
/* sdata 35efc0 */ Sint32 adxstm_sj_internal_error_cnt;
/* data 318e70 */ ADXSTM_FILE adxstmf_obj[40];

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_tlk.c
// *****************************************************************************

/* sdata 35efd4 */ Sint32 adxt_time_mode;
/* sdata 35efd8 */ Uint32 adxt_time_adjust_cnt;
/* sdata 35efdc */ Uint32 adxt_time_adjust_sw;
/* sdata 35efe0 */ Uint32 adxt_svrcnt;
/* sdata 35efe4 */ Uint32 adxt_svrcnt_sjd;
/* sdata 35efe8 */ Uint32 adxt_svrcnt_rna;
/* sdata 35efec */ Uint32 adxt_svrcnt_adxf;
/* sdata 35eff0 */ Uint32 adxt_svrcnt_adxstm;
/* sdata 35eff4 */ Uint32 adxt_svrcnt_hndl;
/* sdata 35eff8 */ Sint32 adxt_mviop_f;
/* sdata 35effc */ Sint32 adxt_mviop_d;
/* sdata 35f000 */ Sint32 adxt_mvtmp_d;
/* sdata 35f004 */ void (*ahxdetachfunc)(/* parameters unknown */);
/* sdata 35f008 */ Sint32 adxt_time_unit;
/* sdata 35f00c */ float adxt_diff_av;

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_tlk2.c
// *****************************************************************************

/* sdata 35f010 */ char *adxt_build;

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_tsvr.c
// *****************************************************************************

/* sdata 35f014 */ Sint32 adxt_dbg_nch;
/* sdata 35f018 */ Sint32 adxt_dbg_ndt;
/* sdata 35f01c */ Sint32 adxt_dbg_rna_ndata;

// *****************************************************************************
// FILE -- /home/satouo/users/satouo/cvfs.220/cri_cvfs.c
// *****************************************************************************

/* data 319870 */ char *cvfs_build;
/* data 319874 */ static CVF_FS_ERRFN cvfs_errfn;
/* data 319878 */ static void *cvfs_errobj;
/* data 31987c */ Sint32 cvfs_init_cnt;
/* bss 9a3e20 */ static CVS_FS_OBJ cvfs_obj[40];
/* bss 9a3f60 */ static CVF_FS_TBL cvfs_tbl[32];
/* bss 9a4160 */ static Sint8 cvfs_defdev[9];
/* bss 9a4170 */ static Sint8 add_dev_tmp[297];

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/dtx.101/dtx.c
// *****************************************************************************

/* sdata 35f020 */ Char8 *dtx_build;
/* sdata 35f024 */ Sint32 dtx_rpc_id;
/* sdata 35f028 */ Sint32 dtx_proc_init_flag;
/* sdata 35f02c */ Sint32 dtx_send_sw;
/* sdata 35f03c */ Sint32 dtx_init_cnt;
/* data 319880 */ DTX_OBJ dtx_clnt[8];
/* data 319aa0 */ DTX_OBJ dtx_svr[8];
/* data 319cc0 */ sceSifClientData dtx_cd;
/* data 319ce8 */ sceSifServeData dtx_sd;
/* data 319d30 */ u_long128 dtx_svrbuf[16];
/* data 319e30 */ void (*dtx_urpc_fn[64])(/* parameters unknown */);
/* data 319f30 */ void *dtx_urpc_obj[64];
/* bss 9a42c0 */ static Uint32 dtx_sbuf[64];
/* bss 9a43c0 */ static Uint32 dtx_rbuf[64];

// *****************************************************************************
// FILE -- /home/satouo/users/satouo/dvci.230/dvci.c
// *****************************************************************************

/* data 31a030 */ char *dvg_ci_build;
/* data 31a034 */ CVF_FS_ERRFN dvg_ci_err_func;
/* data 31a038 */ void *dvg_ci_err_obj;
/* data 31a040 */ CVS_FS_IF dvg_ci_vtbl;
/* data 31a0a8 */ DVS_CI_OBJ dvg_ci_obj[40];
/* data 31aaa8 */ Sint8 dvg_ci_fname[297];

// *****************************************************************************
// FILE -- /home/satouo/users/satouo/dvci.230/dvci_sub.c
// *****************************************************************************

/* data 31abd8 */ static DVCI_FLIST_TBL dvg_flist_tbl;
/* data 31abe8 */ sceCdRMode dvg_ci_cdrmode;
/* data 31abec */ Sint32 dvg_ci_rdmode;
/* bss 9a44c0 */ static Sint8 dvg_rbuf[4096];
/* data 31abf0 */ Sint8 dvg_ci_root_dir[257];
/* data 31acf8 */ Sint8 dvg_fpath[128];

// *****************************************************************************
// FILE -- /home/satouo/users/satouo/htci.231/htci.c
// *****************************************************************************

/* data 31ad78 */ char *htci_build;
/* data 31ad7c */ CVF_FS_ERRFN htg_ci_err_func;
/* data 31ad80 */ void *htg_ci_err_obj;
/* data 31ad88 */ CVS_FS_IF htci_vtbl;
/* data 31adf0 */ HTS_CI_OBJ htg_ci_obj[13];
/* data 31afc8 */ Uint8 htg_ci_fname[297];

// *****************************************************************************
// FILE -- /home/satouo/users/satouo/htci.231/htci_sub.c
// *****************************************************************************

/* data 31b0f8 */ static HTCI_FLIST_TBL htg_flist_tbl;
/* data 31b108 */ Sint32 htg_ci_open_mode;
/* bss 9a54c0 */ static Sint8 htg_rbuf[4096];
/* data 31b110 */ Sint8 htg_ci_root_dir[257];
/* data 31b218 */ Char8 htg_ci_head_name[33];

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/lsc.201/lsc.c
// *****************************************************************************

/* sdata 35f040 */ LSC_STATFN lsc_stat_func;
/* sdata 35f044 */ void *lsc_stat_obj1;
/* sdata 35f048 */ void *lsc_stat_obj2;

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/lsc.201/lsc_err.c
// *****************************************************************************

/* sdata 35f04c */ LSC_ERRFN lsc_err_func;
/* sdata 35f050 */ void *lsc_err_obj;
/* data 31b240 */ Sint8 lsc_err_msg[256];

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/lsc.201/lsc_ini.c
// *****************************************************************************

/* sdata 35f054 */ char *lsc_build;
/* data 31b340 */ Sint8 lsc_obj_mark[16];
/* sdata 35f058 */ Sint32 lsc_init_cnt;
/* data 31b350 */ LSC_OBJ lsc_obj[8];

// *****************************************************************************
// FILE -- /home/hosaka/users/hosaka/common/ps2rna.104a/ps2_rna.c
// *****************************************************************************

/* sdata 35f05c */ Char8 *ps2rna_build;
/* data 31d510 */ Uint32 ps2rna_dbtbl[1000];
/* sdata 35f060 */ Sint32 ps2rna_max_voice;
/* sdata 35f064 */ Sint32 ps2psj_iop_wksize;
/* sdata 35f068 */ Sint8 *ps2psj_iop_work0;
/* sdata 35f06c */ Sint8 *ps2psj_iop_work;
/* sdata 35f070 */ Sint8 ps2psj_alloc_flag;
/* sdata 35f074 */ Sint32 ps2rna_init_cnt;
/* sdata 35f078 */ void *ps2rna_eewk;
/* sdata 35f07c */ void *ps2rna_iopwk0;
/* sdata 35f080 */ void *ps2rna_iopwk;
/* data 31e4b0 */ PS2PSJ_OBJ ps2psj_obj[8];
/* data 31e570 */ Sint8 ps2psj_sjuni_eewk[8][256];
/* data 31ed70 */ Sint32 ps2psj_sjiop_wk[8];
/* data 31ed90 */ Sint32 ps2psj_sjiop_buf[8];
/* data 31edb0 */ PS2RNA_OBJ ps2rna_obj[8];
/* sdata 35f084 */ DTX ps2rna_dtx;
/* sdata 35f088 */ Sint32 ps2rna_wklen;
/* data 31f050 */ Sint8 ps2rna_ee_work[2256];

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/_rt240/ps2rna.104rt240/rna_crs.c
// *****************************************************************************

/* sdata 35f08c */ Sint32 rna_crs_lvl;
/* sdata 35f090 */ Sint32 rna_crs_msk;

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sj.601/sj_crs.c
// *****************************************************************************

/* sdata 35f094 */ Sint32 sjcrs_lvl;
/* sdata 35f098 */ Sint32 sjcrs_msk;

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sj.601/sj_mem.c
// *****************************************************************************

/* rdata 35af20 */ static UUID sjmem_uuid;
/* data 31f920 */ SJ_IF sjmem_vtbl;
/* sdata 35f09c */ Sint32 sjmem_init_cnt;
/* data 31f950 */ SJMEM_OBJ sjmem_obj[32];

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sj.601/sj_rbf.c
// *****************************************************************************

/* sdata 35f0a0 */ char *sj_build;
/* rdata 35af60 */ static UUID sjrbf_uuid;
/* data 31fdd0 */ SJ_IF sjrbf_vtbl;
/* sdata 35f0a4 */ Sint32 sjrbf_init_cnt;
/* data 31fe00 */ SJRBF_OBJ sjrbf_obj[64];

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sj.601/sj_uni.c
// *****************************************************************************

/* rdata 35af70 */ static UUID sjuni_uuid;
/* data 320a00 */ SJ_IF sjuni_vtbl;
/* sdata 35f0a8 */ Sint32 sjuni_init_cnt;
/* data 320a30 */ SJUNI_OBJ sjuni_obj[64];

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sjr.100/sjr_clt.c
// *****************************************************************************

/* data 321630 */ Char8 *sjrmt_build;
/* data 321634 */ Sint32 sjrmt_init_cnt;
/* bss 9a6540 */ static Sint32 sjrmt_sbuf[64];
/* bss 9a6640 */ static Sint32 sjrmt_rbuf[64];

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/sjx.101/sjx.c
// *****************************************************************************

/* sdata 35f0ac */ Char8 *sjx_build;
/* sdata 35f0b0 */ Sint32 sjx_init_cnt;
/* sdata 35f0b4 */ void *sjx_eewk;
/* sdata 35f0b8 */ void *sjx_iopwk0;
/* sdata 35f0bc */ void *sjx_iopwk;
/* data 321638 */ SJX_OBJ sjx_obj[16];
/* sdata 35f0c0 */ DTX sjx_dtx;
/* sdata 35f0c4 */ Sint32 sjx_wklen;
/* data 321778 */ Sint8 sjx_ee_work[2256];

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/svm.106/svm.c
// *****************************************************************************

/* sdata 35f0c8 */ char *svm_build;
/* sdata 35f0cc */ Sint32 svm_init_level;
/* data 322048 */ Uint32 svm_exec_cnt[7];
/* data 322068 */ Sint32 svm_svr_exec_flag[7];
/* bss 9a6760 */ static SVM_CBFN svm_svr_ftbl[7][4];
/* bss 9a6840 */ static SVM_CBFN2 svm_goto_border_func[7];
/* sbss 35f1d0 */ static SVM_CBFN2 svm_lock_func;
/* sbss 35f1d8 */ static SVM_CBFN2 svm_unlock_func;
/* sbss 35f1e0 */ static SVM_CBFN_ERR svm_err_func;
/* data 322088 */ char svmerr_msg[256];

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_amp.c
// *****************************************************************************

/* sdata 35f0d4 */ Sint32 adxsmp_init_cnt;
/* data 322188 */ ADX_AMP adxamp_obj[8];

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_bahx.c
// *****************************************************************************

/* sdata 35f0d8 */ void (*ahxsetsjifunc)(/* parameters unknown */);
/* sdata 35f0dc */ void (*ahxexecfunc)(/* parameters unknown */);

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_bsc.c
// *****************************************************************************

/* data 322308 */ ADX_BASIC adxb_obj[8];

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_crs.c
// *****************************************************************************

/* sdata 35f118 */ Sint32 adxcrs_lvl;
/* sdata 35f11c */ Sint32 adxcrs_msk;

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_dcd3.c
// *****************************************************************************

/* sdata 35f120 */ Sint32 adx_decode_output_mono_flag;

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_errs.c
// *****************************************************************************

/* sdata 35f128 */ void (*adxerr_func)(/* parameters unknown */);
/* sdata 35f12c */ void *adxerr_obj;
/* data 3228c8 */ Sint8 adxerr_msg[256];

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_qtbl.c
// *****************************************************************************

/* rdata 35b1d8 */ float AdxQtblFloat[16];
/* rdata 35b218 */ float AdxQtblFloat0[256];
/* rdata 35b618 */ float AdxQtblFloat1[256];

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_xpnd.c
// *****************************************************************************

/* sdata 35f134 */ Sint32 adxpd_internal_error;
/* data 3229c8 */ ADX_XPDOBJ adxpd_obj[8];

// *****************************************************************************
// FILE -- /home/satouo/users/satouo/srd.100/cri_srd.c
// *****************************************************************************

/* data 322b68 */ SRD_OBJ srd_obj;
/* data 322b90 */ char *srd_build;
/* data 322b94 */ Bool srd_enter_fg;
/* data 322b98 */ Bool srd_dvd_exec_locked;
/* data 322b9c */ Bool srd_geterror_locked;
/* data 322ba0 */ Bool srd_geterror_call;
/* data 322ba4 */ Uint32 srd_wait_svr_cnt;

// *****************************************************************************
// FILE -- /home/satouo/users/oshimi/adx/dtr.100/dtr.c
// *****************************************************************************

/* sdata 35f138 */ Char8 *dtr_build;
/* sdata 35f13c */ Sint32 dtr_init_cnt;
/* data 322ba8 */ DTR_OBJ dtr_obj[16];

// *****************************************************************************
// FILE -- /home/hosaka/users/oshimi/adx/adxt.716h/adx_bau.c
// *****************************************************************************

/* data 322fa8 */ static Sint16 ulaw_exp_table[256];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* bss 35f2d8 */ func_ptr __CTOR_LIST__[2];
/* bss 35f2e0 */ func_ptr __DTOR_LIST__[2];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 35cf50 */ static UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 35d050 */ static UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 35d150 */ static UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 35d250 */ static UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_floor.c
// *****************************************************************************

/* rdata 35d350 */ static double huge;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_atan.c
// *****************************************************************************

/* rdata 35d360 */ static float atanhi[0];
/* rdata 35d370 */ static float atanlo[0];
/* rdata 35d380 */ static float aT[0];
/* rdata 35d3ac */ static float one;
/* rdata 35d3b0 */ static float huge;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_ceil.c
// *****************************************************************************

/* rdata 35d3b4 */ static float huge;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_cos.c
// *****************************************************************************

/* rdata 35d3b8 */ static float one;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_floor.c
// *****************************************************************************

/* rdata 35d3bc */ static float huge;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_modf.c
// *****************************************************************************

/* rdata 35d3c0 */ static float one;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_tanh.c
// *****************************************************************************

/* rdata 35d3c4 */ static float one;
/* rdata 35d3c8 */ static float two;
/* rdata 35d3cc */ static float tiny;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/wf_exp.c
// *****************************************************************************

/* rdata 35d400 */ static float o_threshold;
/* rdata 35d404 */ static float u_threshold;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/e_atan2.c
// *****************************************************************************

/* rdata 35d480 */ static double tiny;
/* rdata 35d488 */ static double zero;
/* rdata 35d490 */ static double pi_o_4;
/* rdata 35d498 */ static double pi_o_2;
/* rdata 35d4a0 */ static double pi;
/* rdata 35d4a8 */ static double pi_lo;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/e_rem_pio2.c
// *****************************************************************************

/* rdata 35d530 */ static __int32_t two_over_pi[0];
/* rdata 35d638 */ static __int32_t npio2_hw[0];
/* rdata 35d6b8 */ static double zero;
/* rdata 35d6c0 */ static double half;
/* rdata 35d6c8 */ static double two24;
/* rdata 35d6d0 */ static double invpio2;
/* rdata 35d6d8 */ static double pio2_1;
/* rdata 35d6e0 */ static double pio2_1t;
/* rdata 35d6e8 */ static double pio2_2;
/* rdata 35d6f0 */ static double pio2_2t;
/* rdata 35d6f8 */ static double pio2_3;
/* rdata 35d700 */ static double pio2_3t;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_acos.c
// *****************************************************************************

/* rdata 35d780 */ static float one;
/* rdata 35d784 */ static float pi;
/* rdata 35d788 */ static float pio2_hi;
/* rdata 35d78c */ static float pio2_lo;
/* rdata 35d790 */ static float pS0;
/* rdata 35d794 */ static float pS1;
/* rdata 35d798 */ static float pS2;
/* rdata 35d79c */ static float pS3;
/* rdata 35d7a0 */ static float pS4;
/* rdata 35d7a4 */ static float pS5;
/* rdata 35d7a8 */ static float qS1;
/* rdata 35d7ac */ static float qS2;
/* rdata 35d7b0 */ static float qS3;
/* rdata 35d7b4 */ static float qS4;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_asin.c
// *****************************************************************************

/* rdata 35d7b8 */ static float one;
/* rdata 35d7bc */ static float huge;
/* rdata 35d7c0 */ static float pio2_hi;
/* rdata 35d7c4 */ static float pio2_lo;
/* rdata 35d7c8 */ static float pio4_hi;
/* rdata 35d7cc */ static float pS0;
/* rdata 35d7d0 */ static float pS1;
/* rdata 35d7d4 */ static float pS2;
/* rdata 35d7d8 */ static float pS3;
/* rdata 35d7dc */ static float pS4;
/* rdata 35d7e0 */ static float pS5;
/* rdata 35d7e4 */ static float qS1;
/* rdata 35d7e8 */ static float qS2;
/* rdata 35d7ec */ static float qS3;
/* rdata 35d7f0 */ static float qS4;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_atan2.c
// *****************************************************************************

/* rdata 35d7f4 */ static float tiny;
/* rdata 35d7f8 */ static float zero;
/* rdata 35d7fc */ static float pi_o_4;
/* rdata 35d800 */ static float pi_o_2;
/* rdata 35d804 */ static float pi;
/* rdata 35d808 */ static float pi_lo;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_cosh.c
// *****************************************************************************

/* rdata 35d810 */ static float one;
/* rdata 35d814 */ static float half;
/* rdata 35d818 */ static float huge;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_exp.c
// *****************************************************************************

/* rdata 35d820 */ static float one;
/* rdata 35d828 */ static float halF[2];
/* rdata 35d830 */ static float huge;
/* rdata 35d834 */ static float twom100;
/* rdata 35d838 */ static float o_threshold;
/* rdata 35d83c */ static float u_threshold;
/* rdata 35d840 */ static float ln2HI[2];
/* rdata 35d848 */ static float ln2LO[2];
/* rdata 35d850 */ static float invln2;
/* rdata 35d854 */ static float P1;
/* rdata 35d858 */ static float P2;
/* rdata 35d85c */ static float P3;
/* rdata 35d860 */ static float P4;
/* rdata 35d864 */ static float P5;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_log.c
// *****************************************************************************

/* rdata 35d86c */ static float ln2_hi;
/* rdata 35d870 */ static float ln2_lo;
/* rdata 35d874 */ static float two25;
/* rdata 35d878 */ static float Lg1;
/* rdata 35d87c */ static float Lg2;
/* rdata 35d880 */ static float Lg3;
/* rdata 35d884 */ static float Lg4;
/* rdata 35d888 */ static float Lg5;
/* rdata 35d88c */ static float Lg6;
/* rdata 35d890 */ static float Lg7;
/* rdata 35d894 */ static float zero;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_log10.c
// *****************************************************************************

/* rdata 35d89c */ static float two25;
/* rdata 35d8a0 */ static float ivln10;
/* rdata 35d8a4 */ static float log10_2hi;
/* rdata 35d8a8 */ static float log10_2lo;
/* rdata 35d8ac */ static float zero;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_pow.c
// *****************************************************************************

/* rdata 35d8b8 */ static float bp[0];
/* rdata 35d8c0 */ static float dp_h[0];
/* rdata 35d8c8 */ static float dp_l[0];
/* rdata 35d8d0 */ static float zero;
/* rdata 35d8d4 */ static float one;
/* rdata 35d8d8 */ static float two;
/* rdata 35d8dc */ static float two24;
/* rdata 35d8e0 */ static float huge;
/* rdata 35d8e4 */ static float tiny;
/* rdata 35d8e8 */ static float L1;
/* rdata 35d8ec */ static float L2;
/* rdata 35d8f0 */ static float L3;
/* rdata 35d8f4 */ static float L4;
/* rdata 35d8f8 */ static float L5;
/* rdata 35d8fc */ static float L6;
/* rdata 35d900 */ static float P1;
/* rdata 35d904 */ static float P2;
/* rdata 35d908 */ static float P3;
/* rdata 35d90c */ static float P4;
/* rdata 35d910 */ static float P5;
/* rdata 35d914 */ static float lg2;
/* rdata 35d918 */ static float lg2_h;
/* rdata 35d91c */ static float lg2_l;
/* rdata 35d920 */ static float ovt;
/* rdata 35d924 */ static float cp;
/* rdata 35d928 */ static float cp_h;
/* rdata 35d92c */ static float cp_l;
/* rdata 35d930 */ static float ivln2;
/* rdata 35d934 */ static float ivln2_h;
/* rdata 35d938 */ static float ivln2_l;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_rem_pio2.c
// *****************************************************************************

/* rdata 35d940 */ static __int32_t two_over_pi[0];
/* rdata 35dc58 */ static __int32_t npio2_hw[0];
/* rdata 35dcd8 */ static float zero;
/* rdata 35dcdc */ static float half;
/* rdata 35dce0 */ static float two8;
/* rdata 35dce4 */ static float invpio2;
/* rdata 35dce8 */ static float pio2_1;
/* rdata 35dcec */ static float pio2_1t;
/* rdata 35dcf0 */ static float pio2_2;
/* rdata 35dcf4 */ static float pio2_2t;
/* rdata 35dcf8 */ static float pio2_3;
/* rdata 35dcfc */ static float pio2_3t;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_sinh.c
// *****************************************************************************

/* rdata 35dd00 */ static float one;
/* rdata 35dd04 */ static float shuge;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_sqrt.c
// *****************************************************************************

/* rdata 35dd08 */ static float one;
/* rdata 35dd0c */ static float tiny;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/k_cos.c
// *****************************************************************************

/* rdata 35dd10 */ static double one;
/* rdata 35dd18 */ static double C1;
/* rdata 35dd20 */ static double C2;
/* rdata 35dd28 */ static double C3;
/* rdata 35dd30 */ static double C4;
/* rdata 35dd38 */ static double C5;
/* rdata 35dd40 */ static double C6;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/k_rem_pio2.c
// *****************************************************************************

/* rdata 35dd78 */ static int init_jk[0];
/* rdata 35dd88 */ static double PIo2[0];
/* rdata 35ddc8 */ static double zero;
/* rdata 35ddd0 */ static double one;
/* rdata 35ddd8 */ static double two24;
/* rdata 35dde0 */ static double twon24;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/k_sin.c
// *****************************************************************************

/* rdata 35dde8 */ static double half;
/* rdata 35ddf0 */ static double S1;
/* rdata 35ddf8 */ static double S2;
/* rdata 35de00 */ static double S3;
/* rdata 35de08 */ static double S4;
/* rdata 35de10 */ static double S5;
/* rdata 35de18 */ static double S6;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_cos.c
// *****************************************************************************

/* rdata 35de58 */ static float one;
/* rdata 35de5c */ static float C1;
/* rdata 35de60 */ static float C2;
/* rdata 35de64 */ static float C3;
/* rdata 35de68 */ static float C4;
/* rdata 35de6c */ static float C5;
/* rdata 35de70 */ static float C6;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_rem_pio2.c
// *****************************************************************************

/* rdata 35de78 */ static int init_jk[0];
/* rdata 35de88 */ static float PIo2[0];
/* rdata 35deb4 */ static float zero;
/* rdata 35deb8 */ static float one;
/* rdata 35debc */ static float two8;
/* rdata 35dec0 */ static float twon8;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_sin.c
// *****************************************************************************

/* rdata 35dec4 */ static float half;
/* rdata 35dec8 */ static float S1;
/* rdata 35decc */ static float S2;
/* rdata 35ded0 */ static float S3;
/* rdata 35ded4 */ static float S4;
/* rdata 35ded8 */ static float S5;
/* rdata 35dedc */ static float S6;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_tan.c
// *****************************************************************************

/* rdata 35dee0 */ static float one;
/* rdata 35dee4 */ static float pio4;
/* rdata 35dee8 */ static float pio4lo;
/* rdata 35def0 */ static float T[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_atan.c
// *****************************************************************************

/* rdata 35df28 */ static double atanhi[0];
/* rdata 35df48 */ static double atanlo[0];
/* rdata 35df68 */ static double aT[0];
/* rdata 35dfc0 */ static double one;
/* rdata 35dfc8 */ static double huge;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_infconst.c
// *****************************************************************************

/* rdata 35dfd8 */ __dmath __infinity;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/s_lib_ver.c
// *****************************************************************************

/* rdata 35dfe0 */ __fdlibm_version __fdlib_version;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/s_rint.c
// *****************************************************************************

/* rdata 35dfe8 */ static double TWO52[2];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/s_scalbn.c
// *****************************************************************************

/* rdata 35dff8 */ static double two54;
/* rdata 35e000 */ static double twom54;
/* rdata 35e008 */ static double huge;
/* rdata 35e010 */ static double tiny;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_expm1.c
// *****************************************************************************

/* rdata 35e028 */ static float one;
/* rdata 35e02c */ static float huge;
/* rdata 35e030 */ static float tiny;
/* rdata 35e034 */ static float o_threshold;
/* rdata 35e038 */ static float ln2_hi;
/* rdata 35e03c */ static float ln2_lo;
/* rdata 35e040 */ static float invln2;
/* rdata 35e044 */ static float Q1;
/* rdata 35e048 */ static float Q2;
/* rdata 35e04c */ static float Q3;
/* rdata 35e050 */ static float Q4;
/* rdata 35e054 */ static float Q5;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_scalbn.c
// *****************************************************************************

/* rdata 35e05c */ static float two25;
/* rdata 35e060 */ static float twom25;
/* rdata 35e064 */ static float huge;
/* rdata 35e068 */ static float tiny;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/ctype/ctype_.c
// *****************************************************************************

/* rdata 35e0a0 */ char _ctype_[257];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/impure.c
// *****************************************************************************

/* data 326180 */ static _reent impure_data;
/* data 32646c */ _reent *_impure_ptr;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

/* data 326470 */ mbinptr __malloc_av_[258];
/* data 326878 */ long unsigned int __malloc_trim_threshold;
/* data 326880 */ long unsigned int __malloc_top_pad;
/* data 326888 */ char *__malloc_sbrk_base;
/* data 326890 */ long unsigned int __malloc_max_sbrked_mem;
/* data 326898 */ long unsigned int __malloc_max_total_mem;
/* data 3268a0 */ mallinfo __malloc_current_mallinfo;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/sbrkr.c
// *****************************************************************************

/* bss 35f2e8 */ int errno;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/locale/locale.c
// *****************************************************************************

/* data 3268c8 */ int __mb_cur_max;
/* rdata 35eb78 */ static lconv lconv;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mprec.c
// *****************************************************************************

/* rdata 35ec30 */ double __mprec_tens[0];
/* rdata 35ecf8 */ double __mprec_bigtens[0];
/* rdata 35ed20 */ double __mprec_tinytens[0];

// *****************************************************************************
// FILE -- (unknown)
// *****************************************************************************

/* nil 357cf8 */ sfadxt_silence;
/* nil 357df8 */ sfmps_CopyPketFn;
/* nil 357e40 */ sfmpv_fps_round;
/* nil 357e68 */ sfmpv_conv_29_97;
/* nil 357e88 */ sfmpv_conv_59_94;
/* nil 30b3e8 */ sfmpvp_scempeg_useflag;
/* nil 358008 */ sftim_tc2time;
/* nil 3580c0 */ ver_str;
/* nil 3580e0 */ cpy_str;
/* nil 30b408 */ mpvemp_mbai;
/* nil 3581d8 */ dec_mbs_func;
/* nil 3581f0 */ skip_func;
/* nil 358218 */ mc_intra_func;
/* nil 358268 */ mc_forward_func;
/* nil 358290 */ mc_backward_func;
/* nil 3582b8 */ mc_bidirect_func;
/* nil 358318 */ mpvlib_cond_dfl;
/* nil 358350 */ mpvumc_oneref;
/* nil 358420 */ sfsd_short_cut;
/* nil 3588a0 */ col_sw_off_msk;
/* nil 3588a8 */ scale8;
/* nil 3588c8 */ scale8_f;
/* nil 3589b8 */ mpvbdec_bitmsk;
/* nil 3589d8 */ zigzag2seq;
/* nil 358a18 */ org_iqm;
/* nil 358a58 */ mpvcmc_oneref;
/* nil 358a78 */ mpvmc_oneref1_func;
/* nil 3231a8 */ g_rofs_lif;
/* nil 35bdbc */ rofsBuild;
/* nil 3231ac */ g_rofs_wk;
/* nil 3231b0 */ g_pfs;
/* nil 35c068 */ g_devif_tbl;
/* nil 3231b8 */ g_roci_vtbl;
/* nil 323220 */ g_roci_sub_vtbl;
/* nil 35c1d0 */ g_pfscvfs_tbl;
/* nil 323288 */ __ps2_libinfo__;
/* nil 323298 */ _buffbase;
/* nil 9a69c0 */ _sprtagdata;
/* nil 9a6bc0 */ _bstag;
/* nil 323b88 */ _rix;
/* nil 323ba8 */ _ri0;
/* nil 323bc8 */ _isDirty;
/* nil 323c00 */ ext_func.183;
/* nil 323c2c */ tempRefWrap.193;
/* nil 323c30 */ tempRefOld.194;
/* nil 323c78 */ _isCSCerror;
/* nil 323cc0 */ __ps2_libinfo__;
/* nil 323cd4 */ cb_thid;
/* nil 323cd8 */ scmd_sema_keep_cmd;
/* nil 323cdc */ ncmd_sema_keep_cmd;
/* nil 323ce0 */ cb_semid;
/* nil 323ce4 */ Init_seq;
/* nil 323cf8 */ _ncmd_bind;
/* nil 323cfc */ _icmd_bind;
/* nil 323d00 */ _sf_bind;
/* nil 323d04 */ _scmd_dr_bind;
/* nil 323d08 */ _scmd_bind;
/* nil 323d0c */ _it_bind;
/* nil 323d10 */ c_cnt.57;
/* nil 325760 */ __ps2_libinfo__;
/* nil 325770 */ isclr;
/* nil 325798 */ ststbl;
/* nil 3257a8 */ stdtbl;
/* nil 3257b8 */ mfdtbl;
/* nil 3257e0 */ __ps2_libinfo__;
/* nil 3257f0 */ gp.6;
/* nil 325800 */ init_vif_regs.3;
/* nil 325820 */ __ps2_libinfo__;
/* nil 325830 */ iqval;
/* nil 325880 */ vqval;
/* nil 3258b0 */ ttyinit;
/* nil 3258b4 */ heap_ptr.30;
/* nil 3258b8 */ srcfile;
/* nil 325ff8 */ eenull;
/* nil 326020 */ SysEntry;
/* nil 326060 */ topId;
/* nil 326064 */ count;
/* nil 326068 */ _putchar;
/* nil 32606c */ _cmd_init_check;
/* nil 326070 */ _sceSifInitCheck;
/* nil 3260f8 */ _fs_init;
/* nil 3260fc */ _fs_semid;
/* nil 326100 */ _fs_iob_semid;
/* nil 326104 */ _fs_fsq_semid;
/* nil 326108 */ _fswildcard;
/* nil 32610c */ _bind;
/* nil 326110 */ _bind_check;
/* nil 326114 */ _lfwildcard;
/* nil 326120 */ __ps2_libinfo__;
/* nil 326130 */ mcRunCmdNo;
/* nil 326134 */ semaidRegFunc;
/* nil 326138 */ __ps2_libinfo__;
/* nil 326148 */ isInit;
/* nil 32614c */ isWarning;
/* nil 326150 */ PadStateStr;
/* nil 326170 */ ReqStateStr;
/* nil 32617c */ p.3;
/* nil 3234cc */ _original_or_copy;
/* nil 2f0bf8 */ mwg_disp_dura;
/* nil 325300 */ _sceCd_scmdsdata;
/* nil 358908 */ dctisr_pre_idct_bits;
/* nil 3231b4 */ g_callbackf_stack;
/* nil 30b49c */ mpvvlc_y_dcsiz;
/* nil 30b480 */ mpvvlc_mbai_b_0;
/* nil 3232f4 */ _ipubp;
/* nil 30b258 */ sfd_hn_last;
/* nil 2eb040 */ mw_t2b;
/* nil 3233dc */ _isSecondField;
/* nil 358100 */ SFH_sbver_str;
/* nil 323448 */ _forward_f_code;
/* nil 3232cc */ _forwTop;
/* nil 325708 */ _sceCd_cd_scmd;
/* nil 3232c8 */ _zFrame;
/* nil 3234d8 */ _copyright_number_3;
/* nil 323b58 */ _top32;
/* nil 30b840 */ mpvvlt_mbai_p_1;
/* nil 323510 */ _refFrame0;
/* nil 30b9c0 */ mpvvlt_p_mbtype;
/* nil 323bf4 */ _trFrameNumberA;
/* nil 32346c */ _picture_structure;
/* nil 2f1098 */ mwg_sfd_mpv_crepara;
/* nil 323b78 */ _alternate_scan;
/* nil 3234c8 */ _copyright_identifier;
/* nil 2f111c */ mwg_packsiz;
/* nil 30b484 */ mpvvlc_mbai_b_1;
/* nil 30c380 */ mpvbdec_dfl_iqm;
/* nil 357d50 */ SFLIB_version_str;
/* nil 323500 */ _qscqsc;
/* nil 2eb070 */ mw_t6b;
/* nil 30b980 */ mpvvlt_mbai_b_1;
/* nil 3257c8 */ sceDmaCurrentEnv;
/* nil 323470 */ _top_field_first;
/* nil 3232f8 */ _iputop;
/* nil 30c340 */ mpvbdec_zigzag;
/* nil 3236b0 */ _refTop1;
/* nil 3233cc */ _picWidth;
/* nil 2eb07c */ mw_t7b;
/* nil 2eb05c */ mw_gsctime;
/* nil 323ce8 */ _sceCd_ncmd_semid;
/* nil 2f1040 */ mwg_ply_build;
/* nil 323494 */ _field_sequence;
/* nil 32342c */ _matrix_coefficients;
/* nil 2eb048 */ mw_t3a;
/* nil 323438 */ _temporal_reference;
/* nil 30b3f0 */ sftim_as_pts;
/* nil 366d70 */ _gp;
/* nil 3234f0 */ _closed_gop;
/* nil 3232a8 */ _bsDatap;
/* nil 2eb0a0 */ mw_dif_ra_time2;
/* nil 30b468 */ mpvlib_iix;
/* nil 323d40 */ _sceCd_ncmdrdata;
/* nil 323408 */ _progressive_sequence;
/* nil 32341c */ _video_format;
/* nil 2f0be8 */ mw_vtime_ms2;
/* nil 323d18 */ sceCdCbfunc_number;
/* nil 2f1058 */ mwg_sfd_mps_crepara;
/* nil 2f1048 */ mwg_sfd_init_cnt;
/* nil 323cd0 */ SCE_CD_debug;
/* nil 30b4b0 */ mpvvlc_run_level_1;
/* nil 30b4c0 */ mpvvlt_mbai_i_0;
/* nil 2eb090 */ vsync_flag;
/* nil 324e90 */ _sceCd_cd_ncmd;
/* nil 30bfc0 */ mpvvlt_y_dcsiz;
/* nil 357ac8 */ mwg_sfd_initpara;
/* nil 2eb084 */ mw_t8a;
/* nil 3582e0 */ MPVLIB_version_str;
/* nil 32329c */ _sprtag;
/* nil 3233f8 */ _bit_rate_value;
/* nil 3233e8 */ _widthMB;
/* nil 2eb058 */ mw_t4b;
/* nil 323578 */ _refFrame1;
/* nil 358088 */ SFD_tr_vo_manu;
/* nil 30b6c0 */ mpvvlt_mbai_i_1;
/* nil 30b3fc */ sftim_v_sample;
/* nil 3232dc */ _backBot;
/* nil 358980 */ dct_version;
/* nil 32349c */ _burst_amplitude;
/* nil 2eb0b0 */ mwg_ply_work;
/* nil 3234f4 */ _broken_link;
/* nil 30b494 */ mpvvlc_motion_1;
/* nil 3233e0 */ _horizontal_size;
/* nil 30bbc0 */ mpvvlt_cbp;
/* nil 323474 */ _frame_pred_frame_dct;
/* nil 2f0bf4 */ mwg_disp_vtime;
/* nil 3233c4 */ _totalFrames;
/* nil 323b74 */ _q_scale_type;
/* nil 325730 */ dch;
/* nil 30b450 */ mpverrinf;
/* nil 323cf0 */ _sceCd_c_cb_sem;
/* nil 30b46c */ mpvlib_oix;
/* nil 30b3f4 */ sftim_a_sample;
/* nil 3234e0 */ _time_code_hours;
/* nil 323b80 */ _intra_slice;
/* nil 2eb064 */ mw_t5b;
/* nil 3234e4 */ _time_code_minutes;
/* nil 2eb098 */ mw_dif_av_time2;
/* nil 323428 */ _transfer_characteristics;
/* nil 323490 */ _v_axis;
/* nil 323648 */ _refTop0;
/* nil 2eb0a8 */ mwg_last_disp_dfno;
/* nil 30b4a8 */ mpvvlc_run_level_0b;
/* nil 2eb020 */ mwg_sfd_init_flag;
/* nil 323458 */ _f_code;
/* nil 323850 */ _refBot2;
/* nil 323468 */ _intra_dc_precision;
/* nil 3234d4 */ _copyright_number_2;
/* nil 357e08 */ SFD_tr_vd_mpv;
/* nil 323b48 */ _headerPts;
/* nil 2eb088 */ mw_t8b;
/* nil 357d18 */ SFD_tr_ao_auto_p;
/* nil 323300 */ _d4madr;
/* nil 32347c */ _intra_vlc_format;
/* nil 3232e8 */ _tmp_flag;
/* nil 32344c */ _full_pel_backward_vector;
/* nil 30ba80 */ mpvvlt_motion_0;
/* nil 2eb0ac */ mwg_sfd_dstalph;
/* nil 2eb044 */ mw_splttime;
/* nil 3233fc */ _vbv_buffer_size_value;
/* nil 323418 */ _frame_rate_extension_d;
/* nil 3232fc */ _d4tadr;
/* nil 324dc0 */ _sceCd_rd_intr_data;
/* nil 3233c8 */ _isError;
/* nil 3233e4 */ _vertical_size;
/* nil 35bdc0 */ RFMAI_fs_lif_tbl;
/* nil 323c80 */ _cscDma;
/* nil 3233f4 */ _frame_rate_code;
/* nil 3233d4 */ _cWidth;
/* nil 2eb03c */ mw_t2a;
/* nil 357a88 */ mwg_sfd_trentry;
/* nil 324e80 */ _sceCd_Read_cur_pos;
/* nil 3232c4 */ _backFrame;
/* nil 323cec */ _sceCd_scmd_semid;
/* nil 323450 */ _backward_f_code;
/* nil 35890c */ dctisr_upscale_bit_i;
/* nil 2eb024 */ mwg_field_no;
/* nil 2eb02c */ mwg_sfd_exec_svr_cnt;
/* nil 2eb01c */ mwg_flip_rate;
/* nil 30b4a0 */ mpvvlc_c_dcsiz;
/* nil 2eafb8 */ mwg_sfd_mthrd;
/* nil 358370 */ mpvvlt_run_level_0c;
/* nil 323478 */ _concealment_motion_vectors;
/* nil 30b400 */ MPSLIB_libwork;
/* nil 3233d8 */ _cHeight;
/* nil 323718 */ _refTop2;
/* nil 357fe0 */ SFTIM_prate;
/* nil 2f0c40 */ mwsfd_plttbl;
/* nil 323304 */ _d4chcr;
/* nil 3232a0 */ _refBlockp;
/* nil 30b3ec */ sfply_vbin_nest;
/* nil 30b3e0 */ copy_sj_error;
/* nil 2eb04c */ mw_t3b;
/* nil 2eb038 */ mw_dectime;
/* nil 323410 */ _low_delay;
/* nil 2eb06c */ mw_t6a;
/* nil 985740 */ mwrsc_sfdrsc;
/* nil 2f10d8 */ mwg_sfd_mpvpara;
/* nil 323b40 */ _isOutputPicture;
/* nil 2eb004 */ mwg_sys_mode;
/* nil 2eb080 */ mw_t7c;
/* nil 3234c4 */ _copyright_flag;
/* nil 323380 */ _defNIQM;
/* nil 2f0be0 */ mwg_vcnt;
/* nil 30b4a4 */ mpvvlc_run_level_0c;
/* nil 30b47c */ mpvvlc_mbai_p_1;
/* nil 357ad8 */ mwg_sfd_mps_trsetup;
/* nil 323bf0 */ _tmpRefBase;
/* nil 30b48c */ mpvvlc_b_mbtype;
/* nil 30b880 */ mpvvlt_mbai_b_0;
/* nil 323414 */ _frame_rate_extension_n;
/* nil 323400 */ _constrained_parameters_flag;
/* nil 30b3e4 */ sfmpv_discard_wsiz;
/* nil 2f1128 */ mwg_sfd_libwk;
/* nil 2f1120 */ mwply_work_size;
/* nil 30b490 */ mpvvlc_motion_0;
/* nil 358390 */ mpvvlt_run_level_0b;
/* nil 3234d0 */ _copyright_number_1;
/* nil 3232d0 */ _backTop;
/* nil 30c2c0 */ sfsd_scale_tbl;
/* nil 35f2c8 */ argv_copy;
/* nil 323484 */ _chroma_420_type;
/* nil 30c3c8 */ mpv_clip_0_255_tbl;
/* nil 323bf8 */ _tmpRefGOPreset;
/* nil 30c3c0 */ mpv_clip_0_255_base;
/* nil 2f0bf0 */ mwg_disp_vcnt;
/* nil 2eb018 */ mwg_nvsync_flip;
/* nil 981740 */ mwrsc_usrrsc;
/* nil 32330c */ _d3madr;
/* nil 358410 */ mpvvlt_run_level_4;
/* nil 2f1044 */ mwg_sleep_enable_flag;
/* nil 30b218 */ mwg_sfd_errstr;
/* nil 3233d0 */ _picHeight;
/* nil 32340c */ _chroma_format;
/* nil 323c38 */ _showCount;
/* nil 323dc0 */ _sceCd_ncmdsdata;
/* nil 323b70 */ _isMpeg2;
/* nil 323498 */ _sub_carrier;
/* nil 2eb030 */ mw_t1a;
/* nil 323504 */ _curFrame;
/* nil 30b470 */ mpvvlc_mbai_i_0;
/* nil 323508 */ _curTop;
/* nil 323b50 */ _headerDts;
/* nil 30b210 */ mwg_sfd_errcnt;
/* nil 323780 */ _refBot0;
/* nil 30b1c8 */ mwg_sfd_sjadr;
/* nil 357b00 */ mwg_sfd_mpv_trsetup;
/* nil 2eb060 */ mw_t5a;
/* nil 30c040 */ mpvvlt_c_dcsiz;
/* nil 35833c */ mpvlib_siz_mpvwork;
/* nil 3232e4 */ _isTop32dirty;
/* nil 323b64 */ _load_non_intra_quantizer_matrix;
/* nil 2eb008 */ mwg_sys_frame;
/* nil 2eb08c */ mw_t8c;
/* nil 30b488 */ mpvvlc_p_mbtype;
/* nil 2f0be4 */ mw_atime_ms2;
/* nil 3232d8 */ _forwBot;
/* nil 323440 */ _vbv_delay;
/* nil 2eb074 */ mw_t6c;
/* nil 35c1c4 */ rofs_ci_build;
/* nil 3583f0 */ mpvvlt_run_level_2;
/* nil 357eb0 */ SFPLY_cond_dfl;
/* nil 3233f0 */ _aspect_ratio_information;
/* nil 323488 */ _progressive_frame;
/* nil 30b498 */ mpvvlc_cbp;
/* nil 326078 */ _sceFs_q;
/* nil 2eb014 */ mwg_vsync_mhz;
/* nil 323b60 */ _load_intra_quantizer_matrix;
/* nil 2eb050 */ mw_gdfstime;
/* nil 3583d0 */ mpvvlt_run_level_1;
/* nil 323420 */ _color_description;
/* nil 3233c0 */ _bsDataSize;
/* nil 30b4b8 */ mpvvlc_run_level_4;
/* nil 30b3dc */ sflib_sizeof_sfdhn;
/* nil 30bb80 */ mpvvlt_motion_1;
/* nil 2eb078 */ mw_t7a;
/* nil 3234fc */ _sp_dcr;
/* nil 35f2cc */ argc_copy;
/* nil 30ba00 */ mpvvlt_b_mbtype;
/* nil 323314 */ _d3qwc;
/* nil 358340 */ mpvlib_siz_mpvobj;
/* nil 3232a4 */ _theSceMpeg;
/* nil 30b260 */ SFLIB_libwork;
/* nil 3233ec */ _heightMB;
/* nil 30b4bc */ mpvvlc_run_level_8;
/* nil 323480 */ _repeat_first_field;
/* nil 2f0bec */ mw_rtime_ms2;
/* nil 3234f8 */ _trFrameNumber;
/* nil 2eb0a4 */ mwg_last_draw_dfno;
/* nil 2f0c00 */ mwg_disp_dura_sum;
/* nil 2eb00c */ mwg_sys_count;
/* nil 2eb09c */ mw_dif_rv_time2;
/* nil 323430 */ _display_horizontal_size;
/* nil 358344 */ mpvlib_siz_mpvobj_mbpos;
/* nil 3232d4 */ _zTop;
/* nil 30b474 */ mpvvlc_mbai_i_1;
/* nil 326118 */ __sce_sema_id;
/* nil 2eb034 */ mw_t1b;
/* nil 358348 */ mpvlib_siz_mpvixa;
/* nil 32611c */ __sce_eh_sema_id;
/* nil 2eb068 */ mw_gdctime;
/* nil 2eafc0 */ mwsfd_if;
/* nil 323cf4 */ _sceCd_ee_read_mode;
/* nil 323424 */ _color_primaries;
/* nil 323d14 */ sceCdCbfunc_num;
/* nil 323308 */ _d4qwc;
/* nil 357dc0 */ SFD_tr_sd_mps;
/* nil 357d88 */ SFD_tr_in_mem;
/* nil 3234a8 */ _frame_center_horizontal_offset;
/* nil 3238b8 */ _mbcont;
/* nil 32343c */ _picture_coding_type;
/* nil 3235e0 */ _refFrame2;
/* nil 2eb028 */ mwg_sfd_hn;
/* nil 2f104c */ mwg_sfd_flvl;
/* nil 358910 */ dctisr_line_descale_bit;
/* nil 3234b8 */ _frame_center_vertical_offset;
/* nil 323310 */ _d3chcr;
/* nil 2eb094 */ mw_start_time;
/* nil 3583b0 */ mpvvlt_run_level_0a;
/* nil 2eb054 */ mw_t4a;
/* nil 30b740 */ mpvvlt_mbai_p_0;
/* nil 323340 */ _defIQM;
/* nil 323b6c */ _load_chroma_non_intra_quantizer_matrix;
/* nil 358050 */ SFD_tr_uo;
/* nil 3234e8 */ _time_code_seconds;
/* nil 323b7c */ _priority_breakpoint;
/* nil 3234dc */ _drop_frame_flag;
/* nil 30b1d0 */ mwg_sfd_errcode;
/* nil 32350c */ _curBot;
/* nil 30b464 */ mpvlib_use_lc;
/* nil 30b3f8 */ sftim_v_time;
/* nil 30c0c0 */ mpvvlt_run_level_8;
/* nil 3234a0 */ _sub_carrier_phase;
/* nil 3232c0 */ _forwFrame;
/* nil 323b5c */ _top32len;
/* nil 2eb010 */ mwg_sys_latency;
/* nil 323444 */ _full_pel_forward_vector;
/* nil 358820 */ idct_column_func;
/* nil 325758 */ sceDmaDebugMode;
/* nil 3234ec */ _time_code_pictures;
/* nil 3237e8 */ _refBot1;
/* nil 3232e0 */ _zBot;
/* nil 32348c */ _composite_display_flag;
/* nil 3232ec */ _ipucmd;
/* nil 2f1050 */ mwrsc_owner;
/* nil 323434 */ _display_vertical_size;
/* nil 30b478 */ mpvvlc_mbai_p_0;
/* nil 30b4ac */ mpvvlc_run_level_0a;
/* nil 324ec0 */ _sceCd_scmdrdata;
/* nil 2f1100 */ mwg_sfd_adxtpara;
/* nil 323404 */ _profile_and_level_indication;
/* nil 3232f0 */ _ipuctrl;
/* nil 3581a0 */ MPSLIB_version_str;
/* nil 30b4b4 */ mpvvlc_run_level_2;
/* nil 357cc0 */ SFD_tr_ad_adxt;
/* nil 323b68 */ _load_chroma_intra_quantizer_matrix;
