??# i n c l u d e   " r e f . h "  
  
 v o i d   r e f _ f i r _ s p a r s e _ f 3 2 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     f l o a t 3 2 _ t   *   p S c r a t c h I n ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     f l o a t 3 2 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p x ;                                                                   / *   S c r a t c h   b u f f e r   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p y   =   p S t a t e ;                                                 / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   b u f f e r   * /  
     f l o a t 3 2 _ t   * p b   =   p S c r a t c h I n ;                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s c r a t c h   b u f f e r   * /  
     f l o a t 3 2 _ t   * p O u t ;                                                               / *   D e s t i n a t i o n   p o i n t e r   * /  
     i n t 3 2 _ t   * p T a p D e l a y   =   S - > p T a p D e l a y ;                           / *   P o i n t e r   t o   t h e   a r r a y   c o n t a i n i n g   o f f s e t   o f   t h e   n o n - z e r o   t a p   v a l u e s .   * /  
     u i n t 3 2 _ t   d e l a y S i z e   =   S - > m a x D e l a y   +   b l o c k S i z e ;     / *   s t a t e   l e n g t h   * /  
     u i n t 1 6 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r     * /  
     i n t 3 2 _ t   r e a d I n d e x ;                                                           / *   R e a d   i n d e x   o f   t h e   s t a t e   b u f f e r   * /  
     u i n t 3 2 _ t   t a p C n t ,   b l k C n t ;                                               / *   l o o p   c o u n t e r s   * /  
     f l o a t 3 2 _ t   c o e f f   =   * p C o e f f s + + ;                                     / *   R e a d   t h e   f i r s t   c o e f f i c i e n t   v a l u e   * /  
  
  
     / *   B l o c k S i z e   o f   I n p u t   s a m p l e s   a r e   c o p i e d   i n t o   t h e   s t a t e   b u f f e r   * /  
     / *   S t a t e I n d e x   p o i n t s   t o   t h e   s t a r t i n g   p o s i t i o n   t o   w r i t e   i n   t h e   s t a t e   b u f f e r   * /  
     a r m _ c i r c u l a r W r i t e _ f 3 2 ( ( i n t 3 2 _ t   * )   p y ,   d e l a y S i z e ,   & S - > s t a t e I n d e x ,   1 ,  
                                                 ( i n t 3 2 _ t   * )   p S r c ,   1 ,   b l o c k S i z e ) ;  
  
  
     / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
     r e a d I n d e x   =   ( ( i n t 3 2 _ t )   S - > s t a t e I n d e x   -   ( i n t 3 2 _ t )   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
     / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
     i f   ( r e a d I n d e x   <   0 )  
     {  
         r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
     }  
  
     / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
     p y   =   p S t a t e ;  
  
     / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
     a r m _ c i r c u l a r R e a d _ f 3 2 ( ( i n t 3 2 _ t   * )   p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
                                               ( i n t 3 2 _ t   * )   p b ,   ( i n t 3 2 _ t   * )   p b ,   b l o c k S i z e ,   1 ,  
                                               b l o c k S i z e ) ;  
  
     / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   * /  
     p x   =   p b ;  
  
     / *   W o r k i n g   p o i n t e r   f o r   d e s t i n a t i o n   b u f f e r   * /  
     p O u t   =   p D s t ;  
  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   P e r f o r m   M u l t i p l i c a t i o n s   a n d   s t o r e   i n   d e s t i n a t i o n   b u f f e r   * /  
         * p O u t + +   =   * p x + +   *   c o e f f ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .   * /  
     t a p C n t   =   ( u i n t 3 2 _ t )   n u m T a p s   -   1 U ;  
  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         / *   L o a d   t h e   c o e f f i c i e n t   v a l u e   a n d  
           *   i n c r e m e n t   t h e   c o e f f i c i e n t   b u f f e r   f o r   t h e   n e x t   s e t   o f   s t a t e   v a l u e s   * /  
         c o e f f   =   * p C o e f f s + + ;  
  
         / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
         r e a d I n d e x   =   ( ( i n t 3 2 _ t )   S - > s t a t e I n d e x   -   ( i n t 3 2 _ t )   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
         / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
         i f   ( r e a d I n d e x   <   0 )  
         {  
             r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
         }  
  
         / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
         p y   =   p S t a t e ;  
  
         / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
         a r m _ c i r c u l a r R e a d _ f 3 2 ( ( i n t 3 2 _ t   * )   p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
                                                   ( i n t 3 2 _ t   * )   p b ,   ( i n t 3 2 _ t   * )   p b ,   b l o c k S i z e ,   1 ,  
                                                   b l o c k S i z e ) ;  
  
         / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   * /  
         p x   =   p b ;  
  
         / *   W o r k i n g   p o i n t e r   f o r   d e s t i n a t i o n   b u f f e r   * /  
         p O u t   =   p D s t ;  
  
         b l k C n t   =   b l o c k S i z e ;  
  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
             * p O u t + +   + =   * p x + +   *   c o e f f ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
  
         / *   D e c r e m e n t   t h e   t a p   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
 }  
  
 v o i d   r e f _ f i r _ s p a r s e _ q 3 1 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     q 3 1 _ t   *   p S c r a t c h I n ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   * p x ;                                                                           / *   S c r a t c h   b u f f e r   p o i n t e r   * /  
     q 3 1 _ t   * p y   =   p S t a t e ;                                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   b u f f e r   * /  
     q 3 1 _ t   * p b   =   p S c r a t c h I n ;                                                 / *   T e m p o r a r y   p o i n t e r s   f o r   s c r a t c h   b u f f e r   * /  
     q 3 1 _ t   * p O u t ;                                                                       / *   D e s t i n a t i o n   p o i n t e r   * /  
     q 6 3 _ t   o u t ;                                                                           / *   T e m p o r a r y   o u t p u t   v a r i a b l e   * /  
     i n t 3 2 _ t   * p T a p D e l a y   =   S - > p T a p D e l a y ;                           / *   P o i n t e r   t o   t h e   a r r a y   c o n t a i n i n g   o f f s e t   o f   t h e   n o n - z e r o   t a p   v a l u e s .   * /  
     u i n t 3 2 _ t   d e l a y S i z e   =   S - > m a x D e l a y   +   b l o c k S i z e ;     / *   s t a t e   l e n g t h   * /  
     u i n t 1 6 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   F i l t e r   o r d e r   * /  
     i n t 3 2 _ t   r e a d I n d e x ;                                                           / *   R e a d   i n d e x   o f   t h e   s t a t e   b u f f e r   * /  
     u i n t 3 2 _ t   t a p C n t ,   b l k C n t ;                                               / *   l o o p   c o u n t e r s   * /  
     q 3 1 _ t   c o e f f   =   * p C o e f f s + + ;                                             / *   R e a d   t h e   f i r s t   c o e f f i c i e n t   v a l u e   * /  
     q 3 1 _ t   i n ;  
  
  
     / *   B l o c k S i z e   o f   I n p u t   s a m p l e s   a r e   c o p i e d   i n t o   t h e   s t a t e   b u f f e r   * /  
     / *   S t a t e I n d e x   p o i n t s   t o   t h e   s t a r t i n g   p o s i t i o n   t o   w r i t e   i n   t h e   s t a t e   b u f f e r   * /  
     a r m _ c i r c u l a r W r i t e _ f 3 2 ( ( i n t 3 2 _ t   * )   p y ,   d e l a y S i z e ,   & S - > s t a t e I n d e x ,   1 ,  
                                                 ( i n t 3 2 _ t   * )   p S r c ,   1 ,   b l o c k S i z e ) ;  
  
     / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
     r e a d I n d e x   =   ( i n t 3 2 _ t )   ( S - > s t a t e I n d e x   -   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
     / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
     i f   ( r e a d I n d e x   <   0 )  
     {  
         r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
     }  
  
     / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
     p y   =   p S t a t e ;  
  
     / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
     a r m _ c i r c u l a r R e a d _ f 3 2 ( ( i n t 3 2 _ t   * )   p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
                                               ( i n t 3 2 _ t   * )   p b ,   ( i n t 3 2 _ t   * )   p b ,   b l o c k S i z e ,   1 ,  
                                               b l o c k S i z e ) ;  
  
     / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   o f   s t a t e   v a l u e s   * /  
     p x   =   p b ;  
  
     / *   W o r k i n g   p o i n t e r   f o r   s c r a t c h   b u f f e r   o f   o u t p u t   v a l u e s   * /  
     p O u t   =   p D s t ;  
      
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   P e r f o r m   M u l t i p l i c a t i o n s   a n d   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r   * /  
         * p O u t + +   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   *   p x + +   *   c o e f f )   > >   3 2 ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .   * /  
     t a p C n t   =   ( u i n t 3 2 _ t )   n u m T a p s   -   1 U ;  
  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         / *   L o a d   t h e   c o e f f i c i e n t   v a l u e   a n d                        
           *   i n c r e m e n t   t h e   c o e f f i c i e n t   b u f f e r   f o r   t h e   n e x t   s e t   o f   s t a t e   v a l u e s   * /  
         c o e f f   =   * p C o e f f s + + ;  
  
         / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
         r e a d I n d e x   =   ( i n t 3 2 _ t )   ( S - > s t a t e I n d e x   -   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
         / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
         i f   ( r e a d I n d e x   <   0 )  
         {  
             r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
         }  
  
         / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
         p y   =   p S t a t e ;  
  
         / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
         a r m _ c i r c u l a r R e a d _ f 3 2 ( ( i n t 3 2 _ t   * )   p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
                                                   ( i n t 3 2 _ t   * )   p b ,   ( i n t 3 2 _ t   * )   p b ,   b l o c k S i z e ,   1 ,  
                                                   b l o c k S i z e ) ;  
  
         / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   o f   s t a t e   v a l u e s   * /  
         p x   =   p b ;  
  
         / *   W o r k i n g   p o i n t e r   f o r   s c r a t c h   b u f f e r   o f   o u t p u t   v a l u e s   * /  
         p O u t   =   p D s t ;  
  
         b l k C n t   =   b l o c k S i z e ;  
  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
             o u t   =   * p O u t ;  
             o u t   + =   ( ( q 6 3 _ t )   *   p x + +   *   c o e f f )   > >   3 2 ;  
             * p O u t + +   =   ( q 3 1 _ t )   ( o u t ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
  
         / *   D e c r e m e n t   t h e   t a p   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
     / *   W o r k i n g   o u t p u t   p o i n t e r   i s   u p d a t e d   * /  
     p O u t   =   p D s t ;  
  
     / *   O u t p u t   i s   c o n v e r t e d   i n t o   1 . 3 1   f o r m a t .   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         i n   =   * p O u t   < <   1 ;  
         * p O u t + +   =   i n ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
 }  
  
 v o i d   r e f _ f i r _ s p a r s e _ q 1 5 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h I n ,  
     q 3 1 _ t   *   p S c r a t c h O u t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 1 5 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 1 5 _ t   * p I n   =   p S r c ;                                                           / *   W o r k i n g   p o i n t e r   f o r   i n p u t   * /  
     q 1 5 _ t   * p O u t   =   p D s t ;                                                         / *   W o r k i n g   p o i n t e r   f o r   o u t p u t   * /  
     q 1 5 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 1 5 _ t   * p x ;                                                                           / *   T e m p o r a r y   p o i n t e r s   f o r   s c r a t c h   b u f f e r   * /  
     q 1 5 _ t   * p b   =   p S c r a t c h I n ;                                                 / *   T e m p o r a r y   p o i n t e r s   f o r   s c r a t c h   b u f f e r   * /  
     q 1 5 _ t   * p y   =   p S t a t e ;                                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   b u f f e r   * /  
     i n t 3 2 _ t   * p T a p D e l a y   =   S - > p T a p D e l a y ;                           / *   P o i n t e r   t o   t h e   a r r a y   c o n t a i n i n g   o f f s e t   o f   t h e   n o n - z e r o   t a p   v a l u e s .   * /  
     u i n t 3 2 _ t   d e l a y S i z e   =   S - > m a x D e l a y   +   b l o c k S i z e ;     / *   s t a t e   l e n g t h   * /  
     u i n t 1 6 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   F i l t e r   o r d e r   * /  
     i n t 3 2 _ t   r e a d I n d e x ;                                                           / *   R e a d   i n d e x   o f   t h e   s t a t e   b u f f e r   * /  
     u i n t 3 2 _ t   t a p C n t ,   b l k C n t ;                                               / *   l o o p   c o u n t e r s   * /  
     q 1 5 _ t   c o e f f   =   * p C o e f f s + + ;                                             / *   R e a d   t h e   f i r s t   c o e f f i c i e n t   v a l u e   * /  
     q 3 1 _ t   * p S c r 2   =   p S c r a t c h O u t ;                                         / *   W o r k i n g   p o i n t e r   f o r   p S c r a t c h O u t   * /  
  
     / *   B l o c k S i z e   o f   I n p u t   s a m p l e s   a r e   c o p i e d   i n t o   t h e   s t a t e   b u f f e r   * /  
     / *   S t a t e I n d e x   p o i n t s   t o   t h e   s t a r t i n g   p o s i t i o n   t o   w r i t e   i n   t h e   s t a t e   b u f f e r   * /  
     a r m _ c i r c u l a r W r i t e _ q 1 5 ( p y ,   d e l a y S i z e ,   & S - > s t a t e I n d e x ,   1 ,   p I n ,   1 ,   b l o c k S i z e ) ;  
  
     / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .   * /  
     t a p C n t   =   n u m T a p s ;  
  
     / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
     r e a d I n d e x   =   ( S - > s t a t e I n d e x   -   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
     / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
     i f   ( r e a d I n d e x   <   0 )  
     {  
         r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
     }  
  
     / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
     p y   =   p S t a t e ;  
  
     / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
     a r m _ c i r c u l a r R e a d _ q 1 5 ( p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
                                               p b ,   p b ,   b l o c k S i z e ,   1 ,   b l o c k S i z e ) ;  
  
     / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   o f   s t a t e   v a l u e s   * /  
     p x   =   p b ;  
  
     / *   W o r k i n g   p o i n t e r   f o r   s c r a t c h   b u f f e r   o f   o u t p u t   v a l u e s   * /  
     p S c r a t c h O u t   =   p S c r 2 ;  
  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   P e r f o r m   m u l t i p l i c a t i o n   a n d   s t o r e   i n   t h e   s c r a t c h   b u f f e r   * /  
         * p S c r a t c h O u t + +   =   ( ( q 3 1 _ t )   *   p x + +   *   c o e f f ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .   * /  
     t a p C n t   =   ( u i n t 3 2 _ t )   n u m T a p s   -   1 U ;  
  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         / *   L o a d   t h e   c o e f f i c i e n t   v a l u e   a n d                        
           *   i n c r e m e n t   t h e   c o e f f i c i e n t   b u f f e r   f o r   t h e   n e x t   s e t   o f   s t a t e   v a l u e s   * /  
         c o e f f   =   * p C o e f f s + + ;  
  
         / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
         r e a d I n d e x   =   ( S - > s t a t e I n d e x   -   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
         / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
         i f   ( r e a d I n d e x   <   0 )  
         {  
             r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
         }  
  
         / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
         p y   =   p S t a t e ;  
  
         / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
         a r m _ c i r c u l a r R e a d _ q 1 5 ( p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
                                                   p b ,   p b ,   b l o c k S i z e ,   1 ,   b l o c k S i z e ) ;  
  
         / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   o f   s t a t e   v a l u e s   * /  
         p x   =   p b ;  
  
         / *   W o r k i n g   p o i n t e r   f o r   s c r a t c h   b u f f e r   o f   o u t p u t   v a l u e s   * /  
         p S c r a t c h O u t   =   p S c r 2 ;  
  
         b l k C n t   =   b l o c k S i z e ;  
  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
             * p S c r a t c h O u t + +   + =   ( q 3 1 _ t )   *   p x + +   *   c o e f f ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
  
         / *   D e c r e m e n t   t h e   t a p   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
     / *   A l l   t h e   o u t p u t   v a l u e s   a r e   i n   p S c r a t c h O u t   b u f f e r .                
           C o n v e r t   t h e m   i n t o   1 . 1 5   f o r m a t ,   s a t u r a t e   a n d   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
     / *   L o o p   o v e r   t h e   b l o c k S i z e .   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         * p O u t + +   =   ( q 1 5 _ t )   _ _ S S A T ( * p S c r 2 + +   > >   1 5 ,   1 6 ) ;  
         b l k C n t - - ;  
     }  
 }  
  
 v o i d   r e f _ f i r _ s p a r s e _ q 7 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 7   *   S ,  
     q 7 _ t   * p S r c ,  
     q 7 _ t   * p D s t ,  
     q 7 _ t   * p S c r a t c h I n ,  
     q 3 1 _ t   *   p S c r a t c h O u t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 7 _ t   * p S t a t e   =   S - > p S t a t e ;                                             / *   S t a t e   p o i n t e r   * /  
     q 7 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                         / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 7 _ t   * p x ;                                                                             / *   S c r a t c h   b u f f e r   p o i n t e r   * /  
     q 7 _ t   * p y   =   p S t a t e ;                                                           / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   b u f f e r   * /  
     q 7 _ t   * p b   =   p S c r a t c h I n ;                                                   / *   T e m p o r a r y   p o i n t e r s   f o r   s c r a t c h   b u f f e r   * /  
     q 7 _ t   * p O u t   =   p D s t ;                                                           / *   D e s t i n a t i o n   p o i n t e r   * /  
     i n t 3 2 _ t   * p T a p D e l a y   =   S - > p T a p D e l a y ;                           / *   P o i n t e r   t o   t h e   a r r a y   c o n t a i n i n g   o f f s e t   o f   t h e   n o n - z e r o   t a p   v a l u e s .   * /  
     u i n t 3 2 _ t   d e l a y S i z e   =   S - > m a x D e l a y   +   b l o c k S i z e ;     / *   s t a t e   l e n g t h   * /  
     u i n t 1 6 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   F i l t e r   o r d e r   * /  
     i n t 3 2 _ t   r e a d I n d e x ;                                                           / *   R e a d   i n d e x   o f   t h e   s t a t e   b u f f e r   * /  
     u i n t 3 2 _ t   t a p C n t ,   b l k C n t ;                                               / *   l o o p   c o u n t e r s   * /  
     q 7 _ t   c o e f f   =   * p C o e f f s + + ;                                               / *   R e a d   t h e   c o e f f i c i e n t   v a l u e   * /  
     q 3 1 _ t   * p S c r 2   =   p S c r a t c h O u t ;                                         / *   W o r k i n g   p o i n t e r   f o r   s c r a t c h   b u f f e r   o f   o u t p u t   v a l u e s   * /  
     q 3 1 _ t   i n ;  
  
     / *   B l o c k S i z e   o f   I n p u t   s a m p l e s   a r e   c o p i e d   i n t o   t h e   s t a t e   b u f f e r   * /  
     / *   S t a t e I n d e x   p o i n t s   t o   t h e   s t a r t i n g   p o s i t i o n   t o   w r i t e   i n   t h e   s t a t e   b u f f e r   * /  
     a r m _ c i r c u l a r W r i t e _ q 7 ( p y ,   ( i n t 3 2 _ t )   d e l a y S i z e ,   & S - > s t a t e I n d e x ,   1 ,   p S r c ,   1 ,  
                                               b l o c k S i z e ) ;  
  
     / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .   * /  
     t a p C n t   =   n u m T a p s ;  
  
     / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
     r e a d I n d e x   =   ( ( i n t 3 2 _ t )   S - > s t a t e I n d e x   -   ( i n t 3 2 _ t )   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
     / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
     i f   ( r e a d I n d e x   <   0 )  
     {  
         r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
     }  
  
     / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
     p y   =   p S t a t e ;  
  
     / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
     a r m _ c i r c u l a r R e a d _ q 7 ( p y ,   ( i n t 3 2 _ t )   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,   p b ,   p b ,  
                                             ( i n t 3 2 _ t )   b l o c k S i z e ,   1 ,   b l o c k S i z e ) ;  
  
     / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   o f   s t a t e   v a l u e s   * /  
     p x   =   p b ;  
  
     / *   W o r k i n g   p o i n t e r   f o r   s c r a t c h   b u f f e r   o f   o u t p u t   v a l u e s   * /  
     p S c r a t c h O u t   =   p S c r 2 ;  
  
     / *   L o o p   o v e r   t h e   b l o c k S i z e   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   P e r f o r m   m u l t i p l i c a t i o n   a n d   s t o r e   i n   t h e   s c r a t c h   b u f f e r   * /  
         * p S c r a t c h O u t + +   =   ( ( q 3 1 _ t )   *   p x + +   *   c o e f f ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .   * /  
     t a p C n t   =   ( u i n t 3 2 _ t )   n u m T a p s   -   1 U ;  
  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         / *   L o a d   t h e   c o e f f i c i e n t   v a l u e   a n d                        
           *   i n c r e m e n t   t h e   c o e f f i c i e n t   b u f f e r   f o r   t h e   n e x t   s e t   o f   s t a t e   v a l u e s   * /  
         c o e f f   =   * p C o e f f s + + ;  
  
         / *   R e a d   I n d e x ,   f r o m   w h e r e   t h e   s t a t e   b u f f e r   s h o u l d   b e   r e a d ,   i s   c a l c u l a t e d .   * /  
         r e a d I n d e x   =   ( ( i n t 3 2 _ t )   S - > s t a t e I n d e x   -   ( i n t 3 2 _ t )   b l o c k S i z e )   -   * p T a p D e l a y + + ;  
  
         / *   W r a p a r o u n d   o f   r e a d I n d e x   * /  
         i f   ( r e a d I n d e x   <   0 )  
         {  
             r e a d I n d e x   + =   ( i n t 3 2 _ t )   d e l a y S i z e ;  
         }  
  
         / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
         p y   =   p S t a t e ;  
  
         / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
         a r m _ c i r c u l a r R e a d _ q 7 ( p y ,   ( i n t 3 2 _ t )   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,   p b ,   p b ,  
                                                 ( i n t 3 2 _ t )   b l o c k S i z e ,   1 ,   b l o c k S i z e ) ;  
  
         / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   o f   s t a t e   v a l u e s   * /  
         p x   =   p b ;  
  
         / *   W o r k i n g   p o i n t e r   f o r   s c r a t c h   b u f f e r   o f   o u t p u t   v a l u e s   * /  
         p S c r a t c h O u t   =   p S c r 2 ;  
  
         / *   L o o p   o v e r   t h e   b l o c k S i z e   * /  
         b l k C n t   =   b l o c k S i z e ;  
  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
             i n   =   * p S c r a t c h O u t   +   ( ( q 3 1 _ t )   *   p x + +   *   c o e f f ) ;  
             * p S c r a t c h O u t + +   =   i n ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
  
         / *   D e c r e m e n t   t h e   t a p   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
     / *   A l l   t h e   o u t p u t   v a l u e s   a r e   i n   p S c r a t c h O u t   b u f f e r .                
           C o n v e r t   t h e m   i n t o   1 . 1 5   f o r m a t ,   s a t u r a t e   a n d   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
     / *   L o o p   o v e r   t h e   b l o c k S i z e .   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         * p O u t + +   =   ( q 7 _ t )   _ _ S S A T ( * p S c r 2 + +   > >   7 ,   8 ) ;  
  
         / *   D e c r e m e n t   t h e   b l o c k S i z e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
 }  