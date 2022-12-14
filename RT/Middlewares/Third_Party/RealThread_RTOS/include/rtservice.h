??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 6 - 0 3 - 1 6           B e r n a r d             t h e   f i r s t   v e r s i o n  
   *   2 0 0 6 - 0 9 - 0 7           B e r n a r d             m o v e   t h e   k s e r v i c e   A P I s   t o   r t t h r e a d . h  
   *   2 0 0 7 - 0 6 - 2 7           B e r n a r d             f i x   t h e   r t _ l i s t _ r e m o v e   b u g  
   *   2 0 1 2 - 0 3 - 2 2           B e r n a r d             r e n a m e   k s e r v i c e . h   t o   r t s e r v i c e . h  
   *   2 0 1 7 - 1 1 - 1 5           J a s o n J i a           M o d i f y   r t _ s l i s t _ f o r e a c h   t o   r t _ s l i s t _ f o r _ e a c h _ e n t r y .  
   *                                                           M a k e   c o d e   c l e a n u p .  
   * /  
  
 # i f n d e f   _ _ R T _ S E R V I C E _ H _ _  
 # d e f i n e   _ _ R T _ S E R V I C E _ H _ _  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / * *  
   *   @ a d d t o g r o u p   K e r n e l S e r v i c e  
   * /  
  
 / * * @ { * /  
  
 / * *  
   *   r t _ c o n t a i n e r _ o f   -   r e t u r n   t h e   m e m b e r   a d d r e s s   o f   p t r ,   i f   t h e   t y p e   o f   p t r   i s   t h e  
   *   s t r u c t   t y p e .  
   * /  
 # d e f i n e   r t _ c o n t a i n e r _ o f ( p t r ,   t y p e ,   m e m b e r )   \  
         ( ( t y p e   * ) ( ( c h a r   * ) ( p t r )   -   ( u n s i g n e d   l o n g ) ( & ( ( t y p e   * ) 0 ) - > m e m b e r ) ) )  
  
  
 / * *  
   *   @ b r i e f   i n i t i a l i z e   a   l i s t   o b j e c t  
   * /  
 # d e f i n e   R T _ L I S T _ O B J E C T _ I N I T ( o b j e c t )   {   & ( o b j e c t ) ,   & ( o b j e c t )   }  
  
 / * *  
   *   @ b r i e f   i n i t i a l i z e   a   l i s t  
   *  
   *   @ p a r a m   l   l i s t   t o   b e   i n i t i a l i z e d  
   * /  
 r t _ i n l i n e   v o i d   r t _ l i s t _ i n i t ( r t _ l i s t _ t   * l )  
 {  
         l - > n e x t   =   l - > p r e v   =   l ;  
 }  
  
 / * *  
   *   @ b r i e f   i n s e r t   a   n o d e   a f t e r   a   l i s t  
   *  
   *   @ p a r a m   l   l i s t   t o   i n s e r t   i t  
   *   @ p a r a m   n   n e w   n o d e   t o   b e   i n s e r t e d  
   * /  
 r t _ i n l i n e   v o i d   r t _ l i s t _ i n s e r t _ a f t e r ( r t _ l i s t _ t   * l ,   r t _ l i s t _ t   * n )  
 {  
         l - > n e x t - > p r e v   =   n ;  
         n - > n e x t   =   l - > n e x t ;  
  
         l - > n e x t   =   n ;  
         n - > p r e v   =   l ;  
 }  
  
 / * *  
   *   @ b r i e f   i n s e r t   a   n o d e   b e f o r e   a   l i s t  
   *  
   *   @ p a r a m   n   n e w   n o d e   t o   b e   i n s e r t e d  
   *   @ p a r a m   l   l i s t   t o   i n s e r t   i t  
   * /  
 r t _ i n l i n e   v o i d   r t _ l i s t _ i n s e r t _ b e f o r e ( r t _ l i s t _ t   * l ,   r t _ l i s t _ t   * n )  
 {  
         l - > p r e v - > n e x t   =   n ;  
         n - > p r e v   =   l - > p r e v ;  
  
         l - > p r e v   =   n ;  
         n - > n e x t   =   l ;  
 }  
  
 / * *  
   *   @ b r i e f   r e m o v e   n o d e   f r o m   l i s t .  
   *   @ p a r a m   n   t h e   n o d e   t o   r e m o v e   f r o m   t h e   l i s t .  
   * /  
 r t _ i n l i n e   v o i d   r t _ l i s t _ r e m o v e ( r t _ l i s t _ t   * n )  
 {  
         n - > n e x t - > p r e v   =   n - > p r e v ;  
         n - > p r e v - > n e x t   =   n - > n e x t ;  
  
         n - > n e x t   =   n - > p r e v   =   n ;  
 }  
  
 / * *  
   *   @ b r i e f   t e s t s   w h e t h e r   a   l i s t   i s   e m p t y  
   *   @ p a r a m   l   t h e   l i s t   t o   t e s t .  
   * /  
 r t _ i n l i n e   i n t   r t _ l i s t _ i s e m p t y ( c o n s t   r t _ l i s t _ t   * l )  
 {  
         r e t u r n   l - > n e x t   = =   l ;  
 }  
  
 / * *  
   *   @ b r i e f   g e t   t h e   l i s t   l e n g t h  
   *   @ p a r a m   l   t h e   l i s t   t o   g e t .  
   * /  
 r t _ i n l i n e   u n s i g n e d   i n t   r t _ l i s t _ l e n ( c o n s t   r t _ l i s t _ t   * l )  
 {  
         u n s i g n e d   i n t   l e n   =   0 ;  
         c o n s t   r t _ l i s t _ t   * p   =   l ;  
         w h i l e   ( p - > n e x t   ! =   l )  
         {  
                 p   =   p - > n e x t ;  
                 l e n   + + ;  
         }  
  
         r e t u r n   l e n ;  
 }  
  
 / * *  
   *   @ b r i e f   g e t   t h e   s t r u c t   f o r   t h i s   e n t r y  
   *   @ p a r a m   n o d e   t h e   e n t r y   p o i n t  
   *   @ p a r a m   t y p e   t h e   t y p e   o f   s t r u c t u r e  
   *   @ p a r a m   m e m b e r   t h e   n a m e   o f   l i s t   i n   s t r u c t u r e  
   * /  
 # d e f i n e   r t _ l i s t _ e n t r y ( n o d e ,   t y p e ,   m e m b e r )   \  
         r t _ c o n t a i n e r _ o f ( n o d e ,   t y p e ,   m e m b e r )  
  
 / * *  
   *   r t _ l i s t _ f o r _ e a c h   -   i t e r a t e   o v e r   a   l i s t  
   *   @ p o s :         t h e   r t _ l i s t _ t   *   t o   u s e   a s   a   l o o p   c u r s o r .  
   *   @ h e a d :       t h e   h e a d   f o r   y o u r   l i s t .  
   * /  
 # d e f i n e   r t _ l i s t _ f o r _ e a c h ( p o s ,   h e a d )   \  
         f o r   ( p o s   =   ( h e a d ) - > n e x t ;   p o s   ! =   ( h e a d ) ;   p o s   =   p o s - > n e x t )  
  
 / * *  
   *   r t _ l i s t _ f o r _ e a c h _ s a f e   -   i t e r a t e   o v e r   a   l i s t   s a f e   a g a i n s t   r e m o v a l   o f   l i s t   e n t r y  
   *   @ p o s :         t h e   r t _ l i s t _ t   *   t o   u s e   a s   a   l o o p   c u r s o r .  
   *   @ n :             a n o t h e r   r t _ l i s t _ t   *   t o   u s e   a s   t e m p o r a r y   s t o r a g e  
   *   @ h e a d :       t h e   h e a d   f o r   y o u r   l i s t .  
   * /  
 # d e f i n e   r t _ l i s t _ f o r _ e a c h _ s a f e ( p o s ,   n ,   h e a d )   \  
         f o r   ( p o s   =   ( h e a d ) - > n e x t ,   n   =   p o s - > n e x t ;   p o s   ! =   ( h e a d ) ;   \  
                 p o s   =   n ,   n   =   p o s - > n e x t )  
  
 / * *  
   *   r t _ l i s t _ f o r _ e a c h _ e n t r y     -       i t e r a t e   o v e r   l i s t   o f   g i v e n   t y p e  
   *   @ p o s :         t h e   t y p e   *   t o   u s e   a s   a   l o o p   c u r s o r .  
   *   @ h e a d :       t h e   h e a d   f o r   y o u r   l i s t .  
   *   @ m e m b e r :   t h e   n a m e   o f   t h e   l i s t _ s t r u c t   w i t h i n   t h e   s t r u c t .  
   * /  
 # d e f i n e   r t _ l i s t _ f o r _ e a c h _ e n t r y ( p o s ,   h e a d ,   m e m b e r )   \  
         f o r   ( p o s   =   r t _ l i s t _ e n t r y ( ( h e a d ) - > n e x t ,   t y p e o f ( * p o s ) ,   m e m b e r ) ;   \  
                   & p o s - > m e m b e r   ! =   ( h e a d ) ;   \  
                   p o s   =   r t _ l i s t _ e n t r y ( p o s - > m e m b e r . n e x t ,   t y p e o f ( * p o s ) ,   m e m b e r ) )  
  
 / * *  
   *   r t _ l i s t _ f o r _ e a c h _ e n t r y _ s a f e   -   i t e r a t e   o v e r   l i s t   o f   g i v e n   t y p e   s a f e   a g a i n s t   r e m o v a l   o f   l i s t   e n t r y  
   *   @ p o s :         t h e   t y p e   *   t o   u s e   a s   a   l o o p   c u r s o r .  
   *   @ n :             a n o t h e r   t y p e   *   t o   u s e   a s   t e m p o r a r y   s t o r a g e  
   *   @ h e a d :       t h e   h e a d   f o r   y o u r   l i s t .  
   *   @ m e m b e r :   t h e   n a m e   o f   t h e   l i s t _ s t r u c t   w i t h i n   t h e   s t r u c t .  
   * /  
 # d e f i n e   r t _ l i s t _ f o r _ e a c h _ e n t r y _ s a f e ( p o s ,   n ,   h e a d ,   m e m b e r )   \  
         f o r   ( p o s   =   r t _ l i s t _ e n t r y ( ( h e a d ) - > n e x t ,   t y p e o f ( * p o s ) ,   m e m b e r ) ,   \  
                   n   =   r t _ l i s t _ e n t r y ( p o s - > m e m b e r . n e x t ,   t y p e o f ( * p o s ) ,   m e m b e r ) ;   \  
                   & p o s - > m e m b e r   ! =   ( h e a d ) ;   \  
                   p o s   =   n ,   n   =   r t _ l i s t _ e n t r y ( n - > m e m b e r . n e x t ,   t y p e o f ( * n ) ,   m e m b e r ) )  
  
 / * *  
   *   r t _ l i s t _ f i r s t _ e n t r y   -   g e t   t h e   f i r s t   e l e m e n t   f r o m   a   l i s t  
   *   @ p t r :         t h e   l i s t   h e a d   t o   t a k e   t h e   e l e m e n t   f r o m .  
   *   @ t y p e :       t h e   t y p e   o f   t h e   s t r u c t   t h i s   i s   e m b e d d e d   i n .  
   *   @ m e m b e r :   t h e   n a m e   o f   t h e   l i s t _ s t r u c t   w i t h i n   t h e   s t r u c t .  
   *  
   *   N o t e ,   t h a t   l i s t   i s   e x p e c t e d   t o   b e   n o t   e m p t y .  
   * /  
 # d e f i n e   r t _ l i s t _ f i r s t _ e n t r y ( p t r ,   t y p e ,   m e m b e r )   \  
         r t _ l i s t _ e n t r y ( ( p t r ) - > n e x t ,   t y p e ,   m e m b e r )  
  
 # d e f i n e   R T _ S L I S T _ O B J E C T _ I N I T ( o b j e c t )   {   R T _ N U L L   }  
  
 / * *  
   *   @ b r i e f   i n i t i a l i z e   a   s i n g l e   l i s t  
   *  
   *   @ p a r a m   l   t h e   s i n g l e   l i s t   t o   b e   i n i t i a l i z e d  
   * /  
 r t _ i n l i n e   v o i d   r t _ s l i s t _ i n i t ( r t _ s l i s t _ t   * l )  
 {  
         l - > n e x t   =   R T _ N U L L ;  
 }  
  
 r t _ i n l i n e   v o i d   r t _ s l i s t _ a p p e n d ( r t _ s l i s t _ t   * l ,   r t _ s l i s t _ t   * n )  
 {  
         s t r u c t   r t _ s l i s t _ n o d e   * n o d e ;  
  
         n o d e   =   l ;  
         w h i l e   ( n o d e - > n e x t )   n o d e   =   n o d e - > n e x t ;  
  
         / *   a p p e n d   t h e   n o d e   t o   t h e   t a i l   * /  
         n o d e - > n e x t   =   n ;  
         n - > n e x t   =   R T _ N U L L ;  
 }  
  
 r t _ i n l i n e   v o i d   r t _ s l i s t _ i n s e r t ( r t _ s l i s t _ t   * l ,   r t _ s l i s t _ t   * n )  
 {  
         n - > n e x t   =   l - > n e x t ;  
         l - > n e x t   =   n ;  
 }  
  
 r t _ i n l i n e   u n s i g n e d   i n t   r t _ s l i s t _ l e n ( c o n s t   r t _ s l i s t _ t   * l )  
 {  
         u n s i g n e d   i n t   l e n   =   0 ;  
         c o n s t   r t _ s l i s t _ t   * l i s t   =   l - > n e x t ;  
         w h i l e   ( l i s t   ! =   R T _ N U L L )  
         {  
                 l i s t   =   l i s t - > n e x t ;  
                 l e n   + + ;  
         }  
  
         r e t u r n   l e n ;  
 }  
  
 r t _ i n l i n e   r t _ s l i s t _ t   * r t _ s l i s t _ r e m o v e ( r t _ s l i s t _ t   * l ,   r t _ s l i s t _ t   * n )  
 {  
         / *   r e m o v e   s l i s t   h e a d   * /  
         s t r u c t   r t _ s l i s t _ n o d e   * n o d e   =   l ;  
         w h i l e   ( n o d e - > n e x t   & &   n o d e - > n e x t   ! =   n )   n o d e   =   n o d e - > n e x t ;  
  
         / *   r e m o v e   n o d e   * /  
         i f   ( n o d e - > n e x t   ! =   ( r t _ s l i s t _ t   * ) 0 )   n o d e - > n e x t   =   n o d e - > n e x t - > n e x t ;  
  
         r e t u r n   l ;  
 }  
  
 r t _ i n l i n e   r t _ s l i s t _ t   * r t _ s l i s t _ f i r s t ( r t _ s l i s t _ t   * l )  
 {  
         r e t u r n   l - > n e x t ;  
 }  
  
 r t _ i n l i n e   r t _ s l i s t _ t   * r t _ s l i s t _ t a i l ( r t _ s l i s t _ t   * l )  
 {  
         w h i l e   ( l - > n e x t )   l   =   l - > n e x t ;  
  
         r e t u r n   l ;  
 }  
  
 r t _ i n l i n e   r t _ s l i s t _ t   * r t _ s l i s t _ n e x t ( r t _ s l i s t _ t   * n )  
 {  
         r e t u r n   n - > n e x t ;  
 }  
  
 r t _ i n l i n e   i n t   r t _ s l i s t _ i s e m p t y ( r t _ s l i s t _ t   * l )  
 {  
         r e t u r n   l - > n e x t   = =   R T _ N U L L ;  
 }  
  
 / * *  
   *   @ b r i e f   g e t   t h e   s t r u c t   f o r   t h i s   s i n g l e   l i s t   n o d e  
   *   @ p a r a m   n o d e   t h e   e n t r y   p o i n t  
   *   @ p a r a m   t y p e   t h e   t y p e   o f   s t r u c t u r e  
   *   @ p a r a m   m e m b e r   t h e   n a m e   o f   l i s t   i n   s t r u c t u r e  
   * /  
 # d e f i n e   r t _ s l i s t _ e n t r y ( n o d e ,   t y p e ,   m e m b e r )   \  
         r t _ c o n t a i n e r _ o f ( n o d e ,   t y p e ,   m e m b e r )  
  
 / * *  
   *   r t _ s l i s t _ f o r _ e a c h   -   i t e r a t e   o v e r   a   s i n g l e   l i s t  
   *   @ p o s :         t h e   r t _ s l i s t _ t   *   t o   u s e   a s   a   l o o p   c u r s o r .  
   *   @ h e a d :       t h e   h e a d   f o r   y o u r   s i n g l e   l i s t .  
   * /  
 # d e f i n e   r t _ s l i s t _ f o r _ e a c h ( p o s ,   h e a d )   \  
         f o r   ( p o s   =   ( h e a d ) - > n e x t ;   p o s   ! =   R T _ N U L L ;   p o s   =   p o s - > n e x t )  
  
 / * *  
   *   r t _ s l i s t _ f o r _ e a c h _ e n t r y     -       i t e r a t e   o v e r   s i n g l e   l i s t   o f   g i v e n   t y p e  
   *   @ p o s :         t h e   t y p e   *   t o   u s e   a s   a   l o o p   c u r s o r .  
   *   @ h e a d :       t h e   h e a d   f o r   y o u r   s i n g l e   l i s t .  
   *   @ m e m b e r :   t h e   n a m e   o f   t h e   l i s t _ s t r u c t   w i t h i n   t h e   s t r u c t .  
   * /  
 # d e f i n e   r t _ s l i s t _ f o r _ e a c h _ e n t r y ( p o s ,   h e a d ,   m e m b e r )   \  
         f o r   ( p o s   =   r t _ s l i s t _ e n t r y ( ( h e a d ) - > n e x t ,   t y p e o f ( * p o s ) ,   m e m b e r ) ;   \  
                   & p o s - > m e m b e r   ! =   ( R T _ N U L L ) ;   \  
                   p o s   =   r t _ s l i s t _ e n t r y ( p o s - > m e m b e r . n e x t ,   t y p e o f ( * p o s ) ,   m e m b e r ) )  
  
 / * *  
   *   r t _ s l i s t _ f i r s t _ e n t r y   -   g e t   t h e   f i r s t   e l e m e n t   f r o m   a   s l i s t  
   *   @ p t r :         t h e   s l i s t   h e a d   t o   t a k e   t h e   e l e m e n t   f r o m .  
   *   @ t y p e :       t h e   t y p e   o f   t h e   s t r u c t   t h i s   i s   e m b e d d e d   i n .  
   *   @ m e m b e r :   t h e   n a m e   o f   t h e   s l i s t _ s t r u c t   w i t h i n   t h e   s t r u c t .  
   *  
   *   N o t e ,   t h a t   s l i s t   i s   e x p e c t e d   t o   b e   n o t   e m p t y .  
   * /  
 # d e f i n e   r t _ s l i s t _ f i r s t _ e n t r y ( p t r ,   t y p e ,   m e m b e r )   \  
         r t _ s l i s t _ e n t r y ( ( p t r ) - > n e x t ,   t y p e ,   m e m b e r )  
  
 / * *  
   *   r t _ s l i s t _ t a i l _ e n t r y   -   g e t   t h e   t a i l   e l e m e n t   f r o m   a   s l i s t  
   *   @ p t r :         t h e   s l i s t   h e a d   t o   t a k e   t h e   e l e m e n t   f r o m .  
   *   @ t y p e :       t h e   t y p e   o f   t h e   s t r u c t   t h i s   i s   e m b e d d e d   i n .  
   *   @ m e m b e r :   t h e   n a m e   o f   t h e   s l i s t _ s t r u c t   w i t h i n   t h e   s t r u c t .  
   *  
   *   N o t e ,   t h a t   s l i s t   i s   e x p e c t e d   t o   b e   n o t   e m p t y .  
   * /  
 # d e f i n e   r t _ s l i s t _ t a i l _ e n t r y ( p t r ,   t y p e ,   m e m b e r )   \  
         r t _ s l i s t _ e n t r y ( r t _ s l i s t _ t a i l ( p t r ) ,   t y p e ,   m e m b e r )  
  
 / * * @ } * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f  