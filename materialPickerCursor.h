#pragma once

#define materialPicker_width 32
#define materialPicker_height 32
#define materialPicker_x_hot 1
#define materialPicker_y_hot 32
static unsigned char materialPicker_bits[] = {
	0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x7F,
	0x00, 0x00, 0xC0, 0xFF, 0x00, 0x00, 0xE3, 0xFF, 0x00, 0x80, 0xF7, 0xFF,
	0x00, 0xC0, 0xFF, 0xFF, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0xC0, 0xFF, 0x3F,
	0x00, 0x80, 0xFF, 0x1F, 0x00, 0xC0, 0xFF, 0x0F, 0x00, 0xE0, 0xFE, 0x07,
	0x00, 0x70, 0xFC, 0x03, 0x00, 0x38, 0xF8, 0x07, 0x00, 0x1C, 0xF0, 0x0F,
	0x00, 0x0E, 0xE0, 0x0F, 0x00, 0x07, 0xF0, 0x07, 0x80, 0x03, 0xB8, 0x03,
	0xC0, 0x01, 0x1C, 0x00, 0xE0, 0x7C, 0x0E, 0x00, 0x70, 0x3E, 0x07, 0x00,
	0x38, 0x9F, 0x03, 0x00, 0x9C, 0xCF, 0x01, 0x00, 0xCC, 0xE7, 0x00, 0x00,
	0xEC, 0x73, 0x00, 0x00, 0xEC, 0x39, 0x00, 0x00, 0xEE, 0x1C, 0x00, 0x00,
	0x07, 0x0E, 0x00, 0x00, 0xE3, 0x07, 0x00, 0x00, 0xF3, 0x03, 0x00, 0x00,
	0x3F, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, };

static unsigned char materialPicker_empty_bits[] = {
	0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x7F,
	0x00, 0x00, 0xC0, 0xFF, 0x00, 0x00, 0xE3, 0xFF, 0x00, 0x80, 0xF7, 0xFF,
	0x00, 0xC0, 0xFF, 0xFF, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0xC0, 0xFF, 0x3F,
	0x00, 0x80, 0xFF, 0x1F, 0x00, 0xC0, 0xFF, 0x0F, 0x00, 0xE0, 0xFE, 0x07,
	0x00, 0x70, 0xFC, 0x03, 0x00, 0x38, 0xF8, 0x07, 0x00, 0x1C, 0xF0, 0x0F,
	0x00, 0x0E, 0xE0, 0x0F, 0x00, 0x07, 0xF0, 0x07, 0x80, 0x03, 0xB8, 0x03,
	0xC0, 0x01, 0x1C, 0x00, 0xE0, 0x00, 0x0E, 0x00, 0x70, 0x00, 0x07, 0x00,
	0x38, 0x80, 0x03, 0x00, 0x1C, 0xC0, 0x01, 0x00, 0x0C, 0xE0, 0x00, 0x00,
	0x0C, 0x70, 0x00, 0x00, 0x0C, 0x38, 0x00, 0x00, 0x0E, 0x1C, 0x00, 0x00,
	0x07, 0x0E, 0x00, 0x00, 0xE3, 0x07, 0x00, 0x00, 0xF3, 0x03, 0x00, 0x00,
	0x3F, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, };

static unsigned char materialPicker_full_bits[] = {
	0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x7F,
	0x00, 0x00, 0xC0, 0xFF, 0x00, 0x00, 0xE3, 0xFF, 0x00, 0x80, 0xF7, 0xFF,
	0x00, 0xC0, 0xFF, 0xFF, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0xC0, 0xFF, 0x3F,
	0x00, 0x80, 0xFF, 0x1F, 0x00, 0xC0, 0xFF, 0x0F, 0x00, 0xE0, 0xFE, 0x07,
	0x00, 0x70, 0xFC, 0x03, 0x00, 0x38, 0xF9, 0x07, 0x00, 0x9C, 0xF3, 0x0F,
	0x00, 0xCE, 0xE7, 0x0F, 0x00, 0xE7, 0xF3, 0x07, 0x80, 0xF3, 0xB9, 0x03,
	0xC0, 0xF9, 0x1C, 0x00, 0xE0, 0x7C, 0x0E, 0x00, 0x70, 0x3E, 0x07, 0x00,
	0x38, 0x9F, 0x03, 0x00, 0x9C, 0xCF, 0x01, 0x00, 0xCC, 0xE7, 0x00, 0x00,
	0xEC, 0x73, 0x00, 0x00, 0xEC, 0x39, 0x00, 0x00, 0xEE, 0x1C, 0x00, 0x00,
	0x07, 0x0E, 0x00, 0x00, 0xE3, 0x07, 0x00, 0x00, 0xF3, 0x03, 0x00, 0x00,
	0x3F, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, };

