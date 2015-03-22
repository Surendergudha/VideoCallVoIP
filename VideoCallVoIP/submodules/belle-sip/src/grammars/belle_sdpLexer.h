/** \file
 *  This C header file was generated by $ANTLR version 3.2 Sep 23, 2009 12:02:23
 *
 *     -  From the grammar source file : /Users/macbookair/linphone-android/submodules/belle-sip/src/grammars/belle_sdp.g
 *     -                            On : 2015-02-22 01:12:36
 *     -                 for the lexer : belle_sdpLexerLexer *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer belle_sdpLexer has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pbelle_sdpLexer, which is returned from a call to belle_sdpLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 * * The methods in pbelle_sdpLexer are  as follows:
 *
 *  -  void      pbelle_sdpLexer->T__22(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->T__23(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->T__24(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->T__25(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->T__26(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->T__27(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->T__28(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->DIGIT(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->ZERO(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->POS_DIGIT(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->COMMON_CHAR(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->HEX_CHAR(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->SPACE(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->LQUOTE(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->RQUOTE(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->CR(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->LF(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->DOT(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->EQUAL(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->COLON(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->SLASH(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->DASH(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->COMMA(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->STAR(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->OCTET(pbelle_sdpLexer)
 *  -  void      pbelle_sdpLexer->Tokens(pbelle_sdpLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_belle_sdpLexer_H
#define _belle_sdpLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct belle_sdpLexer_Ctx_struct belle_sdpLexer, * pbelle_sdpLexer;



/*
    belle-sip - SIP (RFC3261) library.
    Copyright (C) 2010  Belledonne Communications SARL

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma GCC diagnostic ignored "-Wparentheses"
#pragma GCC diagnostic ignored "-Wunused"
#ifdef __clang__
#pragma GCC diagnostic ignored "-Wtautological-compare" 
#endif
#ifndef __clang__
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif


#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for belle_sdpLexer
 */
struct belle_sdpLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;


     void (*mT__22)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mT__23)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mT__24)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mT__25)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mT__26)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mT__27)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mT__28)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mDIGIT)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mZERO)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mPOS_DIGIT)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mCOMMON_CHAR)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mHEX_CHAR)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mSPACE)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mLQUOTE)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mRQUOTE)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mCR)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mLF)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mDOT)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mEQUAL)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mCOLON)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mSLASH)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mDASH)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mCOMMA)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mSTAR)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mOCTET)	(struct belle_sdpLexer_Ctx_struct * ctx);
     void (*mTokens)	(struct belle_sdpLexer_Ctx_struct * ctx);    const char * (*getGrammarFileName)();
    void	    (*free)   (struct belle_sdpLexer_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pbelle_sdpLexer belle_sdpLexerNew         (pANTLR3_INPUT_STREAM instream);
ANTLR3_API pbelle_sdpLexer belle_sdpLexerNewSSD      (pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the lexer will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define RQUOTE      21
#define ZERO      18
#define POS_DIGIT      19
#define DASH      14
#define SPACE      8
#define OCTET      15
#define EOF      -1
#define LQUOTE      20
#define COMMA      10
#define EQUAL      6
#define SLASH      12
#define DOT      13
#define COLON      9
#define DIGIT      7
#define CR      4
#define T__26      26
#define STAR      11
#define T__27      27
#define T__28      28
#define T__22      22
#define T__23      23
#define T__24      24
#define LF      5
#define T__25      25
#define HEX_CHAR      16
#define COMMON_CHAR      17
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for belle_sdpLexer
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
