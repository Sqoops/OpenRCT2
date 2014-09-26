/*****************************************************************************
 * Copyright (c) 2014 Ted John
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * This file is part of OpenRCT2.
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#ifndef _STRING_IDS_H_
#define _STRING_IDS_H_

typedef unsigned short rct_string_id;

void format_string(char *dest, rct_string_id format, void *args);
void generate_string_file();
void reset_saved_strings();
void error_string_quit(int error, rct_string_id format);

char format_get_code(const char *token);
const char *format_get_token(char code);
int get_string_length(char* buffer);

enum {
	// Font format codes

	// The next byte specifies the X coordinate
	FORMAT_MOVE_X = 1,
	// The next byte specifies the palette
	FORMAT_ADJUST_PALETTE,

	// Moves to the next line
	FORMAT_NEWLINE = 5,
	// Moves less than NEWLINE
	FORMAT_NEWLINE_SMALLER,

	FORMAT_TINYFONT,
	FORMAT_BIGFONT,
	FORMAT_MEDIUMFONT,
	FORMAT_SMALLFONT,

	FORMAT_OUTLINE,
	FORMAT_OUTLINE_OFF,

	// Changes the colour of the text to a predefined window colour.
	FORMAT_WINDOW_COLOUR_1,
	FORMAT_WINDOW_COLOUR_2,
	FORMAT_WINDOW_COLOUR_3,

	// The next 2 bytes specify the X and Y coordinates
	FORMAT_NEWLINE_X_Y = 17,

	// The next 4 bytes specify the sprite
	FORMAT_INLINE_SPRITE = 23,

	// Non ascii-characters
	FORMAT_ENDQUOTES = 34,

	// Argument format codes
	FORMAT_ARGUMENT_CODE_START = 123,
	FORMAT_COMMA32 = 123,
	FORMAT_INT32,
	FORMAT_COMMA2DP32,
	FORMAT_COMMA16,
	FORMAT_UINT16,
	FORMAT_CURRENCY2DP,
	FORMAT_CURRENCY,
	FORMAT_STRINGID,
	FORMAT_STRINGID2,
	FORMAT_STRING,
	FORMAT_MONTHYEAR,
	FORMAT_MONTH,
	FORMAT_VELOCITY,
	FORMAT_POP16,
	FORMAT_PUSH16,
	FORMAT_DURATION,
	FORMAT_REALTIME,
	FORMAT_LENGTH,
	FORMAT_SPRITE,

	// Colour format codes
	FORMAT_COLOUR_CODE_START = 142,
	FORMAT_BLACK = 142,
	FORMAT_GREY,
	FORMAT_WHITE,
	FORMAT_RED,
	FORMAT_GREEN,
	FORMAT_YELLOW,
	FORMAT_TOPAZ,
	FORMAT_CELADON,
	FORMAT_BABYBLUE,
	FORMAT_PALELAVENDER,
	FORMAT_PALEGOLD,
	FORMAT_LIGHTPINK,
	FORMAT_PEARLAQUA,
	FORMAT_PALESILVER,
	FORMAT_COLOUR_CODE_END = FORMAT_PALESILVER,

	// Extra non-ascii characters
	FORMAT_AMINUSCULE = 159,
	FORMAT_UP,
	FORMAT_POUND = 163,
	FORMAT_YEN = 165,
	FORMAT_COPYRIGHT = 169,
	FORMAT_DOWN,
	FORMAT_LEFTGUILLEMET,
	FORMAT_TICK,
	FORMAT_CROSS,
	FORMAT_RIGHT = 175,
	FORMAT_DEGREE,
	FORMAT_SQUARED = 178,
	FORMAT_OPENQUOTES = 180,
	FORMAT_EURO = 181,
	FORMAT_APPROX = 184,
	FORMAT_POWERNEGATIVEONE,
	FORMAT_BULLET,
	FORMAT_RIGHTGUILLEMET,
	FORMAT_SMALLUP,
	FORMAT_SMALLDOWN,
	FORMAT_LEFT,
	FORMAT_INVERTEDQUESTION
};

enum {
	STR_NONE = -1,

	STR_GUEST = 767,

	STR_DATE_DAY_1 = 779,
	STR_DATE_DAY_2 = STR_DATE_DAY_1 + 1,
	STR_DATE_DAY_3 = STR_DATE_DAY_1 + 2,
	STR_DATE_DAY_4 = STR_DATE_DAY_1 + 3,
	STR_DATE_DAY_5 = STR_DATE_DAY_1 + 4,
	STR_DATE_DAY_6 = STR_DATE_DAY_1 + 5,
	STR_DATE_DAY_7 = STR_DATE_DAY_1 + 6,
	STR_DATE_DAY_8 = STR_DATE_DAY_1 + 7,
	STR_DATE_DAY_9 = STR_DATE_DAY_1 + 8,
	STR_DATE_DAY_10 = STR_DATE_DAY_1 + 9,
	STR_DATE_DAY_11 = STR_DATE_DAY_1 + 10,
	STR_DATE_DAY_12 = STR_DATE_DAY_1 + 11,
	STR_DATE_DAY_13 = STR_DATE_DAY_1 + 12,
	STR_DATE_DAY_14 = STR_DATE_DAY_1 + 13,
	STR_DATE_DAY_15 = STR_DATE_DAY_1 + 14,
	STR_DATE_DAY_16 = STR_DATE_DAY_1 + 15,
	STR_DATE_DAY_17 = STR_DATE_DAY_1 + 16,
	STR_DATE_DAY_18 = STR_DATE_DAY_1 + 17,
	STR_DATE_DAY_19 = STR_DATE_DAY_1 + 18,
	STR_DATE_DAY_20 = STR_DATE_DAY_1 + 19,
	STR_DATE_DAY_21 = STR_DATE_DAY_1 + 20,
	STR_DATE_DAY_22 = STR_DATE_DAY_1 + 21,
	STR_DATE_DAY_23 = STR_DATE_DAY_1 + 22,
	STR_DATE_DAY_24 = STR_DATE_DAY_1 + 23,
	STR_DATE_DAY_25 = STR_DATE_DAY_1 + 24,
	STR_DATE_DAY_26 = STR_DATE_DAY_1 + 25,
	STR_DATE_DAY_27 = STR_DATE_DAY_1 + 26,
	STR_DATE_DAY_28 = STR_DATE_DAY_1 + 27,
	STR_DATE_DAY_29 = STR_DATE_DAY_1 + 28,
	STR_DATE_DAY_30 = STR_DATE_DAY_1 + 29,
	STR_DATE_DAY_31 = STR_DATE_DAY_1 + 30,
	STR_MONTH_SHORT_JAN = 810,
	STR_MONTH_SHORT_FEB = STR_MONTH_SHORT_JAN + 1,
	STR_MONTH_SHORT_MAR = STR_MONTH_SHORT_JAN + 2,
	STR_MONTH_SHORT_APR = STR_MONTH_SHORT_JAN + 3,
	STR_MONTH_SHORT_MAY = STR_MONTH_SHORT_JAN + 4,
	STR_MONTH_SHORT_JUN = STR_MONTH_SHORT_JAN + 5,
	STR_MONTH_SHORT_JUL = STR_MONTH_SHORT_JAN + 6,
	STR_MONTH_SHORT_AUG = STR_MONTH_SHORT_JAN + 7,
	STR_MONTH_SHORT_SEP = STR_MONTH_SHORT_JAN + 8,
	STR_MONTH_SHORT_OCT = STR_MONTH_SHORT_JAN + 9,
	STR_MONTH_SHORT_NOV = STR_MONTH_SHORT_JAN + 10,
	STR_MONTH_SHORT_DEC = STR_MONTH_SHORT_JAN + 11,

	STR_CLOSE_X = 824,

	STR_CLOSE_WINDOW_TIP = 828,
	STR_WINDOW_TITLE_TIP = 829,

	STR_ZOOM_IN_TIP = 830,
	STR_ZOOM_OUT_TIP = 831,
	STR_ROTATE_TIP = 832,
	STR_PAUSE_GAME_TIP = 833,
	STR_DISC_AND_GAME_OPTIONS_TIP = 834,

	STR_ROLLERCOASTER_TYCOON_2 = 848,
	STR_VERSION_X = 849,
	STR_COPYRIGHT_CS = 850,
	STR_DESIGNED_AND_PROGRAMMED_BY_CS = 851,
	STR_GRAPHICS_BY_SF = 852,
	STR_SOUND_AND_MUSIC_BY_AB = 853,
	STR_ADDITIONAL_SOUNDS_RECORDED_BY_DE = 854,
	STR_REPRESENTATION_BY_JL = 855,
	STR_THANKS_TO = 856,
	STR_THANKS_TO_PEOPLE = 857,
	STR_CREDIT_SPARE_1 = 858,
	STR_CREDIT_SPARE_2 = 859,
	STR_CREDIT_SPARE_3 = 860,
	STR_CREDIT_SPARE_4 = 861,
	STR_CREDIT_SPARE_5 = 862,
	STR_CREDIT_SPARE_6 = 863,
	STR_CREDIT_SPARE_7 = 864,

	STR_QUIT_SCENARIO_EDITOR = 887,

	STR_SCR_BMP = 890,
	STR_SCREENSHOT = 891,
	STR_SCREENSHOT_SAVED_AS = 892,
	STR_SCREENSHOT_FAILED = 893,

	STR_VIEW_OPTIONS_TIP = 937,
	STR_ADJUST_LAND_TIP = 938,

	STR_SAVE_PROMPT_SAVE = 944,
	STR_SAVE_PROMPT_DONT_SAVE = 945,
	STR_SAVE_PROMPT_CANCEL = 946,

	STR_SAVE_BEFORE_LOADING = 947,
	STR_SAVE_BEFORE_QUITTING = 948,
	STR_SAVE_BEFORE_QUITTING_2 = 949,

	STR_LOAD_GAME = 950,
	STR_QUIT_GAME = 951,
	STR_QUIT_GAME_2 = 952,
	STR_LOAD_LANDSCAPE = 953,

	STR_CANCEL = 972,
	STR_OK = 973,

	STR_RIDES = 974,
	STR_SHOPS_AND_STALLS = 975,
	STR_RESTROOMS_AND_INFORMATION_KIOSKS = 976,

	STR_NEW_TRANSPORT_RIDES = 977,
	STR_NEW_GENTLE_RIDES = 978,
	STR_NEW_ROLLER_COASTERS = 979,
	STR_NEW_THRILL_RIDES = 980,
	STR_NEW_WATER_RIDES = 981,
	STR_NEW_SHOPS_STALLS = 982,
	STR_RESEARCH_AND_DEVELOPMENT = 983,

	STR_RAISE_COST_AMOUNT = 984,
	STR_LOWER_COST_AMOUNT = 985,
	STR_COST_AMOUNT = 986,

	STR_CONSTRUCTION = 990,

	STR_DEMOLISH_RIDE_TIP = 992,

	STR_OVERALL_VIEW = 996,
	STR_VIEW_SELECTION = 997,

	STR_CANT_OPEN = 1002,
	STR_CANT_TEST = 1003,
	STR_CANT_CLOSE = 1004,
	STR_CANT_START_CONSTRUCTION_ON = 1005,
	STR_MUST_BE_CLOSED_FIRST = 1006,
	STR_UNABLE_TO_CREATE_ENOUGH_VEHICLES = 1007,
	STR_OPEN_CLOSE_OR_TEST_RIDE = 1008,
	STR_OPEN_OR_CLOSE_ALL_RIDES = 1009,
	STR_OPEN_OR_CLOSE_PARK_TIP = 1010,
	STR_CLOSE_ALL = 1011,
	STR_OPEN_ALL = 1012,
	STR_CLOSE_PARK = 1013,
	STR_OPEN_PARK = 1014,

	STR_CANT_CHANGE_OPERATING_MODE = 1017,

	STR_LOCATE_SUBJECT_TIP = 1027,

	STR_LOAD_GAME_DIALOG_TITLE = 1036,
	STR_LOAD_LANDSCAPE_DIALOG_TITLE = 1037,

	STR_RCT2_SAVED_GAME = 1043,
	STR_RCT2_LANDSCAPE_FILE = 1045,

	STR_RIDES_IN_PARK_TIP = 1053,
	STR_NAME_RIDE_TIP = 1054,

	STR_RIDE_ATTRACTION_NAME = 1057,
	STR_ENTER_NEW_NAME_FOR_THIS_RIDE_ATTRACTION = 1058,
	STR_CANT_RENAME_RIDE_ATTRACTION = 1059,
	STR_INVALID_RIDE_ATTRACTION_NAME = 1060,

	STR_RIDE_MODE_START = 1061,
	STR_RIDE_MODE_NORMAL = STR_RIDE_MODE_START + 0,
	STR_RIDE_MODE_CONTINUOUS_CIRCUIT = STR_RIDE_MODE_START + 1,
	STR_RIDE_MODE_REVERSE_INCLINE_LAUNCHED_SHUTTLE = STR_RIDE_MODE_START + 2,
	STR_RIDE_MODE_POWERED_LAUNCH = STR_RIDE_MODE_START + 3,
	STR_RIDE_MODE_SHUTTLE = STR_RIDE_MODE_START + 4,
	STR_RIDE_MODE_BOAT_HIRE = STR_RIDE_MODE_START + 5,
	STR_RIDE_MODE_UPWARD_LAUNCH = STR_RIDE_MODE_START + 6,
	STR_RIDE_MODE_ROTATING_LIFT = STR_RIDE_MODE_START + 7,
	STR_RIDE_MODE_STATION_TO_STATION = STR_RIDE_MODE_START + 8,
	STR_RIDE_MODE_SINGLE_RIDE_PER_ADMISSION = STR_RIDE_MODE_START + 9,
	STR_RIDE_MODE_UNLIMITED_RIDES_PER_ADMISSION = STR_RIDE_MODE_START + 10,
	STR_RIDE_MODE_MAZE = STR_RIDE_MODE_START + 11,
	STR_RIDE_MODE_RACE = STR_RIDE_MODE_START + 12,
	STR_RIDE_MODE_BUMPER_CAR = STR_RIDE_MODE_START + 13,
	STR_RIDE_MODE_SWING = STR_RIDE_MODE_START + 14,
	STR_RIDE_MODE_SHOP_STALL = STR_RIDE_MODE_START + 15,
	STR_RIDE_MODE_ROTATION = STR_RIDE_MODE_START + 16,
	STR_RIDE_MODE_FORWARD_ROTATION = STR_RIDE_MODE_START + 17,
	STR_RIDE_MODE_BACKWARD_ROTATION = STR_RIDE_MODE_START + 18,
	STR_RIDE_MODE_FILM_AVENGING_AVIATORS = STR_RIDE_MODE_START + 19,
	STR_RIDE_MODE_3D_FILM_MOUSE_TAILS = STR_RIDE_MODE_START + 20,
	STR_RIDE_MODE_SPACE_RINGS = STR_RIDE_MODE_START + 21,
	STR_RIDE_MODE_BEGINNERS = STR_RIDE_MODE_START + 22,
	STR_RIDE_MODE_LIM_POWERED_LAUNCH = STR_RIDE_MODE_START + 23,
	STR_RIDE_MODE_FILM_THRILL_RIDERS = STR_RIDE_MODE_START + 24,
	STR_RIDE_MODE_3D_FILM_STORM_CHASERS = STR_RIDE_MODE_START + 25,
	STR_RIDE_MODE_3D_FILM_SPACE_RAIDERS = STR_RIDE_MODE_START + 26,
	STR_RIDE_MODE_INTENSE = STR_RIDE_MODE_START + 27,
	STR_RIDE_MODE_BERSERK = STR_RIDE_MODE_START + 28,
	STR_RIDE_MODE_HAUNTED_HOUSE = STR_RIDE_MODE_START + 29,
	STR_RIDE_MODE_CIRCUS_SHOW = STR_RIDE_MODE_START + 30,
	STR_RIDE_MODE_DOWNWARD_LAUNCH = STR_RIDE_MODE_START + 31,
	STR_RIDE_MODE_CROOKED_HOUSE = STR_RIDE_MODE_START + 32,
	STR_RIDE_MODE_FREEFALL_DROP = STR_RIDE_MODE_START + 33,
	STR_RIDE_MODE_CONTINUOUS_CIRCUIT_BLOCK_SECTIONED = STR_RIDE_MODE_START + 34,
	STR_RIDE_MODE_POWERED_LAUNCH_35 = STR_RIDE_MODE_START + 35,
	STR_RIDE_MODE_POWERED_LAUNCH_BLOCK_SECTIONED_MODE = STR_RIDE_MODE_START + 36,

	STR_MOVING_TO_END_OF = 1098,
	STR_WAITING_FOR_PASSENGERS_AT = 1099,
	STR_WAITING_TO_DEPART = 1100,
	STR_DEPARTING = 1101,
	STR_TRAVELLING_AT_0 = 1102,
	STR_ARRIVING_AT = 1103,
	STR_UNLOADING_PASSENGERS_AT = 1104,
	STR_TRAVELLING_AT_1 = 1105,
	STR_CRASHING = 1106,
	STR_CRASHED_0 = 1107,
	STR_TRAVELLING_AT_2 = 1108,
	STR_SWINGING = 1109,
	STR_ROTATING_0 = 1110,
	STR_ROTATING_1 = 1111,
	STR_OPERATING_0 = 1112,
	STR_SHOWING_FILM = 1113,
	STR_ROTATING_2 = 1114,
	STR_OPERATING_1 = 1115,
	STR_OPERATING_2 = 1116,
	STR_DOING_CIRCUS_SHOW = 1117,
	STR_OPERATING_3 = 1118,
	STR_WAITING_FOR_CABLE_LIFT = 1119,
	STR_TRAVELLING_AT_3 = 1120,
	STR_STOPPING_0 = 1121,
	STR_WAITING_FOR_PASSENGERS = 1122,
	STR_WAITING_TO_START = 1123,
	STR_STARTING = 1124,
	STR_OPERATING = 1125,
	STR_STOPPING_1 = 1126,
	STR_UNLOADING_PASSENGERS = 1127,
	STR_STOPPED_BY_BLOCK_BRAKES = 1128,
	STR_ALL_VEHICLES_IN_SAME_COLOURS = 1129,
	STR_DIFFERENT_COLOURS_PER = 1130,
	STR_DIFFERENT_COLOURS_PER_VEHICLE = 1131,

	STR_SELECT_MAIN_COLOUR_TIP = 1136,
	STR_SELECT_ADDITIONAL_COLOUR_1_TIP = 1137,
	STR_SELECT_ADDITIONAL_COLOUR_2_TIP = 1138,
	STR_SELECT_SUPPORT_STRUCTURE_COLOUR_TIP = 1139,
	STR_SELECT_VEHICLE_COLOUR_SCHEME_TIP = 1140,
	STR_SELECT_VEHICLE_TO_MODIFY_TIP = 1141,

	STR_QUARTER_LOAD = 1148,
	STR_HALF_LOAD = 1149,
	STR_THREE_QUARTER_LOAD = 1150,
	STR_FULL_LOAD = 1151,
	STR_ANY_LOAD = 1152,

	STR_PLACE_SCENERY_TIP = 1159,
	STR_ADJUST_WATER_TIP = 1160,

	STR_OPTIONS = 1168,
	STR_SOUND_NONE = 1169,

	STR_BUILD_FOOTPATH_TIP = 1173,
	STR_CANT_BUILD_FOOTPATH_HERE = 1176,
	STR_CANT_REMOVE_FOOTPATH_FROM_HERE = 1177,

	STR_FOOTPATHS = 1181,
	STR_TYPE = 1182,
	STR_DIRECTION = 1183,
	STR_SLOPE = 1184,
	STR_DIRECTION_TIP = 1185,
	STR_SLOPE_DOWN_TIP = 1186,
	STR_LEVEL_TIP = 1187,
	STR_SLOPE_UP_TIP = 1188,
	STR_CONSTRUCT_THE_SELECTED_FOOTPATH_SECTION_TIP = 1189,
	STR_REMOVE_PREVIOUS_FOOTPATH_SECTION_TIP = 1190,
	STR_COST = 1191,
	STR_LOSS = 1192,

	STR_CLOSED = 1194,
	STR_TEST_RUN = 1195,
	STR_OPEN = 1196,
	STR_BROKEN_DOWN = 1197,
	STR_CRASHED = 1198,
	STR_PERSON_ON_RIDE = 1199,
	STR_PEOPLE_ON_RIDE = 1200,

	STR_QUEUE_EMPTY = 1201,
	STR_QUEUE_ONE_PERSON = 1202,
	STR_QUEUE_PEOPLE = 1203,
	STR_QUEUE_TIME_LABEL = 1204,
	STR_QUEUE_TIME_PLURAL_LABEL = 1205,
	STR_WAIT_FOR = 1206,

	STR_LEAVE_IF_ANOTHER_TRAIN_ARRIVES = 1207,
	STR_LEAVE_IF_ANOTHER_BOAT_ARRIVES = 1208,
	STR_WAIT_FOR_PASSENGERS_BEFORE_DEPARTING_TIP = 1209,
	STR_LEAVE_IF_ANOTHER_VEHICLE_ARRIVES_TIP = 1210,
	STR_MINIMUM_WAITING_TIME = 1211,
	STR_MAXIMUM_WAITING_TIME = 1212,
	STR_MINIMUM_LENGTH_BEFORE_DEPARTING_TIP = 1213,
	STR_MAXIMUM_LENGTH_BEFORE_DEPARTING_TIP = 1214,
	STR_SYNCHRONISE_WITH_ADJACENT_STATIONS = 1215,
	STR_SYNCHRONISE_WITH_ADJACENT_STATIONS_TIP = 1216,

	STR_NUMERIC_UP = 1218,
	STR_NUMERIC_DOWN = 1219,
	STR_EXIT_ONLY = 1220,
	STR_NO_ENTRANCE = 1221,
	STR_NO_EXIT = 1222,
	STR_TRANSPORT_RIDES_TIP = 1223,
	STR_GENTLE_RIDES_TIP = 1224,
	STR_ROLLER_COASTERS_TIP = 1225,
	STR_THRILL_RIDES_TIP = 1226,
	STR_WATER_RIDES_TIP = 1227,
	STR_SHOPS_STALLS_TIP = 1228,

	STR_ROTATE_OBJECTS_90 = 1327,
	STR_LAUNCH_SPEED = 1329,
	STR_LAUNCH_SPEED_TIP = 1330,

	STR_NO_TEST_RESULTS_YET = 1339,
	STR_MAX_SPEED = 1340,
	STR_RIDE_TIME = 1341,
	STR_RIDE_LENGTH = 1344,
	STR_AVERAGE_SPEED = 1347,
	STR_MAX_POSITIVE_VERTICAL_G = 1348,
	STR_MAX_POSITIVE_VERTICAL_G_RED = 1349,
	STR_MAX_NEGATIVE_VERTICAL_G = 1350,
	STR_MAX_NEGATIVE_VERTICAL_G_RED = 1351,
	STR_MAX_LATERAL_G = 1352,
	STR_MAX_LATERAL_G_RED = 1353,
	STR_HIGHEST_DROP_HEIGHT = 1354,
	STR_DROPS = 1355,
	STR_INVERSIONS = 1356,
	STR_HOLES = 1357,
	STR_TOTAL_AIR_TIME = 1358,
	STR_QUEUE_TIME_MINUTE = 1359,
	STR_QUEUE_TIME_MINUTES = 1360,

	STR_VIEW_OF_RIDE_ATTRACTION_TIP = 1392,
	STR_VEHICLE_DETAILS_AND_OPTIONS_TIP = 1393,
	STR_OPERATING_OPTIONS_TIP = 1394,
	STR_MAINTENANCE_OPTIONS_TIP = 1395,
	STR_COLOUR_SCHEME_OPTIONS_TIP = 1396,
	STR_SOUND_AND_MUSIC_OPTIONS_TIP = 1397,
	STR_MEASUREMENTS_AND_TEST_DATA_TIP = 1398,
	STR_GRAPHS_TIP = 1399,

	STR_ROTATE_90_TIP = 1404,
	STR_MIRROR_IMAGE_TIP = 1405,
	STR_TOGGLE_SCENERY_TIP = 1406,

	STR_BUILD_THIS = 1407,
	STR_COST_LABEL = 1408,

	STR_DATA_LOGGING_NOT_AVAILABLE_FOR_THIS_TYPE_OF_RIDE = 1412,
	STR_DATA_LOGGING_WILL_START_WHEN_NEXT_LEAVES = 1413,
	STR_LOGGING_DATA_FROM_TIP = 1422,
	STR_QUEUE_LINE_PATH_TIP = 1423,
	STR_FOOTPATH_TIP = 1424,

	STR_CUSTOMERS_PER_HOUR = 1427,
	STR_RIDE_INCOME_ADMISSION_PRICE = 1428,

	STR_FREE = 1430,
	STR_WALKING = 1431,
	STR_HEADING_FOR = 1432,
	STR_QUEUING_FOR = 1433,
	STR_DROWNING = 1434,
	STR_ON_RIDE = 1435,
	STR_IN_RIDE = 1436,
	STR_AT_RIDE = 1437,
	STR_SITTING = 1438,
	STR_SELECT_LOCATION = 1439,
	STR_MOWING_GRASS = 1440,
	STR_SWEEPING_FOOTPATH = 1441,
	STR_EMPTYING_LITTER_BIN = 1442,
	STR_WATERING_GARDENS = 1443,
	STR_WATCHING_RIDE = 1444,
	STR_WATCHING_CONSTRUCTION_OF = 1445,
	STR_LOOKING_AT_SCENERY = 1446,
	STR_LEAVING_PARK = 1447,
	STR_WATCHING_NEW_RIDE_BEING_CONSTRUCTED = 1448,
	
	STR_GUESTS = 1463,

	STR_STAFF = 1468,

	STR_SPEED = 1471,
	STR_SPEED_TIP = 1472,
	
	STR_EXCITEMENT_RATING = 1473,
	STR_EXCITEMENT_RATING_NOT_YET_AVAILABLE = 1474,
	STR_INTENSITY_RATING = 1475,
	STR_INTENSITY_RATING_NOT_YET_AVAILABLE = 1476,
	STR_INTENSITY_RATING_RED = 1477,
	STR_NAUSEA_RATING = 1478,
	STR_NAUSEA_RATING_NOT_YET_AVAILABLE = 1479,

	STR_THOUGHT_START = 1480,
	
	STR_CONSTRUCT_FOOTPATH_ON_LAND_TIP = 1655,
	STR_CONSTRUCT_BRIDGE_OR_TUNNEL_FOOTPATH_TIP = 1656,

	STR_SATISFACTION_UNKNOWN = 1668,
	STR_SATISFACTION_PERCENT = 1669,
	STR_TOTAL_CUSTOMERS = 1670,
	STR_TOTAL_PROFIT = 1671,

	STR_POPULARITY_UNKNOWN = 1677,
	STR_POPULARITY_PERCENT = 1678,

	STR_GUESTS_TIP = 1693,
	STR_STAFF_TIP = 1694,

	STR_INCOME_AND_COSTS_TIP = 1695,
	STR_CUSTOMER_INFORMATION_TIP = 1696,

	STR_TOO_MANY_PEOPLE_IN_GAME = 1699,
	STR_HIRE_HANDYMAN = 1700,
	STR_HIRE_MECHANIC = 1701,
	STR_HIRE_SECURITY_GUARD = 1702,
	STR_HIRE_ENTERTAINER = 1703,
	STR_CANT_HIRE_NEW_STAFF = 1704,

	STR_TOO_MANY_STAFF_IN_GAME = 1707,

	STR_CANT_RENAME_PARK = 1717,
	STR_PARK_NAME = 1718,
	STR_ENTER_PARK_NAME = 1719,

	STR_NAME_PARK_TIP = 1720,
	STR_PARK_CLOSED = 1721,
	STR_PARK_OPEN = 1722,

	STR_CANT_OPEN_PARK = 1723,
	STR_CANT_CLOSE_PARK = 1724,

	STR_NUMBER_OF_LAPS = 1734,
	STR_NUMBER_OF_LAPS_TIP = 1735,

	STR_RACE_WON_BY_GUEST = 1739,
	STR_RACE_WON_BY = 1740,

	STR_MAX_PEOPLE_ON_RIDE = 1742,
	STR_MAX_PEOPLE_ON_RIDE_TIP = 1743,

	STR_TIME_LIMIT = 1747,
	STR_TIME_LIMIT_TIP = 1748,

	STR_INDIVIDUAL_GUESTS_TIP = 1752,
	STR_SUMMARISED_GUESTS_TIP = 1753,
	STR_ADMISSION_PRICE = 1756,
	STR_RELIABILITY_LABEL_1757 = 1757,

	STR_NUMBER_OF_SWINGS = 1769,
	STR_NUMBER_OF_SWINGS_TIP = 1770,

	STR_OFF = 1775,
	STR_ON = 1776,
	STR_MUSIC = 1777,
	
	STR_UNIFORM_COLOUR_TIP = 1790,
	STR_UNIFORM_COLOUR = 1791,
	STR_RESPONDING_TO_RIDE_BREAKDOWN_CALL = 1792,
	STR_HEADING_TO_RIDE_FOR_INSPECTION = 1793,
	STR_FIXING_RIDE = 1794,
	STR_ANSWERING_RADIO_CALL = 1795,

	STR_SAFETY_CUT_OUT = 1800,
	STR_RESTRAINTS_STUCK_CLOSED = 1801,
	STR_RESTRAINTS_STUCK_OPEN = 1802,
	STR_DOORS_STUCK_CLOSED = 1803,
	STR_DOORS_STUCK_OPEN = 1804,
	STR_VEHICLE_MALFUNCTION = 1805,
	STR_BRAKES_FAILURE = 1806,
	STR_CONTROL_FAILURE = 1807,

	STR_LAST_BREAKDOWN = 1808,
	STR_CURRENT_BREAKDOWN = 1809,

	STR_ACTIONS = 1814,
	STR_THOUGHTS = STR_ACTIONS + 1,
	STR_INFORMATION_TYPE_TIP = 1816,
	STR_GUESTS_COUNT_COMMA_SEP = 1817,
	STR_ALL_GUESTS = 1818,
	STR_ALL_GUESTS_SUMMARISED = 1819,
	STR_GUESTS_FILTER = 1820,
	STR_GUESTS_FILTER_THINKING = STR_GUESTS_FILTER + 1,
	STR_GUESTS_FILTER_THINKING_ABOUT = STR_GUESTS_FILTER + 2,

	STR_SHOW_GUESTS_THOUGHTS_ABOUT_THIS_RIDE_ATTRACTION_TIP = 1823,
	STR_SHOW_GUESTS_ON_THIS_RIDE_ATTRACTION_TIP = 1824,
	STR_SHOW_GUESTS_QUEUING_FOR_THIS_RIDE_ATTRACTION_TIP = 1825,

	STR_STATUS = 1826,
	STR_POPULARITY = 1827,
	STR_SATISFACTION = 1828,
	STR_PROFIT = 1829,
	STR_QUEUE_LENGTH = 1830,
	STR_QUEUE_TIME = 1831,
	STR_RELIABILITY = 1832,
	STR_DOWN_TIME = 1833,
	STR_GUESTS_FAVOURITE = 1834,
	STR_POPULARITY_UNKNOWN_LABEL = 1835,
	STR_POPULARITY_LABEL = 1836,
	STR_SATISFACTION_UNKNOWN_LABEL = 1837,
	STR_SATISFACTION_LABEL = 1838,
	STR_RELIABILITY_LABEL = 1839,
	STR_DOWN_TIME_LABEL = 1840,
	STR_PROFIT_LABEL = 1841,
	STR_GUESTS_FAVOURITE_LABEL = 1842,
	STR_GUESTS_FAVOURITE_PLURAL_LABEL = 1843,
	STR_RIDE_LIST_INFORMATION_TYPE_TIP = 1844,
	STR_NUM_GUESTS = 1846,
	
	STR_PLAY_MUSIC = 1849,
	STR_SELECT_MUSIC_TIP = 1850,
	STR_RUNNING_COST_PER_HOUR = 1851,
	STR_RUNNING_COST_UNKNOWN = 1852,
	STR_BUILT_THIS_YEAR	= 1853,
	STR_BUILT_LAST_YEAR	= 1854,
	STR_BUILT_YEARS_AGO	= 1855,

	STR_PROFIT_PER_ITEM_SOLD = 1856,
	STR_LOSS_PER_ITEM_SOLD = 1857,
	STR_COST_PER_MONTH = 1858,

	STR_HANDYMAN_PLURAL = 1859,
	STR_MECHANIC_PLURAL = 1860,
	STR_SECURITY_GUARD_PLURAL = 1861,
	STR_ENTERTAINER_PLURAL = 1862,
	STR_HANDYMAN_SINGULAR = 1863,
	STR_MECHANIC_SINGULAR = 1864,
	STR_SECURITY_GUARD_SINGULAR = 1865,
	STR_ENTERTAINER_SINGULAR = 1866,
	STR_STAFF_LIST_COUNTER = 1867,

	STR_NUMBER_OF_ROTATIONS = 1869,
	STR_NUMBER_OF_ROTATIONS_TIP = 1870,

	STR_INCOME_PER_HOUR = 1873,
	STR_PROFIT_PER_HOUR = 1874,

	STR_INSPECT_RIDES = 1876,
	STR_FIX_RIDES = 1877,
	STR_INSPECTION = 1878,

	STR_EVERY_10_MINUTES = 1879,
	STR_EVERY_20_MINUTES = 1880,
	STR_EVERY_30_MINUTES = 1881,
	STR_EVERY_45_MINUTES = 1882,
	STR_EVERY_HOUR = 1883,
	STR_EVERY_2_HOURS = 1884,
	STR_NEVER = 1885,

	STR_INSPECTING_RIDE = 1886,
	
	STR_TIME_SINCE_LAST_INSPECTION_MINUTES = 1887,
	STR_TIME_SINCE_LAST_INSPECTION_MORE_THAN_4_HOURS = 1888,
	STR_DOWN_TIME_LABEL_1889 = 1889,
	STR_SELECT_HOW_OFTEN_A_MECHANIC_SHOULD_CHECK_THIS_RIDE = 1890,

	STR_ITEMS_SOLD = 1894,
	STR_BUILD_RIDE_TIP = 1895,
	STR_FINANCES_SUMMARY_EXPENDITURE_INCOME = 1896,
	STR_FINANCES_SUMMARY_RIDE_CONSTRUCTION = 1897,
	STR_FINANCES_SUMMARY_RIDE_RUNNING_COSTS = 1898,
	STR_FINANCES_SUMMARY_LAND_PURCHASE = 1899,
	STR_FINANCES_SUMMARY_LANDSCAPING = 1900,
	STR_FINANCES_SUMMARY_PARK_ENTRANCE_TICKETS = 1901,
	STR_FINANCES_SUMMARY_RIDE_TICKETS = 1902,
	STR_FINANCES_SUMMARY_SHOP_SALES = 1903,
	STR_FINANCES_SUMMARY_SHOP_STOCK = 1904,
	STR_FINANCES_SUMMARY_FOOD_DRINK_SALES = 1905,
	STR_FINANCES_SUMMARY_FOOD_DRINK_STOCK = 1906,
	STR_FINANCES_SUMMARY_STAFF_WAGES = 1907,
	STR_FINANCES_SUMMARY_MARKETING = 1908,
	STR_FINANCES_SUMMARY_RESEARCH = 1909,
	STR_FINANCES_SUMMARY_LOAN_INTEREST = 1910,

	STR_FINANCES_SUMMARY_AT_X_PER_YEAR = 1911,
	STR_FINANCES_SUMMARY_MONTH_HEADING = 1912,
	STR_FINANCES_SUMMARY_INCOME_VALUE = 1913,
	STR_FINANCES_SUMMARY_EXPENDITURE_VALUE = 1914,
	STR_FINANCES_SUMMARY_LOSS_VALUE = 1915,
	STR_FINANCES_SUMMARY_LOAN = 1916,

	STR_CANT_BORROW_ANY_MORE_MONEY = 1918,
	STR_NOT_ENOUGH_CASH_AVAILABLE = 1919,
	STR_CANT_PAY_BACK_LOAN = 1920,

	STR_START_NEW_GAME_TIP = 1921,
	STR_CONTINUE_SAVED_GAME_TIP = 1922,
	STR_SHOW_TUTORIAL_TIP = 1923,
	STR_EXIT = 1924,

	STR_SHOW_SUBJECT_TIP = 1937,

	STR_SHOW_PATROL_AREA_TIP = 1947,
	STR_HIRE_STAFF_TIP = 1948,
	STR_FINANCIAL_SUMMARY = 1949,
	STR_FINANCIAL_GRAPH = 1950,
	STR_PARK_VALUE_GRAPH = 1951,
	STR_PROFIT_GRAPH = 1952,
	STR_MARKETING = 1953,
	STR_RESEARCH_FUNDING = 1954,

	STR_NUMBER_OF_CIRCUITS = 1955,
	STR_NUMBER_OF_CIRCUITS_TIP = 1956,

	STR_ON_RIDE_PHOTO_PRICE = 1963,

	STR_MAIN_COLOUR_SCHEME = 2971,
	STR_ALTERNATIVE_COLOUR_SCHEME_1 = 2972,
	STR_ALTERNATIVE_COLOUR_SCHEME_2 = 2973,
	STR_ALTERNATIVE_COLOUR_SCHEME_3 = 2974,

	STR_ITEM_START = 1988,
	STR_ITEM_SINGULAR_START = 2044,
	STR_ITEM2_START = 2090,
	STR_ITEM2_SINGULAR_START = 2134,

	STR_STAFF_HANDYMEN_TAB_TIP = 2210,
	STR_STAFF_MECHANICS_TAB_TIP = 2211,
	STR_STAFF_SECURITY_TAB_TIP = 2212,
	STR_STAFF_ENTERTAINERS_TAB_TIP = 2213,

	STR_CELSIUS_VALUE = 2216,
	STR_FAHRENHEIT_VALUE = 2217,

	STR_PARK_RATING_LABEL = 2220,
	STR_PARK_RATING_TIP = 2221,

	STR_GUESTS_IN_PARK_LABEL = 2223,
	STR_CASH_LABEL = 2224,
	STR_CASH_NEGATIVE_LABEL = 2225,
	STR_PARK_VALUE_LABEL = 2226,
	STR_COMPANY_VALUE_LABEL = 2227,
	STR_LAST_MONTH_PROFIT_FROM_FOOD_DRINK_MERCHANDISE_SALES_LABEL = 2228,

	STR_PARK_INFORMATION_TIP = 2233,
	STR_RECENT_MESSAGES = 2234,

	STR_MONTH_JANUARY = 2236,
	STR_MONTH_FEBRUARY = STR_MONTH_JANUARY + 1,
	STR_MONTH_MARCH = STR_MONTH_JANUARY + 2,
	STR_MONTH_APRIL = STR_MONTH_JANUARY + 3,
	STR_MONTH_MAY = STR_MONTH_JANUARY + 4,
	STR_MONTH_JUNE = STR_MONTH_JANUARY + 5,
	STR_MONTH_JULY = STR_MONTH_JANUARY + 6,
	STR_MONTH_AUGUST = STR_MONTH_JANUARY + 7,
	STR_MONTH_SEPTEMBER = STR_MONTH_JANUARY + 8,
	STR_MONTH_OCTOBER = STR_MONTH_JANUARY + 9,
	STR_MONTH_NOVEMBER = STR_MONTH_JANUARY + 10,
	STR_MONTH_DECEMBER = STR_MONTH_JANUARY + 11,

	STR_RESEARCH_TRANSPORT_RIDES = 2253,
	STR_RESEARCH_GENTLE_RIDES = 2254,
	STR_RESEARCH_ROLLER_COASTERS = 2255,
	STR_RESEARCH_THRILL_RIDES = 2256,
	STR_RESEARCH_WATER_RIDES = 2257,
	STR_RESEARCH_SHOPS_AND_STALLS = 2258,
	STR_RESEARCH_SCENERY_AND_THEMING = 2259,

	STR_NO_FUNDING = 2260,
	STR_MINIMUM_FUNDING = 2261,
	STR_NORMAL_FUNDING = 2262,
	STR_MAXIMUM_FUNDING = 2263,

	STR_RESEARCH_FUNDING_ = 2264,
	STR_RESEARCH_COST_PER_MONTH = 2265,
	STR_RESEARCH_PRIORITIES = 2266,
	STR_CURRENTLY_IN_DEVELOPMENT = 2267,
	STR_LAST_DEVELOPMENT = 2268,
	STR_RESEARCH_TYPE_LABEL = 2269,
	STR_RESEARCH_PROGRESS_LABEL = 2270,
	STR_RESEARCH_EXPECTED_LABEL = 2271,
	STR_RESEARCH_RIDE_LABEL = 2272,
	STR_RESEARCH_SCENERY_LABEL = 2273,

	STR_RESEARCH_SHOW_DETAILS_TIP = 2274,
	STR_FINANCES_RESEARCH = 2275,
	STR_RESEARCH_AND_DEVELOPMENT_TIP = 2276,
	STR_RESEARCH_UNKNOWN = 2277,

	STR_TRANSPORT_RIDE = 2278,
	STR_GENTLE_RIDE = 2279,
	STR_ROLLER_COASTER = 2280,
	STR_THRILL_RIDE = 2281,
	STR_WATER_RIDE = 2282,
	STR_SHOP_STALL = 2283,
	STR_SCENERY_THEMEING = 2284,

	STR_INITIAL_RESEARCH = 2285,
	STR_DESIGNING = 2286,
	STR_COMPLETING_DESIGN = 2287,
	STR_UNKNOWN = 2288,

	STR_SELECT_SCENARIO = 2291,

	STR_CHANGE_BASE_LAND_TIP = 2294,
	STR_CHANGE_VERTICAL_LAND_TIP = 2295,

	STR_SELECT_DESIGN = 2307,
	STR_TRACK_DESIGNS = 2308,

	STR_SOUND_QUALITY = 2317,
	STR_SOUND_LOW = 2318,
	STR_SOUND_MEDIUM = 2319,
	STR_SOUND_HIGH = 2320,
	STR_NUMBER_OF_RIDES_LABEL = 2321,
	STR_STAFF_LABEL = 2322,
	STR_PARK_SIZE_METRIC_LABEL = 2323,
	STR_PARK_SIZE_IMPERIAL_LABEL = 2324,
	SPR_BUY_LAND_RIGHTS_TIP = 2325,
	SPR_BUY_CONSTRUCTION_RIGHTS_TIP = 2326,
	STR_CURRENCY = 2328,
	STR_DISTANCE_AND_SPEED = 2329,
	STR_TEMPERATURE = 2330,
	STR_HEIGHT_LABELS = 2331,
	STR_UNITS = 2332,
	STR_SOUND = 2333,
	STR_POUNDS = 2334,
	STR_DOLLARS = 2335,
	STR_FRANC = 2336,
	STR_DEUTSCHMARK = 2337,
	STR_YEN = 2338,
	STR_PESETA = 2339,
	STR_LIRA = 2340,
	STR_GUILDERS = 2341,
	STR_KRONA = 2342,
	STR_EUROS = 2343,
	STR_IMPERIAL = 2344,
	STR_METRIC = 2345,
	STR_DISPLAY = 2346,
	//STR_UNITS = 2358,
	STR_REAL_VALUES = 2359,
	STR_DISPLAY_RESOLUTION = 2360,
	STR_TILE_SMOOTHING = 2361,
	STR_TILE_SMOOTHING_TIP = 2362,
	STR_GRIDLINES = 2363,
	STR_GRIDLINES_TIP = 2364,
	STR_CELSIUS = 2366,
	STR_FAHRENHEIT = 2367,
	//STR_NONE = 2368,
	STR_LOW = 2369,
	STR_AVERAGE = 2370,
	STR_HIGH = 2371,
	STR_RATING_LOW = 2372,
	STR_RATING_MEDIUM = 2373,
	STR_RATING_HIGH = 2374,
	STR_RATING_VERY_HIGH = 2375,
	STR_RATING_EXTREME = 2376,
	STR_RATING_ULTRA_EXTREME = 2377,

	STR_ADJUST_SMALLER_LAND_TIP = 2378,
	STR_ADJUST_LARGER_LAND_TIP = 2379,
	STR_ADJUST_SMALLER_WATER_TIP = 2380,
	STR_ADJUST_LARGER_WATER_TIP = 2381,
	STR_LAND = 2382,
	STR_WATER = 2383,

	STR_OBJECTIVE_NONE = 2385,
	STR_OBJECTIVE_GUESTS_BY = STR_OBJECTIVE_NONE + 1,
	STR_OBJECTIVE_PARK_VALUE_BY = STR_OBJECTIVE_NONE + 2,
	STR_OBJECTIVE_HAVE_FUN = STR_OBJECTIVE_NONE + 3,
	STR_OBJECTIVE_BUILD_THE_BEST = STR_OBJECTIVE_NONE + 4,
	STR_OBJECTIVE_10_ROLLERCOASTERS = STR_OBJECTIVE_NONE + 5,
	STR_OBJECTIVE_GUESTS_AND_rating = STR_OBJECTIVE_NONE + 6,
	STR_OBJECTIVE_MONTHLY_RIDE_INCOME = STR_OBJECTIVE_NONE + 7,
	STR_OBJECTIVE_10_ROLLERCOASTERS_LENGTH = STR_OBJECTIVE_NONE + 8,
	STR_OBJECTIVE_FINISH_5_ROLLERCOASTERS = STR_OBJECTIVE_NONE + 9,
	STR_OBJECTIVE_REPLAY_LOAN_AND_PARK_VALUE = STR_OBJECTIVE_NONE + 10,
	STR_OBJECTIVE_MONTHLY_FOOD_INCOME = STR_OBJECTIVE_NONE + 11,

	STR_MARKETING_CAMPAIGNS_IN_OPERATION = 2409,
	STR_MARKETING_CAMPAGINS_NONE = 2410,
	STR_MARKETING_CAMPAIGNS_AVAILABLE = 2411,
	STR_START_THIS_MARKETING_CAMPAIGN = 2412,
	STR_MARKETING_PER_WEEK = 2413,
	STR_MARKETING_NOT_SELECTED = 2414,
	STR_MARKETING_RIDE = 2415,
	STR_MARKETING_ITEM = 2416,

	STR_LENGTH_OF_TIME = 2417,

	STR_MARKETING_VOUCHERS_FOR_FREE_ENTRY_TO_THE_PARK = 2424,
	STR_MARKETING_VOUCHERS_FOR_FREE_RIDES_ON_A_PARTICULAR_RIDE = 2425,
	STR_MARKETING_VOUCHERS_FOR_HALF_PRICE_ENTRY_TO_THE_PARK = 2426,
	STR_MARKETING_VOUCHERS_FOR_FREE_FOOD_OR_DRINK = 2427,
	STR_MARKETING_ADVERTISING_CAMPAIGN_FOR_THE_PARK = 2428,
	STR_MARKETING_ADVERTISING_CAMPAIGN_FOR_A_PARTICULAR_RIDE = 2429,

	STR_VOUCHERS_FOR_FREE_ENTRY_TO = 2430,
	STR_VOUCHERS_FOR_FREE_RIDE_ON = 2431,
	STR_VOUCHERS_FOR_HALF_PRICE_ENTRY_TO = 2432,
	STR_VOUCHERS_FOR_FREE = 2433,
	STR_ADVERTISING_CAMPAIGN_FOR_1 = 2434,
	STR_ADVERTISING_CAMPAIGN_FOR_2 = 2435,

	STR_MARKETING_1_WEEK = 2436,
	STR_MARKETING_2_WEEKS = 2437,
	STR_MARKETING_3_WEEKS = 2438,
	STR_MARKETING_4_WEEKS = 2439,
	STR_MARKETING_5_WEEKS = 2440,
	STR_MARKETING_6_WEEKS = 2441,
	STR_MARKETING_WEEKS_REMAINING = 2442,
	STR_MARKETING_COST_PER_WEEK = 2443,
	STR_MARKETING_TOTAL_COST = 2444,
	STR_MARKETING_START_THIS_MARKETING_CAMPAIGN = 2445,

	STR_MARKETING_FINISHED_BASE = 2446,
	STR_MARKETING_FINISHED_FREE_ENTRY = 2446,
	STR_MARKETING_FINISHED_FREE_RIDES = 2447,
	STR_MARKETING_FINISHED_HALF_PRICE_ENTRY = 2448,
	STR_MARKETING_FINISHED_FREE_RIDE = 2449,
	STR_MARKETING_FINISHED_PARK_ADS = 2450,
	STR_MARKETING_FINISHED_RIDE_ADS = 2451,

	STR_FINANCES_FINANCIAL_GRAPH_CASH_LESS_LOAN_POSITIVE = 2452,
	STR_FINANCES_FINANCIAL_GRAPH_CASH_LESS_LOAN_NEGATIVE = 2453,
	STR_FINANCES_FINANCIAL_GRAPH_CASH_VALUE = 2454,
	STR_FINANCES_FINANCIAL_GRAPH_CASH_VALUE_POSITIVE = 2455,
	STR_FINANCES_FINANCIAL_GRAPH_CASH_VALUE_NEGATIVE = 2456,

	STR_FINANCES_SHOW_SUMMARY_TAB_TIP = 2457,
	STR_FINANCES_SHOW_CASH_TAB_TIP = 2458,
	STR_FINANCES_SHOW_PARK_VALUE_TAB_TIP = 2459,
	STR_FINANCES_SHOW_WEEKLY_PROFIT_TAB_TIP = 2460,
	STR_FINANCES_SHOW_MARKETING_TAB_TIP = 2461,

	STR_PARK_ENTRANCE_TAB_TIP = 2462,
	STR_PARK_RATING_TAB_TIP = 2463,
	STR_PARK_GUESTS_TAB_TIP = 2464,
	STR_PARK_PRICE_TAB_TIP = 2465,
	STR_PARK_STATS_TAB_TIP = 2466,
	STR_PARK_OBJECTIVE_TAB_TIP = 2467,
	STR_PARK_AWARDS_TAB_TIP = 2468,

	STR_SELECT_LEVEL_OF_RESEARCH_AND_DEVELOPMENT = 2469,
	STR_RESEARCH_NEW_TRANSPORT_RIDES = 2470,
	STR_RESEARCH_NEW_GENTLE_RIDES = 2471,
	STR_RESEARCH_NEW_ROLLER_COASTERS = 2472,
	STR_RESEARCH_NEW_THRILL_RIDES = 2473,
	STR_RESEARCH_NEW_WATER_RIDES = 2474,
	STR_RESEARCH_NEW_SHOPS_AND_STALLS = 2475,
	STR_RESEARCH_NEW_SCENERY_AND_THEMING = 2476,

	STR_SELECT_OPERATING_MODE = 2477,

	STR_SHOW_GRAPH_OF_VELOCITY_AGAINST_TIME_TIP = 2478,
	STR_SHOW_GRAPH_OF_ALTITUDE_AGAINST_TIME_TIP = 2479,
	STR_SHOW_GRAPH_OF_VERTICAL_ACCELERATION_AGAINST_TIME_TIP = 2480,
	STR_SHOW_GRAPH_OF_LATERAL_ACCELERATION_AGAINST_TIME_TIP = 2481,

	STR_PROFIT_PER_WEEK_AND_PARK_VALUE_TIP = 2482,
	STR_FINANCES_WEEKLY_PROFIT_POSITIVE = 2483,
	STR_FINANCES_WEEKLY_PROFIT_LOSS = 2484,

	STR_CONTROLS = 2485,
	STR_GENERAL = 2486,
	STR_REAL_NAME = 2487,
	STR_REAL_NAME_TIP = 2488,
	STR_HOTKEY = 2489,

	STR_FINACNES_PARK_VALUE = 2787,

	STR_ENTER_NAME_INTO_SCENARIO_CHART = 2790,

	STR_COMPLETED_BY_WITH_COMPANY_VALUE = 2794,
	STR_SORT = 2795,
	STR_RIDE_LIST_SORT_TIP = 2796,

	STR_SCREEN_EDGE_SCROLLING = 2797,
	STR_SCREEN_EDGE_SCROLLING_TIP = 2798,
	STR_HOTKEY_TIP = 2799,

	STR_TOTAL_ADMISSIONS = 2800,
	STR_INCOME_FROM_ADMISSIONS = 2801,

	STR_MAP = 2802,
	STR_SHOW_GUESTS_ON_MAP_TIP = 2803,
	STR_SHOW_STAFF_ON_MAP_TIP = 2803,
	STR_SHOW_MAP_TIP = 2805,

	STR_PEEPS_DISGUSTED_BY_PATHS = 2806,
	STR_PEEPS_DISLIKE_LITTER = 2807,
	STR_PEEPS_DISLIKE_VANDALISM = 2808,
	STR_PEEPS_ARE_HUNGRY = 2809,
	STR_PEEPS_ARE_THIRSTY = 2810,
	STR_PEEPS_CANT_FIND_BATHROOM  = 2811,
	STR_PEEPS_GETTING_LOST_OR_STUCK = 2812,

	STR_ENTRANCE_FEE_TOO_HI = 2813,

	STR_AWARD_MOST_UNTIDY = 2814,
	STR_MOST_TIDY = STR_AWARD_MOST_UNTIDY + 1,
	STR_BEST_ROLLERCOASTERS = STR_AWARD_MOST_UNTIDY + 2,
	STR_BEST_VALUE = STR_AWARD_MOST_UNTIDY + 3,
	STR_MOST_BEAUTIFUL = STR_AWARD_MOST_UNTIDY + 4,
	STR_WORST_VALUE = STR_AWARD_MOST_UNTIDY + 5,
	STR_SAFEST = STR_AWARD_MOST_UNTIDY + 6,
	STR_BEST_STAFF = STR_AWARD_MOST_UNTIDY + 7,
	STR_BEST_FOOD = STR_AWARD_MOST_UNTIDY + 8,
	STR_WORST_FOOD = STR_AWARD_MOST_UNTIDY + 9,
	STR_BEST_RESTROOMS = STR_AWARD_MOST_UNTIDY + 10,
	STR_MOST_DISAPPOINTING = STR_AWARD_MOST_UNTIDY + 11,
	STR_BEST_WATER_RIDES = STR_AWARD_MOST_UNTIDY + 12,
	STR_BEST_CUSTOM_DESIGNED_RIDES = STR_AWARD_MOST_UNTIDY + 13,
	STR_MOST_DAZZLING_RIDE_COLOURS = STR_AWARD_MOST_UNTIDY + 14,
	STR_MOST_CONFUSING_LAYOUT = STR_AWARD_MOST_UNTIDY + 15,
	STR_BEST_GENTLE_RIDES = STR_AWARD_MOST_UNTIDY + 16,

	STR_NEWS_ITEM_AWARD_MOST_UNTIDY = 2831,
	STR_NEWS_ITEM_MOST_TIDY = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 1,
	STR_NEWS_ITEM_BEST_ROLLERCOASTERS = STR_AWARD_MOST_UNTIDY + 2,
	STR_NEWS_ITEM_BEST_VALUE = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 3,
	STR_NEWS_ITEM_MOST_BEAUTIFUL = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 4,
	STR_NEWS_ITEM_WORST_VALUE = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 5,
	STR_NEWS_ITEM_SAFEST = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 6,
	STR_NEWS_ITEM_BEST_STAFF = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 7,
	STR_NEWS_ITEM_BEST_FOOD = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 8,
	STR_NEWS_ITEM_WORST_FOOD = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 9,
	STR_NEWS_ITEM_BEST_RESTROOMS = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 10,
	STR_NEWS_ITEM_MOST_DISAPPOINTING = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 11,
	STR_NEWS_ITEM_BEST_WATER_RIDES = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 12,
	STR_NEWS_ITEM_BEST_CUSTOM_DESIGNED_RIDES = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 13,
	STR_NEWS_ITEM_MOST_DAZZLING_RIDE_COLOURS = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 14,
	STR_NEWS_ITEM_MOST_CONFUSING_LAYOUT = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 15,
	STR_NEWS_ITEM_BEST_GENTLE_RIDES = STR_NEWS_ITEM_AWARD_MOST_UNTIDY + 16,

	STR_NO_RECENT_AWARDS = 2848,

	STR_ENTRANCE_NOT_CONNECTED = 2854,
	STR_EXIT_NOT_CONNECTED = 2855,

	STR_TUTORIAL = 2856,
	STR_PRESS_KEY_OR_MOUSE_BUTTON_FOR_CONTROL = 2857,
	STR_CANT_START_MARKETING_CAMPAIGN = 2858,

	STR_INFOGRAMES_INTERACTIVE_CREDITS = 2860,
	STR_LICENSED_TO_INFOGRAMES_INTERACTIVE_INC = 2861,
	STR_MUSIC_ACKNOWLEDGEMENTS_ELLIPSIS = 2862,
	STR_MUSIC_ACKNOWLEDGEMENTS = 2863,

	STR_CHANGE_BANNER_TEXT_TIP = 2986,
	STR_SET_AS_NO_ENTRY_BANNER_TIP = 2987,
	STR_DEMOLISH_BANNER_TIP = 2988,
	STR_SELECT_MAIN_COLOR_TIP = 2989,
	STR_SELECT_TEXT_COLOR_TIP = 2990,

	STR_LICENCE_AGREEMENT_NOTICE_1 = 2969,
	STR_LICENCE_AGREEMENT_NOTICE_2 = 2970,

	STR_COLOUR_SCHEME_TO_CHANGE_TIP = 2975,
	STR_PAINT_INDIVIDUAL_AREA_TIP = 2976,

	STR_UNABLE_TO_LOAD_FILE = 3010,
	STR_FILE_CONTAINS_INVALID_DATA = 3011,

	STR_MUSIC_STYLE_START = 3012,
	STR_DODGEMS_BEAT_STYLE			  = STR_MUSIC_STYLE_START + 0,
	STR_FAIRGROUND_ORGAN_STYLE		  = STR_MUSIC_STYLE_START + 1,
	STR_ROMAN_FANFARE_STYLE			  = STR_MUSIC_STYLE_START + 2,
	STR_ORIENTAL_STYLE				  = STR_MUSIC_STYLE_START + 3,
	STR_MARTIAN_STYLE				  = STR_MUSIC_STYLE_START + 4,
	STR_JUNGLE_DRUMS_STYLE			  = STR_MUSIC_STYLE_START + 5,
	STR_EGYPTIAN_STYLE				  = STR_MUSIC_STYLE_START + 6,
	STR_TOYLAND_STYLE				  = STR_MUSIC_STYLE_START + 7,
	// STR_???						  = STR_MUSIC_STYLE_START + 8,
	STR_SPACE_STYLE					  = STR_MUSIC_STYLE_START + 9,
	STR_HORROR_STYLE				  = STR_MUSIC_STYLE_START + 10,
	STR_TECHNO_STYLE				  = STR_MUSIC_STYLE_START + 11,
	STR_GENTLE_STYLE				  = STR_MUSIC_STYLE_START + 12,
	STR_SUMMER_STYLE				  = STR_MUSIC_STYLE_START + 13,
	STR_WATER_STYLE					  = STR_MUSIC_STYLE_START + 14,
	STR_WILD_WEST_STYLE				  = STR_MUSIC_STYLE_START + 15,
	STR_JURASSIC_STYLE				  = STR_MUSIC_STYLE_START + 16,
	STR_ROCK_STYLE					  = STR_MUSIC_STYLE_START + 17,
	STR_RAGTIME_STYLE				  = STR_MUSIC_STYLE_START + 18,
	STR_FANTASY_STYLE				  = STR_MUSIC_STYLE_START + 19,
	STR_ROCK_STYLE_2				  = STR_MUSIC_STYLE_START + 20,
	STR_ICE_STYLE					  = STR_MUSIC_STYLE_START + 21,
	STR_SNOW_STYLE					  = STR_MUSIC_STYLE_START + 22,
	STR_CUSTOM_MUSIC_1				  = STR_MUSIC_STYLE_START + 23,
	STR_CUSTOM_MUSIC_2				  = STR_MUSIC_STYLE_START + 24,
	STR_MEDIEVAL_STYLE				  = STR_MUSIC_STYLE_START + 25,
	STR_URBAN_STYLE					  = STR_MUSIC_STYLE_START + 26,
	STR_ORGAN_STYLE					  = STR_MUSIC_STYLE_START + 27,
	STR_MECHANICAL_STYLE			  = STR_MUSIC_STYLE_START + 28,
	STR_MODERN_STYLE				  = STR_MUSIC_STYLE_START + 29,
	STR_PIRATES_STYLE				  = STR_MUSIC_STYLE_START + 30,
	STR_ROCK_STYLE_3				  = STR_MUSIC_STYLE_START + 31,
	STR_CANDY_STYLE					  = STR_MUSIC_STYLE_START + 32,

	STR_SELECT_MUSIC_STYLE_TIP = 3045,

	STR_WHITE = 3055,
	STR_TRANSLUCENT = 3056,
	STR_CONSTRUCTION_MARKER = 3057,

	STR_BRICK_WALLS = 3058,
	STR_HEDGES = 3059,
	STR_ICE_BLOCKS = 3060,
	STR_WOODEN_FENCES = 3061,

	STR_BEGINNER_PARKS = 3064,
	STR_CHALLENGING_PARKS = STR_BEGINNER_PARKS + 1,
	STR_EXPERT_PARKS = STR_BEGINNER_PARKS + 2,
	STR_REAL_PARKS = STR_BEGINNER_PARKS + 3,
	STR_OTHER_PARKS = STR_BEGINNER_PARKS + 4,

	STR_SAME_PRICE_THROUGHOUT_PARK = 3071,
	STR_SAME_PRICE_THROUGHOUT_PARK_TIP = 3072,

	STR_PLAIN_ENTRANCE = 3078,
	STR_WOODEN_ENTRANCE = 3079,
	STR_CANVAS_TENT_ENTRANCE = 3080,
	STR_CASTLE_ENTRANCE_GREY = 3081,
	STR_CASTLE_ENTRANCE_BROWN = 3082,
	STR_JUNGLE_ENTRANCE = 3083,
	STR_LOG_CABIN_ENTRANCE = 3084,
	STR_CLASSICAL_ROMAN_ENTRANCE = 3085,
	STR_ABSTRACT_ENTRANCE = 3086,
	STR_SNOW_ICE_ENTRANCE = 3087,
	STR_PAGODA_ENTRANCE = 3088,
	STR_SPACE_ENTRANCE = 3089,

	STR_SELECT_STYLE_OF_ENTRANCE_EXIT_STATION_TIP = 3090,
	STR_SELECT_LIFT_HILL_CHAIN_SPEED_TIP = 3097,

	STR_SELECT_COLOUR = 3099,
	STR_SELECT_SECONDARY_COLOUR = 3100,
	STR_SELECT_TERNARY_COLOUR = 3101,

	STR_LIST_RIDES_TIP = 3104,
	STR_LIST_SHOPS_AND_STALLS_TIP = 3105,
	STR_LIST_KIOSKS_AND_FACILITIES_TIP = 3106,
	STR_CLOSE_RIDE = 3107,
	STR_TEST_RIDE = 3108,
	STR_OPEN_RIDE = 3109,
	STR_BLOCK_SECTIONS = 3110,

	STR_CLICK_ON_DESIGN_TO_BUILD_IT_TIP = 3111,
	STR_CLICK_ON_DESIGN_TO_RENAME_OR_DELETE_IT = 3112,

	STR_SAVE_TRACK_DESIGN = 3115,
	STR_SAVE_TRACK_DESIGN_NOT_POSSIBLE = 3116,

	STR_CALLING_MECHANIC = 3117,
	STR_MEHCANIC_IS_HEADING_FOR_THE_RIDE = 3118,
	STR_MEHCANIC_IS_FIXING_THE_RIDE = 3119,
	STR_LOCATE_NEAREST_AVAILABLE_MECHANIC_TIP = 3120,

	STR_FAVOURITE_RIDE_OF_GUEST = 3122,
	STR_FAVOURITE_RIDE_OF_GUESTS = 3123,

	STR_SAVE_TRACK_DESIGN_ITEM = 3128,
	STR_SAVE_TRACK_DESIGN_WITH_SCENERY_ITEM = 3129,
	STR_DESIGN_SAVE = 3130,
	STR_DESIGN_CANCEL = 3131,
	STR_CLICK_ITEMS_OF_SCENERY_TO_SELECT = 3132,

	STR_SELECT_NEARBY_SCENERY = 3137,
	STR_RESET_SELECTION = 3138,

	STR_SCROLL_LEFT_TIP = 3145,
	STR_SCROLL_RIGHT_TIP = STR_SCROLL_LEFT_TIP + 1,
	STR_SCROLL_LEFT_FAST_TIP = STR_SCROLL_LEFT_TIP + 2,
	STR_SCROLL_RIGHT_FAST_TIP = STR_SCROLL_LEFT_TIP + 3,
	STR_SCROLL_LEFT_RIGHT_TIP = STR_SCROLL_LEFT_TIP + 4,
	STR_SCROLL_UP_TIP = STR_SCROLL_LEFT_TIP + 5,
	STR_SCROLL_DOWN_TIP = STR_SCROLL_LEFT_TIP + 6,
	STR_SCROLL_UP_FAST_TIP = STR_SCROLL_LEFT_TIP + 7,
	STR_SCROLL_DOWN_FAST_TIP = STR_SCROLL_LEFT_TIP + 8,
	STR_SCROLL_UP_DOWN_TIP = STR_SCROLL_LEFT_TIP + 9,

	STR_SHOW_PEOPLE_ON_MAP_TIP = 3143,
	STR_SHOW_RIDES_STALLS_ON_MAP_TIP = 3144,

	STR_LIST = 3159,

	STR_MAP_SIZE = 3211,

	STR_SELECT_PARK_OWNED_LAND_TIP = 3216,

	STR_LAND_OWNED = 3217,
	STR_CONSTRUCTION_RIGHTS_OWNED = 3218,
	STR_LAND_SALE = 3219,
	STR_CONSTRUCTION_RIGHTS_SALE = 3220,
	STR_SET_LAND_TO_BE_OWNED_TIP = 3221,
	STR_SET_CONSTRUCTION_RIGHTS_TO_BE_OWNED_TIP = 3222,
	STR_SET_LAND_TO_BE_AVAILABLE_TIP = 3223,
	STR_SET_CONSTRUCTION_RIGHTS_TO_BE_AVAILABLE_TIP = 3224,

	STR_BUILD_PARK_ENTRANCE_TIP = 3226,

	STR_SET_STARTING_POSITIONS_TIP = 3228,

	STR_NO_DETAILS_YET = 3317,

	STR_OBJECTIVE = 3322,

	STR_SAVE_PLUGIN_DATA = 3333,
	STR_SAVE_PLUGIN_DATA_TIP = 3334,

	STR_GAME_TOOLS = 3341,
	STR_SCENARIO_EDITOR = 3342,
	STR_CONVERT_SAVED_GAME_TO_SCENARIO = 3343,
	STR_ROLLER_COASTER_DESIGNER = 3344,
	STR_TRACK_DESIGNS_MANAGER = 3345,

	STR_WARNING = 3360,
	STR_TOO_MANY_TRACK_DESIGNS_OF_THIS_TYPE = 3361,

	STR_SOUND_FORCED_SOFTWARE_BUFFER_MIXING = 3362,
	STR_SOUND_FORCED_SOFTWARE_BUFFER_MIXING_TIP = 3363,

	STR_MAP_RIDE = 3366,

	STR_TUTORIAL_BEGINNERS = 3385,
	STR_TUTORIAL_CUSTOM_RIDES = 3386,
	STR_TUTORIAL_ROLLER_COASTER = 3387,

	STR_CLEAR_SCENERY_TIP = 3437,
	STR_CLEAR_SCENERY = 3439,

	STR_PAGE_1 = 3440,
	STR_PAGE_2 = STR_PAGE_1 + 1,
	STR_PAGE_3 = STR_PAGE_1 + 2,
	STR_PAGE_4 = STR_PAGE_1 + 3,
	STR_PAGE_5 = STR_PAGE_1 + 4,

	// Have to include resource strings (from scenarios and objects) for the time being now that language is partially working
	STR_COUNT = 32768
};

#endif
