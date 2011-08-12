#include "tempFuncs.h"


void outputHeader(FILE* output)
{
	fprintf(output, "date=\"1835.12.31\"\n");
	fprintf(output, "id=\n");
	fprintf(output, "{\n");
	//fprintf(output, "	id=5107\n");
	fprintf(output, "	id=2107\n");
	fprintf(output, "	type=4713\n");
	fprintf(output, "}\n");
	fprintf(output, "\n");
}


void outputTempReforms(FILE* output)
{
	fprintf(output, "	wage_reform=no_minimum_wage\n");
	fprintf(output, "	work_hours=no_work_hour_limit\n");
	fprintf(output, "	safety_regulations=no_safety\n");
	fprintf(output, "	unemployment_subsidies=no_subsidies\n");
	fprintf(output, "	pensions=no_pensions\n");
	fprintf(output, "	health_care=no_health_care\n");
}


void outputCountryHeader(FILE* output)
{
	fprintf(output, "	upper_house=\n");
	fprintf(output, "	{\n");
	fprintf(output, "		reactionary=0.00000\n");
	fprintf(output, "		conservative=1.00000\n");
	fprintf(output, "		liberal=0.00000\n");
	fprintf(output, "	}\n");
}


void outputCountryHeader2(FILE* output)
{
	fprintf(output, "	rich_tax=\n");
	fprintf(output, "	{\n");
	fprintf(output, "		current=0.00003\n");
	fprintf(output, "		tax_income=\n");
	fprintf(output, "		{\n");
	fprintf(output, "			0.00000 282668.31470 0.00000 0.00000 152561.20709 0.00000 0.00000 0.00000 0.00000 0.00000 0.00000 0.00000 0.00000\n");
	fprintf(output, "		}\n");
	fprintf(output, "		tax_eff=\n");
	fprintf(output, "		{\n");
	fprintf(output, "			0.00000 688123.59158 0.00000 0.00000 430797.42029 0.00000 0.00000 0.00000 0.00000 0.00000 0.00000 0.00000 0.00000\n");
	fprintf(output, "		}\n");
	fprintf(output, "		total=1118921.01187\n");
	fprintf(output, "		rangeLimitMax=0.50000\n");
	fprintf(output, "		rangeLimitMin=0.00000\n");
	fprintf(output, "		max_tax=22\n");
	fprintf(output, "		min_tax=21\n");
	fprintf(output, "	}\n");
	fprintf(output, "	middle_tax=\n");
	fprintf(output, "	{\n");
	fprintf(output, "		current=0.06256\n");
	fprintf(output, "		tax_income=\n");
	fprintf(output, "		{\n");
	fprintf(output, "			0.00000 0.00000 725076.43088 5609.40536 0.00000 13224.41605 19321.00604 0.00000 0.00000 0.00000 1179.08530 0.00000 0.00000\n");
	fprintf(output, "		}\n");
	fprintf(output, "		tax_eff=\n");
	fprintf(output, "		{\n");
	fprintf(output, "			0.00000 0.00000 1792486.48352 11217.41019 0.00000 26446.96585 62271.06470 0.00000 0.00000 0.00000 2357.68372 0.00000 0.00000\n");
	fprintf(output, "		}\n");
	fprintf(output, "		total=1894779.60797\n");
	fprintf(output, "		rangeLimitMax=0.50000\n");
	fprintf(output, "		rangeLimitMin=0.00000\n");
	fprintf(output, "		max_tax=22\n");
	fprintf(output, "		min_tax=21\n");
	fprintf(output, "	}\n");
	fprintf(output, "	poor_tax=\n");
	fprintf(output, "	{\n");
	fprintf(output, "		current=0.11591\n");
	fprintf(output, "		tax_income=\n");
	fprintf(output, "		{\n");
	fprintf(output, "			0.00000 0.00000 0.00000 0.00000 0.00000 0.00000 0.00000 133922.48761 2311114.97299 229248.16516 0.00000 0.00000 14694.64551\n");
	fprintf(output, "		}\n");
	fprintf(output, "		tax_eff=\n");
	fprintf(output, "		{\n");
	fprintf(output, "			0.00000 0.00000 0.00000 0.00000 0.00000 0.00000 0.00000 368526.35513 5680316.87845 461141.38962 0.00000 0.00000 29381.26956\n");
	fprintf(output, "		}\n");
	fprintf(output, "		total=6539365.89276\n");
	fprintf(output, "		rangeLimitMax=0.50000\n");
	fprintf(output, "		rangeLimitMin=0.00000\n");
	fprintf(output, "		max_tax=22\n");
	fprintf(output, "		min_tax=21\n");
	fprintf(output, "	}\n");
}


void outputCountryMiddle(FILE* output)
{
	fprintf(output, "	money=75314.11652\n");
}