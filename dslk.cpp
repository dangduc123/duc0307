#include<stdio.h>
/*1.Tao danh sach
Lan luot nhap cac so nguyen tu ban phim. Ket thuc go 0; 
cac so nguyen nhap vao luu thanh 1 dslk don
2.Duyet danh sach: di qua tat ca cac nut, moi nut chi xu
ly 1 lan:
-In ra gia tri cac nut
-Tinh tong cac nut cua danh sach
3.Bo sung 1 nut vao danh sach
-Bo sung 1 nut mang gia tri X vao dau danh sach.
-Chen 1 nut mang gia tri x vao cuoi ds
-Chen sau:
+Chen 1 nut mang gia tri la x vao sau nut mang gia
tri la y(neu co)
-Chen truoc:
+Chen 1 nut mang gia tri la x vao truoc nut mang gia
tri la y(neu co)
4.Xoa nut:
-Xoa nut dau ds. 
-Xoa nut cuoi ds.
-Xoa nut dung sau nut mang gia tri la x
*/

struct nut{
	int giatri;
	nut *tiep;
};
typedef nut Node;
Node *dau;

void khoitao(Node *&dau){
	dau = NULL;
}

void nhapds(Node *&dau)
{
	Node*p;// Chua dia chi cua nut tao ra
	Node*q;// Chua dia chi nut cuoi ds
		q = NULL;
	int tam;// Chua so nguyen nhap vao tu ban phim
	do{
		printf("\n Nhap vao 1 so nguyen, 0:dung");
		scanf("%d",&tam);
		if(tam!=0)
		{
			//Tao nut moi
			p = new Node;
			p->giatri=tam;
			p->tiep=NULL;
			// Moc nut vao ds
			if(dau == NULL)// p la nut dau tien
				dau = p;
			else
				q->tiep=p;
				q=p;
		}
	}while(tam!=0);
}

void duyetlap(Node *dau)
{
	Node *p;
	p = dau;
	printf("\n");
	while(p!=NULL)
	{
		printf("%3d",p->giatri);
		p = p->tiep;
	}
}

void duyetdq(Node *dau)
{
	if(dau!=NULL)
	{
		printf("%3d",dau->giatri);
		duyetdq(dau->tiep);
	}
}

int tonglap(Node *dau)
{
	int s=0;
	Node *p = dau;
	while(p!=NULL)
	{
		s=s+p->giatri;
		p = p->tiep;
	}
	return s;
}

int tongdq(Node *dau)
{
	if(dau==NULL)
		return 0;
	else
		return dau->giatri + tongdq(dau->tiep);
}

int tinhTongLe(Node *dau)
{
	int s = 0;
	Node *p = dau;
	while(p!=NULL)
	{
		if(p->giatri % 2!=0)
			s = s + p->giatri;
			p = p->tiep;
	}	
	return s;
}

int tongLedq(Node *dau)
{
	if(dau == NULL)
		return 0;
	else
		if(dau->giatri%2!=0)
			return dau->giatri + tongLedq(dau->tiep);
		else
			return tongLedq(dau->tiep);	
}

void chendau(Node *&dau,int x)
{
	Node *p;
	p = new Node;
	p->giatri = x;
	p->tiep = dau;
	dau = p;
}

void chencuoi(Node *&dau, int x)
{
	Node *p, *q;
	if(dau==NULL)
		chendau(dau,x);
	else
	{
		q=dau;
		while(q->tiep != NULL)
		q = q->tiep;
		p = new Node;
		p->giatri=x;
		p->tiep = NULL;
		q->tiep=p;
	}
}

void chensau(Node *&dau, int x, int y)
{
	Node *q, *p;
	//Tim nut mang gia tri y
	q = dau;
	while((q!=NULL)&&(q->giatri!=y))
	q = q->tiep;
	if(q!=NULL)
	{
		p = new Node;
		p->giatri = x;
		p->tiep = q->tiep;
		q->tiep = p;
	}
}

void chentruoc(Node *&dau, int x, int y)
{
	Node *t;//chua dia chi nut dung truoc nut y
	Node *q;//chua dia chi nut y
	Node *p;//chua dia chu nut x
	
	t=NULL;
	q=dau;
	while((q!=NULL)&&(q->giatri!=y))
	{
		t = q;
		q = q->tiep;	
	}
	if(q!=NULL)
	{
		if(q==dau)
			chendau(dau,x);
		else
		{
			p = new Node;
			p->giatri = x;
			t->tiep=p;
			p->tiep=q;
		}
	}	
} 

void xoadau(Node *&dau)
{
	Node *p;
	if(dau!=NULL)
	{
		p =dau;
		dau = dau->tiep;
		delete p;
	}
}

void xoacuoi(Node *&dau)
{
	Node *t, *p;
	if(dau!=NULL)
	{
		//Tim nut cuoi
		t = NULL;
		p=dau;
		while((p!=NULL)&&(p->tiep!=NULL))
		{
			t = p;
			p = p->tiep;
		}
		if(p==dau)
			xoadau(dau);
		else
		{
			t->tiep=NULL;
			delete p;
		}
	}
}

void xoasau(Node *&dau, int x)
{
	Node *p,*q;
	if(dau!=NULL)
	{
		//tim nut mang gia tri la x
		p = dau;
		while((p!=NULL)&&(p->giatri!=x))
			p=p->tiep;
			if(p!=NULL)
			{
				if(p==dau) xoadau(dau);
				else
				if(p->tiep!=NULL)
				{
					q=p->tiep;
					p->tiep = q->tiep;
					delete q;
				}
			}
	}
}

int main()
{
	khoitao(dau);
	nhapds(dau);
	duyetlap(dau);
//	chendau(dau,111);
//	duyetlap(dau);
//	chencuoi(dau,999);
//	duyetlap(dau);
//	chensau(dau,44,5);// so 44 chen sau nut 5
//	duyetlap(dau);
//	chentruoc(dau,777,8);
//	duyetlap(dau);
//	xoadau(dau);
//	duyetlap(dau);
//	xoacuoi(dau);
//	duyetlap(dau);
	xoasau(dau,5);
	duyetlap(dau);
//	printf("\n Duyet de quy \n");
//	duyetdq(dau);
//	printf("\n Tong cac nut %3d",tonglap(dau));
//	printf("\nTong cac nut bang de quy %3d",tongdq(dau));
//	printf("\n Tinh tong le %3d",tinhTongLe(dau));
//	printf("\n Tinh tong le de quy %3d",tongLedq(dau));
//	return 0;
}