static unsigned char materialPicker_transp_bits[] = {
	0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x7F,
	0x00, 0x00, 0xC0, 0xFF, 0x00, 0x00, 0xE3, 0xFF, 0x00, 0x80, 0xF7, 0xFF,
	0x00, 0xC0, 0xFF, 0xFF, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0xC0, 0xFF, 0x3F,
	0x00, 0x80, 0xFF, 0x1F, 0x00, 0xC0, 0xFF, 0x0F, 0x00, 0xE0, 0xFF, 0x07,
	0x00, 0xF0, 0xFF, 0x03, 0x00, 0xF8, 0xFF, 0x07, 0x00, 0xFC, 0xFF, 0x0F,
	0x00, 0xFE, 0xFF, 0x0F, 0x00, 0xFF, 0xFF, 0x07, 0x80, 0xFF, 0xBF, 0x03,
	0xC0, 0xFF, 0x1F, 0x00, 0xE0, 0xFF, 0x0F, 0x00, 0xF0, 0xFF, 0x07, 0x00,
	0xF8, 0xFF, 0x03, 0x00, 0xFC, 0xFF, 0x01, 0x00, 0xFC, 0xFF, 0x00, 0x00,
	0xFC, 0x7F, 0x00, 0x00, 0xFC, 0x3F, 0x00, 0x00, 0xFE, 0x1F, 0x00, 0x00,
	0xFF, 0x0F, 0x00, 0x00, 0xFF, 0x07, 0x00, 0x00, 0xFF, 0x03, 0x00, 0x00,
	0x3F, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, };

static unsigned char materialPickerAdd_bits[] = {
	0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x7F,
	0x00, 0x00, 0xC0, 0xFF, 0x00, 0x00, 0xE3, 0xFF, 0x00, 0x80, 0xF7, 0xFF,
	0x00, 0xC0, 0xFF, 0xFF, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0xC0, 0xFF, 0x3F,
	0x00, 0x80, 0xFF, 0x1F, 0x00, 0xC0, 0xFF, 0x0F, 0x00, 0xE0, 0xFE, 0x07,
	0x00, 0x70, 0xFC, 0x03, 0x00, 0x38, 0xF8, 0x07, 0x00, 0x1C, 0xF0, 0x0F,
	0x00, 0x0E, 0xE0, 0x0F, 0x00, 0x07, 0xF0, 0x07, 0x80, 0x03, 0xB8, 0x03,
	0xC0, 0x01, 0x1C, 0x00, 0xE0, 0x00, 0x0E, 0x00, 0x70, 0x00, 0x07, 0x00,
	0x38, 0x80, 0x03, 0x07, 0x1C, 0xC0, 0x01, 0x07, 0x0C, 0xE0, 0x00, 0x07,
	0x0C, 0x70, 0x00, 0x07, 0x0C, 0x38, 0xF0, 0x7F, 0x0E, 0x1C, 0xF0, 0x7F,
	0x07, 0x0E, 0xF0, 0x7F, 0xE3, 0x07, 0x00, 0x07, 0xF3, 0x03, 0x00, 0x07,
	0x3F, 0x00, 0x00, 0x07, 0x1E, 0x00, 0x00, 0x07, };

static unsigned char materialPickerAdd_transp_bits[] = {
	0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x7F,
	0x00, 0x00, 0xC0, 0xFF, 0x00, 0x00, 0xE3, 0xFF, 0x00, 0x80, 0xF7, 0xFF,
	0x00, 0xC0, 0xFF, 0xFF, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0xC0, 0xFF, 0x3F,
	0x00, 0x80, 0xFF, 0x1F, 0x00, 0xC0, 0xFF, 0x0F, 0x00, 0xE0, 0xFF, 0x07,
	0x00, 0xF0, 0xFF, 0x03, 0x00, 0xF8, 0xFF, 0x07, 0x00, 0xFC, 0xFF, 0x0F,
	0x00, 0xFE, 0xFF, 0x0F, 0x00, 0xFF, 0xFF, 0x07, 0x80, 0xFF, 0xBF, 0x03,
	0xC0, 0xFF, 0x1F, 0x00, 0xE0, 0xFF, 0x0F, 0x00, 0xF0, 0xFF, 0x07, 0x00,
	0xF8, 0xFF, 0x03, 0x07, 0xFC, 0xFF, 0x01, 0x07, 0xFC, 0xFF, 0x00, 0x07,
	0xFC, 0x7F, 0x00, 0x07, 0xFC, 0x3F, 0xF0, 0x7F, 0xFE, 0x1F, 0xF0, 0x7F,
	0xFF, 0x0F, 0xF0, 0x7F, 0xFF, 0x07, 0x00, 0x07, 0xFF, 0x03, 0x00, 0x07,
	0x3F, 0x00, 0x00, 0x07, 0x1E, 0x00, 0x00, 0x07, };

