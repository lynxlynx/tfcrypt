#ifndef _TFCRYPT_DEFAULTS_HEADER
#define _TFCRYPT_DEFAULTS_HEADER

/* 5uouFzawL37Un6RtVqWbv0SOX48ew/xntAG5sNaOSlk= */

size_t nr_turns = 262144;
int ctr_mode = TFC_MODE_XTS;
size_t macbits = TF_MAX_BITS;
size_t tfc_saltsz = 32;
tfc_byte tfc_salt[TFC_MAX_SALT] = {
	0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
	0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
	0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18,
	0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20,
};
tfc_yesno do_full_key = NO;

#endif
