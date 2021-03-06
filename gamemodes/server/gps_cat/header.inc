#define MAX_GPS_CATEGORIES 10
#define MAX_GPS_SITES_PER_CATEGORY 30

enum
{
	GPS_CAT_HOSPITAL = 1,
	GPS_CAT_BANK,
	GPS_CAT_POLICE,
	GPS_CAT_MECHANIC,
	GPS_CAT_DRIVING_SCHOOL,
	GPS_CAT_JOBS,
	GPS_CAT_REAL_ESTATES,
	GPS_CAT_BUSINESS
};

enum eGPS_CATEGORIES
{
	gps_cat_ID,
	gps_cat_NAME[24],
	gps_cat_ICON[32]
};

new GPS_Cat[MAX_GPS_CATEGORIES][eGPS_CATEGORIES],
	Iterator:GPS_Cat<MAX_GPS_CATEGORIES>;

enum eGPS_SITES
{
	gps_site_ID,
	Float:gps_site_X,
	Float:gps_site_Y,
	Float:gps_site_Z,
	gps_site_CAT_ID,
	gps_site_ICON[32]
};

new GPS_Sites[MAX_GPS_CATEGORIES][MAX_GPS_SITES_PER_CATEGORY][eGPS_SITES],
	Iterator:GPS_Sites[MAX_GPS_CATEGORIES]<MAX_GPS_SITES_PER_CATEGORY>;