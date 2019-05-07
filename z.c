struct _x
{
   struct _x  *x;
   int        y;
};


int   getXXY( struct _x *p)
{
   return( p->x->x->y);
}

