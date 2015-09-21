/**
 * @file pdag.c
 * @brief Implementation of the parse dag object.
 * @class ln_pdag pdag.h
 *//*
 * Copyright 2015 by Rainer Gerhards and Adiscon GmbH.
 *
 * Released under ASL 2.0.
 */
#ifndef LIBLOGNORM_HELPERS_H
#define LIBLOGNORM_HELPERS_H

static inline int myisdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/* disable private extensions to json-c */
#define json_object_object_add_nocheck(json, key, val) json_object_object_add(json, key, val)

#endif
