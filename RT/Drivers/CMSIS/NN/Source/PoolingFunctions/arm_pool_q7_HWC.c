�?/ *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 8   A r m   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
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
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   N N   L i b r a r y  
   *   T i t l e :                 a r m _ p o o l _ q 7 _ H W C . c  
   *   D e s c r i p t i o n :     P o o l i n g   f u n c t i o n   i m p l e m e n t a t i o n s  
   *  
   *   $ D a t e :                 1 7 .   J a n u a r y   2 0 1 8  
   *   $ R e v i s i o n :         V . 1 . 0 . 0  
   *  
   *   T a r g e t   P r o c e s s o r :     C o r t e x - M   c o r e s  
   *  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 # i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " a r m _ n n f u n c t i o n s . h "  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
 / * *  
   *   @ b r i e f   A   f e w   u t i l i t y   f u n c t i o n s   u s e d   b y   p o o l i n g   f u n c t i o n s  
   *  
   *    
   * /  
  
 s t a t i c   v o i d   b u f f e r _ s c a l e _ b a c k _ q 1 5 _ t o _ q 7 ( q 1 5 _ t   *   b u f f e r ,   q 7 _ t   *   t a r g e t ,   u i n t 1 6 _ t   l e n g t h ,   u i n t 1 6 _ t   s c a l e )  
 {  
         i n t               i ;  
  
         f o r   ( i   =   0 ;   i   <   l e n g t h ;   i + + )  
         {  
                 t a r g e t [ i ]   =   ( q 7 _ t )   ( b u f f e r [ i ]   /   s c a l e ) ;  
         }  
 }  
  
 s t a t i c   v o i d   c o m p a r e _ a n d _ r e p l a c e _ i f _ l a r g e r _ q 7 ( q 7 _ t   *   b a s e ,       / /   b a s e   d a t a  
                                                                                           q 7 _ t   *   t a r g e t ,   / /   c o m p a r e   t a r g e t  
                                                                                           c o n s t   u i n t 1 6 _ t   l e n g t h     / /   d a t a   l e n g t h  
         )  
 {  
         q 7 _ t           * p I n   =   b a s e ;  
         q 7 _ t           * p C o m   =   t a r g e t ;  
         u n i o n   a r m _ n n w o r d   i n ;  
         u n i o n   a r m _ n n w o r d   c o m ;  
         u i n t 1 6 _ t     c n t   =   l e n g t h   > >   2 ;  
  
         w h i l e   ( c n t   >   0 u )  
         {  
                 i n . w o r d   =   * _ _ S I M D 3 2 ( p I n ) ;  
                 c o m . w o r d   =   * _ _ S I M D 3 2 ( p C o m ) + + ;  
  
                 / /   i f   v e r s i o n  
                 i f   ( c o m . b y t e s [ 0 ]   >   i n . b y t e s [ 0 ] )  
                         i n . b y t e s [ 0 ]   =   c o m . b y t e s [ 0 ] ;  
                 i f   ( c o m . b y t e s [ 1 ]   >   i n . b y t e s [ 1 ] )  
                         i n . b y t e s [ 1 ]   =   c o m . b y t e s [ 1 ] ;  
                 i f   ( c o m . b y t e s [ 2 ]   >   i n . b y t e s [ 2 ] )  
                         i n . b y t e s [ 2 ]   =   c o m . b y t e s [ 2 ] ;  
                 i f   ( c o m . b y t e s [ 3 ]   >   i n . b y t e s [ 3 ] )  
                         i n . b y t e s [ 3 ]   =   c o m . b y t e s [ 3 ] ;  
  
                 * _ _ S I M D 3 2 ( p I n ) + +   =   i n . w o r d ;  
  
                 c n t - - ;  
         }  
 }  
  
 s t a t i c   v o i d   a c c u m u l a t e _ q 7 _ t o _ q 1 5 ( q 1 5 _ t   *   b a s e ,   q 7 _ t   *   t a r g e t ,   c o n s t   u i n t 1 6 _ t   l e n g t h )  
 {  
         q 1 5 _ t         * p C n t   =   b a s e ;  
         q 7 _ t           * p V   =   t a r g e t ;  
         q 3 1 _ t           v 1 ,   v 2 ,   v o 1 ,   v o 2 ;  
         u i n t 1 6 _ t     c n t   =   l e n g t h   > >   2 ;  
         q 3 1 _ t           i n ;  
  
         w h i l e   ( c n t   >   0 u )  
         {  
                 q 3 1 _ t           v a l u e   =   * _ _ S I M D 3 2 ( p V ) + + ;  
                 v 1   =   _ _ S X T B 1 6 ( _ _ R O R ( v a l u e ,   8 ) ) ;  
                 v 2   =   _ _ S X T B 1 6 ( v a l u e ) ;  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
  
                 v o 2   =   _ _ P K H T B ( v 1 ,   v 2 ,   1 6 ) ;  
                 v o 1   =   _ _ P K H B T ( v 2 ,   v 1 ,   1 6 ) ;  
  
 # e l s e  
  
                 v o 1   =   _ _ P K H T B ( v 1 ,   v 2 ,   1 6 ) ;  
                 v o 2   =   _ _ P K H B T ( v 2 ,   v 1 ,   1 6 ) ;  
  
 # e n d i f  
  
                 i n   =   * _ _ S I M D 3 2 ( p C n t ) ;  
                 * _ _ S I M D 3 2 ( p C n t ) + +   =   _ _ Q A D D 1 6 ( v o 1 ,   i n ) ;  
  
                 i n   =   * _ _ S I M D 3 2 ( p C n t ) ;  
                 * _ _ S I M D 3 2 ( p C n t ) + +   =   _ _ Q A D D 1 6 ( v o 2 ,   i n ) ;  
  
                 c n t - - ;  
         }  
         c n t   =   l e n g t h   &   0 x 3 ;  
         w h i l e   ( c n t   >   0 u )  
         {  
                 * p C n t + +   + =   * p V + + ;  
                 c n t - - ;  
         }  
 }  
  
 # e n d i f                                                     / /   A R M _ M A T H _ D S P  
  
 / * *  
   *     @ i n g r o u p   g r o u p N N  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   P o o l i n g  
   *   @ {  
   * /  
  
     / * *  
       *   @ b r i e f   Q 7   m a x   p o o l i n g   f u n c t i o n  
       *   @ p a r a m [ i n ,   o u t ]     I m _ i n               p o i n t e r   t o   i n p u t   t e n s o r  
       *   @ p a r a m [ i n ]               d i m _ i m _ i n       i n p u t   t e n s o r   d i m e n t i o n  
       *   @ p a r a m [ i n ]               c h _ i m _ i n         n u m b e r   o f   i n p u t   t e n s o r   c h a n n e l s  
       *   @ p a r a m [ i n ]               d i m _ k e r n e l     f i l t e r   k e r n e l   s i z e  
       *   @ p a r a m [ i n ]               p a d d i n g           p a d d i n g   s i z e s  
       *   @ p a r a m [ i n ]               s t r i d e             c o n v o l u t i o n   s t r i d e  
       *   @ p a r a m [ i n ]               d i m _ i m _ o u t     o u t p u t   t e n s o r   d i m e n s i o n  
       *   @ p a r a m [ i n , o u t ]       b u f f e r A           p o i n t e r   t o   b u f f e r   s p a c e   f o r   i n p u t  
       *   @ p a r a m [ i n , o u t ]       I m _ o u t             p o i n t e r   t o   o u t p u t   t e n s o r  
       *   @ r e t u r n   n o n e .  
       *  
       *   @ d e t a i l s  
       *  
       *   < b > B u f f e r   s i z e : < / b >  
       *  
       *   b u f f e r A   s i z e :     0  
       *  
       *   T h e   p o o l i n g   f u n c t i o n   i s   i m p l e m e n t e d   a s   s p l i t   x - p o o l i n g   t h e n  
       *   y - p o o l i n g .  
       *  
       *   T h i s   p o o l i n g   f u n c t i o n   i s   i n p u t - d e s t r u c t i v e .   I n p u t   d a t a   i s   u n d e f i n e d  
       *   a f t e r   c a l l i n g   t h i s   f u n c t i o n .  
       *  
       * /  
  
 v o i d  
 a r m _ m a x p o o l _ q 7 _ H W C ( q 7 _ t   *   I m _ i n ,  
                                       c o n s t   u i n t 1 6 _ t   d i m _ i m _ i n ,  
                                       c o n s t   u i n t 1 6 _ t   c h _ i m _ i n ,  
                                       c o n s t   u i n t 1 6 _ t   d i m _ k e r n e l ,  
                                       c o n s t   u i n t 1 6 _ t   p a d d i n g ,  
                                       c o n s t   u i n t 1 6 _ t   s t r i d e ,   c o n s t   u i n t 1 6 _ t   d i m _ i m _ o u t ,   q 7 _ t   *   b u f f e r A ,   q 7 _ t   *   I m _ o u t )  
 {  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
         / *   R u n   t h e   f o l l o w i n g   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 7   * /  
  
         i n t 1 6 _ t       i _ x ,   i _ y ;  
  
         / *   f i r s t   d o e s   t h e   p o o l i n g   a l o n g   x   a x i s   * /  
         f o r   ( i _ y   =   0 ;   i _ y   <   d i m _ i m _ i n ;   i _ y + + )  
         {  
  
                 f o r   ( i _ x   =   0 ;   i _ x   <   d i m _ i m _ o u t ;   i _ x + + )  
                 {  
                         / *   f o r   e a c h   o u t p u t   p i x e l   * /  
                         q 7 _ t           * t a r g e t   =   I m _ i n   +   ( i _ y   *   d i m _ i m _ i n   +   i _ x )   *   c h _ i m _ i n ;  
                         q 7 _ t           * w i n _ s t a r t ;  
                         q 7 _ t           * w i n _ s t o p ;  
                         i f   ( i _ x   *   s t r i d e   -   p a d d i n g   <   0 )  
                         {  
                                 w i n _ s t a r t   =   t a r g e t ;  
                         }   e l s e  
                         {  
                                 w i n _ s t a r t   =   I m _ i n   +   ( i _ y   *   d i m _ i m _ i n   +   i _ x   *   s t r i d e   -   p a d d i n g )   *   c h _ i m _ i n ;  
                         }  
  
                         i f   ( i _ x   *   s t r i d e   -   p a d d i n g   +   d i m _ k e r n e l   > =   d i m _ i m _ i n )  
                         {  
                                 w i n _ s t o p   =   I m _ i n   +   ( i _ y   *   d i m _ i m _ i n   +   d i m _ i m _ i n )   *   c h _ i m _ i n ;  
                         }   e l s e  
                         {  
                                 w i n _ s t o p   =   I m _ i n   +   ( i _ y   *   d i m _ i m _ i n   +   i _ x   *   s t r i d e   -   p a d d i n g   +   d i m _ k e r n e l )   *   c h _ i m _ i n ;  
                         }  
  
                         / *   f i r s t   s t e p   i s   t o   c o p y   o v e r   i n i t i a l   d a t a   * /  
                         / *   a r m _ c o p y _ q 7 ( w i n _ s t a r t ,   t a r g e t ,   c h _ i m _ i n ) ;   * /  
                         m e m m o v e ( t a r g e t ,   w i n _ s t a r t ,   c h _ i m _ i n ) ;  
  
                         / *   s t a r t   t h e   m a x   o p e r a t i o n   f r o m   t h e   s e c o n d   p a r t   * /  
                         w i n _ s t a r t   + =   c h _ i m _ i n ;  
                         f o r   ( ;   w i n _ s t a r t   <   w i n _ s t o p ;   w i n _ s t a r t   + =   c h _ i m _ i n )  
                         {  
                                 c o m p a r e _ a n d _ r e p l a c e _ i f _ l a r g e r _ q 7 ( t a r g e t ,   w i n _ s t a r t ,   c h _ i m _ i n ) ;  
                         }  
                 }  
         }  
  
         / *   t h e n   d o e s   t h e   p o o l i n g   a l o n g   y   a x i s   * /  
         f o r   ( i _ y   =   0 ;   i _ y   <   d i m _ i m _ o u t ;   i _ y + + )  
         {  
  
                 / *   f o r   e a c h   o u t p u t   r o w   * /  
                 q 7 _ t           * t a r g e t   =   I m _ o u t   +   i _ y   *   d i m _ i m _ o u t   *   c h _ i m _ i n ;  
                 q 7 _ t           * r o w _ s t a r t ;  
                 q 7 _ t           * r o w _ e n d ;  
                 / *   s e t t i n g   t h e   s t a r t i n g   r o w   * /  
                 i f   ( i _ y   *   s t r i d e   -   p a d d i n g   <   0 )  
                 {  
                         r o w _ s t a r t   =   I m _ i n ;  
                 }   e l s e  
                 {  
                         r o w _ s t a r t   =   I m _ i n   +   ( i _ y   *   s t r i d e   -   p a d d i n g )   *   d i m _ i m _ i n   *   c h _ i m _ i n ;  
                 }  
                 / *   s e t t i n g   t h e   s t o p p i n g   r o w   * /  
                 i f   ( i _ y   *   s t r i d e   -   p a d d i n g   +   d i m _ k e r n e l   > =   d i m _ i m _ i n )  
                 {  
                         r o w _ e n d   =   I m _ i n   +   d i m _ i m _ i n   *   d i m _ i m _ i n   *   c h _ i m _ i n ;  
                 }   e l s e  
                 {  
                         r o w _ e n d   =   I m _ i n   +   ( i _ y   *   s t r i d e   -   p a d d i n g   +   d i m _ k e r n e l )   *   d i m _ i m _ i n   *   c h _ i m _ i n ;  
                 }  
  
                 / *   c o p y   o v e r   t h e   f i r s t   r o w   * /  
                 / *   a r m _ c o p y _ q 7 ( r o w _ s t a r t ,   t a r g e t ,   d i m _ i m _ o u t   *   c h _ i m _ i n ) ;   * /  
                 m e m m o v e ( t a r g e t ,   r o w _ s t a r t ,   d i m _ i m _ o u t   *   c h _ i m _ i n ) ;  
  
                 / *   m o v e   o v e r   t o   n e x t   r o w   * /  
                 r o w _ s t a r t   + =   c h _ i m _ i n   *   d i m _ i m _ i n ;  
  
                 f o r   ( ;   r o w _ s t a r t   <   r o w _ e n d ;   r o w _ s t a r t   + =   d i m _ i m _ i n   *   c h _ i m _ i n )  
                 {  
                         c o m p a r e _ a n d _ r e p l a c e _ i f _ l a r g e r _ q 7 ( t a r g e t ,   r o w _ s t a r t ,   d i m _ i m _ o u t   *   c h _ i m _ i n ) ;  
                 }  
         }  
  
 # e l s e  
         / *   R u n   t h e   f o l l o w i n g   c o d e   a s   r e f e r e n c e   i m p l e m e n t a t i o n   f o r   C o r t e x - M 0   a n d   C o r t e x - M 3   * /  
  
         i n t 1 6 _ t       i _ c h _ i n ,   i _ x ,   i _ y ;  
         i n t 1 6 _ t       k _ x ,   k _ y ;  
  
         f o r   ( i _ c h _ i n   =   0 ;   i _ c h _ i n   <   c h _ i m _ i n ;   i _ c h _ i n + + )  
         {  
                 f o r   ( i _ y   =   0 ;   i _ y   <   d i m _ i m _ o u t ;   i _ y + + )  
                 {  
                         f o r   ( i _ x   =   0 ;   i _ x   <   d i m _ i m _ o u t ;   i _ x + + )  
                         {  
                                 i n t               m a x   =   - 1 2 9 ;  
                                 f o r   ( k _ y   =   i _ y   *   s t r i d e   -   p a d d i n g ;   k _ y   <   i _ y   *   s t r i d e   -   p a d d i n g   +   d i m _ k e r n e l ;   k _ y + + )  
                                 {  
                                         f o r   ( k _ x   =   i _ x   *   s t r i d e   -   p a d d i n g ;   k _ x   <   i _ x   *   s t r i d e   -   p a d d i n g   +   d i m _ k e r n e l ;   k _ x + + )  
                                         {  
                                                 i f   ( k _ y   > =   0   & &   k _ x   > =   0   & &   k _ y   <   d i m _ i m _ i n   & &   k _ x   <   d i m _ i m _ i n )  
                                                 {  
                                                         i f   ( I m _ i n [ i _ c h _ i n   +   c h _ i m _ i n   *   ( k _ x   +   k _ y   *   d i m _ i m _ i n ) ]   >   m a x )  
                                                         {  
                                                                 m a x   =   I m _ i n [ i _ c h _ i n   +   c h _ i m _ i n   *   ( k _ x   +   k _ y   *   d i m _ i m _ i n ) ] ;  
                                                         }  
                                                 }  
                                         }  
                                 }  
                                 I m _ o u t [ i _ c h _ i n   +   c h _ i m _ i n   *   ( i _ x   +   i _ y   *   d i m _ i m _ o u t ) ]   =   m a x ;  
                         }  
                 }  
         }  
  
 # e n d i f                                                     / *   A R M _ M A T H _ D S P   * /  
  
 }  
  
     / * *  
       *   @ b r i e f   Q 7   a v e r a g e   p o o l i n g   f u n c t i o n  
       *   @ p a r a m [ i n , o u t ]       I m _ i n               p o i n t e r   t o   i n p u t   t e n s o r  
       *   @ p a r a m [ i n ]               d i m _ i m _ i n       i n p u t   t e n s o r   d i m e n t i o n  
       *   @ p a r a m [ i n ]               c h _ i m _ i n         n u m b e r   o f   i n p u t   t e n s o r   c h a n n e l s  
       *   @ p a r a m [ i n ]               d i m _ k e r n e l     f i l t e r   k e r n e l   s i z e  
       *   @ p a r a m [ i n ]               p a d d i n g           p a d d i n g   s i z e s  
       *   @ p a r a m [ i n ]               s t r i d e             c o n v o l u t i o n   s t r i d e  
       *   @ p a r a m [ i n ]               d i m _ i m _ o u t     o u t p u t   t e n s o r   d i m e n s i o n  
       *   @ p a r a m [ i n , o u t ]       b u f f e r A           p o i n t e r   t o   b u f f e r   s p a c e   f o r   i n p u t  
       *   @ p a r a m [ i n , o u t ]       I m _ o u t             p o i n t e r   t o   o u t p u t   t e n s o r  
       *   @ r e t u r n   n o n e .  
       *  
       *   @ d e t a i l s  
       *  
       *   < b > B u f f e r   s i z e : < / b >  
       *  
       *   b u f f e r A   s i z e :     2 * d i m _ i m _ o u t * c h _ i m _ i n  
       *  
       *   T h e   p o o l i n g   f u n c t i o n   i s   i m p l e m e n t e d   a s   s p l i t   x - p o o l i n g   t h e n  
       *   y - p o o l i n g .  
       *  
       *   T h i s   p o o l i n g   f u n c t i o n   i s   i n p u t - d e s t r u c t i v e .   I n p u t   d a t a   i s   u n d e f i n e d  
       *   a f t e r   c a l l i n g   t h i s   f u n c t i o n .  
       *  
       * /  
  
 v o i d  
 a r m _ a v e p o o l _ q 7 _ H W C ( q 7 _ t   *   I m _ i n ,  
                                       c o n s t   u i n t 1 6 _ t   d i m _ i m _ i n ,  
                                       c o n s t   u i n t 1 6 _ t   c h _ i m _ i n ,  
                                       c o n s t   u i n t 1 6 _ t   d i m _ k e r n e l ,  
                                       c o n s t   u i n t 1 6 _ t   p a d d i n g ,  
                                       c o n s t   u i n t 1 6 _ t   s t r i d e ,   c o n s t   u i n t 1 6 _ t   d i m _ i m _ o u t ,   q 7 _ t   *   b u f f e r A ,   q 7 _ t   *   I m _ o u t )  
 {  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
         / *   R u n   t h e   f o l l o w i n g   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 7   * /  
  
         q 1 5 _ t         * b u f f e r   =   ( q 1 5 _ t   * )   b u f f e r A ;  
         i n t 1 6 _ t       i _ x ,   i _ y ;  
         i n t 1 6 _ t       c o u n t   =   0 ;  
  
         / *   f i r s t   d o e s   t h e   p o o l i n g   a l o n g   x   a x i s   * /  
         f o r   ( i _ y   =   0 ;   i _ y   <   d i m _ i m _ i n ;   i _ y + + )  
         {  
  
                 f o r   ( i _ x   =   0 ;   i _ x   <   d i m _ i m _ o u t ;   i _ x + + )  
                 {  
                         / *   f o r   e a c h   o u t p u t   p i x e l   * /  
                         q 7 _ t           * t a r g e t   =   I m _ i n   +   ( i _ y   *   d i m _ i m _ i n   +   i _ x )   *   c h _ i m _ i n ;  
                         q 7 _ t           * w i n _ s t a r t ;  
                         q 7 _ t           * w i n _ s t o p ;  
                         i f   ( i _ x   *   s t r i d e   -   p a d d i n g   <   0 )  
                         {  
                                 w i n _ s t a r t   =   t a r g e t ;  
                         }   e l s e  
                         {  
                                 w i n _ s t a r t   =   I m _ i n   +   ( i _ y   *   d i m _ i m _ i n   +   i _ x   *   s t r i d e   -   p a d d i n g )   *   c h _ i m _ i n ;  
                         }  
  
                         i f   ( i _ x   *   s t r i d e   -   p a d d i n g   +   d i m _ k e r n e l   > =   d i m _ i m _ i n )  
                         {  
                                 w i n _ s t o p   =   I m _ i n   +   ( i _ y   *   d i m _ i m _ i n   +   d i m _ i m _ i n )   *   c h _ i m _ i n ;  
                         }   e l s e  
                         {  
                                 w i n _ s t o p   =   I m _ i n   +   ( i _ y   *   d i m _ i m _ i n   +   i _ x   *   s t r i d e   -   p a d d i n g   +   d i m _ k e r n e l )   *   c h _ i m _ i n ;  
                         }  
  
                         / *   f i r s t   s t e p   i s   t o   c o p y   o v e r   i n i t i a l   d a t a   * /  
                         a r m _ q 7 _ t o _ q 1 5 _ n o _ s h i f t ( w i n _ s t a r t ,   b u f f e r ,   c h _ i m _ i n ) ;  
                         c o u n t   =   1 ;  
  
                         / *   s t a r t   t h e   m a x   o p e r a t i o n   f r o m   t h e   s e c o n d   p a r t   * /  
                         w i n _ s t a r t   + =   c h _ i m _ i n ;  
                         f o r   ( ;   w i n _ s t a r t   <   w i n _ s t o p ;   w i n _ s t a r t   + =   c h _ i m _ i n )  
                         {  
                                 a c c u m u l a t e _ q 7 _ t o _ q 1 5 ( b u f f e r ,   w i n _ s t a r t ,   c h _ i m _ i n ) ;  
                                 c o u n t + + ;  
                         }  
                         b u f f e r _ s c a l e _ b a c k _ q 1 5 _ t o _ q 7 ( b u f f e r ,   t a r g e t ,   c h _ i m _ i n ,   c o u n t ) ;  
                 }  
         }  
  
         / *   t h e n   d o e s   t h e   p o o l i n g   a l o n g   y   a x i s   * /  
         f o r   ( i _ y   =   0 ;   i _ y   <   d i m _ i m _ o u t ;   i _ y + + )  
         {  
                 / *   f o r   e a c h   o u t p u t   r o w   * /  
                 q 7 _ t           * t a r g e t   =   I m _ o u t   +   i _ y   *   d i m _ i m _ o u t   *   c h _ i m _ i n ;  
                 q 7 _ t           * r o w _ s t a r t ;  
                 q 7 _ t           * r o w _ e n d ;  
                 / *   s e t t i n g   t h e   s t a r t i n g   r o w   * /  
                 i f   ( i _ y   *   s t r i d e   -   p a d d i n g   <   0 )  
                 {  
                         r o w _ s t a r t   =   I m _ i n ;  
                 }   e l s e  
                 {  
                         r o w _ s t a r t   =   I m _ i n   +   ( i _ y   *   s t r i d e   -   p a d d i n g )   *   d i m _ i m _ i n   *   c h _ i m _ i n ;  
                 }  
                 / *   s e t t i n g   t h e   s t o p p i n g   r o w   * /  
                 i f   ( i _ y   *   s t r i d e   -   p a d d i n g   +   d i m _ k e r n e l   > =   d i m _ i m _ i n )  
                 {  
                         r o w _ e n d   =   I m _ i n   +   d i m _ i m _ i n   *   d i m _ i m _ i n   *   c h _ i m _ i n ;  
                 }   e l s e  
                 {  
                         r o w _ e n d   =   I m _ i n   +   ( i _ y   *   s t r i d e   -   p a d d i n g   +   d i m _ k e r n e l )   *   d i m _ i m _ i n   *   c h _ i m _ i n ;  
                 }  
  
                 / *   c o p y   o v e r   t h e   f i r s t   r o w   * /  
                 a r m _ q 7 _ t o _ q 1 5 _ n o _ s h i f t ( r o w _ s t a r t ,   b u f f e r ,   d i m _ i m _ o u t   *   c h _ i m _ i n ) ;  
                 c o u n t   =   1 ;  
  
                 / *   m o v e   o v e r   t o   n e x t   r o w   * /  
                 r o w _ s t a r t   + =   c h _ i m _ i n   *   d i m _ i m _ i n ;  
  
                 f o r   ( ;   r o w _ s t a r t   <   r o w _ e n d ;   r o w _ s t a r t   + =   d i m _ i m _ i n   *   c h _ i m _ i n )  
                 {  
                         a c c u m u l a t e _ q 7 _ t o _ q 1 5 ( b u f f e r ,   r o w _ s t a r t ,   d i m _ i m _ o u t   *   c h _ i m _ i n ) ;  
                         c o u n t + + ;  
                 }  
                 b u f f e r _ s c a l e _ b a c k _ q 1 5 _ t o _ q 7 ( b u f f e r ,   t a r g e t ,   d i m _ i m _ o u t   *   c h _ i m _ i n ,   c o u n t ) ;  
         }  
  
 # e l s e  
         / *   R u n   t h e   f o l l o w i n g   c o d e   a s   r e f e r e n c e   i m p l e m e n t a t i o n   f o r   C o r t e x - M 0   a n d   C o r t e x - M 3   * /  
  
         i n t 1 6 _ t       i _ c h _ i n ,   i _ x ,   i _ y ;  
         i n t 1 6 _ t       k _ x ,   k _ y ;  
  
         f o r   ( i _ c h _ i n   =   0 ;   i _ c h _ i n   <   c h _ i m _ i n ;   i _ c h _ i n + + )  
         {  
                 f o r   ( i _ y   =   0 ;   i _ y   <   d i m _ i m _ o u t ;   i _ y + + )  
                 {  
                         f o r   ( i _ x   =   0 ;   i _ x   <   d i m _ i m _ o u t ;   i _ x + + )  
                         {  
                                 i n t               s u m   =   0 ;  
                                 i n t               c o u n t   =   0 ;  
                                 f o r   ( k _ y   =   i _ y   *   s t r i d e   -   p a d d i n g ;   k _ y   <   i _ y   *   s t r i d e   -   p a d d i n g   +   d i m _ k e r n e l ;   k _ y + + )  
                                 {  
                                         f o r   ( k _ x   =   i _ x   *   s t r i d e   -   p a d d i n g ;   k _ x   <   i _ x   *   s t r i d e   -   p a d d i n g   +   d i m _ k e r n e l ;   k _ x + + )  
                                         {  
                                                 i f   ( k _ y   > =   0   & &   k _ x   > =   0   & &   k _ y   <   d i m _ i m _ i n   & &   k _ x   <   d i m _ i m _ i n )  
                                                 {  
                                                         s u m   + =   I m _ i n [ i _ c h _ i n   +   c h _ i m _ i n   *   ( k _ x   +   k _ y   *   d i m _ i m _ i n ) ] ;  
                                                         c o u n t + + ;  
                                                 }  
                                         }  
                                 }  
                                 I m _ o u t [ i _ c h _ i n   +   c h _ i m _ i n   *   ( i _ x   +   i _ y   *   d i m _ i m _ o u t ) ]   =   s u m   /   c o u n t ;  
                         }  
                 }  
         }  
  
 # e n d i f                                                     / *   A R M _ M A T H _ D S P   * /  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   P o o l i n g   g r o u p  
   * /  