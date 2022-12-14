??# i n c l u d e   " r e f . h "  
  
 v o i d   r e f _ f i r _ i n t e r p o l a t e _ f 3 2 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     f l o a t 3 2 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     f l o a t 3 2 _ t   * p t r 1 ,   * p t r 2 ;                                                 / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f f i c i e n t   b u f f e r s   * /  
     f l o a t 3 2 _ t   s u m ;                                                                   / *   A c c u m u l a t o r   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ;                                                         / *   L o o p   c o u n t e r s   * /  
     u i n t 1 6 _ t   p h a s e L e n   =   S - > p h a s e L e n g t h ,   t a p C n t ;         / *   L e n g t h   o f   e a c h   p o l y p h a s e   f i l t e r   c o m p o n e n t   * /  
  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( p h a s e L e n   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   p h a s e L e n   -   1 ;  
  
     / *   T o t a l   n u m b e r   o f   i n t p u t   s a m p l e s   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     / *   L o o p   o v e r   t h e   b l o c k S i z e .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         / *   L o o p   o v e r   t h e   I n t e r p o l a t i o n   f a c t o r .   * /  
         i   =   S - > L ;  
  
         w h i l e   ( i   >   0 U )  
         {  
             / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
             s u m   =   0 . 0 f ;  
  
             / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
             p t r 1   =   p S t a t e ;  
  
             / *   I n i t i a l i z e   c o e f f i c i e n t   p o i n t e r   * /  
             p t r 2   =   p C o e f f s   +   i   -   1 ;  
  
             / *   L o o p   o v e r   t h e   p o l y P h a s e   l e n g t h   * /  
             t a p C n t   =   p h a s e L e n ;  
  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m   + =   * p t r 1 + +   *   * p t r 2 ;  
  
                 / *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 t a p C n t - - ;  
             }  
  
             / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   s u m ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   1                        
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   i n t e r p o l a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   1 ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   p h a s e L e n   -   1   s a m p l e s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     t a p C n t   =   p h a s e L e n   -   1 U ;  
  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
 }  
  
 v o i d   r e f _ f i r _ i n t e r p o l a t e _ q 3 1 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     q 3 1 _ t   * p t r 1 ,   * p t r 2 ;                                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f f i c i e n t   b u f f e r s   * /  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     q 6 3 _ t   s u m ;                                                                           / *   A c c u m u l a t o r   * /  
     q 3 1 _ t   x 0 ,   c 0 ;                                                                     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ;                                                         / *   L o o p   c o u n t e r s   * /  
     u i n t 1 6 _ t   p h a s e L e n   =   S - > p h a s e L e n g t h ,   t a p C n t ;         / *   L e n g t h   o f   e a c h   p o l y p h a s e   f i l t e r   c o m p o n e n t   * /  
  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( p h a s e L e n   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   ( q 3 1 _ t ) p h a s e L e n   -   1 ;  
  
     / *   T o t a l   n u m b e r   o f   i n t p u t   s a m p l e s   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     / *   L o o p   o v e r   t h e   b l o c k S i z e .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         / *   L o o p   o v e r   t h e   I n t e r p o l a t i o n   f a c t o r .   * /  
         i   =   S - > L ;  
  
         w h i l e   ( i   >   0 U )  
         {  
             / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
             s u m   =   0 ;  
  
             / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
             p t r 1   =   p S t a t e ;  
  
             / *   I n i t i a l i z e   c o e f f i c i e n t   p o i n t e r   * /  
             p t r 2   =   p C o e f f s   +   i   -   1 ;  
  
             t a p C n t   =   p h a s e L e n ;  
  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * ( p t r 2 ) ;  
  
                 / *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 0   =   * p t r 1 + + ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m   + =   ( q 6 3 _ t )   x 0   * c 0 ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 t a p C n t - - ;  
             }  
  
             / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p D s t + +   =   ( q 3 1 _ t ) ( s u m   > >   3 1 ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   1                        
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   i n t e r p o l a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   1 ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   p h a s e L e n   -   1   s a m p l e s   t o   t h e   s a t r t   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     t a p C n t   =   p h a s e L e n   -   1 U ;  
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
 }  
  
 v o i d   r e f _ f i r _ i n t e r p o l a t e _ q 1 5 (  
     c o n s t   a r m _ f i r _ i n t e r p o l a t e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 1 5 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r                                                                                         * /  
     q 1 5 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r                                                                             * /  
     q 1 5 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e                                 * /  
     q 1 5 _ t   * p t r 1 ,   * p t r 2 ;                                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f f i c i e n t   b u f f e r s           * /  
     q 6 3 _ t   s u m ;                                                                           / *   A c c u m u l a t o r   * /  
     q 1 5 _ t   x 0 ,   c 0 ;                                                                     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ,   t a p C n t ;                                         / *   L o o p   c o u n t e r s                                                                                         * /  
     u i n t 1 6 _ t   p h a s e L e n   =   S - > p h a s e L e n g t h ;                         / *   L e n g t h   o f   e a c h   p o l y p h a s e   f i l t e r   c o m p o n e n t   * /  
  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( p h a s e L e n   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   p h a s e L e n   -   1 ;  
  
     / *   T o t a l   n u m b e r   o f   i n t p u t   s a m p l e s   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     / *   L o o p   o v e r   t h e   b l o c k S i z e .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         / *   L o o p   o v e r   t h e   I n t e r p o l a t i o n   f a c t o r .   * /  
         i   =   S - > L ;  
  
         w h i l e   ( i   >   0 U )  
         {  
             / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
             s u m   =   0 ;  
  
             / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
             p t r 1   =   p S t a t e ;  
  
             / *   I n i t i a l i z e   c o e f f i c i e n t   p o i n t e r   * /  
             p t r 2   =   p C o e f f s   +   i   -   1 ;  
  
             / *   L o o p   o v e r   t h e   p o l y P h a s e   l e n g t h   * /  
             t a p C n t   =   ( u i n t 3 2 _ t ) p h a s e L e n ;  
  
             w h i l e   ( t a p C n t   >   0 U )  
             {  
                 / *   R e a d   t h e   c o e f f i c i e n t   * /  
                 c 0   =   * p t r 2 ;  
  
                 / *   I n c r e m e n t   t h e   c o e f f i c i e n t   p o i n t e r   b y   i n t e r p o l a t i o n   f a c t o r   t i m e s .   * /  
                 p t r 2   + =   S - > L ;  
  
                 / *   R e a d   t h e   i n p u t   s a m p l e   * /  
                 x 0   =   * p t r 1 + + ;  
  
                 / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
                 s u m   + =   ( q 3 1 _ t )   x 0   *   c 0 ;  
  
                 / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                 t a p C n t - - ;  
             }  
  
             / *   S t o r e   t h e   r e s u l t   a f t e r   c o n v e r t i n g   t o   1 . 1 5   f o r m a t   i n   t h e   d e s t i n a t i o n   b u f f e r   * /  
             * p D s t + +   =   r e f _ s a t _ q 1 5 ( s u m   > >   1 5 ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             i - - ;  
         }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   1                        
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   i n t e r p o l a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   1 ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   p h a s e L e n   -   1   s a m p l e s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     i   =   ( u i n t 3 2 _ t )   p h a s e L e n   -   1 U ;  
  
     w h i l e   ( i   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }  
  
 }  