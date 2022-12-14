??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 6 - 0 3 - 1 2           B e r n a r d             f i r s t   v e r s i o n  
   *   2 0 0 6 - 0 5 - 2 7           B e r n a r d             a d d   s u p p o r t   f o r   s a m e   p r i o r i t y   t h r e a d   s c h e d u l e  
   *   2 0 0 6 - 0 8 - 1 0           B e r n a r d             r e m o v e   t h e   l a s t   r t _ s c h e d u l e   i n   r t _ t i c k _ i n c r e a s e  
   *   2 0 1 0 - 0 3 - 0 8           B e r n a r d             r e m o v e   r t _ p a s s e d _ s e c o n d  
   *   2 0 1 0 - 0 5 - 2 0           B e r n a r d             f i x   t h e   t i c k   e x c e e d s   t h e   m a x i m u m   l i m i t s  
   *   2 0 1 0 - 0 7 - 1 3           B e r n a r d             f i x   r t _ t i c k _ f r o m _ m i l l i s e c o n d   i s s u e   f o u n d   b y   k u r o n c a  
   *   2 0 1 1 - 0 6 - 2 6           B e r n a r d             a d d   r t _ t i c k _ s e t   f u n c t i o n .  
   *   2 0 1 8 - 1 1 - 2 2           J e s v e n               a d d   p e r   c p u   t i c k  
   * /  
  
 # i n c l u d e   < r t h w . h >  
 # i n c l u d e   < r t t h r e a d . h >  
  
 s t a t i c   r t _ t i c k _ t   r t _ t i c k   =   0 ;  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   s y s t e m   t i c k   a n d   s e t   i t   t o   z e r o .  
   *   @ i n g r o u p   S y s t e m I n i t  
   *  
   *   @ d e p r e c a t e d   s i n c e   1 . 1 . 0 ,   t h i s   f u n c t i o n   d o e s   n o t   n e e d   t o   b e   i n v o k e d  
   *   i n   t h e   s y s t e m   i n i t i a l i z a t i o n .  
   * /  
 v o i d   r t _ s y s t e m _ t i c k _ i n i t ( v o i d )  
 {  
 }  
  
 / * *  
   *   @ a d d t o g r o u p   C l o c k  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e t u r n   c u r r e n t   t i c k   f r o m   o p e r a t i n g   s y s t e m   s t a r t u p  
   *  
   *   @ r e t u r n   c u r r e n t   t i c k  
   * /  
 r t _ t i c k _ t   r t _ t i c k _ g e t ( v o i d )  
 {  
         / *   r e t u r n   t h e   g l o b a l   t i c k   * /  
         r e t u r n   r t _ t i c k ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   c u r r e n t   t i c k  
   * /  
 v o i d   r t _ t i c k _ s e t ( r t _ t i c k _ t   t i c k )  
 {  
         r t _ b a s e _ t   l e v e l ;  
  
         l e v e l   =   r t _ h w _ i n t e r r u p t _ d i s a b l e ( ) ;  
         r t _ t i c k   =   t i c k ;  
         r t _ h w _ i n t e r r u p t _ e n a b l e ( l e v e l ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   n o t i f y   k e r n e l   t h e r e   i s   o n e   t i c k   p a s s e d .   N o r m a l l y ,  
   *   t h i s   f u n c t i o n   i s   i n v o k e d   b y   c l o c k   I S R .  
   * /  
 v o i d   r t _ t i c k _ i n c r e a s e ( v o i d )  
 {  
         s t r u c t   r t _ t h r e a d   * t h r e a d ;  
  
         / *   i n c r e a s e   t h e   g l o b a l   t i c k   * /  
         + +   r t _ t i c k ;  
  
         / *   c h e c k   t i m e   s l i c e   * /  
         t h r e a d   =   r t _ t h r e a d _ s e l f ( ) ;  
  
         - -   t h r e a d - > r e m a i n i n g _ t i c k ;  
         i f   ( t h r e a d - > r e m a i n i n g _ t i c k   = =   0 )  
         {  
                 / *   c h a n g e   t o   i n i t i a l i z e d   t i c k   * /  
                 t h r e a d - > r e m a i n i n g _ t i c k   =   t h r e a d - > i n i t _ t i c k ;  
  
                 / *   y i e l d   * /  
                 r t _ t h r e a d _ y i e l d ( ) ;  
         }  
  
         / *   c h e c k   t i m e r   * /  
         r t _ t i m e r _ c h e c k ( ) ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c a l c u l a t e   t h e   t i c k   f r o m   m i l l i s e c o n d .  
   *  
   *   @ p a r a m   m s   t h e   s p e c i f i e d   m i l l i s e c o n d  
   *                       -   N e g a t i v e   N u m b e r   w a i t   f o r e v e r  
   *                       -   Z e r o   n o t   w a i t  
   *                       -   M a x   0 x 7 f f f f f f f  
   *  
   *   @ r e t u r n   t h e   c a l c u l a t e d   t i c k  
   * /  
 r t _ t i c k _ t   r t _ t i c k _ f r o m _ m i l l i s e c o n d ( r t _ i n t 3 2 _ t   m s )  
 {  
         r t _ t i c k _ t   t i c k ;  
  
         i f   ( m s   <   0 )  
         {  
                 t i c k   =   ( r t _ t i c k _ t ) R T _ W A I T I N G _ F O R E V E R ;  
         }  
         e l s e  
         {  
                 t i c k   =   R T _ T I C K _ P E R _ S E C O N D   *   ( m s   /   1 0 0 0 ) ;  
                 t i c k   + =   ( R T _ T I C K _ P E R _ S E C O N D   *   ( m s   %   1 0 0 0 )   +   9 9 9 )   /   1 0 0 0 ;  
         }  
  
         / *   r e t u r n   t h e   c a l c u l a t e d   t i c k   * /  
         r e t u r n   t i c k ;  
 }  
  
 / * * @ } * /  
  