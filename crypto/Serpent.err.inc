{******************************************************************************}
{*  Serpent.err.inc                                                           *}
{*  Revolutionary Confederation of Anarcho Syndicalists                       *}
{*  Written by: black.rabbit 2011                                             *}
{******************************************************************************}
resourcestring
    ERR_SERPENT_INCORRECT_KEY   = '������������ ���� "%s"!';
    ERR_SERPENT_INCORRECT_BLOCK = '������������ ���� "%s"!';
    ERR_SERPENT_INCORRECT_IV    = '������������ ������ ������������� "%s"!';
{$IFDEF ECB}
    ERR_SERPENT_ECB_ENCRYPT     = '������ ������������� Serpent::%d %s � ������ ����������� ������� �����'#13#10'������ ���������� ������';
    ERR_SERPENT_ECB_DECRYPT     = '������ ������������� Serpent::%d %s � ������ ����������� ������� �����'#13#10'������ ���������� ������';
{$ENDIF ECB}
{$IFDEF CBC}
    ERR_SERPENT_CBC_ENCRYPT     = '������ ������������� Serpent::%d %s � ������ ��������� ������ �� �����������'#13#10'������ ���������� ������';
    ERR_SERPENT_CBC_DECRYPT     = '������ ������������� Serpent::%d %s � ������ ��������� ������ �� �����������'#13#10'������ ���������� ������';
{$ENDIF CBC}
{$IFDEF CFB}
    ERR_SERPENT_CFB_ENCRYPT     = '������ ������������� Serpent::%d %s � ������ �������� ����� �� �����������'#13#10'������ ���������� ������';
    ERR_SERPENT_CFB_DECRYPT     = '������ ������������� Serpent::%d %s � ������ �������� ����� �� �����������'#13#10'������ ���������� ������';
{$ENDIF OFB}
{$IFDEF OFB}
    ERR_SERPENT_OFB_ENCRYPT     = '������ ������������� Serpent::%d %s � ������ �������� �������� �������� ������'#13#10'������ ���������� ������';
    ERR_SERPENT_OFB_DECRYPT     = '������ ������������� Serpent::%d %s � ������ �������� �������� �������� ������'#13#10'������ ���������� ������';
{$ENDIF OFB}
