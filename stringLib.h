/**
 * 文字列を扱うライブラリです。 
 * 
 * 複数の文字列の比較などのシンプルな関数を実装しています
 */
#pragma once

typedef enum{
	INT
}JSON_MEMBER_TYPE;


typedef struct
{
	/* data */
} JSON_MEMBER;



int strlistOR(char const* str1,int argc,...);
char** strGetMatchPattern(char const* str1,int argc,...);