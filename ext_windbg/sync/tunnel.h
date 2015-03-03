/*
Copyright (C) 2012-2015, Quarkslab.

This file is part of qb-sync.

qb-sync is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#undef UNICODE

extern BOOL g_Synchronized;

HRESULT TunnelIsUp();

HRESULT TunnelCreate(PCSTR Host, PCSTR Port);

HRESULT TunnelClose();

HRESULT TunnelPoll(int *lpNbBytesRecvd, LPSTR *lpBuffer);

HRESULT TunnelReceive(int *lpNbBytesRecvd, LPSTR *lpBuffer);

HRESULT TunnelSend(PCSTR Format, ...);

HRESULT ToHexString(const BYTE *pbBinary, DWORD cbBinary, LPSTR *pszString);

HRESULT ToBase64(const BYTE *pbBinary, DWORD cbBinary, LPSTR *pszString);

HRESULT FromBase64(LPCSTR pszString, BYTE **ppbBinary);

HRESULT NextChunk(char *cmd, char **nextc);

HRESULT WsaErrMsg(int LastError);
