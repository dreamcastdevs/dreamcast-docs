;/*++
;
;Copyright (c) 1995-1997  Microsoft Corporation
;
;Module Name:
;
;    pop3evnt.h
;
;Abstract:
;
;    Definitions for POP3 Server Events
;
;Author:
;
;    RichardW,  3 Jan 95
;
;Revision History:
;
;Notes:
;
;    This file is generated by the MC tool from the pop3evnt.mc file.
;
;--*/
;
;
;#ifndef __POP3EVNT_H__
;#define __POP3EVNT_H__
;


SeverityNames=(Success=0x0:STATUS_SEVERITY_SUCCESS
               Informational=0x1:STATUS_SEVERITY_INFORMATIONAL
               Warning=0x2:STATUS_SEVERITY_WARNING
               Error=0x3:STATUS_SEVERITY_ERROR
              )


MessageId=1000 Severity=Success SymbolicName=POP3EVENT_SERVICE_STARTED
Language=English
The POP3 Service started successfully.
.

MessageId= Severity=Success SymbolicName=POP3EVENT_MAIL_DELIVERED
Language=English
A message was successfully delivered for %1.
.

MessageId=2000 Severity=Informational SymbolicName=POP3EVENT_MAIL_DIRECTORY_CREATED
Language=English
A new mail directory was created for %1.
.

MessageId= Severity=Informational SymbolicName=POP3EVENT_USER_CONNECT
Language=English
A client has connected
.

MessageId= Severity=Informational Symbolicname=POP3EVENT_USER_DISCONNECT
Language=English
A client has disconnected
.

MessageId=3000 Severity=Warning SymbolicName=POP3EVENT_MAIL_DIRECTORY_LOCKED
Language=English
The mail directory for user %1 was locked, and could not be accessed.
.

MessageId= Severity=Warning SymbolicName=POP3EVENT_VOLUME_FULL
Language=English
The volume containing the mail directory, %1, is full.
.

MessageId= Severity=Warning SymbolicName=POP3EVENT_LOGON_FAILURE
Language=English
A logon attempt has failed.
.

MessageId=4000 Severity=Error SymbolicName=POP3EVENT_PARAMETER_MISSING
Language=English
The service is not configured correctly, and data was not found
in the registry for path %1
.

;
;#endif  //__POP3EVNT_H__
;
