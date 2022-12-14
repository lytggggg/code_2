??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ f i r _ d e c i m a t e _ f a s t _ q 1 5 . c  
   *   D e s c r i p t i o n :     F a s t   Q 1 5   F I R   D e c i m a t o r  
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
   *   @ i n g r o u p   g r o u p F i l t e r s  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   F I R _ d e c i m a t e  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 1 5   F I R   d e c i m a t o r   ( f a s t   v a r i a n t )   f o r   C o r t e x - M 3   a n d   C o r t e x - M 4 .  
   *   @ p a r a m [ i n ]   * S   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   F I R   d e c i m a t o r   s t r u c t u r e .  
   *   @ p a r a m [ i n ]   * p S r c   p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
   *   @ p a r a m [ o u t ]   * p D s t   p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
   *   @ p a r a m [ i n ]   b l o c k S i z e   n u m b e r   o f   i n p u t   s a m p l e s   t o   p r o c e s s   p e r   c a l l .  
   *   @ r e t u r n   n o n e  
   *  
   *   \ p a r   R e s t r i c t i o n s  
   *     I f   t h e   s i l i c o n   d o e s   n o t   s u p p o r t   u n a l i g n e d   m e m o r y   a c c e s s   e n a b l e   t h e   m a c r o   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
   * 	 I n   t h i s   c a s e   i n p u t ,   o u t p u t ,   s t a t e   b u f f e r s   s h o u l d   b e   a l i g n e d   b y   3 2 - b i t  
   *  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *   \ p a r  
   *   T h i s   f a s t   v e r s i o n   u s e s   a   3 2 - b i t   a c c u m u l a t o r   w i t h   2 . 3 0   f o r m a t .  
   *   T h e   a c c u m u l a t o r   m a i n t a i n s   f u l l   p r e c i s i o n   o f   t h e   i n t e r m e d i a t e   m u l t i p l i c a t i o n   r e s u l t s   b u t   p r o v i d e s   o n l y   a   s i n g l e   g u a r d   b i t .  
   *   T h u s ,   i f   t h e   a c c u m u l a t o r   r e s u l t   o v e r f l o w s   i t   w r a p s   a r o u n d   a n d   d i s t o r t s   t h e   r e s u l t .  
   *   I n   o r d e r   t o   a v o i d   o v e r f l o w s   c o m p l e t e l y   t h e   i n p u t   s i g n a l   m u s t   b e   s c a l e d   d o w n   b y   l o g 2 ( n u m T a p s )   b i t s   ( l o g 2   i s   r e a d   a s   l o g   t o   t h e   b a s e   2 ) .  
   *   T h e   2 . 3 0   a c c u m u l a t o r   i s   t h e n   t r u n c a t e d   t o   2 . 1 5   f o r m a t   a n d   s a t u r a t e d   t o   y i e l d   t h e   1 . 1 5   r e s u l t .  
   *  
   *   \ p a r  
   *   R e f e r   t o   t h e   f u n c t i o n   < c o d e > a r m _ f i r _ d e c i m a t e _ q 1 5 ( ) < / c o d e >   f o r   a   s l o w e r   i m p l e m e n t a t i o n   o f   t h i s   f u n c t i o n   w h i c h   u s e s   6 4 - b i t   a c c u m u l a t i o n   t o   a v o i d   w r a p   a r o u n d   d i s t o r t i o n .  
   *   B o t h   t h e   s l o w   a n d   t h e   f a s t   v e r s i o n s   u s e   t h e   s a m e   i n s t a n c e   s t r u c t u r e .  
   *   U s e   t h e   f u n c t i o n   < c o d e > a r m _ f i r _ d e c i m a t e _ i n i t _ q 1 5 ( ) < / c o d e >   t o   i n i t i a l i z e   t h e   f i l t e r   s t r u c t u r e .  
   * /  
  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
  
 v o i d   a r m _ f i r _ d e c i m a t e _ f a s t _ q 1 5 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 1 5 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 1 5 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 1 5 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     q 1 5 _ t   * p x ;                                                                           / *   T e m p o r a r y   p o i n t e r   f o r   s t a t e   b u f f e r   * /  
     q 1 5 _ t   * p b ;                                                                           / *   T e m p o r a r y   p o i n t e r   c o e f f i c i e n t   b u f f e r   * /  
     q 3 1 _ t   x 0 ,   x 1 ,   c 0 ,   c 1 ;                                                     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
     q 3 1 _ t   s u m 0 ;                                                                         / *   A c c u m u l a t o r s   * /  
     q 3 1 _ t   a c c 0 ,   a c c 1 ;  
     q 1 5 _ t   * p x 0 ,   * p x 1 ;  
     u i n t 3 2 _ t   b l k C n t N 3 ;  
     u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   t a p s   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ,   t a p C n t ,   o u t B l o c k S i z e   =   b l o c k S i z e   /   S - > M ;     / *   L o o p   c o u n t e r s   * /  
  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   ( n u m T a p s   -   1 U ) ;  
  
  
     / *   T o t a l   n u m b e r   o f   o u t p u t   s a m p l e s   t o   b e   c o m p u t e d   * /  
     b l k C n t   =   o u t B l o c k S i z e   /   2 ;  
     b l k C n t N 3   =   o u t B l o c k S i z e   -   ( 2   *   b l k C n t ) ;  
  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   d e c i m a t i o n   f a c t o r   n u m b e r   o f   n e w   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r   * /  
         i   =   2   *   S - > M ;  
  
         d o  
         {  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         }   w h i l e   ( - - i ) ;  
  
         / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
         a c c 0   =   0 ;  
         a c c 1   =   0 ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x 0   =   p S t a t e ;  
  
         p x 1   =   p S t a t e   +   S - > M ;  
  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p b   =   p C o e f f s ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   n u m T a p s   > >   2 ;  
  
         / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .     U n r o l l   b y   a   f a c t o r   o f   4 .  
           * *   R e p e a t   u n t i l   w e ' v e   c o m p u t e d   n u m T a p s - 4   c o e f f i c i e n t s .   * /  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   R e a d   t h e   R e a d   b [ n u m T a p s - 1 ]   a n d   b [ n u m T a p s - 2 ]     c o e f f i c i e n t s   * /  
             c 0   =   * _ _ S I M D 3 2 ( p b ) + + ;  
  
             / *   R e a d   x [ n - n u m T a p s - 1 ]   a n d   x [ n - n u m T a p s - 2 ] s a m p l e   * /  
             x 0   =   * _ _ S I M D 3 2 ( p x 0 ) + + ;  
  
             x 1   =   * _ _ S I M D 3 2 ( p x 1 ) + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             a c c 0   =   _ _ S M L A D ( x 0 ,   c 0 ,   a c c 0 ) ;  
  
             a c c 1   =   _ _ S M L A D ( x 1 ,   c 0 ,   a c c 1 ) ;  
  
             / *   R e a d   t h e   b [ n u m T a p s - 3 ]   a n d   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
             c 0   =   * _ _ S I M D 3 2 ( p b ) + + ;  
  
             / *   R e a d   x [ n - n u m T a p s - 2 ]   a n d   x [ n - n u m T a p s - 3 ]   s a m p l e   * /  
             x 0   =   * _ _ S I M D 3 2 ( p x 0 ) + + ;  
  
             x 1   =   * _ _ S I M D 3 2 ( p x 1 ) + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             a c c 0   =   _ _ S M L A D ( x 0 ,   c 0 ,   a c c 0 ) ;  
  
             a c c 1   =   _ _ S M L A D ( x 1 ,   c 0 ,   a c c 1 ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
         t a p C n t   =   n u m T a p s   %   0 x 4 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   R e a d   c o e f f i c i e n t s   * /  
             c 0   =   * p b + + ;  
  
             / *   F e t c h   1   s t a t e   v a r i a b l e   * /  
             x 0   =   * p x 0 + + ;  
  
             x 1   =   * p x 1 + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             a c c 0   =   _ _ S M L A D ( x 0 ,   c 0 ,   a c c 0 ) ;  
             a c c 1   =   _ _ S M L A D ( x 1 ,   c 0 ,   a c c 1 ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   t h e   d e c i m a t i o n   f a c t o r  
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   d e c i m a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   S - > M   *   2 ;  
  
         / *   S t o r e   f i l t e r   o u t p u t ,   s m l a d   r e t u r n s   t h e   v a l u e s   i n   2 . 1 4   f o r m a t   * /  
         / *   s o   d o w n s a c l e   b y   1 5   t o   g e t   o u t p u t   i n   1 . 1 5   * /  
         * p D s t + +   =   ( q 1 5 _ t )   ( _ _ S S A T ( ( a c c 0   > >   1 5 ) ,   1 6 ) ) ;  
         * p D s t + +   =   ( q 1 5 _ t )   ( _ _ S S A T ( ( a c c 1   > >   1 5 ) ,   1 6 ) ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
  
  
     w h i l e   ( b l k C n t N 3   >   0 U )  
     {  
         / *   C o p y   d e c i m a t i o n   f a c t o r   n u m b e r   o f   n e w   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r   * /  
         i   =   S - > M ;  
  
         d o  
         {  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         }   w h i l e   ( - - i ) ;  
  
         / * S e t   s u m   t o   z e r o   * /  
         s u m 0   =   0 ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p b   =   p C o e f f s ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   n u m T a p s   > >   2 ;  
  
         / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .     U n r o l l   b y   a   f a c t o r   o f   4 .  
           * *   R e p e a t   u n t i l   w e ' v e   c o m p u t e d   n u m T a p s - 4   c o e f f i c i e n t s .   * /  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   R e a d   t h e   R e a d   b [ n u m T a p s - 1 ]   a n d   b [ n u m T a p s - 2 ]     c o e f f i c i e n t s   * /  
             c 0   =   * _ _ S I M D 3 2 ( p b ) + + ;  
  
             / *   R e a d   x [ n - n u m T a p s - 1 ]   a n d   x [ n - n u m T a p s - 2 ] s a m p l e   * /  
             x 0   =   * _ _ S I M D 3 2 ( p x ) + + ;  
  
             / *   R e a d   t h e   b [ n u m T a p s - 3 ]   a n d   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
             c 1   =   * _ _ S I M D 3 2 ( p b ) + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m 0   =   _ _ S M L A D ( x 0 ,   c 0 ,   s u m 0 ) ;  
  
             / *   R e a d   x [ n - n u m T a p s - 2 ]   a n d   x [ n - n u m T a p s - 3 ]   s a m p l e   * /  
             x 0   =   * _ _ S I M D 3 2 ( p x ) + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m 0   =   _ _ S M L A D ( x 0 ,   c 1 ,   s u m 0 ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
         t a p C n t   =   n u m T a p s   %   0 x 4 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   R e a d   c o e f f i c i e n t s   * /  
             c 0   =   * p b + + ;  
  
             / *   F e t c h   1   s t a t e   v a r i a b l e   * /  
             x 0   =   * p x + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m 0   =   _ _ S M L A D ( x 0 ,   c 0 ,   s u m 0 ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   t h e   d e c i m a t i o n   f a c t o r  
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   d e c i m a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   S - > M ;  
  
         / *   S t o r e   f i l t e r   o u t p u t ,   s m l a d   r e t u r n s   t h e   v a l u e s   i n   2 . 1 4   f o r m a t   * /  
         / *   s o   d o w n s a c l e   b y   1 5   t o   g e t   o u t p u t   i n   1 . 1 5   * /  
         * p D s t + +   =   ( q 1 5 _ t )   ( _ _ S S A T ( ( s u m 0   > >   1 5 ) ,   1 6 ) ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t N 3 - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .  
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s a t r t   o f   t h e   s t a t e   b u f f e r .  
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     i   =   ( n u m T a p s   -   1 U )   > >   2 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( i   >   0 U )  
     {  
         * _ _ S I M D 3 2 ( p S t a t e C u r n t ) + +   =   * _ _ S I M D 3 2 ( p S t a t e ) + + ;  
         * _ _ S I M D 3 2 ( p S t a t e C u r n t ) + +   =   * _ _ S I M D 3 2 ( p S t a t e ) + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }  
  
     i   =   ( n u m T a p s   -   1 U )   %   0 x 0 4 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( i   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }  
 }  
  
 # e l s e  
  
  
 v o i d   a r m _ f i r _ d e c i m a t e _ f a s t _ q 1 5 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 1 5 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 1 5 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 1 5 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     q 1 5 _ t   * p x ;                                                                           / *   T e m p o r a r y   p o i n t e r   f o r   s t a t e   b u f f e r   * /  
     q 1 5 _ t   * p b ;                                                                           / *   T e m p o r a r y   p o i n t e r   c o e f f i c i e n t   b u f f e r   * /  
     q 1 5 _ t   x 0 ,   x 1 ,   c 0 ;                                                             / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
     q 3 1 _ t   s u m 0 ;                                                                         / *   A c c u m u l a t o r s   * /  
     q 3 1 _ t   a c c 0 ,   a c c 1 ;  
     q 1 5 _ t   * p x 0 ,   * p x 1 ;  
     u i n t 3 2 _ t   b l k C n t N 3 ;  
     u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   t a p s   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ,   t a p C n t ,   o u t B l o c k S i z e   =   b l o c k S i z e   /   S - > M ;     / *   L o o p   c o u n t e r s   * /  
  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   ( n u m T a p s   -   1 U ) ;  
  
  
     / *   T o t a l   n u m b e r   o f   o u t p u t   s a m p l e s   t o   b e   c o m p u t e d   * /  
     b l k C n t   =   o u t B l o c k S i z e   /   2 ;  
     b l k C n t N 3   =   o u t B l o c k S i z e   -   ( 2   *   b l k C n t ) ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   d e c i m a t i o n   f a c t o r   n u m b e r   o f   n e w   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r   * /  
         i   =   2   *   S - > M ;  
  
         d o  
         {  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         }   w h i l e   ( - - i ) ;  
  
         / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
         a c c 0   =   0 ;  
         a c c 1   =   0 ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x 0   =   p S t a t e ;  
  
         p x 1   =   p S t a t e   +   S - > M ;  
  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p b   =   p C o e f f s ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   n u m T a p s   > >   2 ;  
  
         / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .     U n r o l l   b y   a   f a c t o r   o f   4 .  
           * *   R e p e a t   u n t i l   w e ' v e   c o m p u t e d   n u m T a p s - 4   c o e f f i c i e n t s .   * /  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   R e a d   t h e   R e a d   b [ n u m T a p s - 1 ]   c o e f f i c i e n t s   * /  
             c 0   =   * p b + + ;  
  
             / *   R e a d   x [ n - n u m T a p s - 1 ]   f o r   s a m p l e   0   a n d   f o r   s a m p l e   1   * /  
             x 0   =   * p x 0 + + ;  
             x 1   =   * p x 1 + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             a c c 0   + =   x 0   *   c 0 ;  
             a c c 1   + =   x 1   *   c 0 ;  
  
             / *   R e a d   t h e   b [ n u m T a p s - 2 ]   c o e f f i c i e n t   * /  
             c 0   =   * p b + + ;  
  
             / *   R e a d   x [ n - n u m T a p s - 2 ]   f o r   s a m p l e   0   a n d   s a m p l e   1   * /  
             x 0   =   * p x 0 + + ;  
             x 1   =   * p x 1 + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             a c c 0   + =   x 0   *   c 0 ;  
             a c c 1   + =   x 1   *   c 0 ;  
  
             / *   R e a d   t h e   b [ n u m T a p s - 3 ]     c o e f f i c i e n t s   * /  
             c 0   =   * p b + + ;  
  
             / *   R e a d   x [ n - n u m T a p s - 3 ]   f o r   s a m p l e   0   a n d   s a m p l e   1   * /  
             x 0   =   * p x 0 + + ;  
             x 1   =   * p x 1 + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             a c c 0   + =   x 0   *   c 0 ;  
             a c c 1   + =   x 1   *   c 0 ;  
  
             / *   R e a d   t h e   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
             c 0   =   * p b + + ;  
  
             / *   R e a d   x [ n - n u m T a p s - 4 ]   f o r   s a m p l e   0   a n d   s a m p l e   1   * /  
             x 0   =   * p x 0 + + ;  
             x 1   =   * p x 1 + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             a c c 0   + =   x 0   *   c 0 ;  
             a c c 1   + =   x 1   *   c 0 ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
         t a p C n t   =   n u m T a p s   %   0 x 4 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   R e a d   c o e f f i c i e n t s   * /  
             c 0   =   * p b + + ;  
  
             / *   F e t c h   1   s t a t e   v a r i a b l e   * /  
             x 0   =   * p x 0 + + ;  
             x 1   =   * p x 1 + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             a c c 0   + =   x 0   *   c 0 ;  
             a c c 1   + =   x 1   *   c 0 ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   t h e   d e c i m a t i o n   f a c t o r  
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   d e c i m a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   S - > M   *   2 ;  
  
         / *   S t o r e   f i l t e r   o u t p u t ,   s m l a d   r e t u r n s   t h e   v a l u e s   i n   2 . 1 4   f o r m a t   * /  
         / *   s o   d o w n s a c l e   b y   1 5   t o   g e t   o u t p u t   i n   1 . 1 5   * /  
  
         * p D s t + +   =   ( q 1 5 _ t )   ( _ _ S S A T ( ( a c c 0   > >   1 5 ) ,   1 6 ) ) ;  
         * p D s t + +   =   ( q 1 5 _ t )   ( _ _ S S A T ( ( a c c 1   > >   1 5 ) ,   1 6 ) ) ;  
  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     w h i l e   ( b l k C n t N 3   >   0 U )  
     {  
         / *   C o p y   d e c i m a t i o n   f a c t o r   n u m b e r   o f   n e w   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r   * /  
         i   =   S - > M ;  
  
         d o  
         {  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         }   w h i l e   ( - - i ) ;  
  
         / * S e t   s u m   t o   z e r o   * /  
         s u m 0   =   0 ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p b   =   p C o e f f s ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   n u m T a p s   > >   2 ;  
  
         / *   L o o p   o v e r   t h e   n u m b e r   o f   t a p s .     U n r o l l   b y   a   f a c t o r   o f   4 .  
           * *   R e p e a t   u n t i l   w e ' v e   c o m p u t e d   n u m T a p s - 4   c o e f f i c i e n t s .   * /  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   R e a d   t h e   R e a d   b [ n u m T a p s - 1 ]   c o e f f i c i e n t s   * /  
             c 0   =   * p b + + ;  
  
             / *   R e a d   x [ n - n u m T a p s - 1 ]   a n d   s a m p l e   * /  
             x 0   =   * p x + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m 0   + =   x 0   *   c 0 ;  
  
             / *   R e a d   t h e   b [ n u m T a p s - 2 ]   c o e f f i c i e n t   * /  
             c 0   =   * p b + + ;  
  
             / *   R e a d   x [ n - n u m T a p s - 2 ]   a n d     s a m p l e   * /  
             x 0   =   * p x + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m 0   + =   x 0   *   c 0 ;  
  
             / *   R e a d   t h e   b [ n u m T a p s - 3 ]     c o e f f i c i e n t s   * /  
             c 0   =   * p b + + ;  
  
             / *   R e a d   x [ n - n u m T a p s - 3 ]   s a m p l e   * /  
             x 0   =   * p x + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m 0   + =   x 0   *   c 0 ;  
  
             / *   R e a d   t h e   b [ n u m T a p s - 4 ]   c o e f f i c i e n t   * /  
             c 0   =   * p b + + ;  
  
             / *   R e a d   x [ n - n u m T a p s - 4 ]   s a m p l e   * /  
             x 0   =   * p x + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m 0   + =   x 0   *   c 0 ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
         t a p C n t   =   n u m T a p s   %   0 x 4 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   R e a d   c o e f f i c i e n t s   * /  
             c 0   =   * p b + + ;  
  
             / *   F e t c h   1   s t a t e   v a r i a b l e   * /  
             x 0   =   * p x + + ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m 0   + =   x 0   *   c 0 ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   t h e   d e c i m a t i o n   f a c t o r  
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   d e c i m a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   S - > M ;  
  
         / *   S t o r e   f i l t e r   o u t p u t ,   s m l a d   r e t u r n s   t h e   v a l u e s   i n   2 . 1 4   f o r m a t   * /  
         / *   s o   d o w n s a c l e   b y   1 5   t o   g e t   o u t p u t   i n   1 . 1 5   * /  
         * p D s t + +   =   ( q 1 5 _ t )   ( _ _ S S A T ( ( s u m 0   > >   1 5 ) ,   1 6 ) ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t N 3 - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .  
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s a t r t   o f   t h e   s t a t e   b u f f e r .  
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     i   =   ( n u m T a p s   -   1 U )   > >   2 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( i   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }  
  
     i   =   ( n u m T a p s   -   1 U )   %   0 x 0 4 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( i   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }  
 }  
  
  
 # e n d i f 	 / * 	 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E 	 * /  
  
 / * *  
   *   @ }   e n d   o f   F I R _ d e c i m a t e   g r o u p  
   * /  