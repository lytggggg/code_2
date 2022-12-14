??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ f i r _ s p a r s e _ q 1 5 . c  
   *   D e s c r i p t i o n :     Q 1 5   s p a r s e   F I R   f i l t e r   p r o c e s s i n g   f u n c t i o n  
   *  
   *   $ D a t e :                 2 7 .   J a n u a r y   2 0 1 7  
   *   $ R e v i s i o n :         V . 1 . 5 . 1  
   *  
   *   T a r g e t   P r o c e s s o r :   C o r t e x - M   c o r e s  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 / *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 7   A R M   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
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
 # i n c l u d e   " a r m _ m a t h . h "  
  
 / * *  
   *   @ a d d t o g r o u p   F I R _ S p a r s e  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 1 5   s p a r s e   F I R   f i l t e r .  
   *   @ p a r a m [ i n ]     * S                       p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   s p a r s e   F I R   s t r u c t u r e .  
   *   @ p a r a m [ i n ]     * p S r c                 p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
   *   @ p a r a m [ o u t ]   * p D s t                 p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
   *   @ p a r a m [ i n ]     * p S c r a t c h I n     p o i n t s   t o   a   t e m p o r a r y   b u f f e r   o f   s i z e   b l o c k S i z e .  
   *   @ p a r a m [ i n ]     * p S c r a t c h O u t   p o i n t s   t o   a   t e m p o r a r y   b u f f e r   o f   s i z e   b l o c k S i z e .  
   *   @ p a r a m [ i n ]     b l o c k S i z e         n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
   *   @ r e t u r n   n o n e .  
   *  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *   \ p a r  
   *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a n   i n t e r n a l   3 2 - b i t   a c c u m u l a t o r .  
   *   T h e   1 . 1 5   x   1 . 1 5   m u l t i p l i c a t i o n s   y i e l d   a   2 . 3 0   r e s u l t   a n d   t h e s e   a r e   a d d e d   t o   a   2 . 3 0   a c c u m u l a t o r .  
   *   T h u s   t h e   f u l l   p r e c i s i o n   o f   t h e   m u l t i p l i c a t i o n s   i s   m a i n t a i n e d   b u t   t h e r e   i s   o n l y   a   s i n g l e   g u a r d   b i t   i n   t h e   a c c u m u l a t o r .  
   *   I f   t h e   a c c u m u l a t o r   r e s u l t   o v e r f l o w s   i t   w i l l   w r a p   a r o u n d   r a t h e r   t h a n   s a t u r a t e .  
   *   A f t e r   a l l   m u l t i p l y - a c c u m u l a t e s   a r e   p e r f o r m e d ,   t h e   2 . 3 0   a c c u m u l a t o r   i s   t r u n c a t e d   t o   2 . 1 5   f o r m a t   a n d   t h e n   s a t u r a t e d   t o   1 . 1 5   f o r m a t .  
   *   I n   o r d e r   t o   a v o i d   o v e r f l o w s   t h e   i n p u t   s i g n a l   o r   c o e f f i c i e n t s   m u s t   b e   s c a l e d   d o w n   b y   l o g 2 ( n u m T a p s )   b i t s .  
   * /  
  
  
 v o i d   a r m _ f i r _ s p a r s e _ q 1 5 (  
     a r m _ f i r _ s p a r s e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     q 1 5 _ t   *   p S c r a t c h I n ,  
     q 3 1 _ t   *   p S c r a t c h O u t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
  
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
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     q 3 1 _ t   i n 1 ,   i n 2 ;                                                                 / *   T e m p o r a r y   v a r i a b l e s   * /  
  
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
     / *   L o o p   o v e r   t h e   b l o c k S i z e .   U n r o l l   b y   a   f a c t o r   o f   4 .  
       *   C o m p u t e   4   m u l t i p l i c a t i o n s   a t   a   t i m e .   * /  
     b l k C n t   =   b l o c k S i z e   > >   2 ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   P e r f o r m   m u l t i p l i c a t i o n   a n d   s t o r e   i n   t h e   s c r a t c h   b u f f e r   * /  
         * p S c r a t c h O u t + +   =   ( ( q 3 1 _ t )   *   p x + +   *   c o e f f ) ;  
         * p S c r a t c h O u t + +   =   ( ( q 3 1 _ t )   *   p x + +   *   c o e f f ) ;  
         * p S c r a t c h O u t + +   =   ( ( q 3 1 _ t )   *   p x + +   *   c o e f f ) ;  
         * p S c r a t c h O u t + +   =   ( ( q 3 1 _ t )   *   p x + +   *   c o e f f ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,  
       *   c o m p u t e   t h e   r e m a i n i n g   s a m p l e s   * /  
     b l k C n t   =   b l o c k S i z e   %   0 x 4 U ;  
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
     / *   L o a d   t h e   c o e f f i c i e n t   v a l u e   a n d  
       *   i n c r e m e n t   t h e   c o e f f i c i e n t   b u f f e r   f o r   t h e   n e x t   s e t   o f   s t a t e   v a l u e s   * /  
     c o e f f   =   * p C o e f f s + + ;  
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
     / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .   * /  
     t a p C n t   =   ( u i n t 3 2 _ t )   n u m T a p s   -   2 U ;  
  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
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
         / *   L o o p   o v e r   t h e   b l o c k S i z e .   U n r o l l   b y   a   f a c t o r   o f   4 .  
           *   C o m p u t e   4   M A C S   a t   a   t i m e .   * /  
         b l k C n t   =   b l o c k S i z e   > >   2 ;  
  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
             * p S c r a t c h O u t + +   + =   ( q 3 1 _ t )   *   p x + +   *   c o e f f ;  
             * p S c r a t c h O u t + +   + =   ( q 3 1 _ t )   *   p x + +   *   c o e f f ;  
             * p S c r a t c h O u t + +   + =   ( q 3 1 _ t )   *   p x + +   *   c o e f f ;  
             * p S c r a t c h O u t + +   + =   ( q 3 1 _ t )   *   p x + +   *   c o e f f ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
  
         / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,  
           *   c o m p u t e   t h e   r e m a i n i n g   s a m p l e s   * /  
         b l k C n t   =   b l o c k S i z e   %   0 x 4 U ;  
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
         / *   L o a d   t h e   c o e f f i c i e n t   v a l u e   a n d  
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
         / *   D e c r e m e n t   t h e   t a p   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
 	 / *   C o m p u t e   l a s t   t a p   w i t h o u t   t h e   f i n a l   r e a d   o f   p T a p D e l a y   * /  
  
 	 / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
 	 p y   =   p S t a t e ;  
  
 	 / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
 	 a r m _ c i r c u l a r R e a d _ q 1 5 ( p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
 	 	 	 	 	 	 	 	 	 	 	   p b ,   p b ,   b l o c k S i z e ,   1 ,   b l o c k S i z e ) ;  
  
 	 / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   o f   s t a t e   v a l u e s   * /  
 	 p x   =   p b ;  
  
 	 / *   W o r k i n g   p o i n t e r   f o r   s c r a t c h   b u f f e r   o f   o u t p u t   v a l u e s   * /  
 	 p S c r a t c h O u t   =   p S c r 2 ;  
  
 	 / *   L o o p   o v e r   t h e   b l o c k S i z e .   U n r o l l   b y   a   f a c t o r   o f   4 .  
 	   *   C o m p u t e   4   M A C S   a t   a   t i m e .   * /  
 	 b l k C n t   =   b l o c k S i z e   > >   2 ;  
  
 	 w h i l e   ( b l k C n t   >   0 U )  
 	 {  
 	 	 / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
 	 	 * p S c r a t c h O u t + +   + =   ( q 3 1 _ t )   *   p x + +   *   c o e f f ;  
 	 	 * p S c r a t c h O u t + +   + =   ( q 3 1 _ t )   *   p x + +   *   c o e f f ;  
 	 	 * p S c r a t c h O u t + +   + =   ( q 3 1 _ t )   *   p x + +   *   c o e f f ;  
 	 	 * p S c r a t c h O u t + +   + =   ( q 3 1 _ t )   *   p x + +   *   c o e f f ;  
  
 	 	 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
 	 	 b l k C n t - - ;  
 	 }  
  
 	 / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,  
 	   *   c o m p u t e   t h e   r e m a i n i n g   s a m p l e s   * /  
 	 b l k C n t   =   b l o c k S i z e   %   0 x 4 U ;  
  
 	 w h i l e   ( b l k C n t   >   0 U )  
 	 {  
 	 	 / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
 	 	 * p S c r a t c h O u t + +   + =   ( q 3 1 _ t )   *   p x + +   *   c o e f f ;  
  
 	 	 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
 	 	 b l k C n t - - ;  
 	 }  
  
     / *   A l l   t h e   o u t p u t   v a l u e s   a r e   i n   p S c r a t c h O u t   b u f f e r .  
           C o n v e r t   t h e m   i n t o   1 . 1 5   f o r m a t ,   s a t u r a t e   a n d   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
     / *   L o o p   o v e r   t h e   b l o c k S i z e .   * /  
     b l k C n t   =   b l o c k S i z e   > >   2 ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         i n 1   =   * p S c r 2 + + ;  
         i n 2   =   * p S c r 2 + + ;  
  
 # i f n d e f     A R M _ M A T H _ B I G _ E N D I A N  
  
         * _ _ S I M D 3 2 ( p O u t ) + +   =  
             _ _ P K H B T ( ( q 1 5 _ t )   _ _ S S A T ( i n 1   > >   1 5 ,   1 6 ) ,   ( q 1 5 _ t )   _ _ S S A T ( i n 2   > >   1 5 ,   1 6 ) ,  
                             1 6 ) ;  
  
 # e l s e  
         * _ _ S I M D 3 2 ( p O u t ) + +   =  
             _ _ P K H B T ( ( q 1 5 _ t )   _ _ S S A T ( i n 2   > >   1 5 ,   1 6 ) ,   ( q 1 5 _ t )   _ _ S S A T ( i n 1   > >   1 5 ,   1 6 ) ,  
                             1 6 ) ;  
  
 # e n d i f   / *             # i f n d e f     A R M _ M A T H _ B I G _ E N D I A N         * /  
  
         i n 1   =   * p S c r 2 + + ;  
  
         i n 2   =   * p S c r 2 + + ;  
  
 # i f n d e f     A R M _ M A T H _ B I G _ E N D I A N  
  
         * _ _ S I M D 3 2 ( p O u t ) + +   =  
             _ _ P K H B T ( ( q 1 5 _ t )   _ _ S S A T ( i n 1   > >   1 5 ,   1 6 ) ,   ( q 1 5 _ t )   _ _ S S A T ( i n 2   > >   1 5 ,   1 6 ) ,  
                             1 6 ) ;  
  
 # e l s e  
  
         * _ _ S I M D 3 2 ( p O u t ) + +   =  
             _ _ P K H B T ( ( q 1 5 _ t )   _ _ S S A T ( i n 2   > >   1 5 ,   1 6 ) ,   ( q 1 5 _ t )   _ _ S S A T ( i n 1   > >   1 5 ,   1 6 ) ,  
                             1 6 ) ;  
  
 # e n d i f   / *             # i f n d e f     A R M _ M A T H _ B I G _ E N D I A N         * /  
  
  
         b l k C n t - - ;  
  
     }  
  
     / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,  
           r e m a i n i n g   s a m p l e s   a r e   p r o c e s s e d   i n   t h e   b e l o w   l o o p   * /  
     b l k C n t   =   b l o c k S i z e   %   0 x 4 U ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         * p O u t + +   =   ( q 1 5 _ t )   _ _ S S A T ( * p S c r 2 + +   > >   1 5 ,   1 6 ) ;  
         b l k C n t - - ;  
     }  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
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
     / *   L o a d   t h e   c o e f f i c i e n t   v a l u e   a n d  
       *   i n c r e m e n t   t h e   c o e f f i c i e n t   b u f f e r   f o r   t h e   n e x t   s e t   o f   s t a t e   v a l u e s   * /  
     c o e f f   =   * p C o e f f s + + ;  
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
     / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .   * /  
     t a p C n t   =   ( u i n t 3 2 _ t )   n u m T a p s   -   2 U ;  
  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
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
         / *   L o a d   t h e   c o e f f i c i e n t   v a l u e   a n d  
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
         / *   D e c r e m e n t   t h e   t a p   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
 	 / *   C o m p u t e   l a s t   t a p   w i t h o u t   t h e   f i n a l   r e a d   o f   p T a p D e l a y   * /  
  
 	 / *   W o r k i n g   p o i n t e r   f o r   s t a t e   b u f f e r   i s   u p d a t e d   * /  
 	 p y   =   p S t a t e ;  
  
 	 / *   b l o c k S i z e   s a m p l e s   a r e   r e a d   f r o m   t h e   s t a t e   b u f f e r   * /  
 	 a r m _ c i r c u l a r R e a d _ q 1 5 ( p y ,   d e l a y S i z e ,   & r e a d I n d e x ,   1 ,  
 	 	 	 	 	 	 	 	 	 	 	   p b ,   p b ,   b l o c k S i z e ,   1 ,   b l o c k S i z e ) ;  
  
 	 / *   W o r k i n g   p o i n t e r   f o r   t h e   s c r a t c h   b u f f e r   o f   s t a t e   v a l u e s   * /  
 	 p x   =   p b ;  
  
 	 / *   W o r k i n g   p o i n t e r   f o r   s c r a t c h   b u f f e r   o f   o u t p u t   v a l u e s   * /  
 	 p S c r a t c h O u t   =   p S c r 2 ;  
  
 	 b l k C n t   =   b l o c k S i z e ;  
  
 	 w h i l e   ( b l k C n t   >   0 U )  
 	 {  
 	 	 / *   P e r f o r m   M u l t i p l y - A c c u m u l a t e   * /  
 	 	 * p S c r a t c h O u t + +   + =   ( q 3 1 _ t )   *   p x + +   *   c o e f f ;  
  
 	 	 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
 	 	 b l k C n t - - ;  
 	 }  
  
     / *   A l l   t h e   o u t p u t   v a l u e s   a r e   i n   p S c r a t c h O u t   b u f f e r .  
           C o n v e r t   t h e m   i n t o   1 . 1 5   f o r m a t ,   s a t u r a t e   a n d   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
     / *   L o o p   o v e r   t h e   b l o c k S i z e .   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         * p O u t + +   =   ( q 1 5 _ t )   _ _ S S A T ( * p S c r 2 + +   > >   1 5 ,   1 6 ) ;  
         b l k C n t - - ;  
     }  
  
 # e n d i f   / *       # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   F I R _ S p a r s e   g r o u p  
   * /  