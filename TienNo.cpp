#include "TienNo.h"

TienNo::TienNo()
{
	this->tienNoGoc = 0;
	this->ngayMuonNo = "";
}

void TienNo::ganTienNoGoc(double tienNo)
{
	this->tienNoGoc=tienNo;
}

void TienNo::ganNgayMuonNo(string ngayMuon)
{
	this->ngayMuonNo = ngayMuon;
}
double TienNo::layTienNoGoc() {
	return this->tienNoGoc;
}
string TienNo::layNgayMuonNo() {
	return this->ngayMuonNo;
}
