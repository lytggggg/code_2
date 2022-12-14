??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ c f f t _ r a d i x 2 _ q 3 1 . c  
   *   D e s c r i p t i o n :     R a d i x - 2   D e c i m a t i o n   i n   F r e q u e n c y   C F F T   &   C I F F T   F i x e d   p o i n t   p r o c e s s i n g   f u n c t i o n  
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
 v o i d   a r m _ r a d i x 2 _ b u t t e r f l y _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   f f t L e n ,  
     q 3 1 _ t   *   p C o e f ,  
     u i n t 1 6 _ t   t w i d C o e f M o d i f i e r ) ;  
  
 v o i d   a r m _ r a d i x 2 _ b u t t e r f l y _ i n v e r s e _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   f f t L e n ,  
     q 3 1 _ t   *   p C o e f ,  
     u i n t 1 6 _ t   t w i d C o e f M o d i f i e r ) ;  
  
 v o i d   a r m _ b i t r e v e r s a l _ q 3 1 (  
     q 3 1 _ t   *   p S r c ,  
     u i n t 3 2 _ t   f f t L e n ,  
     u i n t 1 6 _ t   b i t R e v F a c t o r ,  
     u i n t 1 6 _ t   *   p B i t R e v T a b ) ;  
  
 / * *  
 *   @ i n g r o u p   g r o u p T r a n s f o r m s  
 * /  
  
 / * *  
 *   @ a d d t o g r o u p   C o m p l e x F F T  
 *   @ {  
 * /  
  
 / * *  
 *   @ d e t a i l s  
 *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   f i x e d - p o i n t   C F F T / C I F F T .  
 *   @ d e p r e c a t e d   D o   n o t   u s e   t h i s   f u n c t i o n .     I t   h a s   b e e n   s u p e r s e d e d   b y   \ r e f   a r m _ c f f t _ q 3 1   a n d   w i l l   b e   r e m o v e d  
 *   @ p a r a m [ i n ]             * S         p o i n t s   t o   a n   i n s t a n c e   o f   t h e   f i x e d - p o i n t   C F F T / C I F F T   s t r u c t u r e .  
 *   @ p a r a m [ i n ,   o u t ]   * p S r c   p o i n t s   t o   t h e   c o m p l e x   d a t a   b u f f e r   o f   s i z e   < c o d e > 2 * f f t L e n < / c o d e > .   P r o c e s s i n g   o c c u r s   i n - p l a c e .  
 *   @ r e t u r n   n o n e .  
 * /  
  
 v o i d   a r m _ c f f t _ r a d i x 2 _ q 3 1 (  
 c o n s t   a r m _ c f f t _ r a d i x 2 _ i n s t a n c e _ q 3 1   *   S ,  
 q 3 1 _ t   *   p S r c )  
 {  
  
       i f   ( S - > i f f t F l a g   = =   1 U )  
       {  
             a r m _ r a d i x 2 _ b u t t e r f l y _ i n v e r s e _ q 3 1 ( p S r c ,   S - > f f t L e n ,  
             S - > p T w i d d l e ,   S - > t w i d C o e f M o d i f i e r ) ;  
       }  
       e l s e  
       {  
             a r m _ r a d i x 2 _ b u t t e r f l y _ q 3 1 ( p S r c ,   S - > f f t L e n ,  
             S - > p T w i d d l e ,   S - > t w i d C o e f M o d i f i e r ) ;  
       }  
  
       a r m _ b i t r e v e r s a l _ q 3 1 ( p S r c ,   S - > f f t L e n ,   S - > b i t R e v F a c t o r ,   S - > p B i t R e v T a b l e ) ;  
 }  
  
 / * *  
 *   @ }   e n d   o f   C o m p l e x F F T   g r o u p  
 * /  
  
 v o i d   a r m _ r a d i x 2 _ b u t t e r f l y _ q 3 1 (  
 q 3 1 _ t   *   p S r c ,  
 u i n t 3 2 _ t   f f t L e n ,  
 q 3 1 _ t   *   p C o e f ,  
 u i n t 1 6 _ t   t w i d C o e f M o d i f i e r )  
 {  
  
       u n s i g n e d   i ,   j ,   k ,   l ,   m ;  
       u n s i g n e d   n 1 ,   n 2 ,   i a ;  
       q 3 1 _ t   x t ,   y t ,   c o s V a l ,   s i n V a l ;  
       q 3 1 _ t   p 0 ,   p 1 ;  
  
       / / N   =   f f t L e n ;  
       n 2   =   f f t L e n ;  
  
       n 1   =   n 2 ;  
       n 2   =   n 2   > >   1 ;  
       i a   =   0 ;  
  
       / /   l o o p   f o r   g r o u p s  
       f o r   ( i   =   0 ;   i   <   n 2 ;   i + + )  
       {  
             c o s V a l   =   p C o e f [ i a   *   2 ] ;  
             s i n V a l   =   p C o e f [ ( i a   *   2 )   +   1 ] ;  
             i a   =   i a   +   t w i d C o e f M o d i f i e r ;  
  
             l   =   i   +   n 2 ;  
             x t   =   ( p S r c [ 2   *   i ]   > >   1 U )   -   ( p S r c [ 2   *   l ]   > >   1 U ) ;  
             p S r c [ 2   *   i ]   =   ( ( p S r c [ 2   *   i ]   > >   1 U )   +   ( p S r c [ 2   *   l ]   > >   1 U ) )   > >   1 U ;  
  
             y t   =   ( p S r c [ 2   *   i   +   1 ]   > >   1 U )   -   ( p S r c [ 2   *   l   +   1 ]   > >   1 U ) ;  
             p S r c [ 2   *   i   +   1 ]   =  
                 ( ( p S r c [ 2   *   l   +   1 ]   > >   1 U )   +   ( p S r c [ 2   *   i   +   1 ]   > >   1 U ) )   > >   1 U ;  
  
             m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 0 ,   x t ,   c o s V a l ) ;  
             m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 1 ,   y t ,   c o s V a l ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 0 ,   y t ,   s i n V a l ) ;  
             m u l t S u b _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 1 ,   x t ,   s i n V a l ) ;  
  
             p S r c [ 2 U   *   l ]   =   p 0 ;  
             p S r c [ 2 U   *   l   +   1 U ]   =   p 1 ;  
  
       }                                                           / /   g r o u p s   l o o p   e n d  
  
       t w i d C o e f M o d i f i e r   < < =   1 U ;  
  
       / /   l o o p   f o r   s t a g e  
       f o r   ( k   =   f f t L e n   /   2 ;   k   >   2 ;   k   =   k   > >   1 )  
       {  
             n 1   =   n 2 ;  
             n 2   =   n 2   > >   1 ;  
             i a   =   0 ;  
  
             / /   l o o p   f o r   g r o u p s  
             f o r   ( j   =   0 ;   j   <   n 2 ;   j + + )  
             {  
                   c o s V a l   =   p C o e f [ i a   *   2 ] ;  
                   s i n V a l   =   p C o e f [ ( i a   *   2 )   +   1 ] ;  
                   i a   =   i a   +   t w i d C o e f M o d i f i e r ;  
  
                   / /   l o o p   f o r   b u t t e r f l y  
                   i   =   j ;  
                   m   =   f f t L e n   /   n 1 ;  
                   d o  
                   {  
                         l   =   i   +   n 2 ;  
                         x t   =   p S r c [ 2   *   i ]   -   p S r c [ 2   *   l ] ;  
                         p S r c [ 2   *   i ]   =   ( p S r c [ 2   *   i ]   +   p S r c [ 2   *   l ] )   > >   1 U ;  
  
                         y t   =   p S r c [ 2   *   i   +   1 ]   -   p S r c [ 2   *   l   +   1 ] ;  
                         p S r c [ 2   *   i   +   1 ]   =   ( p S r c [ 2   *   l   +   1 ]   +   p S r c [ 2   *   i   +   1 ] )   > >   1 U ;  
  
                         m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 0 ,   x t ,   c o s V a l ) ;  
                         m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 1 ,   y t ,   c o s V a l ) ;  
                         m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 0 ,   y t ,   s i n V a l ) ;  
                         m u l t S u b _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 1 ,   x t ,   s i n V a l ) ;  
  
                         p S r c [ 2 U   *   l ]   =   p 0 ;  
                         p S r c [ 2 U   *   l   +   1 U ]   =   p 1 ;  
                         i   + =   n 1 ;  
                         m - - ;  
                   }   w h i l e   (   m   >   0 ) ;                                       / /   b u t t e r f l y   l o o p   e n d  
  
             }                                                       / /   g r o u p s   l o o p   e n d  
  
             t w i d C o e f M o d i f i e r   < < =   1 U ;  
       }                                                           / /   s t a g e s   l o o p   e n d  
  
       n 1   =   n 2 ;  
       n 2   =   n 2   > >   1 ;  
       i a   =   0 ;  
  
       c o s V a l   =   p C o e f [ i a   *   2 ] ;  
       s i n V a l   =   p C o e f [ ( i a   *   2 )   +   1 ] ;  
       i a   =   i a   +   t w i d C o e f M o d i f i e r ;  
  
       / /   l o o p   f o r   b u t t e r f l y  
       f o r   ( i   =   0 ;   i   <   f f t L e n ;   i   + =   n 1 )  
       {  
             l   =   i   +   n 2 ;  
             x t   =   p S r c [ 2   *   i ]   -   p S r c [ 2   *   l ] ;  
             p S r c [ 2   *   i ]   =   ( p S r c [ 2   *   i ]   +   p S r c [ 2   *   l ] ) ;  
  
             y t   =   p S r c [ 2   *   i   +   1 ]   -   p S r c [ 2   *   l   +   1 ] ;  
             p S r c [ 2   *   i   +   1 ]   =   ( p S r c [ 2   *   l   +   1 ]   +   p S r c [ 2   *   i   +   1 ] ) ;  
  
             p S r c [ 2 U   *   l ]   =   x t ;  
  
             p S r c [ 2 U   *   l   +   1 U ]   =   y t ;  
  
             i   + =   n 1 ;  
             l   =   i   +   n 2 ;  
  
             x t   =   p S r c [ 2   *   i ]   -   p S r c [ 2   *   l ] ;  
             p S r c [ 2   *   i ]   =   ( p S r c [ 2   *   i ]   +   p S r c [ 2   *   l ] ) ;  
  
             y t   =   p S r c [ 2   *   i   +   1 ]   -   p S r c [ 2   *   l   +   1 ] ;  
             p S r c [ 2   *   i   +   1 ]   =   ( p S r c [ 2   *   l   +   1 ]   +   p S r c [ 2   *   i   +   1 ] ) ;  
  
             p S r c [ 2 U   *   l ]   =   x t ;  
  
             p S r c [ 2 U   *   l   +   1 U ]   =   y t ;  
  
       }                                                           / /   b u t t e r f l y   l o o p   e n d  
  
 }  
  
  
 v o i d   a r m _ r a d i x 2 _ b u t t e r f l y _ i n v e r s e _ q 3 1 (  
 q 3 1 _ t   *   p S r c ,  
 u i n t 3 2 _ t   f f t L e n ,  
 q 3 1 _ t   *   p C o e f ,  
 u i n t 1 6 _ t   t w i d C o e f M o d i f i e r )  
 {  
  
       u n s i g n e d   i ,   j ,   k ,   l ;  
       u n s i g n e d   n 1 ,   n 2 ,   i a ;  
       q 3 1 _ t   x t ,   y t ,   c o s V a l ,   s i n V a l ;  
       q 3 1 _ t   p 0 ,   p 1 ;  
  
       / / N   =   f f t L e n ;  
       n 2   =   f f t L e n ;  
  
       n 1   =   n 2 ;  
       n 2   =   n 2   > >   1 ;  
       i a   =   0 ;  
  
       / /   l o o p   f o r   g r o u p s  
       f o r   ( i   =   0 ;   i   <   n 2 ;   i + + )  
       {  
             c o s V a l   =   p C o e f [ i a   *   2 ] ;  
             s i n V a l   =   p C o e f [ ( i a   *   2 )   +   1 ] ;  
             i a   =   i a   +   t w i d C o e f M o d i f i e r ;  
  
             l   =   i   +   n 2 ;  
             x t   =   ( p S r c [ 2   *   i ]   > >   1 U )   -   ( p S r c [ 2   *   l ]   > >   1 U ) ;  
             p S r c [ 2   *   i ]   =   ( ( p S r c [ 2   *   i ]   > >   1 U )   +   ( p S r c [ 2   *   l ]   > >   1 U ) )   > >   1 U ;  
  
             y t   =   ( p S r c [ 2   *   i   +   1 ]   > >   1 U )   -   ( p S r c [ 2   *   l   +   1 ]   > >   1 U ) ;  
             p S r c [ 2   *   i   +   1 ]   =  
                 ( ( p S r c [ 2   *   l   +   1 ]   > >   1 U )   +   ( p S r c [ 2   *   i   +   1 ]   > >   1 U ) )   > >   1 U ;  
  
             m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 0 ,   x t ,   c o s V a l ) ;  
             m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 1 ,   y t ,   c o s V a l ) ;  
             m u l t S u b _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 0 ,   y t ,   s i n V a l ) ;  
             m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 1 ,   x t ,   s i n V a l ) ;  
  
             p S r c [ 2 U   *   l ]   =   p 0 ;  
             p S r c [ 2 U   *   l   +   1 U ]   =   p 1 ;  
       }                                                           / /   g r o u p s   l o o p   e n d  
  
       t w i d C o e f M o d i f i e r   =   t w i d C o e f M o d i f i e r   < <   1 U ;  
  
       / /   l o o p   f o r   s t a g e  
       f o r   ( k   =   f f t L e n   /   2 ;   k   >   2 ;   k   =   k   > >   1 )  
       {  
             n 1   =   n 2 ;  
             n 2   =   n 2   > >   1 ;  
             i a   =   0 ;  
  
             / /   l o o p   f o r   g r o u p s  
             f o r   ( j   =   0 ;   j   <   n 2 ;   j + + )  
             {  
                   c o s V a l   =   p C o e f [ i a   *   2 ] ;  
                   s i n V a l   =   p C o e f [ ( i a   *   2 )   +   1 ] ;  
                   i a   =   i a   +   t w i d C o e f M o d i f i e r ;  
  
                   / /   l o o p   f o r   b u t t e r f l y  
                   f o r   ( i   =   j ;   i   <   f f t L e n ;   i   + =   n 1 )  
                   {  
                         l   =   i   +   n 2 ;  
                         x t   =   p S r c [ 2   *   i ]   -   p S r c [ 2   *   l ] ;  
                         p S r c [ 2   *   i ]   =   ( p S r c [ 2   *   i ]   +   p S r c [ 2   *   l ] )   > >   1 U ;  
  
                         y t   =   p S r c [ 2   *   i   +   1 ]   -   p S r c [ 2   *   l   +   1 ] ;  
                         p S r c [ 2   *   i   +   1 ]   =   ( p S r c [ 2   *   l   +   1 ]   +   p S r c [ 2   *   i   +   1 ] )   > >   1 U ;  
  
                         m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 0 ,   x t ,   c o s V a l ) ;  
                         m u l t _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 1 ,   y t ,   c o s V a l ) ;  
                         m u l t S u b _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 0 ,   y t ,   s i n V a l ) ;  
                         m u l t A c c _ 3 2 x 3 2 _ k e e p 3 2 _ R ( p 1 ,   x t ,   s i n V a l ) ;  
  
                         p S r c [ 2 U   *   l ]   =   p 0 ;  
                         p S r c [ 2 U   *   l   +   1 U ]   =   p 1 ;  
                   }                                                   / /   b u t t e r f l y   l o o p   e n d  
  
             }                                                       / /   g r o u p s   l o o p   e n d  
  
             t w i d C o e f M o d i f i e r   =   t w i d C o e f M o d i f i e r   < <   1 U ;  
       }                                                           / /   s t a g e s   l o o p   e n d  
  
       n 1   =   n 2 ;  
       n 2   =   n 2   > >   1 ;  
       i a   =   0 ;  
  
       c o s V a l   =   p C o e f [ i a   *   2 ] ;  
       s i n V a l   =   p C o e f [ ( i a   *   2 )   +   1 ] ;  
       i a   =   i a   +   t w i d C o e f M o d i f i e r ;  
  
       / /   l o o p   f o r   b u t t e r f l y  
       f o r   ( i   =   0 ;   i   <   f f t L e n ;   i   + =   n 1 )  
       {  
             l   =   i   +   n 2 ;  
             x t   =   p S r c [ 2   *   i ]   -   p S r c [ 2   *   l ] ;  
             p S r c [ 2   *   i ]   =   ( p S r c [ 2   *   i ]   +   p S r c [ 2   *   l ] ) ;  
  
             y t   =   p S r c [ 2   *   i   +   1 ]   -   p S r c [ 2   *   l   +   1 ] ;  
             p S r c [ 2   *   i   +   1 ]   =   ( p S r c [ 2   *   l   +   1 ]   +   p S r c [ 2   *   i   +   1 ] ) ;  
  
             p S r c [ 2 U   *   l ]   =   x t ;  
  
             p S r c [ 2 U   *   l   +   1 U ]   =   y t ;  
  
             i   + =   n 1 ;  
             l   =   i   +   n 2 ;  
  
             x t   =   p S r c [ 2   *   i ]   -   p S r c [ 2   *   l ] ;  
             p S r c [ 2   *   i ]   =   ( p S r c [ 2   *   i ]   +   p S r c [ 2   *   l ] ) ;  
  
             y t   =   p S r c [ 2   *   i   +   1 ]   -   p S r c [ 2   *   l   +   1 ] ;  
             p S r c [ 2   *   i   +   1 ]   =   ( p S r c [ 2   *   l   +   1 ]   +   p S r c [ 2   *   i   +   1 ] ) ;  
  
             p S r c [ 2 U   *   l ]   =   x t ;  
  
             p S r c [ 2 U   *   l   +   1 U ]   =   y t ;  
  
       }                                                           / /   b u t t e r f l y   l o o p   e n d  
  
 }  