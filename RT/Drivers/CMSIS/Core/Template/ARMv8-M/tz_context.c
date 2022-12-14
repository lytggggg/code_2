??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
   *   @ f i l e           t z _ c o n t e x t . c  
   *   @ b r i e f         C o n t e x t   M a n a g e m e n t   f o r   A r m v 8 - M   T r u s t Z o n e   -   S a m p l e   i m p l e m e n t a t i o n  
   *   @ v e r s i o n     V 1 . 1 . 1  
   *   @ d a t e           1 0 .   J a n u a r y   2 0 1 8  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 1 6 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y  
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
   *  
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
   *  
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T  
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
   * /  
  
 # i n c l u d e   " R T E _ C o m p o n e n t s . h "  
 # i n c l u d e   C M S I S _ d e v i c e _ h e a d e r  
 # i n c l u d e   " t z _ c o n t e x t . h "  
  
 / / /   N u m b e r   o f   p r o c e s s   s l o t s   ( t h r e a d s   m a y   c a l l   s e c u r e   l i b r a r y   c o d e )  
 # i f n d e f   T Z _ P R O C E S S _ S T A C K _ S L O T S  
 # d e f i n e   T Z _ P R O C E S S _ S T A C K _ S L O T S           8 U  
 # e n d i f  
  
 / / /   S t a c k   s i z e   o f   t h e   s e c u r e   l i b r a r y   c o d e  
 # i f n d e f   T Z _ P R O C E S S _ S T A C K _ S I Z E  
 # d e f i n e   T Z _ P R O C E S S _ S T A C K _ S I Z E             2 5 6 U  
 # e n d i f  
  
 t y p e d e f   s t r u c t   {  
     u i n t 3 2 _ t   s p _ t o p ;             / /   s t a c k   s p a c e   t o p  
     u i n t 3 2 _ t   s p _ l i m i t ;         / /   s t a c k   s p a c e   l i m i t  
     u i n t 3 2 _ t   s p ;                     / /   c u r r e n t   s t a c k   p o i n t e r  
 }   s t a c k _ i n f o _ t ;  
  
 s t a t i c   s t a c k _ i n f o _ t   P r o c e s s S t a c k I n f o     [ T Z _ P R O C E S S _ S T A C K _ S L O T S ] ;  
 s t a t i c   u i n t 6 4 _ t           P r o c e s s S t a c k M e m o r y [ T Z _ P R O C E S S _ S T A C K _ S L O T S ] [ T Z _ P R O C E S S _ S T A C K _ S I Z E / 8 U ] ;  
 s t a t i c   u i n t 3 2 _ t           P r o c e s s S t a c k F r e e S l o t   =   0 x F F F F F F F F U ;  
  
  
 / / /   I n i t i a l i z e   s e c u r e   c o n t e x t   m e m o r y   s y s t e m  
 / / /   \ r e t u r n   e x e c u t i o n   s t a t u s   ( 1 :   s u c c e s s ,   0 :   e r r o r )  
 _ _ a t t r i b u t e _ _ ( ( c m s e _ n o n s e c u r e _ e n t r y ) )  
 u i n t 3 2 _ t   T Z _ I n i t C o n t e x t S y s t e m _ S   ( v o i d )   {  
     u i n t 3 2 _ t   n ;  
  
     i f   ( _ _ g e t _ I P S R ( )   = =   0 U )   {  
         r e t u r n   0 U ;     / /   T h r e a d   M o d e  
     }  
  
     f o r   ( n   =   0 U ;   n   <   T Z _ P R O C E S S _ S T A C K _ S L O T S ;   n + + )   {  
         P r o c e s s S t a c k I n f o [ n ] . s p   =   0 U ;  
         P r o c e s s S t a c k I n f o [ n ] . s p _ l i m i t   =   ( u i n t 3 2 _ t ) & P r o c e s s S t a c k M e m o r y [ n ] ;  
         P r o c e s s S t a c k I n f o [ n ] . s p _ t o p       =   ( u i n t 3 2 _ t ) & P r o c e s s S t a c k M e m o r y [ n ]   +   T Z _ P R O C E S S _ S T A C K _ S I Z E ;  
         * ( ( u i n t 3 2 _ t   * ) P r o c e s s S t a c k M e m o r y [ n ] )   =   n   +   1 U ;  
     }  
     * ( ( u i n t 3 2 _ t   * ) P r o c e s s S t a c k M e m o r y [ - - n ] )   =   0 x F F F F F F F F U ;  
  
     P r o c e s s S t a c k F r e e S l o t   =   0 U ;  
  
     / /   D e f a u l t   p r o c e s s   s t a c k   p o i n t e r   a n d   s t a c k   l i m i t  
     _ _ s e t _ P S P L I M ( ( u i n t 3 2 _ t ) P r o c e s s S t a c k M e m o r y ) ;  
     _ _ s e t _ P S P       ( ( u i n t 3 2 _ t ) P r o c e s s S t a c k M e m o r y ) ;  
  
     / /   P r i v i l e g e d   T h r e a d   M o d e   u s i n g   P S P  
     _ _ s e t _ C O N T R O L ( 0 x 0 2 U ) ;  
  
     r e t u r n   1 U ;         / /   S u c c e s s  
 }  
  
  
 / / /   A l l o c a t e   c o n t e x t   m e m o r y   f o r   c a l l i n g   s e c u r e   s o f t w a r e   m o d u l e s   i n   T r u s t Z o n e  
 / / /   \ p a r a m [ i n ]     m o d u l e       i d e n t i f i e s   s o f t w a r e   m o d u l e s   c a l l e d   f r o m   n o n - s e c u r e   m o d e  
 / / /   \ r e t u r n   v a l u e   ! =   0   i d   T r u s t Z o n e   m e m o r y   s l o t   i d e n t i f i e r  
 / / /   \ r e t u r n   v a l u e   0         n o   m e m o r y   a v a i l a b l e   o r   i n t e r n a l   e r r o r  
 _ _ a t t r i b u t e _ _ ( ( c m s e _ n o n s e c u r e _ e n t r y ) )  
 T Z _ M e m o r y I d _ t   T Z _ A l l o c M o d u l e C o n t e x t _ S   ( T Z _ M o d u l e I d _ t   m o d u l e )   {  
     u i n t 3 2 _ t   s l o t ;  
  
     ( v o i d ) m o d u l e ;   / /   I g n o r e   ( f i x e d   S t a c k   s i z e )  
  
     i f   ( _ _ g e t _ I P S R ( )   = =   0 U )   {  
         r e t u r n   0 U ;     / /   T h r e a d   M o d e  
     }  
  
     i f   ( P r o c e s s S t a c k F r e e S l o t   = =   0 x F F F F F F F F U )   {  
         r e t u r n   0 U ;     / /   N o   s l o t   a v a i l a b l e  
     }  
  
     s l o t   =   P r o c e s s S t a c k F r e e S l o t ;  
     P r o c e s s S t a c k F r e e S l o t   =   * ( ( u i n t 3 2 _ t   * ) P r o c e s s S t a c k M e m o r y [ s l o t ] ) ;  
  
     P r o c e s s S t a c k I n f o [ s l o t ] . s p   =   P r o c e s s S t a c k I n f o [ s l o t ] . s p _ t o p ;  
  
     r e t u r n   ( s l o t   +   1 U ) ;  
 }  
  
  
 / / /   F r e e   c o n t e x t   m e m o r y   t h a t   w a s   p r e v i o u s l y   a l l o c a t e d   w i t h   \ r e f   T Z _ A l l o c M o d u l e C o n t e x t _ S  
 / / /   \ p a r a m [ i n ]     i d     T r u s t Z o n e   m e m o r y   s l o t   i d e n t i f i e r  
 / / /   \ r e t u r n   e x e c u t i o n   s t a t u s   ( 1 :   s u c c e s s ,   0 :   e r r o r )  
 _ _ a t t r i b u t e _ _ ( ( c m s e _ n o n s e c u r e _ e n t r y ) )  
 u i n t 3 2 _ t   T Z _ F r e e M o d u l e C o n t e x t _ S   ( T Z _ M e m o r y I d _ t   i d )   {  
     u i n t 3 2 _ t   s l o t ;  
  
     i f   ( _ _ g e t _ I P S R ( )   = =   0 U )   {  
         r e t u r n   0 U ;     / /   T h r e a d   M o d e  
     }  
  
     i f   ( ( i d   = =   0 U )   | |   ( i d   >   T Z _ P R O C E S S _ S T A C K _ S L O T S ) )   {  
         r e t u r n   0 U ;     / /   I n v a l i d   I D  
     }  
  
     s l o t   =   i d   -   1 U ;  
  
     i f   ( P r o c e s s S t a c k I n f o [ s l o t ] . s p   = =   0 U )   {  
         r e t u r n   0 U ;     / /   I n a c t i v e   s l o t  
     }  
     P r o c e s s S t a c k I n f o [ s l o t ] . s p   =   0 U ;  
  
     * ( ( u i n t 3 2 _ t   * ) P r o c e s s S t a c k M e m o r y [ s l o t ] )   =   P r o c e s s S t a c k F r e e S l o t ;  
     P r o c e s s S t a c k F r e e S l o t   =   s l o t ;  
  
     r e t u r n   1 U ;         / /   S u c c e s s  
 }  
  
  
 / / /   L o a d   s e c u r e   c o n t e x t   ( c a l l e d   o n   R T O S   t h r e a d   c o n t e x t   s w i t c h )  
 / / /   \ p a r a m [ i n ]     i d     T r u s t Z o n e   m e m o r y   s l o t   i d e n t i f i e r  
 / / /   \ r e t u r n   e x e c u t i o n   s t a t u s   ( 1 :   s u c c e s s ,   0 :   e r r o r )  
 _ _ a t t r i b u t e _ _ ( ( c m s e _ n o n s e c u r e _ e n t r y ) )  
 u i n t 3 2 _ t   T Z _ L o a d C o n t e x t _ S   ( T Z _ M e m o r y I d _ t   i d )   {  
     u i n t 3 2 _ t   s l o t ;  
  
     i f   ( ( _ _ g e t _ I P S R ( )   = =   0 U )   | |   ( ( _ _ g e t _ C O N T R O L ( )   &   2 U )   = =   0 U ) )   {  
         r e t u r n   0 U ;     / /   T h r e a d   M o d e   o r   u s i n g   M a i n   S t a c k   f o r   t h r e a d s  
     }  
  
     i f   ( ( i d   = =   0 U )   | |   ( i d   >   T Z _ P R O C E S S _ S T A C K _ S L O T S ) )   {  
         r e t u r n   0 U ;     / /   I n v a l i d   I D  
     }  
  
     s l o t   =   i d   -   1 U ;  
  
     i f   ( P r o c e s s S t a c k I n f o [ s l o t ] . s p   = =   0 U )   {  
         r e t u r n   0 U ;     / /   I n a c t i v e   s l o t  
     }  
  
     / /   S e t u p   p r o c e s s   s t a c k   p o i n t e r   a n d   s t a c k   l i m i t  
     _ _ s e t _ P S P L I M ( P r o c e s s S t a c k I n f o [ s l o t ] . s p _ l i m i t ) ;  
     _ _ s e t _ P S P       ( P r o c e s s S t a c k I n f o [ s l o t ] . s p ) ;  
  
     r e t u r n   1 U ;         / /   S u c c e s s  
 }  
  
  
 / / /   S t o r e   s e c u r e   c o n t e x t   ( c a l l e d   o n   R T O S   t h r e a d   c o n t e x t   s w i t c h )  
 / / /   \ p a r a m [ i n ]     i d     T r u s t Z o n e   m e m o r y   s l o t   i d e n t i f i e r  
 / / /   \ r e t u r n   e x e c u t i o n   s t a t u s   ( 1 :   s u c c e s s ,   0 :   e r r o r )  
 _ _ a t t r i b u t e _ _ ( ( c m s e _ n o n s e c u r e _ e n t r y ) )  
 u i n t 3 2 _ t   T Z _ S t o r e C o n t e x t _ S   ( T Z _ M e m o r y I d _ t   i d )   {  
     u i n t 3 2 _ t   s l o t ;  
     u i n t 3 2 _ t   s p ;  
  
     i f   ( ( _ _ g e t _ I P S R ( )   = =   0 U )   | |   ( ( _ _ g e t _ C O N T R O L ( )   &   2 U )   = =   0 U ) )   {  
         r e t u r n   0 U ;     / /   T h r e a d   M o d e   o r   u s i n g   M a i n   S t a c k   f o r   t h r e a d s  
     }  
  
     i f   ( ( i d   = =   0 U )   | |   ( i d   >   T Z _ P R O C E S S _ S T A C K _ S L O T S ) )   {  
         r e t u r n   0 U ;     / /   I n v a l i d   I D  
     }  
  
     s l o t   =   i d   -   1 U ;  
  
     i f   ( P r o c e s s S t a c k I n f o [ s l o t ] . s p   = =   0 U )   {  
         r e t u r n   0 U ;     / /   I n a c t i v e   s l o t  
     }  
  
     s p   =   _ _ g e t _ P S P ( ) ;  
     i f   ( ( s p   <   P r o c e s s S t a c k I n f o [ s l o t ] . s p _ l i m i t )   | |  
             ( s p   >   P r o c e s s S t a c k I n f o [ s l o t ] . s p _ t o p ) )   {  
         r e t u r n   0 U ;     / /   S P   o u t   o f   r a n g e  
     }  
     P r o c e s s S t a c k I n f o [ s l o t ] . s p   =   s p ;  
  
     / /   D e f a u l t   p r o c e s s   s t a c k   p o i n t e r   a n d   s t a c k   l i m i t  
     _ _ s e t _ P S P L I M ( ( u i n t 3 2 _ t ) P r o c e s s S t a c k M e m o r y ) ;  
     _ _ s e t _ P S P       ( ( u i n t 3 2 _ t ) P r o c e s s S t a c k M e m o r y ) ;  
  
     r e t u r n   1 U ;         / /   S u c c e s s  
 }  