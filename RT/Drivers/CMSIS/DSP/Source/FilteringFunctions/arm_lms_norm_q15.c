??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ l m s _ n o r m _ q 1 5 . c  
   *   D e s c r i p t i o n :     Q 1 5   N L M S   f i l t e r  
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
   *   @ a d d t o g r o u p   L M S _ N O R M  
   *   @ {  
   * /  
  
 / * *  
 *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   Q 1 5   n o r m a l i z e d   L M S   f i l t e r .  
 *   @ p a r a m [ i n ]   * S   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   n o r m a l i z e d   L M S   f i l t e r   s t r u c t u r e .  
 *   @ p a r a m [ i n ]   * p S r c   p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
 *   @ p a r a m [ i n ]   * p R e f   p o i n t s   t o   t h e   b l o c k   o f   r e f e r e n c e   d a t a .  
 *   @ p a r a m [ o u t ]   * p O u t   p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
 *   @ p a r a m [ o u t ]   * p E r r   p o i n t s   t o   t h e   b l o c k   o f   e r r o r   d a t a .  
 *   @ p a r a m [ i n ]   b l o c k S i z e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
 *   @ r e t u r n   n o n e .  
 *  
 *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
 *   \ p a r  
 *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a   6 4 - b i t   i n t e r n a l   a c c u m u l a t o r .  
 *   B o t h   c o e f f i c i e n t s   a n d   s t a t e   v a r i a b l e s   a r e   r e p r e s e n t e d   i n   1 . 1 5   f o r m a t   a n d  
 *   m u l t i p l i c a t i o n s   y i e l d   a   2 . 3 0   r e s u l t .   T h e   2 . 3 0   i n t e r m e d i a t e   r e s u l t s   a r e  
 *   a c c u m u l a t e d   i n   a   6 4 - b i t   a c c u m u l a t o r   i n   3 4 . 3 0   f o r m a t .  
 *   T h e r e   i s   n o   r i s k   o f   i n t e r n a l   o v e r f l o w   w i t h   t h i s   a p p r o a c h   a n d   t h e   f u l l  
 *   p r e c i s i o n   o f   i n t e r m e d i a t e   m u l t i p l i c a t i o n s   i s   p r e s e r v e d .   A f t e r   a l l   a d d i t i o n s  
 *   h a v e   b e e n   p e r f o r m e d ,   t h e   a c c u m u l a t o r   i s   t r u n c a t e d   t o   3 4 . 1 5   f o r m a t   b y  
 *   d i s c a r d i n g   l o w   1 5   b i t s .   L a s t l y ,   t h e   a c c u m u l a t o r   i s   s a t u r a t e d   t o   y i e l d   a  
 *   r e s u l t   i n   1 . 1 5   f o r m a t .  
 *  
 *   \ p a r  
 *   	 I n   t h i s   f i l t e r ,   f i l t e r   c o e f f i c i e n t s   a r e   u p d a t e d   f o r   e a c h   s a m p l e   a n d   t h e   u p d a t i o n   o f   f i l t e r   c o f f i c i e n t s   a r e   s a t u r t e d .  
 *  
   * /  
  
 v o i d   a r m _ l m s _ n o r m _ q 1 5 (  
     a r m _ l m s _ n o r m _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p R e f ,  
     q 1 5 _ t   *   p O u t ,  
     q 1 5 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 1 5 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 1 5 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 1 5 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     q 1 5 _ t   * p x ,   * p b ;                                                                 / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f f i c i e n t   b u f f e r s   * /  
     q 1 5 _ t   m u   =   S - > m u ;                                                             / *   A d a p t i v e   f a c t o r   * /  
     u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
     u i n t 3 2 _ t   t a p C n t ,   b l k C n t ;                                               / *   L o o p   c o u n t e r s   * /  
     q 3 1 _ t   e n e r g y ;                                                                     / *   E n e r g y   o f   t h e   i n p u t   * /  
     q 6 3 _ t   a c c ;                                                                           / *   A c c u m u l a t o r   * /  
     q 1 5 _ t   e   =   0 ,   d   =   0 ;                                                         / *   e r r o r ,   r e f e r e n c e   d a t a   s a m p l e   * /  
     q 1 5 _ t   w   =   0 ,   i n ;                                                               / *   w e i g h t   f a c t o r   a n d   s t a t e   * /  
     q 1 5 _ t   x 0 ;                                                                             / *   t e m p o r a r y   v a r i a b l e   t o   h o l d   i n p u t   s a m p l e   * /  
     / / u i n t 3 2 _ t   s h i f t   =   ( u i n t 3 2 _ t )   S - > p o s t S h i f t   +   1 U ;   / *   S h i f t   t o   b e   a p p l i e d   t o   t h e   o u t p u t   * /  
     q 1 5 _ t   e r r o r X m u ,   o n e B y E n e r g y ;                                       / *   T e m p o r a r y   v a r i a b l e s   t o   s t o r e   e r r o r   a n d   m u   p r o d u c t   a n d   r e c i p r o c a l   o f   e n e r g y   * /  
     q 1 5 _ t   p o s t S h i f t ;                                                               / *   P o s t   s h i f t   t o   b e   a p p l i e d   t o   w e i g h t   a f t e r   r e c i p r o c a l   c a l c u l a t i o n   * /  
     q 3 1 _ t   c o e f ;                                                                         / *   T e p o r a r y   v a r i a b l e   f o r   c o e f f i c i e n t   * /  
     q 3 1 _ t   a c c _ l ,   a c c _ h ;  
     i n t 3 2 _ t   l S h i f t   =   ( 1 5   -   ( i n t 3 2 _ t )   S - > p o s t S h i f t ) ;               / *     P o s t   s h i f t     * /  
     i n t 3 2 _ t   u S h i f t   =   ( 3 2   -   l S h i f t ) ;  
  
     e n e r g y   =   S - > e n e r g y ;  
     x 0   =   S - > x 0 ;  
  
     / *   S - > p S t a t e   p o i n t s   t o   b u f f e r   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
     / *   L o o p   o v e r   b l o c k S i z e   n u m b e r   o f   v a l u e s   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   t h e   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c ;  
  
         / *   I n i t i a l i z e   p S t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p b   =   ( p C o e f f s ) ;  
  
         / *   R e a d   t h e   s a m p l e   f r o m   i n p u t   b u f f e r   * /  
         i n   =   * p S r c + + ;  
  
         / *   U p d a t e   t h e   e n e r g y   c a l c u l a t i o n   * /  
         e n e r g y   - =   ( ( ( q 3 1 _ t )   x 0   *   ( x 0 ) )   > >   1 5 ) ;  
         e n e r g y   + =   ( ( ( q 3 1 _ t )   i n   *   ( i n ) )   > >   1 5 ) ;  
  
         / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
         a c c   =   0 ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   n u m T a p s   > >   2 ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
  
             a c c   =   _ _ S M L A L D ( * _ _ S I M D 3 2 ( p x ) + + ,   ( * _ _ S I M D 3 2 ( p b ) + + ) ,   a c c ) ;  
             a c c   =   _ _ S M L A L D ( * _ _ S I M D 3 2 ( p x ) + + ,   ( * _ _ S I M D 3 2 ( p b ) + + ) ,   a c c ) ;  
  
 # e l s e  
  
             a c c   + =   ( ( ( q 3 1 _ t )   *   p x + +   *   ( * p b + + ) ) ) ;  
             a c c   + =   ( ( ( q 3 1 _ t )   *   p x + +   *   ( * p b + + ) ) ) ;  
             a c c   + =   ( ( ( q 3 1 _ t )   *   p x + +   *   ( * p b + + ) ) ) ;  
             a c c   + =   ( ( ( q 3 1 _ t )   *   p x + +   *   ( * p b + + ) ) ) ;  
  
 # e n d i f 	 / * 	 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E 	 * /  
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
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             a c c   + =   ( ( ( q 3 1 _ t )   *   p x + +   *   ( * p b + + ) ) ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   C a l c   l o w e r   p a r t   o f   a c c   * /  
         a c c _ l   =   a c c   &   0 x f f f f f f f f ;  
  
         / *   C a l c   u p p e r   p a r t   o f   a c c   * /  
         a c c _ h   =   ( a c c   > >   3 2 )   &   0 x f f f f f f f f ;  
  
         / *   A p p l y   s h i f t   f o r   l o w e r   p a r t   o f   a c c   a n d   u p p e r   p a r t   o f   a c c   * /  
         a c c   =   ( u i n t 3 2 _ t )   a c c _ l   > >   l S h i f t   |   a c c _ h   < <   u S h i f t ;  
  
         / *   C o n v e r t i n g   t h e   r e s u l t   t o   1 . 1 5   f o r m a t   a n d   s a t u r a t e   t h e   o u t p u t   * /  
         a c c   =   _ _ S S A T ( a c c ,   1 6 U ) ;  
  
         / *   S t o r e   t h e   r e s u l t   f r o m   a c c u m u l a t o r   i n t o   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p O u t + +   =   ( q 1 5 _ t )   a c c ;  
  
         / *   C o m p u t e   a n d   s t o r e   e r r o r   * /  
         d   =   * p R e f + + ;  
         e   =   d   -   ( q 1 5 _ t )   a c c ;  
         * p E r r + +   =   e ;  
  
         / *   C a l c u l a t i o n   o f   1 / e n e r g y   * /  
         p o s t S h i f t   =   a r m _ r e c i p _ q 1 5 ( ( q 1 5 _ t )   e n e r g y   +   D E L T A _ Q 1 5 ,  
                                                             & o n e B y E n e r g y ,   S - > r e c i p T a b l e ) ;  
  
         / *   C a l c u l a t i o n   o f   e   *   m u   v a l u e   * /  
         e r r o r X m u   =   ( q 1 5 _ t )   ( ( ( q 3 1 _ t )   e   *   m u )   > >   1 5 ) ;  
  
         / *   C a l c u l a t i o n   o f   ( e   *   m u )   *   ( 1 / e n e r g y )   v a l u e   * /  
         a c c   =   ( ( ( q 3 1 _ t )   e r r o r X m u   *   o n e B y E n e r g y )   > >   ( 1 5   -   p o s t S h i f t ) ) ;  
  
         / *   W e i g h t i n g   f a c t o r   f o r   t h e   n o r m a l i z e d   v e r s i o n   * /  
         w   =   ( q 1 5 _ t )   _ _ S S A T ( ( q 3 1 _ t )   a c c ,   1 6 ) ;  
  
         / *   I n i t i a l i z e   p S t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p b   =   ( p C o e f f s ) ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   n u m T a p s   > >   2 ;  
  
         / *   U p d a t e   f i l t e r   c o e f f i c i e n t s   * /  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             c o e f   =   * p b   +   ( ( ( q 3 1 _ t )   w   *   ( * p x + + ) )   > >   1 5 ) ;  
             * p b + +   =   ( q 1 5 _ t )   _ _ S S A T ( ( c o e f ) ,   1 6 ) ;  
             c o e f   =   * p b   +   ( ( ( q 3 1 _ t )   w   *   ( * p x + + ) )   > >   1 5 ) ;  
             * p b + +   =   ( q 1 5 _ t )   _ _ S S A T ( ( c o e f ) ,   1 6 ) ;  
             c o e f   =   * p b   +   ( ( ( q 3 1 _ t )   w   *   ( * p x + + ) )   > >   1 5 ) ;  
             * p b + +   =   ( q 1 5 _ t )   _ _ S S A T ( ( c o e f ) ,   1 6 ) ;  
             c o e f   =   * p b   +   ( ( ( q 3 1 _ t )   w   *   ( * p x + + ) )   > >   1 5 ) ;  
             * p b + +   =   ( q 1 5 _ t )   _ _ S S A T ( ( c o e f ) ,   1 6 ) ;  
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
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             c o e f   =   * p b   +   ( ( ( q 3 1 _ t )   w   *   ( * p x + + ) )   > >   1 5 ) ;  
             * p b + +   =   ( q 1 5 _ t )   _ _ S S A T ( ( c o e f ) ,   1 6 ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   R e a d   t h e   s a m p l e   f r o m   s t a t e   b u f f e r   * /  
         x 0   =   * p S t a t e ;  
  
         / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
         p S t a t e   =   p S t a t e   +   1 U ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   S a v e   e n e r g y   a n d   x 0   v a l u e s   f o r   t h e   n e x t   f r a m e   * /  
     S - > e n e r g y   =   ( q 1 5 _ t )   e n e r g y ;  
     S - > x 0   =   x 0 ;  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e  
           s a t r t   o f   t h e   s t a t e   b u f f e r .   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e  
           n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   p S t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     / *   C a l c u l a t i o n   o f   c o u n t   f o r   c o p y i n g   i n t e g e r   w r i t e s   * /  
     t a p C n t   =   ( n u m T a p s   -   1 U )   > >   2 ;  
  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
  
 # i f n d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
  
         * _ _ S I M D 3 2 ( p S t a t e C u r n t ) + +   =   * _ _ S I M D 3 2 ( p S t a t e ) + + ;  
         * _ _ S I M D 3 2 ( p S t a t e C u r n t ) + +   =   * _ _ S I M D 3 2 ( p S t a t e ) + + ;  
  
 # e l s e  
  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
 # e n d i f  
  
         t a p C n t - - ;  
  
     }  
  
     / *   C a l c u l a t i o n   o f   c o u n t   f o r   r e m a i n i n g   q 1 5 _ t   d a t a   * /  
     t a p C n t   =   ( n u m T a p s   -   1 U )   %   0 x 4 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   t h e   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c ;  
  
         / *   I n i t i a l i z e   p S t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   p C o e f f s   p o i n t e r   * /  
         p b   =   p C o e f f s ;  
  
         / *   R e a d   t h e   s a m p l e   f r o m   i n p u t   b u f f e r   * /  
         i n   =   * p S r c + + ;  
  
         / *   U p d a t e   t h e   e n e r g y   c a l c u l a t i o n   * /  
         e n e r g y   - =   ( ( ( q 3 1 _ t )   x 0   *   ( x 0 ) )   > >   1 5 ) ;  
         e n e r g y   + =   ( ( ( q 3 1 _ t )   i n   *   ( i n ) )   > >   1 5 ) ;  
  
         / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
         a c c   =   0 ;  
  
         / *   L o o p   o v e r   n u m T a p s   n u m b e r   o f   v a l u e s   * /  
         t a p C n t   =   n u m T a p s ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             a c c   + =   ( ( ( q 3 1 _ t )   *   p x + +   *   ( * p b + + ) ) ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   C a l c   l o w e r   p a r t   o f   a c c   * /  
         a c c _ l   =   a c c   &   0 x f f f f f f f f ;  
  
         / *   C a l c   u p p e r   p a r t   o f   a c c   * /  
         a c c _ h   =   ( a c c   > >   3 2 )   &   0 x f f f f f f f f ;  
  
         / *   A p p l y   s h i f t   f o r   l o w e r   p a r t   o f   a c c   a n d   u p p e r   p a r t   o f   a c c   * /  
         a c c   =   ( u i n t 3 2 _ t )   a c c _ l   > >   l S h i f t   |   a c c _ h   < <   u S h i f t ;  
  
         / *   C o n v e r t i n g   t h e   r e s u l t   t o   1 . 1 5   f o r m a t   a n d   s a t u r a t e   t h e   o u t p u t   * /  
         a c c   =   _ _ S S A T ( a c c ,   1 6 U ) ;  
  
         / *   C o n v e r t i n g   t h e   r e s u l t   t o   1 . 1 5   f o r m a t   * /  
         / / a c c   =   _ _ S S A T ( ( a c c   > >   ( 1 6 U   -   s h i f t ) ) ,   1 6 U ) ;  
  
         / *   S t o r e   t h e   r e s u l t   f r o m   a c c u m u l a t o r   i n t o   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p O u t + +   =   ( q 1 5 _ t )   a c c ;  
  
         / *   C o m p u t e   a n d   s t o r e   e r r o r   * /  
         d   =   * p R e f + + ;  
         e   =   d   -   ( q 1 5 _ t )   a c c ;  
         * p E r r + +   =   e ;  
  
         / *   C a l c u l a t i o n   o f   1 / e n e r g y   * /  
         p o s t S h i f t   =   a r m _ r e c i p _ q 1 5 ( ( q 1 5 _ t )   e n e r g y   +   D E L T A _ Q 1 5 ,  
                                                             & o n e B y E n e r g y ,   S - > r e c i p T a b l e ) ;  
  
         / *   C a l c u l a t i o n   o f   e   *   m u   v a l u e   * /  
         e r r o r X m u   =   ( q 1 5 _ t )   ( ( ( q 3 1 _ t )   e   *   m u )   > >   1 5 ) ;  
  
         / *   C a l c u l a t i o n   o f   ( e   *   m u )   *   ( 1 / e n e r g y )   v a l u e   * /  
         a c c   =   ( ( ( q 3 1 _ t )   e r r o r X m u   *   o n e B y E n e r g y )   > >   ( 1 5   -   p o s t S h i f t ) ) ;  
  
         / *   W e i g h t i n g   f a c t o r   f o r   t h e   n o r m a l i z e d   v e r s i o n   * /  
         w   =   ( q 1 5 _ t )   _ _ S S A T ( ( q 3 1 _ t )   a c c ,   1 6 ) ;  
  
         / *   I n i t i a l i z e   p S t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p b   =   ( p C o e f f s ) ;  
  
         / *   L o o p   o v e r   n u m T a p s   n u m b e r   o f   v a l u e s   * /  
         t a p C n t   =   n u m T a p s ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             c o e f   =   * p b   +   ( ( ( q 3 1 _ t )   w   *   ( * p x + + ) )   > >   1 5 ) ;  
             * p b + +   =   ( q 1 5 _ t )   _ _ S S A T ( ( c o e f ) ,   1 6 ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   R e a d   t h e   s a m p l e   f r o m   s t a t e   b u f f e r   * /  
         x 0   =   * p S t a t e ;  
  
         / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
         p S t a t e   =   p S t a t e   +   1 U ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   S a v e   e n e r g y   a n d   x 0   v a l u e s   f o r   t h e   n e x t   f r a m e   * /  
     S - > e n e r g y   =   ( q 1 5 _ t )   e n e r g y ;  
     S - > x 0   =   x 0 ;  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e  
           s a t r t   o f   t h e   s t a t e   b u f f e r .   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e  
           n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   p S t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     / *   c o p y   ( n u m T a p s   -   1 U )   d a t a   * /  
     t a p C n t   =   ( n u m T a p s   -   1 U ) ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
 # e n d i f   / *       # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
 }  
  
  
 / * *  
       *   @ }   e n d   o f   L M S _ N O R M   g r o u p  
       * /  