??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ r f f t _ f 3 2 . c  
   *   D e s c r i p t i o n :     R F F T   &   R I F F T   F l o a t i n g   p o i n t   p r o c e s s   f u n c t i o n  
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
 v o i d   s t a g e _ r f f t _ f 3 2 (  
     a r m _ r f f t _ f a s t _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p ,   f l o a t 3 2 _ t   *   p O u t )  
 {  
       u i n t 3 2 _ t     k ; 	 	 	 	 	 	 	 	       / *   L o o p   C o u n t e r                                           * /  
       f l o a t 3 2 _ t   t w R ,   t w I ; 	 	 	 	 	 	       / *   R F F T   T w i d d l e   c o e f f i c i e n t s                 * /  
       f l o a t 3 2 _ t   *   p C o e f f   =   S - > p T w i d d l e R F F T ;     / *   P o i n t s   t o   R F F T   T w i d d l e   f a c t o r s       * /  
       f l o a t 3 2 _ t   * p A   =   p ; 	 	 	 	 	 	       / *   i n c r e a s i n g   p o i n t e r                               * /  
       f l o a t 3 2 _ t   * p B   =   p ; 	 	 	 	 	 	       / *   d e c r e a s i n g   p o i n t e r                               * /  
       f l o a t 3 2 _ t   x A R ,   x A I ,   x B R ,   x B I ; 	 	 	 	 / *   t e m p o r a r y   v a r i a b l e s                             * /  
       f l o a t 3 2 _ t   t 1 a ,   t 1 b ; 	 	 	 	                   / *   t e m p o r a r y   v a r i a b l e s                             * /  
       f l o a t 3 2 _ t   p 0 ,   p 1 ,   p 2 ,   p 3 ; 	 	 	 	       / *   t e m p o r a r y   v a r i a b l e s                             * /  
  
  
       k   =   ( S - > S i n t ) . f f t L e n   -   1 ;  
  
       / *   P a c k   f i r s t   a n d   l a s t   s a m p l e   o f   t h e   f r e q u e n c y   d o m a i n   t o g e t h e r   * /  
  
       x B R   =   p B [ 0 ] ;  
       x B I   =   p B [ 1 ] ;  
       x A R   =   p A [ 0 ] ;  
       x A I   =   p A [ 1 ] ;  
  
       t w R   =   * p C o e f f + +   ;  
       t w I   =   * p C o e f f + +   ;  
  
       / /   U 1   =   X A ( 1 )   +   X B ( 1 ) ;   %   I t   i s   r e a l  
       t 1 a   =   x B R   +   x A R     ;  
  
       / /   U 2   =   X B ( 1 )   -   X A ( 1 ) ;   %   I t   i s   i m a g i n a r y  
       t 1 b   =   x B I   +   x A I     ;  
  
       / /   r e a l ( t w   *   ( x B   -   x A ) )   =   t w R   *   ( x B R   -   x A R )   -   t w I   *   ( x B I   -   x A I ) ;  
       / /   i m a g ( t w   *   ( x B   -   x A ) )   =   t w I   *   ( x B R   -   x A R )   +   t w R   *   ( x B I   -   x A I ) ;  
       * p O u t + +   =   0 . 5 f   *   (   t 1 a   +   t 1 b   ) ;  
       * p O u t + +   =   0 . 5 f   *   (   t 1 a   -   t 1 b   ) ;  
  
       / /   X A ( 1 )   =   1 / 2 * (   U 1   -   i m a g ( U 2 )   +     i * (   U 1   + i m a g ( U 2 )   ) ) ;  
       p B     =   p   +   2 * k ;  
       p A   + =   2 ;  
  
       d o  
       {  
             / *  
                   f u n c t i o n   X   =   m y _ s p l i t _ r f f t ( X ,   i f f t F l a g )  
                   %   X   i s   a   s e r i e s   o f   r e a l   n u m b e r s  
                   L     =   l e n g t h ( X ) ;  
                   X C   =   X ( 1 : 2 : e n d )   + i * X ( 2 : 2 : e n d ) ;  
                   X A   =   f f t ( X C ) ;  
                   X B   =   c o n j ( X A ( [ 1   e n d : - 1 : 2 ] ) ) ;  
                   T W   =   i * e x p ( - 2 * p i * i * [ 0 : L / 2 - 1 ] / L ) . ' ;  
                   f o r   l   =   2 : L / 2  
                         X A ( l )   =   1 / 2   *   ( X A ( l )   +   X B ( l )   +   T W ( l )   *   ( X B ( l )   -   X A ( l ) ) ) ;  
                   e n d  
                   X A ( 1 )   =   1 / 2 *   ( X A ( 1 )   +   X B ( 1 )   +   T W ( 1 )   *   ( X B ( 1 )   -   X A ( 1 ) ) )   +   i * (   1 / 2 * (   X A ( 1 )   +   X B ( 1 )   +   i * (   X A ( 1 )   -   X B ( 1 ) ) ) ) ;  
                   X   =   X A ;  
             * /  
  
             x B I   =   p B [ 1 ] ;  
             x B R   =   p B [ 0 ] ;  
             x A R   =   p A [ 0 ] ;  
             x A I   =   p A [ 1 ] ;  
  
             t w R   =   * p C o e f f + + ;  
             t w I   =   * p C o e f f + + ;  
  
             t 1 a   =   x B R   -   x A R   ;  
             t 1 b   =   x B I   +   x A I   ;  
  
             / /   r e a l ( t w   *   ( x B   -   x A ) )   =   t w R   *   ( x B R   -   x A R )   -   t w I   *   ( x B I   -   x A I ) ;  
             / /   i m a g ( t w   *   ( x B   -   x A ) )   =   t w I   *   ( x B R   -   x A R )   +   t w R   *   ( x B I   -   x A I ) ;  
             p 0   =   t w R   *   t 1 a ;  
             p 1   =   t w I   *   t 1 a ;  
             p 2   =   t w R   *   t 1 b ;  
             p 3   =   t w I   *   t 1 b ;  
  
             * p O u t + +   =   0 . 5 f   *   ( x A R   +   x B R   +   p 0   +   p 3   ) ;   / / x A R  
             * p O u t + +   =   0 . 5 f   *   ( x A I   -   x B I   +   p 1   -   p 2   ) ;   / / x A I  
  
             p A   + =   2 ;  
             p B   - =   2 ;  
             k - - ;  
       }   w h i l e   ( k   >   0 U ) ;  
 }  
  
 / *   P r e p a r e s   d a t a   f o r   i n v e r s e   c f f t   * /  
 v o i d   m e r g e _ r f f t _ f 3 2 (  
 a r m _ r f f t _ f a s t _ i n s t a n c e _ f 3 2   *   S ,  
 f l o a t 3 2 _ t   *   p ,   f l o a t 3 2 _ t   *   p O u t )  
 {  
       u i n t 3 2 _ t     k ; 	 	 	 	 	 	 	 	 / *   L o o p   C o u n t e r                                           * /  
       f l o a t 3 2 _ t   t w R ,   t w I ; 	 	 	 	 	 	 / *   R F F T   T w i d d l e   c o e f f i c i e n t s                 * /  
       f l o a t 3 2 _ t   * p C o e f f   =   S - > p T w i d d l e R F F T ; 	 	 / *   P o i n t s   t o   R F F T   T w i d d l e   f a c t o r s       * /  
       f l o a t 3 2 _ t   * p A   =   p ; 	 	 	 	 	 	 / *   i n c r e a s i n g   p o i n t e r                               * /  
       f l o a t 3 2 _ t   * p B   =   p ; 	 	 	 	 	 	 / *   d e c r e a s i n g   p o i n t e r                               * /  
       f l o a t 3 2 _ t   x A R ,   x A I ,   x B R ,   x B I ; 	 	 	 / *   t e m p o r a r y   v a r i a b l e s                             * /  
       f l o a t 3 2 _ t   t 1 a ,   t 1 b ,   r ,   s ,   t ,   u ; 	 	 	 / *   t e m p o r a r y   v a r i a b l e s                             * /  
  
       k   =   ( S - > S i n t ) . f f t L e n   -   1 ;  
  
       x A R   =   p A [ 0 ] ;  
       x A I   =   p A [ 1 ] ;  
  
       p C o e f f   + =   2   ;  
  
       * p O u t + +   =   0 . 5 f   *   (   x A R   +   x A I   ) ;  
       * p O u t + +   =   0 . 5 f   *   (   x A R   -   x A I   ) ;  
  
       p B     =     p   +   2 * k   ;  
       p A   + =     2 	       ;  
  
       w h i l e   ( k   >   0 U )  
       {  
             / *   G   i s   h a l f   o f   t h e   f r e q u e n c y   c o m p l e x   s p e c t r u m   * /  
             / / f o r   k   =   2 : N  
             / /         X k ( k )   =   1 / 2   *   ( G ( k )   +   c o n j ( G ( N - k + 2 ) )   +   T w ( k ) * (   G ( k )   -   c o n j ( G ( N - k + 2 ) ) ) ) ;  
             x B I   =       p B [ 1 ]         ;  
             x B R   =       p B [ 0 ]         ;  
             x A R   =     p A [ 0 ] ;  
             x A I   =     p A [ 1 ] ;  
  
             t w R   =   * p C o e f f + + ;  
             t w I   =   * p C o e f f + + ;  
  
             t 1 a   =   x A R   -   x B R   ;  
             t 1 b   =   x A I   +   x B I   ;  
  
             r   =   t w R   *   t 1 a ;  
             s   =   t w I   *   t 1 b ;  
             t   =   t w I   *   t 1 a ;  
             u   =   t w R   *   t 1 b ;  
  
             / /   r e a l ( t w   *   ( x A   -   x B ) )   =   t w R   *   ( x A R   -   x B R )   -   t w I   *   ( x A I   -   x B I ) ;  
             / /   i m a g ( t w   *   ( x A   -   x B ) )   =   t w I   *   ( x A R   -   x B R )   +   t w R   *   ( x A I   -   x B I ) ;  
             * p O u t + +   =   0 . 5 f   *   ( x A R   +   x B R   -   r   -   s   ) ;   / / x A R  
             * p O u t + +   =   0 . 5 f   *   ( x A I   -   x B I   +   t   -   u   ) ;   / / x A I  
  
             p A   + =   2 ;  
             p B   - =   2 ;  
             k - - ;  
       }  
  
 }  
  
 / * *  
 *   @ i n g r o u p   g r o u p T r a n s f o r m s  
 * /  
  
 / * *  
   *   @ d e f g r o u p   R e a l F F T   R e a l   F F T   F u n c t i o n s  
   *  
   *   \ p a r  
   *   T h e   C M S I S   D S P   l i b r a r y   i n c l u d e s   s p e c i a l i z e d   a l g o r i t h m s   f o r   c o m p u t i n g   t h e  
   *   F F T   o f   r e a l   d a t a   s e q u e n c e s .     T h e   F F T   i s   d e f i n e d   o v e r   c o m p l e x   d a t a   b u t  
   *   i n   m a n y   a p p l i c a t i o n s   t h e   i n p u t   i s   r e a l .     R e a l   F F T   a l g o r i t h m s   t a k e   a d v a n t a g e  
   *   o f   t h e   s y m m e t r y   p r o p e r t i e s   o f   t h e   F F T   a n d   h a v e   a   s p e e d   a d v a n t a g e   o v e r   c o m p l e x  
   *   a l g o r i t h m s   o f   t h e   s a m e   l e n g t h .  
   *   \ p a r  
   *   T h e   F a s t   R F F T   a l g o r i t h   r e l a y s   o n   t h e   m i x e d   r a d i x   C F F T   t h a t   s a v e   p r o c e s s o r   u s a g e .  
   *   \ p a r  
   *   T h e   r e a l   l e n g t h   N   f o r w a r d   F F T   o f   a   s e q u e n c e   i s   c o m p u t e d   u s i n g   t h e   s t e p s   s h o w n   b e l o w .  
   *   \ p a r  
   *   \ i m a g e   h t m l   R F F T . g i f   " R e a l   F a s t   F o u r i e r   T r a n s f o r m "  
   *   \ p a r  
   *   T h e   r e a l   s e q u e n c e   i s   i n i t i a l l y   t r e a t e d   a s   i f   i t   w e r e   c o m p l e x   t o   p e r f o r m   a   C F F T .  
   *   L a t e r ,   a   p r o c e s s i n g   s t a g e   r e s h a p e s   t h e   d a t a   t o   o b t a i n   h a l f   o f   t h e   f r e q u e n c y   s p e c t r u m  
   *   i n   c o m p l e x   f o r m a t .   E x c e p t   t h e   f i r s t   c o m p l e x   n u m b e r   t h a t   c o n t a i n s   t h e   t w o   r e a l   n u m b e r s  
   *   X [ 0 ]   a n d   X [ N / 2 ]   a l l   t h e   d a t a   i s   c o m p l e x .   I n   o t h e r   w o r d s ,   t h e   f i r s t   c o m p l e x   s a m p l e  
   *   c o n t a i n s   t w o   r e a l   v a l u e s   p a c k e d .  
   *   \ p a r  
   *   T h e   i n p u t   f o r   t h e   i n v e r s e   R F F T   s h o u l d   k e e p   t h e   s a m e   f o r m a t   a s   t h e   o u t p u t   o f   t h e  
   *   f o r w a r d   R F F T .   A   f i r s t   p r o c e s s i n g   s t a g e   p r e - p r o c e s s   t h e   d a t a   t o   l a t e r   p e r f o r m   a n  
   *   i n v e r s e   C F F T .  
   *   \ p a r  
   *   \ i m a g e   h t m l   R I F F T . g i f   " R e a l   I n v e r s e   F a s t   F o u r i e r   T r a n s f o r m "  
   *   \ p a r  
   *   T h e   a l g o r i t h m s   f o r   f l o a t i n g - p o i n t ,   Q 1 5 ,   a n d   Q 3 1   d a t a   a r e   s l i g h t l y   d i f f e r e n t  
   *   a n d   w e   d e s c r i b e   e a c h   a l g o r i t h m   i n   t u r n .  
   *   \ p a r   F l o a t i n g - p o i n t  
   *   T h e   m a i n   f u n c t i o n s   a r e   a r m _ r f f t _ f a s t _ f 3 2 ( )   a n d   a r m _ r f f t _ f a s t _ i n i t _ f 3 2 ( ) .  
   *   T h e   o l d e r   f u n c t i o n s   a r m _ r f f t _ f 3 2 ( )   a n d   a r m _ r f f t _ i n i t _ f 3 2 ( )   h a v e   b e e n  
   *   d e p r e c a t e d   b u t   a r e   s t i l l   d o c u m e n t e d .  
   *   \ p a r  
   *   T h e   F F T   o f   a   r e a l   N - p o i n t   s e q u e n c e   h a s   e v e n   s y m m e t r y   i n   t h e   f r e q u e n c y  
   *   d o m a i n .   T h e   s e c o n d   h a l f   o f   t h e   d a t a   e q u a l s   t h e   c o n j u g a t e   o f   t h e   f i r s t  
   *   h a l f   f l i p p e d   i n   f r e q u e n c y .   L o o k i n g   a t   t h e   d a t a ,   w e   s e e   t h a t   w e   c a n  
   *   u n i q u e l y   r e p r e s e n t   t h e   F F T   u s i n g   o n l y   N / 2   c o m p l e x   n u m b e r s .   T h e s e   a r e  
   *   p a c k e d   i n t o   t h e   o u t p u t   a r r a y   i n   a l t e r n a t i n g   r e a l   a n d   i m a g i n a r y  
   *   c o m p o n e n t s :  
   *   \ p a r  
   *   X   =   {   r e a l [ 0 ] ,   i m a g [ 0 ] ,   r e a l [ 1 ] ,   i m a g [ 1 ] ,   r e a l [ 2 ] ,   i m a g [ 2 ]   . . .  
   *   r e a l [ ( N / 2 ) - 1 ] ,   i m a g [ ( N / 2 ) - 1   }  
   *   \ p a r  
   *   I t   h a p p e n s   t h a t   t h e   f i r s t   c o m p l e x   n u m b e r   ( r e a l [ 0 ] ,   i m a g [ 0 ] )   i s   a c t u a l l y  
   *   a l l   r e a l .   r e a l [ 0 ]   r e p r e s e n t s   t h e   D C   o f f s e t ,   a n d   i m a g [ 0 ]   s h o u l d   b e   0 .  
   *   ( r e a l [ 1 ] ,   i m a g [ 1 ] )   i s   t h e   f u n d a m e n t a l   f r e q u e n c y ,   ( r e a l [ 2 ] ,   i m a g [ 2 ] )   i s  
   *   t h e   f i r s t   h a r m o n i c   a n d   s o   o n .  
   *   \ p a r  
   *   T h e   r e a l   F F T   f u n c t i o n s   p a c k   t h e   f r e q u e n c y   d o m a i n   d a t a   i n   t h i s   f a s h i o n .  
   *   T h e   f o r w a r d   t r a n s f o r m   o u t p u t s   t h e   d a t a   i n   t h i s   f o r m   a n d   t h e   i n v e r s e  
   *   t r a n s f o r m   e x p e c t s   i n p u t   d a t a   i n   t h i s   f o r m .   T h e   f u n c t i o n   a l w a y s   p e r f o r m s  
   *   t h e   n e e d e d   b i t r e v e r s a l   s o   t h a t   t h e   i n p u t   a n d   o u t p u t   d a t a   i s   a l w a y s   i n  
   *   n o r m a l   o r d e r .   T h e   f u n c t i o n s   s u p p o r t   l e n g t h s   o f   [ 3 2 ,   6 4 ,   1 2 8 ,   . . . ,   4 0 9 6 ]  
   *   s a m p l e s .  
   *   \ p a r   Q 1 5   a n d   Q 3 1  
   *   T h e   r e a l   a l g o r i t h m s   a r e   d e f i n e d   i n   a   s i m i l a r   m a n n e r   a n d   u t i l i z e   N / 2   c o m p l e x  
   *   t r a n s f o r m s   b e h i n d   t h e   s c e n e s .  
   *   \ p a r  
   *   T h e   c o m p l e x   t r a n s f o r m s   u s e d   i n t e r n a l l y   i n c l u d e   s c a l i n g   t o   p r e v e n t   f i x e d - p o i n t  
   *   o v e r f l o w s .     T h e   o v e r a l l   s c a l i n g   e q u a l s   1 / ( f f t L e n / 2 ) .  
   *   \ p a r  
   *   A   s e p a r a t e   i n s t a n c e   s t r u c t u r e   m u s t   b e   d e f i n e d   f o r   e a c h   t r a n s f o r m   u s e d   b u t  
   *   t w i d d l e   f a c t o r   a n d   b i t   r e v e r s a l   t a b l e s   c a n   b e   r e u s e d .  
   *   \ p a r  
   *   T h e r e   i s   a l s o   a n   a s s o c i a t e d   i n i t i a l i z a t i o n   f u n c t i o n   f o r   e a c h   d a t a   t y p e .  
   *   T h e   i n i t i a l i z a t i o n   f u n c t i o n   p e r f o r m s   t h e   f o l l o w i n g   o p e r a t i o n s :  
   *   -   S e t s   t h e   v a l u e s   o f   t h e   i n t e r n a l   s t r u c t u r e   f i e l d s .  
   *   -   I n i t i a l i z e s   t w i d d l e   f a c t o r   t a b l e   a n d   b i t   r e v e r s a l   t a b l e   p o i n t e r s .  
   *   -   I n i t i a l i z e s   t h e   i n t e r n a l   c o m p l e x   F F T   d a t a   s t r u c t u r e .  
   *   \ p a r  
   *   U s e   o f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   o p t i o n a l .  
   *   H o w e v e r ,   i f   t h e   i n i t i a l i z a t i o n   f u n c t i o n   i s   u s e d ,   t h e n   t h e   i n s t a n c e   s t r u c t u r e  
   *   c a n n o t   b e   p l a c e d   i n t o   a   c o n s t   d a t a   s e c t i o n .   T o   p l a c e   a n   i n s t a n c e   s t r u c t u r e  
   *   i n t o   a   c o n s t   d a t a   s e c t i o n ,   t h e   i n s t a n c e   s t r u c t u r e   s h o u l d   b e   m a n u a l l y  
   *   i n i t i a l i z e d   a s   f o l l o w s :  
   *   < p r e >  
   * a r m _ r f f t _ i n s t a n c e _ q 3 1   S   =   { f f t L e n R e a l ,   f f t L e n B y 2 ,   i f f t F l a g R ,   b i t R e v e r s e F l a g R ,   t w i d C o e f R M o d i f i e r ,   p T w i d d l e A R e a l ,   p T w i d d l e B R e a l ,   p C f f t } ;  
   * a r m _ r f f t _ i n s t a n c e _ q 1 5   S   =   { f f t L e n R e a l ,   f f t L e n B y 2 ,   i f f t F l a g R ,   b i t R e v e r s e F l a g R ,   t w i d C o e f R M o d i f i e r ,   p T w i d d l e A R e a l ,   p T w i d d l e B R e a l ,   p C f f t } ;  
   *   < / p r e >  
   *   w h e r e   < c o d e > f f t L e n R e a l < / c o d e >   i s   t h e   l e n g t h   o f   t h e   r e a l   t r a n s f o r m ;  
   *   < c o d e > f f t L e n B y 2 < / c o d e >   l e n g t h   o f     t h e   i n t e r n a l   c o m p l e x   t r a n s f o r m .  
   *   < c o d e > i f f t F l a g R < / c o d e >   S e l e c t s   f o r w a r d   ( = 0 )   o r   i n v e r s e   ( = 1 )   t r a n s f o r m .  
   *   < c o d e > b i t R e v e r s e F l a g R < / c o d e >   S e l e c t s   b i t   r e v e r s e d   o u t p u t   ( = 0 )   o r   n o r m a l   o r d e r  
   *   o u t p u t   ( = 1 ) .  
   *   < c o d e > t w i d C o e f R M o d i f i e r < / c o d e >   s t r i d e   m o d i f i e r   f o r   t h e   t w i d d l e   f a c t o r   t a b l e .  
   *   T h e   v a l u e   i s   b a s e d   o n   t h e   F F T   l e n g t h ;  
   *   < c o d e > p T w i d d l e A R e a l < / c o d e > p o i n t s   t o   t h e   A   a r r a y   o f   t w i d d l e   c o e f f i c i e n t s ;  
   *   < c o d e > p T w i d d l e B R e a l < / c o d e > p o i n t s   t o   t h e   B   a r r a y   o f   t w i d d l e   c o e f f i c i e n t s ;  
   *   < c o d e > p C f f t < / c o d e >   p o i n t s   t o   t h e   C F F T   I n s t a n c e   s t r u c t u r e .   T h e   C F F T   s t r u c t u r e  
   *   m u s t   a l s o   b e   i n i t i a l i z e d .     R e f e r   t o   a r m _ c f f t _ r a d i x 4 _ f 3 2 ( )   f o r   d e t a i l s   r e g a r d i n g  
   *   s t a t i c   i n i t i a l i z a t i o n   o f   t h e   c o m p l e x   F F T   i n s t a n c e   s t r u c t u r e .  
   * /  
  
 / * *  
 *   @ a d d t o g r o u p   R e a l F F T  
 *   @ {  
 * /  
  
 / * *  
 *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f l o a t i n g - p o i n t   r e a l   F F T .  
 *   @ p a r a m [ i n ]     * S                             p o i n t s   t o   a n   a r m _ r f f t _ f a s t _ i n s t a n c e _ f 3 2   s t r u c t u r e .  
 *   @ p a r a m [ i n ]     * p                             p o i n t s   t o   t h e   i n p u t   b u f f e r .  
 *   @ p a r a m [ i n ]     * p O u t                       p o i n t s   t o   t h e   o u t p u t   b u f f e r .  
 *   @ p a r a m [ i n ]     i f f t F l a g                 R F F T   i f   f l a g   i s   0 ,   R I F F T   i f   f l a g   i s   1  
 *   @ r e t u r n   n o n e .  
 * /  
  
 v o i d   a r m _ r f f t _ f a s t _ f 3 2 (  
 a r m _ r f f t _ f a s t _ i n s t a n c e _ f 3 2   *   S ,  
 f l o a t 3 2 _ t   *   p ,   f l o a t 3 2 _ t   *   p O u t ,  
 u i n t 8 _ t   i f f t F l a g )  
 {  
       a r m _ c f f t _ i n s t a n c e _ f 3 2   *   S i n t   =   & ( S - > S i n t ) ;  
       S i n t - > f f t L e n   =   S - > f f t L e n R F F T   /   2 ;  
  
       / *   C a l c u l a t i o n   o f   R e a l   F F T   * /  
       i f   ( i f f t F l a g )  
       {  
             / *     R e a l   F F T   c o m p r e s s i o n   * /  
             m e r g e _ r f f t _ f 3 2 ( S ,   p ,   p O u t ) ;  
  
             / *   C o m p l e x   r a d i x - 4   I F F T   p r o c e s s   * /  
             a r m _ c f f t _ f 3 2 (   S i n t ,   p O u t ,   i f f t F l a g ,   1 ) ;  
       }  
       e l s e  
       {  
             / *   C a l c u l a t i o n   o f   R F F T   o f   i n p u t   * /  
             a r m _ c f f t _ f 3 2 (   S i n t ,   p ,   i f f t F l a g ,   1 ) ;  
  
             / *     R e a l   F F T   e x t r a c t i o n   * /  
             s t a g e _ r f f t _ f 3 2 ( S ,   p ,   p O u t ) ;  
       }  
 }  
  
 / * *  
 *   @ }   e n d   o f   R e a l F F T   g r o u p  
 * /  