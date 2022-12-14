??/ *  
   *   C o p y r i g h t   ( c )   2 0 1 3 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
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
   *  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *  
   *   $ D a t e :                 1 8 .   J u n e   2 0 1 8  
   *   $ R e v i s i o n :         V 2 . 1 . 3  
   *  
   *   P r o j e c t :             C M S I S - R T O S   A P I  
   *   T i t l e :                 c m s i s _ o s . h   t e m p l a t e   h e a d e r   f i l e  
   *  
   *   V e r s i o n   0 . 0 2  
   *         I n i t i a l   P r o p o s a l   P h a s e  
   *   V e r s i o n   0 . 0 3  
   *         o s K e r n e l S t a r t   a d d e d ,   o p t i o n a l   f e a t u r e :   m a i n   s t a r t e d   a s   t h r e a d  
   *         o s S e m a p h o r e s   h a v e   s t a n d a r d   b e h a v i o r  
   *         o s T i m e r C r e a t e   d o e s   n o t   s t a r t   t h e   t i m e r ,   a d d e d   o s T i m e r S t a r t  
   *         o s T h r e a d P a s s   i s   r e n a m e d   t o   o s T h r e a d Y i e l d  
   *   V e r s i o n   1 . 0 1  
   *         S u p p o r t   f o r   C + +   i n t e r f a c e  
   *           -   c o n s t   a t t r i b u t e   r e m o v e d   f r o m   t h e   o s X x x x D e f _ t   t y p e d e f s  
   *           -   c o n s t   a t t r i b u t e   a d d e d   t o   t h e   o s X x x x D e f   m a c r o s  
   *         A d d e d :   o s T i m e r D e l e t e ,   o s M u t e x D e l e t e ,   o s S e m a p h o r e D e l e t e  
   *         A d d e d :   o s K e r n e l I n i t i a l i z e  
   *   V e r s i o n   1 . 0 2  
   *         C o n t r o l   f u n c t i o n s   f o r   s h o r t   t i m e o u t s   i n   m i c r o s e c o n d   r e s o l u t i o n :  
   *         A d d e d :   o s K e r n e l S y s T i c k ,   o s K e r n e l S y s T i c k F r e q u e n c y ,   o s K e r n e l S y s T i c k M i c r o S e c  
   *         R e m o v e d :   o s S i g n a l G e t    
   *   V e r s i o n   2 . 0 . 0  
   *         O S   o b j e c t s   c r e a t i o n   w i t h o u t   m a c r o s   ( d y n a m i c   c r e a t i o n   a n d   r e s o u r c e   a l l o c a t i o n ) :  
   *           -   a d d e d :   o s X x x x N e w   f u n c t i o n s   w h i c h   r e p l a c e   o s X x x x C r e a t e  
   *           -   a d d e d :   o s X x x x A t t r _ t   s t r u c t u r e s  
   *           -   d e p r e c a t e d :   o s X x x x C r e a t e   f u n c t i o n s ,   o s X x x x D e f _ t   s t r u c t u r e s  
   *           -   d e p r e c a t e d :   o s X x x x D e f   a n d   o s X x x x   m a c r o s  
   *         o s S t a t u s   c o d e s   s i m p l i f i e d   a n d   r e n a m e d   t o   o s S t a t u s _ t  
   *         o s E v e n t   r e t u r n   s t r u c t u r e   d e p r e c a t e d  
   *         K e r n e l :  
   *           -   a d d e d :   o s K e r n e l I n f o _ t   a n d   o s K e r n e l G e t I n f o  
   *           -   a d d e d :   o s K e r n e l S t a t e _ t   a n d   o s K e r n e l G e t S t a t e   ( r e p l a c e s   o s K e r n e l R u n n i n g )  
   *           -   a d d e d :   o s K e r n e l L o c k ,   o s K e r n e l U n l o c k  
   *           -   a d d e d :   o s K e r n e l S u s p e n d ,   o s K e r n e l R e s u m e  
   *           -   a d d e d :   o s K e r n e l G e t T i c k C o u n t ,   o s K e r n e l G e t T i c k F r e q  
   *           -   r e n a m e d   o s K e r n e l S y s T i c k   t o   o s K e r n e l G e t S y s T i m e r C o u n t  
   *           -   r e p l a c e d   o s K e r n e l S y s T i c k F r e q u e n c y   w i t h   o s K e r n e l G e t S y s T i m e r F r e q  
   *           -   d e p r e c a t e d   o s K e r n e l S y s T i c k M i c r o S e c  
   *         T h r e a d :  
   *           -   e x t e n d e d   n u m b e r   o f   t h r e a d   p r i o r i t i e s  
   *           -   r e n a m e d   o s P r i o r i r y   t o   o s P r i o r i r y _ t  
   *           -   r e p l a c e d   o s T h r e a d C r e a t e   w i t h   o s T h r e a d N e w  
   *           -   a d d e d :   o s T h r e a d G e t N a m e  
   *           -   a d d e d :   o s T h r e a d S t a t e _ t   a n d   o s T h r e a d G e t S t a t e  
   *           -   a d d e d :   o s T h r e a d G e t S t a c k S i z e ,   o s T h r e a d G e t S t a c k S p a c e  
   *           -   a d d e d :   o s T h r e a d S u s p e n d ,   o s T h r e a d R e s u m e  
   *           -   a d d e d :   o s T h r e a d J o i n ,   o s T h r e a d D e t a c h ,   o s T h r e a d E x i t  
   *           -   a d d e d :   o s T h r e a d G e t C o u n t ,   o s T h r e a d E n u m e r a t e  
   *           -   a d d e d :   T h r e a d   F l a g s   ( m o v e d   f r o m   S i g n a l s )    
   *         S i g n a l s :  
   *           -   r e n a m e d   o s S i g n a l s   t o   o s T h r e a d F l a g s   ( m o v e d   t o   T h r e a d   F l a g s )  
   *           -   c h a n g e d   r e t u r n   v a l u e   o f   S e t / C l e a r / W a i t   f u n c t i o n s  
   *           -   C l e a r   f u n c t i o n   l i m i t e d   t o   c u r r e n t   r u n n i n g   t h r e a d  
   *           -   e x t e n d e d   W a i t   f u n c t i o n   ( o p t i o n s )  
   *           -   a d d e d :   o s T h r e a d F l a g s G e t  
   *         E v e n t   F l a g s :  
   *           -   a d d e d   n e w   i n d e p e n d e n t   o b j e c t   f o r   h a n d l i n g   E v e n t   F l a g s  
   *         D e l a y   a n d   W a i t   f u n c t i o n s :  
   *           -   a d d e d :   o s D e l a y U n t i l  
   *           -   d e p r e c a t e d :   o s W a i t  
   *         T i m e r :  
   *           -   r e p l a c e d   o s T i m e r C r e a t e   w i t h   o s T i m e r N e w  
   *           -   a d d e d :   o s T i m e r G e t N a m e ,   o s T i m e r I s R u n n i n g  
   *         M u t e x :  
   *           -   e x t e n d e d :   a t t r i b u t e s   ( R e c u r s i v e ,   P r i o r i t y   I n h e r i t ,   R o b u s t )  
   *           -   r e p l a c e d   o s M u t e x C r e a t e   w i t h   o s M u t e x N e w  
   *           -   r e n a m e d   o s M u t e x W a i t   t o   o s M u t e x A c q u i r e  
   *           -   a d d e d :   o s M u t e x G e t N a m e ,   o s M u t e x G e t O w n e r  
   *         S e m a p h o r e :  
   *           -   e x t e n d e d :   m a x i m u m   a n d   i n i t i a l   t o k e n   c o u n t  
   *           -   r e p l a c e d   o s S e m a p h o r e C r e a t e   w i t h   o s S e m a p h o r e N e w  
   *           -   r e n a m e d   o s S e m a p h o r e W a i t   t o   o s S e m a p h o r e A c q u i r e   ( c h a n g e d   r e t u r n   v a l u e )  
   *           -   a d d e d :   o s S e m a p h o r e G e t N a m e ,   o s S e m a p h o r e G e t C o u n t  
   *         M e m o r y   P o o l :  
   *           -   u s i n g   o s M e m o r y P o o l   p r e f i x   i n s t e a d   o f   o s P o o l  
   *           -   r e p l a c e d   o s P o o l C r e a t e   w i t h   o s M e m o r y P o o l N e w  
   *           -   e x t e n d e d   o s M e m o r y P o o l A l l o c   ( t i m e o u t )  
   *           -   a d d e d :   o s M e m o r y P o o l G e t N a m e  
   *           -   a d d e d :   o s M e m o r y P o o l G e t C a p a c i t y ,   o s M e m o r y P o o l G e t B l o c k S i z e  
   *           -   a d d e d :   o s M e m o r y P o o l G e t C o u n t ,   o s M e m o r y P o o l G e t S p a c e  
   *           -   a d d e d :   o s M e m o r y P o o l D e l e t e  
   *           -   d e p r e c a t e d :   o s P o o l C A l l o c  
   *         M e s s a g e   Q u e u e :  
   *           -   e x t e n d e d :   f i x e d   s i z e   m e s s a g e   i n s t e a d   o f   a   s i n g l e   3 2 - b i t   v a l u e  
   *           -   u s i n g   o s M e s s a g e Q u e u e   p r e f i x   i n s t e a d   o f   o s M e s s a g e  
   *           -   r e p l a c e d   o s M e s s a g e C r e a t e   w i t h   o s M e s s a g e Q u e u e N e w  
   *           -   u p d a t e d :   o s M e s s a g e Q u e u e P u t ,   o s M e s s a g e Q u e u e G e t  
   *           -   a d d e d :   o s M e s s a g e Q u e u e G e t N a m e  
   *           -   a d d e d :   o s M e s s a g e Q u e u e G e t C a p a c i t y ,   o s M e s s a g e Q u e u e G e t M s g S i z e  
   *           -   a d d e d :   o s M e s s a g e Q u e u e G e t C o u n t ,   o s M e s s a g e Q u e u e G e t S p a c e  
   *           -   a d d e d :   o s M e s s a g e Q u e u e R e s e t ,   o s M e s s a g e Q u e u e D e l e t e  
   *         M a i l   Q u e u e :    
   *           -   d e p r e c a t e d   ( s u p e r s e d e d   b y   e x t e n d e d   M e s s a g e   Q u e u e   f u n c t i o n a l i t y )  
   *   V e r s i o n   2 . 1 . 0  
   *         S u p p o r t   f o r   c r i t i c a l   a n d   u n c r i t i c a l   s e c t i o n s   ( n e s t i n g   s a f e ) :  
   *         -   u p d a t e d :   o s K e r n e l L o c k ,   o s K e r n e l U n l o c k  
   *         -   a d d e d :   o s K e r n e l R e s t o r e L o c k  
   *         U p d a t e d   T h r e a d   a n d   E v e n t   F l a g s :  
   *         -   c h a n g e d   f l a g s   p a r a m e t e r   a n d   r e t u r n   t y p e   f r o m   i n t 3 2 _ t   t o   u i n t 3 2 _ t  
   *   V e r s i o n   2 . 1 . 1  
   *         A d d i t i o n a l   f u n c t i o n s   a l l o w e d   t o   b e   c a l l e d   f r o m   I n t e r r u p t   S e r v i c e   R o u t i n e s :  
   *         -   o s K e r n e l G e t T i c k C o u n t ,   o s K e r n e l G e t T i c k F r e q  
   *         C h a n g e d   K e r n e l   T i c k   t y p e   t o   u i n t 3 2 _ t :  
   *         -   u p d a t e d :   o s K e r n e l G e t T i c k C o u n t ,   o s D e l a y U n t i l  
   *   V e r s i o n   2 . 1 . 2  
   *         A d d i t i o n a l   f u n c t i o n s   a l l o w e d   t o   b e   c a l l e d   f r o m   I n t e r r u p t   S e r v i c e   R o u t i n e s :  
   *         -   o s K e r n e l G e t I n f o ,   o s K e r n e l G e t S t a t e  
   *   V e r s i o n   2 . 1 . 3  
   *         A d d i t i o n a l   f u n c t i o n s   a l l o w e d   t o   b e   c a l l e d   f r o m   I n t e r r u p t   S e r v i c e   R o u t i n e s :  
   *         -   o s T h r e a d G e t I d  
   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
    
 # i f n d e f   C M S I S _ O S _ H _  
 # d e f i n e   C M S I S _ O S _ H _  
    
 / / /   \ b   o s C M S I S   i d e n t i f i e s   t h e   C M S I S - R T O S   A P I   v e r s i o n .  
 # d e f i n e   o s C M S I S                           0 x 2 0 0 0 1 U         / / / <   A P I   v e r s i o n   ( m a i n [ 3 1 : 1 6 ] . s u b [ 1 5 : 0 ] )  
    
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   o s C M S I S _ K E R N E L   i d e n t i f i e s   t h e   u n d e r l y i n g   R T O S   k e r n e l   a n d   v e r s i o n   n u m b e r .  
 # d e f i n e   o s C M S I S _ K E R N E L             0 x 1 0 0 0 0 U         / / / <   R T O S   i d e n t i f i c a t i o n   a n d   v e r s i o n   ( m a i n [ 3 1 : 1 6 ] . s u b [ 1 5 : 0 ] )  
    
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   o s K e r n e l S y s t e m I d   i d e n t i f i e s   t h e   u n d e r l y i n g   R T O S   k e r n e l .  
 # d e f i n e   o s K e r n e l S y s t e m I d   " K E R N E L   V 1 . 0 "     / / / <   R T O S   i d e n t i f i c a t i o n   s t r i n g  
    
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   o s F e a t u r e _ x x x   i d e n t i f i e s   R T O S   f e a t u r e s .  
 # d e f i n e   o s F e a t u r e _ M a i n T h r e a d     0                   / / / <   m a i n   t h r e a d             1 = m a i n   c a n   b e   t h r e a d ,   0 = n o t   a v a i l a b l e  
 # d e f i n e   o s F e a t u r e _ S i g n a l s           1 6 U               / / / <   m a x i m u m   n u m b e r   o f   S i g n a l   F l a g s   a v a i l a b l e   p e r   t h r e a d  
 # d e f i n e   o s F e a t u r e _ S e m a p h o r e       6 5 5 3 5 U         / / / <   m a x i m u m   c o u n t   f o r   \ r e f   o s S e m a p h o r e C r e a t e   f u n c t i o n  
 # d e f i n e   o s F e a t u r e _ W a i t                 0                   / / / <   o s W a i t   f u n c t i o n :   1 = a v a i l a b l e ,   0 = n o t   a v a i l a b l e  
 # d e f i n e   o s F e a t u r e _ S y s T i c k           1                   / / / <   o s K e r n e l S y s T i c k   f u n c t i o n s :   1 = a v a i l a b l e ,   0 = n o t   a v a i l a b l e  
 # d e f i n e   o s F e a t u r e _ P o o l                 1                   / / / <   M e m o r y   P o o l s :         1 = a v a i l a b l e ,   0 = n o t   a v a i l a b l e  
 # d e f i n e   o s F e a t u r e _ M e s s a g e Q         1                   / / / <   M e s s a g e   Q u e u e s :     1 = a v a i l a b l e ,   0 = n o t   a v a i l a b l e  
 # d e f i n e   o s F e a t u r e _ M a i l Q               1                   / / / <   M a i l   Q u e u e s :           1 = a v a i l a b l e ,   0 = n o t   a v a i l a b l e  
    
 # i f   ( o s C M S I S   > =   0 x 2 0 0 0 0 U )  
 # i n c l u d e   " c m s i s _ o s 2 . h "  
 # e l s e  
 # i n c l u d e   < s t d i n t . h >  
 # i n c l u d e   < s t d d e f . h >  
 # e n d i f  
    
 # i f d e f     _ _ c p l u s p l u s  
 e x t e r n   " C "  
 {  
 # e n d i f  
    
    
 / /   = = = =   E n u m e r a t i o n s ,   s t r u c t u r e s ,   d e f i n e s   = = = =  
    
 / / /   P r i o r i t y   v a l u e s .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   e n u m   {  
     o s P r i o r i t y I d l e                     =   - 3 ,                   / / / <   P r i o r i t y :   i d l e   ( l o w e s t )  
     o s P r i o r i t y L o w                       =   - 2 ,                   / / / <   P r i o r i t y :   l o w  
     o s P r i o r i t y B e l o w N o r m a l       =   - 1 ,                   / / / <   P r i o r i t y :   b e l o w   n o r m a l  
     o s P r i o r i t y N o r m a l                 =     0 ,                   / / / <   P r i o r i t y :   n o r m a l   ( d e f a u l t )  
     o s P r i o r i t y A b o v e N o r m a l       =   + 1 ,                   / / / <   P r i o r i t y :   a b o v e   n o r m a l  
     o s P r i o r i t y H i g h                     =   + 2 ,                   / / / <   P r i o r i t y :   h i g h  
     o s P r i o r i t y R e a l t i m e             =   + 3 ,                   / / / <   P r i o r i t y :   r e a l t i m e   ( h i g h e s t )  
     o s P r i o r i t y E r r o r                   =   0 x 8 4 ,               / / / <   S y s t e m   c a n n o t   d e t e r m i n e   p r i o r i t y   o r   i l l e g a l   p r i o r i t y .  
     o s P r i o r i t y R e s e r v e d             =   0 x 7 F F F F F F F     / / / <   P r e v e n t s   e n u m   d o w n - s i z e   c o m p i l e r   o p t i m i z a t i o n .  
 }   o s P r i o r i t y ;  
 # e l s e  
 # d e f i n e   o s P r i o r i t y   o s P r i o r i t y _ t  
 # e n d i f  
  
 / / /   E n t r y   p o i n t   o f   a   t h r e a d .  
 t y p e d e f   v o i d   ( * o s _ p t h r e a d )   ( v o i d   c o n s t   * a r g u m e n t ) ;  
    
 / / /   E n t r y   p o i n t   o f   a   t i m e r   c a l l   b a c k   f u n c t i o n .  
 t y p e d e f   v o i d   ( * o s _ p t i m e r )   ( v o i d   c o n s t   * a r g u m e n t ) ;  
    
 / / /   T i m e r   t y p e .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   e n u m   {  
     o s T i m e r O n c e                           =   0 ,                     / / / <   O n e - s h o t   t i m e r .  
     o s T i m e r P e r i o d i c                   =   1                       / / / <   R e p e a t i n g   t i m e r .  
 }   o s _ t i m e r _ t y p e ;  
 # e l s e  
 # d e f i n e   o s _ t i m e r _ t y p e   o s T i m e r T y p e _ t  
 # e n d i f  
    
 / / /   T i m e o u t   v a l u e .  
 # d e f i n e   o s W a i t F o r e v e r               0 x F F F F F F F F U   / / / <   W a i t   f o r e v e r   t i m e o u t   v a l u e .  
    
 / / /   S t a t u s   c o d e   v a l u e s   r e t u r n e d   b y   C M S I S - R T O S   f u n c t i o n s .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   e n u m   {  
     o s O K                                         =         0 ,               / / / <   F u n c t i o n   c o m p l e t e d ;   n o   e r r o r   o r   e v e n t   o c c u r r e d .  
     o s E v e n t S i g n a l                       =   0 x 0 8 ,               / / / <   F u n c t i o n   c o m p l e t e d ;   s i g n a l   e v e n t   o c c u r r e d .  
     o s E v e n t M e s s a g e                     =   0 x 1 0 ,               / / / <   F u n c t i o n   c o m p l e t e d ;   m e s s a g e   e v e n t   o c c u r r e d .  
     o s E v e n t M a i l                           =   0 x 2 0 ,               / / / <   F u n c t i o n   c o m p l e t e d ;   m a i l   e v e n t   o c c u r r e d .  
     o s E v e n t T i m e o u t                     =   0 x 4 0 ,               / / / <   F u n c t i o n   c o m p l e t e d ;   t i m e o u t   o c c u r r e d .  
     o s E r r o r P a r a m e t e r                 =   0 x 8 0 ,               / / / <   P a r a m e t e r   e r r o r :   a   m a n d a t o r y   p a r a m e t e r   w a s   m i s s i n g   o r   s p e c i f i e d   a n   i n c o r r e c t   o b j e c t .  
     o s E r r o r R e s o u r c e                   =   0 x 8 1 ,               / / / <   R e s o u r c e   n o t   a v a i l a b l e :   a   s p e c i f i e d   r e s o u r c e   w a s   n o t   a v a i l a b l e .  
     o s E r r o r T i m e o u t R e s o u r c e     =   0 x C 1 ,               / / / <   R e s o u r c e   n o t   a v a i l a b l e   w i t h i n   g i v e n   t i m e :   a   s p e c i f i e d   r e s o u r c e   w a s   n o t   a v a i l a b l e   w i t h i n   t h e   t i m e o u t   p e r i o d .  
     o s E r r o r I S R                             =   0 x 8 2 ,               / / / <   N o t   a l l o w e d   i n   I S R   c o n t e x t :   t h e   f u n c t i o n   c a n n o t   b e   c a l l e d   f r o m   i n t e r r u p t   s e r v i c e   r o u t i n e s .  
     o s E r r o r I S R R e c u r s i v e           =   0 x 8 3 ,               / / / <   F u n c t i o n   c a l l e d   m u l t i p l e   t i m e s   f r o m   I S R   w i t h   s a m e   o b j e c t .  
     o s E r r o r P r i o r i t y                   =   0 x 8 4 ,               / / / <   S y s t e m   c a n n o t   d e t e r m i n e   p r i o r i t y   o r   t h r e a d   h a s   i l l e g a l   p r i o r i t y .  
     o s E r r o r N o M e m o r y                   =   0 x 8 5 ,               / / / <   S y s t e m   i s   o u t   o f   m e m o r y :   i t   w a s   i m p o s s i b l e   t o   a l l o c a t e   o r   r e s e r v e   m e m o r y   f o r   t h e   o p e r a t i o n .  
     o s E r r o r V a l u e                         =   0 x 8 6 ,               / / / <   V a l u e   o f   a   p a r a m e t e r   i s   o u t   o f   r a n g e .  
     o s E r r o r O S                               =   0 x F F ,               / / / <   U n s p e c i f i e d   R T O S   e r r o r :   r u n - t i m e   e r r o r   b u t   n o   o t h e r   e r r o r   m e s s a g e   f i t s .  
     o s S t a t u s R e s e r v e d                 =   0 x 7 F F F F F F F     / / / <   P r e v e n t s   e n u m   d o w n - s i z e   c o m p i l e r   o p t i m i z a t i o n .  
 }   o s S t a t u s ;  
 # e l s e  
 t y p e d e f   i n t 3 2 _ t                                     o s S t a t u s ;  
 # d e f i n e   o s E v e n t S i g n a l                       ( 0 x 0 8 )  
 # d e f i n e   o s E v e n t M e s s a g e                     ( 0 x 1 0 )  
 # d e f i n e   o s E v e n t M a i l                           ( 0 x 2 0 )  
 # d e f i n e   o s E v e n t T i m e o u t                     ( 0 x 4 0 )  
 # d e f i n e   o s E r r o r O S                               o s E r r o r  
 # d e f i n e   o s E r r o r T i m e o u t R e s o u r c e     o s E r r o r T i m e o u t  
 # d e f i n e   o s E r r o r I S R R e c u r s i v e           ( - 1 2 6 )  
 # d e f i n e   o s E r r o r V a l u e                         ( - 1 2 7 )  
 # d e f i n e   o s E r r o r P r i o r i t y                   ( - 1 2 8 )  
 # e n d i f  
    
    
 / /   > > >   t h e   f o l l o w i n g   d a t a   t y p e   d e f i n i t i o n s   m a y   b e   a d a p t e d   t o w a r d s   a   s p e c i f i c   R T O S  
    
 / / /   T h r e a d   I D   i d e n t i f i e s   t h e   t h r e a d .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   v o i d   * o s T h r e a d I d ;  
 # e l s e  
 # d e f i n e   o s T h r e a d I d   o s T h r e a d I d _ t  
 # e n d i f  
    
 / / /   T i m e r   I D   i d e n t i f i e s   t h e   t i m e r .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   v o i d   * o s T i m e r I d ;  
 # e l s e  
 # d e f i n e   o s T i m e r I d   o s T i m e r I d _ t  
 # e n d i f  
    
 / / /   M u t e x   I D   i d e n t i f i e s   t h e   m u t e x .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   v o i d   * o s M u t e x I d ;  
 # e l s e  
 # d e f i n e   o s M u t e x I d   o s M u t e x I d _ t  
 # e n d i f  
    
 / / /   S e m a p h o r e   I D   i d e n t i f i e s   t h e   s e m a p h o r e .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   v o i d   * o s S e m a p h o r e I d ;  
 # e l s e  
 # d e f i n e   o s S e m a p h o r e I d   o s S e m a p h o r e I d _ t  
 # e n d i f  
    
 / / /   P o o l   I D   i d e n t i f i e s   t h e   m e m o r y   p o o l .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 t y p e d e f   v o i d   * o s P o o l I d ;  
    
 / / /   M e s s a g e   I D   i d e n t i f i e s   t h e   m e s s a g e   q u e u e .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 t y p e d e f   v o i d   * o s M e s s a g e Q I d ;  
    
 / / /   M a i l   I D   i d e n t i f i e s   t h e   m a i l   q u e u e .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 t y p e d e f   v o i d   * o s M a i l Q I d ;  
    
    
 / / /   T h r e a d   D e f i n i t i o n   s t r u c t u r e   c o n t a i n s   s t a r t u p   i n f o r m a t i o n   o f   a   t h r e a d .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   o s _ t h r e a d _ d e f   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   s t r u c t   o s _ t h r e a d _ d e f   {  
     o s _ p t h r e a d                                   p t h r e a d ;       / / / <   s t a r t   a d d r e s s   o f   t h r e a d   f u n c t i o n  
     o s P r i o r i t y                               t p r i o r i t y ;       / / / <   i n i t i a l   t h r e a d   p r i o r i t y  
     u i n t 3 2 _ t                                   i n s t a n c e s ;       / / / <   m a x i m u m   n u m b e r   o f   i n s t a n c e s   o f   t h a t   t h r e a d   f u n c t i o n  
     u i n t 3 2 _ t                                   s t a c k s i z e ;       / / / <   s t a c k   s i z e   r e q u i r e m e n t s   i n   b y t e s ;   0   i s   d e f a u l t   s t a c k   s i z e  
 }   o s T h r e a d D e f _ t ;  
 # e l s e  
 t y p e d e f   s t r u c t   o s _ t h r e a d _ d e f   {  
     o s _ p t h r e a d                                   p t h r e a d ;       / / / <   s t a r t   a d d r e s s   o f   t h r e a d   f u n c t i o n  
     o s T h r e a d A t t r _ t                                 a t t r ;       / / / <   t h r e a d   a t t r i b u t e s  
 }   o s T h r e a d D e f _ t ;  
 # e n d i f  
    
 / / /   T i m e r   D e f i n i t i o n   s t r u c t u r e   c o n t a i n s   t i m e r   p a r a m e t e r s .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   o s _ t i m e r _ d e f   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   s t r u c t   o s _ t i m e r _ d e f   {  
     o s _ p t i m e r                                       p t i m e r ;       / / / <   s t a r t   a d d r e s s   o f   a   t i m e r   f u n c t i o n  
 }   o s T i m e r D e f _ t ;  
 # e l s e  
 t y p e d e f   s t r u c t   o s _ t i m e r _ d e f   {  
     o s _ p t i m e r                                       p t i m e r ;       / / / <   s t a r t   a d d r e s s   o f   a   t i m e r   f u n c t i o n  
     o s T i m e r A t t r _ t                                   a t t r ;       / / / <   t i m e r   a t t r i b u t e s  
 }   o s T i m e r D e f _ t ;  
 # e n d i f  
    
 / / /   M u t e x   D e f i n i t i o n   s t r u c t u r e   c o n t a i n s   s e t u p   i n f o r m a t i o n   f o r   a   m u t e x .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   o s _ m u t e x _ d e f   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   s t r u c t   o s _ m u t e x _ d e f   {  
     u i n t 3 2 _ t                                           d u m m y ;       / / / <   d u m m y   v a l u e  
 }   o s M u t e x D e f _ t ;  
 # e l s e  
 # d e f i n e   o s M u t e x D e f _ t   o s M u t e x A t t r _ t  
 # e n d i f  
    
 / / /   S e m a p h o r e   D e f i n i t i o n   s t r u c t u r e   c o n t a i n s   s e t u p   i n f o r m a t i o n   f o r   a   s e m a p h o r e .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   o s _ s e m a p h o r e _ d e f   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   s t r u c t   o s _ s e m a p h o r e _ d e f   {  
     u i n t 3 2 _ t                                           d u m m y ;       / / / <   d u m m y   v a l u e  
 }   o s S e m a p h o r e D e f _ t ;  
 # e l s e  
 # d e f i n e   o s S e m a p h o r e D e f _ t   o s S e m a p h o r e A t t r _ t  
 # e n d i f  
    
 / / /   D e f i n i t i o n   s t r u c t u r e   f o r   m e m o r y   b l o c k   a l l o c a t i o n .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   o s _ p o o l _ d e f   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   s t r u c t   o s _ p o o l _ d e f   {  
     u i n t 3 2 _ t                                       p o o l _ s z ;       / / / <   n u m b e r   o f   i t e m s   ( e l e m e n t s )   i n   t h e   p o o l  
     u i n t 3 2 _ t                                       i t e m _ s z ;       / / / <   s i z e   o f   a n   i t e m  
     v o i d                                                   * p o o l ;       / / / <   p o i n t e r   t o   m e m o r y   f o r   p o o l  
 }   o s P o o l D e f _ t ;  
 # e l s e  
 t y p e d e f   s t r u c t   o s _ p o o l _ d e f   {  
     u i n t 3 2 _ t                                       p o o l _ s z ;       / / / <   n u m b e r   o f   i t e m s   ( e l e m e n t s )   i n   t h e   p o o l  
     u i n t 3 2 _ t                                       i t e m _ s z ;       / / / <   s i z e   o f   a n   i t e m  
     o s M e m o r y P o o l A t t r _ t                         a t t r ;       / / / <   m e m o r y   p o o l   a t t r i b u t e s  
 }   o s P o o l D e f _ t ;  
 # e n d i f  
    
 / / /   D e f i n i t i o n   s t r u c t u r e   f o r   m e s s a g e   q u e u e .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   o s _ m e s s a g e Q _ d e f   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   s t r u c t   o s _ m e s s a g e Q _ d e f   {  
     u i n t 3 2 _ t                                     q u e u e _ s z ;       / / / <   n u m b e r   o f   e l e m e n t s   i n   t h e   q u e u e  
     v o i d                                                   * p o o l ;       / / / <   m e m o r y   a r r a y   f o r   m e s s a g e s  
 }   o s M e s s a g e Q D e f _ t ;  
 # e l s e  
 t y p e d e f   s t r u c t   o s _ m e s s a g e Q _ d e f   {  
     u i n t 3 2 _ t                                     q u e u e _ s z ;       / / / <   n u m b e r   o f   e l e m e n t s   i n   t h e   q u e u e  
     o s M e s s a g e Q u e u e A t t r _ t                     a t t r ;       / / / <   m e s s a g e   q u e u e   a t t r i b u t e s  
 }   o s M e s s a g e Q D e f _ t ;  
 # e n d i f  
    
 / / /   D e f i n i t i o n   s t r u c t u r e   f o r   m a i l   q u e u e .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   \ b   o s _ m a i l Q _ d e f   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 t y p e d e f   s t r u c t   o s _ m a i l Q _ d e f   {  
     u i n t 3 2 _ t                                     q u e u e _ s z ;       / / / <   n u m b e r   o f   e l e m e n t s   i n   t h e   q u e u e  
     u i n t 3 2 _ t                                       i t e m _ s z ;       / / / <   s i z e   o f   a n   i t e m  
     v o i d                                                   * p o o l ;       / / / <   m e m o r y   a r r a y   f o r   m a i l  
 }   o s M a i l Q D e f _ t ;  
 # e l s e  
 t y p e d e f   s t r u c t   o s _ m a i l Q _ d e f   {  
     u i n t 3 2 _ t                                     q u e u e _ s z ;       / / / <   n u m b e r   o f   e l e m e n t s   i n   t h e   q u e u e  
     u i n t 3 2 _ t                                       i t e m _ s z ;       / / / <   s i z e   o f   a n   i t e m  
     v o i d                                                   * m a i l ;       / / / <   p o i n t e r   t o   m a i l  
     o s M e m o r y P o o l A t t r _ t                   m p _ a t t r ;       / / / <   m e m o r y   p o o l   a t t r i b u t e s  
     o s M e s s a g e Q u e u e A t t r _ t               m q _ a t t r ;       / / / <   m e s s a g e   q u e u e   a t t r i b u t e s  
 }   o s M a i l Q D e f _ t ;  
 # e n d i f  
    
    
 / / /   E v e n t   s t r u c t u r e   c o n t a i n s   d e t a i l e d   i n f o r m a t i o n   a b o u t   a n   e v e n t .  
 t y p e d e f   s t r u c t   {  
     o s S t a t u s                                         s t a t u s ;       / / / <   s t a t u s   c o d e :   e v e n t   o r   e r r o r   i n f o r m a t i o n  
     u n i o n   {  
         u i n t 3 2 _ t                                               v ;       / / / <   m e s s a g e   a s   3 2 - b i t   v a l u e  
         v o i d                                                     * p ;       / / / <   m e s s a g e   o r   m a i l   a s   v o i d   p o i n t e r  
         i n t 3 2 _ t                                     s i g n a l s ;       / / / <   s i g n a l   f l a g s  
     }   v a l u e ;                                                             / / / <   e v e n t   v a l u e  
     u n i o n   {  
         o s M a i l Q I d                                 m a i l _ i d ;       / / / <   m a i l   i d   o b t a i n e d   b y   \ r e f   o s M a i l C r e a t e  
         o s M e s s a g e Q I d                     m e s s a g e _ i d ;       / / / <   m e s s a g e   i d   o b t a i n e d   b y   \ r e f   o s M e s s a g e C r e a t e  
     }   d e f ;                                                                 / / / <   e v e n t   d e f i n i t i o n  
 }   o s E v e n t ;  
    
    
 / /     = = = =   K e r n e l   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 / / /   I n i t i a l i z e   t h e   R T O S   K e r n e l   f o r   c r e a t i n g   o b j e c t s .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s K e r n e l I n i t i a l i z e   ( v o i d ) ;  
 # e n d i f  
    
 / / /   S t a r t   t h e   R T O S   K e r n e l   s c h e d u l e r .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s K e r n e l S t a r t   ( v o i d ) ;  
 # e n d i f  
    
 / / /   C h e c k   i f   t h e   R T O S   k e r n e l   i s   a l r e a d y   s t a r t e d .  
 / / /   \ r e t u r n   0   R T O S   i s   n o t   s t a r t e d ,   1   R T O S   i s   s t a r t e d .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 i n t 3 2 _ t   o s K e r n e l R u n n i n g ( v o i d ) ;  
 # e n d i f  
    
 # i f   ( d e f i n e d ( o s F e a t u r e _ S y s T i c k )   & &   ( o s F e a t u r e _ S y s T i c k   ! =   0 ) )     / /   S y s t e m   T i m e r   a v a i l a b l e  
    
 / / /   G e t   t h e   R T O S   k e r n e l   s y s t e m   t i m e r   c o u n t e r .  
 / / /   \ r e t u r n   R T O S   k e r n e l   s y s t e m   t i m e r   a s   3 2 - b i t   v a l u e    
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 u i n t 3 2 _ t   o s K e r n e l S y s T i c k   ( v o i d ) ;  
 # e l s e  
 # d e f i n e     o s K e r n e l S y s T i c k   o s K e r n e l G e t S y s T i m e r C o u n t  
 # e n d i f  
    
 / / /   T h e   R T O S   k e r n e l   s y s t e m   t i m e r   f r e q u e n c y   i n   H z .  
 / / /   \ n o t e   R e f l e c t s   t h e   s y s t e m   t i m e r   s e t t i n g   a n d   i s   t y p i c a l l y   d e f i n e d   i n   a   c o n f i g u r a t i o n   f i l e .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 # d e f i n e   o s K e r n e l S y s T i c k F r e q u e n c y   1 0 0 0 0 0 0 0 0  
 # e n d i f  
    
 / / /   C o n v e r t   a   m i c r o s e c o n d s   v a l u e   t o   a   R T O S   k e r n e l   s y s t e m   t i m e r   v a l u e .  
 / / /   \ p a r a m                   m i c r o s e c           t i m e   v a l u e   i n   m i c r o s e c o n d s .  
 / / /   \ r e t u r n   t i m e   v a l u e   n o r m a l i z e d   t o   t h e   \ r e f   o s K e r n e l S y s T i c k F r e q u e n c y  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 # d e f i n e   o s K e r n e l S y s T i c k M i c r o S e c ( m i c r o s e c )   ( ( ( u i n t 6 4 _ t ) m i c r o s e c   *   ( o s K e r n e l S y s T i c k F r e q u e n c y ) )   /   1 0 0 0 0 0 0 )  
 # e l s e  
 # d e f i n e   o s K e r n e l S y s T i c k M i c r o S e c ( m i c r o s e c )   ( ( ( u i n t 6 4 _ t ) m i c r o s e c   *     o s K e r n e l G e t S y s T i m e r F r e q ( ) )   /   1 0 0 0 0 0 0 )  
 # e n d i f  
    
 # e n d i f     / /   S y s t e m   T i m e r   a v a i l a b l e  
    
    
 / /     = = = =   T h r e a d   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 / / /   C r e a t e   a   T h r e a d   D e f i n i t i o n   w i t h   f u n c t i o n ,   p r i o r i t y ,   a n d   s t a c k   r e q u i r e m e n t s .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   t h r e a d   f u n c t i o n .  
 / / /   \ p a r a m                   p r i o r i t y             i n i t i a l   p r i o r i t y   o f   t h e   t h r e a d   f u n c t i o n .  
 / / /   \ p a r a m                   i n s t a n c e s           n u m b e r   o f   p o s s i b l e   t h r e a d   i n s t a n c e s .  
 / / /   \ p a r a m                   s t a c k s z               s t a c k   s i z e   ( i n   b y t e s )   r e q u i r e m e n t s   f o r   t h e   t h r e a d   f u n c t i o n .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r s   t o   \ b   o s T h r e a d D e f   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   d e f i n e d   ( o s O b j e c t s E x t e r n a l )     / /   o b j e c t   i s   e x t e r n a l  
 # d e f i n e   o s T h r e a d D e f ( n a m e ,   p r i o r i t y ,   i n s t a n c e s ,   s t a c k s z )   \  
 e x t e r n   c o n s t   o s T h r e a d D e f _ t   o s _ t h r e a d _ d e f _ # # n a m e  
 # e l s e                                                         / /   d e f i n e   t h e   o b j e c t  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 # d e f i n e   o s T h r e a d D e f ( n a m e ,   p r i o r i t y ,   i n s t a n c e s ,   s t a c k s z )   \  
 c o n s t   o s T h r e a d D e f _ t   o s _ t h r e a d _ d e f _ # # n a m e   =   \  
 {   ( n a m e ) ,   ( p r i o r i t y ) ,   ( i n s t a n c e s ) ,   ( s t a c k s z )   }  
 # e l s e  
 # d e f i n e   o s T h r e a d D e f ( n a m e ,   p r i o r i t y ,   i n s t a n c e s ,   s t a c k s z )   \  
 c o n s t   o s T h r e a d D e f _ t   o s _ t h r e a d _ d e f _ # # n a m e   =   \  
 {   ( n a m e ) ,   \  
     {   N U L L ,   o s T h r e a d D e t a c h e d ,   N U L L ,   0 U ,   N U L L ,   8 * ( ( s t a c k s z + 7 ) / 8 ) ,   ( p r i o r i t y ) ,   0 U ,   0 U   }   }  
 # e n d i f  
 # e n d i f  
    
 / / /   A c c e s s   a   T h r e a d   d e f i n i t i o n .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   t h r e a d   d e f i n i t i o n   o b j e c t .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s T h r e a d   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # d e f i n e   o s T h r e a d ( n a m e )   \  
 & o s _ t h r e a d _ d e f _ # # n a m e  
    
 / / /   C r e a t e   a   t h r e a d   a n d   a d d   i t   t o   A c t i v e   T h r e a d s   a n d   s e t   i t   t o   s t a t e   R E A D Y .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ d e f         t h r e a d   d e f i n i t i o n   r e f e r e n c e d   w i t h   \ r e f   o s T h r e a d .  
 / / /   \ p a r a m [ i n ]           a r g u m e n t             p o i n t e r   t h a t   i s   p a s s e d   t o   t h e   t h r e a d   f u n c t i o n   a s   s t a r t   a r g u m e n t .  
 / / /   \ r e t u r n   t h r e a d   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s T h r e a d I d   o s T h r e a d C r e a t e   ( c o n s t   o s T h r e a d D e f _ t   * t h r e a d _ d e f ,   v o i d   * a r g u m e n t ) ;  
    
 / / /   R e t u r n   t h e   t h r e a d   I D   o f   t h e   c u r r e n t   r u n n i n g   t h r e a d .  
 / / /   \ r e t u r n   t h r e a d   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s T h r e a d I d   o s T h r e a d G e t I d   ( v o i d ) ;  
 # e n d i f  
    
 / / /   C h a n g e   p r i o r i t y   o f   a   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d C r e a t e   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ p a r a m [ i n ]           p r i o r i t y             n e w   p r i o r i t y   v a l u e   f o r   t h e   t h r e a d   f u n c t i o n .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s T h r e a d S e t P r i o r i t y   ( o s T h r e a d I d   t h r e a d _ i d ,   o s P r i o r i t y   p r i o r i t y ) ;  
 # e n d i f  
    
 / / /   G e t   c u r r e n t   p r i o r i t y   o f   a   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d C r e a t e   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ r e t u r n   c u r r e n t   p r i o r i t y   v a l u e   o f   t h e   s p e c i f i e d   t h r e a d .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s P r i o r i t y   o s T h r e a d G e t P r i o r i t y   ( o s T h r e a d I d   t h r e a d _ i d ) ;  
 # e n d i f  
    
 / / /   P a s s   c o n t r o l   t o   n e x t   t h r e a d   t h a t   i s   i n   s t a t e   \ b   R E A D Y .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s T h r e a d Y i e l d   ( v o i d ) ;  
 # e n d i f  
    
 / / /   T e r m i n a t e   e x e c u t i o n   o f   a   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d C r e a t e   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s T h r e a d T e r m i n a t e   ( o s T h r e a d I d   t h r e a d _ i d ) ;  
 # e n d i f  
    
    
 / /     = = = =   S i g n a l   M a n a g e m e n t   = = = =  
    
 / / /   S e t   t h e   s p e c i f i e d   S i g n a l   F l a g s   o f   a n   a c t i v e   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d C r e a t e   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ p a r a m [ i n ]           s i g n a l s               s p e c i f i e s   t h e   s i g n a l   f l a g s   o f   t h e   t h r e a d   t h a t   s h o u l d   b e   s e t .  
 / / /   \ r e t u r n   p r e v i o u s   s i g n a l   f l a g s   o f   t h e   s p e c i f i e d   t h r e a d   o r   0 x 8 0 0 0 0 0 0 0   i n   c a s e   o f   i n c o r r e c t   p a r a m e t e r s .  
 i n t 3 2 _ t   o s S i g n a l S e t   ( o s T h r e a d I d   t h r e a d _ i d ,   i n t 3 2 _ t   s i g n a l s ) ;  
    
 / / /   C l e a r   t h e   s p e c i f i e d   S i g n a l   F l a g s   o f   a n   a c t i v e   t h r e a d .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   o b t a i n e d   b y   \ r e f   o s T h r e a d C r e a t e   o r   \ r e f   o s T h r e a d G e t I d .  
 / / /   \ p a r a m [ i n ]           s i g n a l s               s p e c i f i e s   t h e   s i g n a l   f l a g s   o f   t h e   t h r e a d   t h a t   s h a l l   b e   c l e a r e d .  
 / / /   \ r e t u r n   p r e v i o u s   s i g n a l   f l a g s   o f   t h e   s p e c i f i e d   t h r e a d   o r   0 x 8 0 0 0 0 0 0 0   i n   c a s e   o f   i n c o r r e c t   p a r a m e t e r s   o r   c a l l   f r o m   I S R .  
 i n t 3 2 _ t   o s S i g n a l C l e a r   ( o s T h r e a d I d   t h r e a d _ i d ,   i n t 3 2 _ t   s i g n a l s ) ;  
    
 / / /   W a i t   f o r   o n e   o r   m o r e   S i g n a l   F l a g s   t o   b e c o m e   s i g n a l e d   f o r   t h e   c u r r e n t   \ b   R U N N I N G   t h r e a d .  
 / / /   \ p a r a m [ i n ]           s i g n a l s               w a i t   u n t i l   a l l   s p e c i f i e d   s i g n a l   f l a g s   s e t   o r   0   f o r   a n y   s i n g l e   s i g n a l   f l a g .  
 / / /   \ p a r a m [ i n ]           m i l l i s e c             \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   e v e n t   f l a g   i n f o r m a t i o n   o r   e r r o r   c o d e .  
 o s E v e n t   o s S i g n a l W a i t   ( i n t 3 2 _ t   s i g n a l s ,   u i n t 3 2 _ t   m i l l i s e c ) ;  
    
    
 / /     = = = =   G e n e r i c   W a i t   F u n c t i o n s   = = = =  
    
 / / /   W a i t   f o r   T i m e o u t   ( T i m e   D e l a y ) .  
 / / /   \ p a r a m [ i n ]           m i l l i s e c             \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   " t i m e   d e l a y "   v a l u e  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s D e l a y   ( u i n t 3 2 _ t   m i l l i s e c ) ;  
 # e n d i f  
    
 # i f   ( d e f i n e d   ( o s F e a t u r e _ W a i t )   & &   ( o s F e a t u r e _ W a i t   ! =   0 ) )     / /   G e n e r i c   W a i t   a v a i l a b l e  
    
 / / /   W a i t   f o r   S i g n a l ,   M e s s a g e ,   M a i l ,   o r   T i m e o u t .  
 / / /   \ p a r a m [ i n ]   m i l l i s e c                     \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t  
 / / /   \ r e t u r n   e v e n t   t h a t   c o n t a i n s   s i g n a l ,   m e s s a g e ,   o r   m a i l   i n f o r m a t i o n   o r   e r r o r   c o d e .  
 o s E v e n t   o s W a i t   ( u i n t 3 2 _ t   m i l l i s e c ) ;  
    
 # e n d i f     / /   G e n e r i c   W a i t   a v a i l a b l e  
    
    
 / /     = = = =   T i m e r   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 / / /   D e f i n e   a   T i m e r   o b j e c t .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   t i m e r   o b j e c t .  
 / / /   \ p a r a m                   f u n c t i o n             n a m e   o f   t h e   t i m e r   c a l l   b a c k   f u n c t i o n .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s T i m e r D e f   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   d e f i n e d   ( o s O b j e c t s E x t e r n a l )     / /   o b j e c t   i s   e x t e r n a l  
 # d e f i n e   o s T i m e r D e f ( n a m e ,   f u n c t i o n )   \  
 e x t e r n   c o n s t   o s T i m e r D e f _ t   o s _ t i m e r _ d e f _ # # n a m e  
 # e l s e                                                         / /   d e f i n e   t h e   o b j e c t  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 # d e f i n e   o s T i m e r D e f ( n a m e ,   f u n c t i o n )   \  
 c o n s t   o s T i m e r D e f _ t   o s _ t i m e r _ d e f _ # # n a m e   =   {   ( f u n c t i o n )   }  
 # e l s e  
 # d e f i n e   o s T i m e r D e f ( n a m e ,   f u n c t i o n )   \  
 c o n s t   o s T i m e r D e f _ t   o s _ t i m e r _ d e f _ # # n a m e   =   \  
 {   ( f u n c t i o n ) ,   {   N U L L ,   0 U ,   N U L L ,   0 U   }   }  
 # e n d i f  
 # e n d i f  
    
 / / /   A c c e s s   a   T i m e r   d e f i n i t i o n .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   t i m e r   o b j e c t .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s T i m e r   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # d e f i n e   o s T i m e r ( n a m e )   \  
 & o s _ t i m e r _ d e f _ # # n a m e  
    
 / / /   C r e a t e   a n d   I n i t i a l i z e   a   t i m e r .  
 / / /   \ p a r a m [ i n ]           t i m e r _ d e f           t i m e r   o b j e c t   r e f e r e n c e d   w i t h   \ r e f   o s T i m e r .  
 / / /   \ p a r a m [ i n ]           t y p e                     o s T i m e r O n c e   f o r   o n e - s h o t   o r   o s T i m e r P e r i o d i c   f o r   p e r i o d i c   b e h a v i o r .  
 / / /   \ p a r a m [ i n ]           a r g u m e n t             a r g u m e n t   t o   t h e   t i m e r   c a l l   b a c k   f u n c t i o n .  
 / / /   \ r e t u r n   t i m e r   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s T i m e r I d   o s T i m e r C r e a t e   ( c o n s t   o s T i m e r D e f _ t   * t i m e r _ d e f ,   o s _ t i m e r _ t y p e   t y p e ,   v o i d   * a r g u m e n t ) ;  
    
 / / /   S t a r t   o r   r e s t a r t   a   t i m e r .  
 / / /   \ p a r a m [ i n ]           t i m e r _ i d             t i m e r   I D   o b t a i n e d   b y   \ r e f   o s T i m e r C r e a t e .  
 / / /   \ p a r a m [ i n ]           m i l l i s e c             \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   " t i m e   d e l a y "   v a l u e   o f   t h e   t i m e r .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s T i m e r S t a r t   ( o s T i m e r I d   t i m e r _ i d ,   u i n t 3 2 _ t   m i l l i s e c ) ;  
 # e n d i f  
    
 / / /   S t o p   a   t i m e r .  
 / / /   \ p a r a m [ i n ]           t i m e r _ i d             t i m e r   I D   o b t a i n e d   b y   \ r e f   o s T i m e r C r e a t e .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s T i m e r S t o p   ( o s T i m e r I d   t i m e r _ i d ) ;  
 # e n d i f  
    
 / / /   D e l e t e   a   t i m e r .  
 / / /   \ p a r a m [ i n ]           t i m e r _ i d             t i m e r   I D   o b t a i n e d   b y   \ r e f   o s T i m e r C r e a t e .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s T i m e r D e l e t e   ( o s T i m e r I d   t i m e r _ i d ) ;  
 # e n d i f  
    
    
 / /     = = = =   M u t e x   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 / / /   D e f i n e   a   M u t e x .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   m u t e x   o b j e c t .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s M u t e x D e f   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   d e f i n e d   ( o s O b j e c t s E x t e r n a l )     / /   o b j e c t   i s   e x t e r n a l  
 # d e f i n e   o s M u t e x D e f ( n a m e )   \  
 e x t e r n   c o n s t   o s M u t e x D e f _ t   o s _ m u t e x _ d e f _ # # n a m e  
 # e l s e                                                         / /   d e f i n e   t h e   o b j e c t  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 # d e f i n e   o s M u t e x D e f ( n a m e )   \  
 c o n s t   o s M u t e x D e f _ t   o s _ m u t e x _ d e f _ # # n a m e   =   {   0   }  
 # e l s e  
 # d e f i n e   o s M u t e x D e f ( n a m e )   \  
 c o n s t   o s M u t e x D e f _ t   o s _ m u t e x _ d e f _ # # n a m e   =   \  
 {   N U L L ,   o s M u t e x R e c u r s i v e   |   o s M u t e x P r i o I n h e r i t   |   o s M u t e x R o b u s t ,   N U L L ,   0 U   }  
 # e n d i f  
 # e n d i f  
    
 / / /   A c c e s s   a   M u t e x   d e f i n i t i o n .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   m u t e x   o b j e c t .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s M u t e x   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # d e f i n e   o s M u t e x ( n a m e )   \  
 & o s _ m u t e x _ d e f _ # # n a m e  
    
 / / /   C r e a t e   a n d   I n i t i a l i z e   a   M u t e x   o b j e c t .  
 / / /   \ p a r a m [ i n ]           m u t e x _ d e f           m u t e x   d e f i n i t i o n   r e f e r e n c e d   w i t h   \ r e f   o s M u t e x .  
 / / /   \ r e t u r n   m u t e x   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s M u t e x I d   o s M u t e x C r e a t e   ( c o n s t   o s M u t e x D e f _ t   * m u t e x _ d e f ) ;  
    
 / / /   W a i t   u n t i l   a   M u t e x   b e c o m e s   a v a i l a b l e .  
 / / /   \ p a r a m [ i n ]           m u t e x _ i d             m u t e x   I D   o b t a i n e d   b y   \ r e f   o s M u t e x C r e a t e .  
 / / /   \ p a r a m [ i n ]           m i l l i s e c             \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s M u t e x W a i t   ( o s M u t e x I d   m u t e x _ i d ,   u i n t 3 2 _ t   m i l l i s e c ) ;  
 # e l s e  
 # d e f i n e     o s M u t e x W a i t   o s M u t e x A c q u i r e  
 # e n d i f  
    
 / / /   R e l e a s e   a   M u t e x   t h a t   w a s   o b t a i n e d   b y   \ r e f   o s M u t e x W a i t .  
 / / /   \ p a r a m [ i n ]           m u t e x _ i d             m u t e x   I D   o b t a i n e d   b y   \ r e f   o s M u t e x C r e a t e .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s M u t e x R e l e a s e   ( o s M u t e x I d   m u t e x _ i d ) ;  
 # e n d i f  
    
 / / /   D e l e t e   a   M u t e x   o b j e c t .  
 / / /   \ p a r a m [ i n ]           m u t e x _ i d             m u t e x   I D   o b t a i n e d   b y   \ r e f   o s M u t e x C r e a t e .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s M u t e x D e l e t e   ( o s M u t e x I d   m u t e x _ i d ) ;  
 # e n d i f  
    
    
 / /     = = = =   S e m a p h o r e   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 # i f   ( d e f i n e d   ( o s F e a t u r e _ S e m a p h o r e )   & &   ( o s F e a t u r e _ S e m a p h o r e   ! =   0 U ) )     / /   S e m a p h o r e   a v a i l a b l e  
    
 / / /   D e f i n e   a   S e m a p h o r e   o b j e c t .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   s e m a p h o r e   o b j e c t .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s S e m a p h o r e D e f   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   d e f i n e d   ( o s O b j e c t s E x t e r n a l )     / /   o b j e c t   i s   e x t e r n a l  
 # d e f i n e   o s S e m a p h o r e D e f ( n a m e )   \  
 e x t e r n   c o n s t   o s S e m a p h o r e D e f _ t   o s _ s e m a p h o r e _ d e f _ # # n a m e  
 # e l s e                                                         / /   d e f i n e   t h e   o b j e c t  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 # d e f i n e   o s S e m a p h o r e D e f ( n a m e )   \  
 c o n s t   o s S e m a p h o r e D e f _ t   o s _ s e m a p h o r e _ d e f _ # # n a m e   =   {   0   }  
 # e l s e  
 # d e f i n e   o s S e m a p h o r e D e f ( n a m e )   \  
 c o n s t   o s S e m a p h o r e D e f _ t   o s _ s e m a p h o r e _ d e f _ # # n a m e   =   \  
 {   N U L L ,   0 U ,   N U L L ,   0 U   }  
 # e n d i f  
 # e n d i f  
    
 / / /   A c c e s s   a   S e m a p h o r e   d e f i n i t i o n .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   s e m a p h o r e   o b j e c t .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s S e m a p h o r e   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # d e f i n e   o s S e m a p h o r e ( n a m e )   \  
 & o s _ s e m a p h o r e _ d e f _ # # n a m e  
    
 / / /   C r e a t e   a n d   I n i t i a l i z e   a   S e m a p h o r e   o b j e c t .  
 / / /   \ p a r a m [ i n ]           s e m a p h o r e _ d e f   s e m a p h o r e   d e f i n i t i o n   r e f e r e n c e d   w i t h   \ r e f   o s S e m a p h o r e .  
 / / /   \ p a r a m [ i n ]           c o u n t                   m a x i m u m   a n d   i n i t i a l   n u m b e r   o f   a v a i l a b l e   t o k e n s .  
 / / /   \ r e t u r n   s e m a p h o r e   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s S e m a p h o r e I d   o s S e m a p h o r e C r e a t e   ( c o n s t   o s S e m a p h o r e D e f _ t   * s e m a p h o r e _ d e f ,   i n t 3 2 _ t   c o u n t ) ;  
    
 / / /   W a i t   u n t i l   a   S e m a p h o r e   t o k e n   b e c o m e s   a v a i l a b l e .  
 / / /   \ p a r a m [ i n ]           s e m a p h o r e _ i d     s e m a p h o r e   o b j e c t   r e f e r e n c e d   w i t h   \ r e f   o s S e m a p h o r e C r e a t e .  
 / / /   \ p a r a m [ i n ]           m i l l i s e c             \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   n u m b e r   o f   a v a i l a b l e   t o k e n s ,   o r   - 1   i n   c a s e   o f   i n c o r r e c t   p a r a m e t e r s .  
 i n t 3 2 _ t   o s S e m a p h o r e W a i t   ( o s S e m a p h o r e I d   s e m a p h o r e _ i d ,   u i n t 3 2 _ t   m i l l i s e c ) ;  
    
 / / /   R e l e a s e   a   S e m a p h o r e   t o k e n .  
 / / /   \ p a r a m [ i n ]           s e m a p h o r e _ i d     s e m a p h o r e   o b j e c t   r e f e r e n c e d   w i t h   \ r e f   o s S e m a p h o r e C r e a t e .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s S e m a p h o r e R e l e a s e   ( o s S e m a p h o r e I d   s e m a p h o r e _ i d ) ;  
 # e n d i f  
    
 / / /   D e l e t e   a   S e m a p h o r e   o b j e c t .  
 / / /   \ p a r a m [ i n ]           s e m a p h o r e _ i d     s e m a p h o r e   o b j e c t   r e f e r e n c e d   w i t h   \ r e f   o s S e m a p h o r e C r e a t e .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 o s S t a t u s   o s S e m a p h o r e D e l e t e   ( o s S e m a p h o r e I d   s e m a p h o r e _ i d ) ;  
 # e n d i f  
    
 # e n d i f     / /   S e m a p h o r e   a v a i l a b l e  
    
    
 / /     = = = =   M e m o r y   P o o l   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 # i f   ( d e f i n e d ( o s F e a t u r e _ P o o l )   & &   ( o s F e a t u r e _ P o o l   ! =   0 ) )     / /   M e m o r y   P o o l   a v a i l a b l e  
    
 / / /   \ b r i e f   D e f i n e   a   M e m o r y   P o o l .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   m e m o r y   p o o l .  
 / / /   \ p a r a m                   n o                         m a x i m u m   n u m b e r   o f   b l o c k s   ( o b j e c t s )   i n   t h e   m e m o r y   p o o l .  
 / / /   \ p a r a m                   t y p e                     d a t a   t y p e   o f   a   s i n g l e   b l o c k   ( o b j e c t ) .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s P o o l D e f   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   d e f i n e d   ( o s O b j e c t s E x t e r n a l )     / /   o b j e c t   i s   e x t e r n a l  
 # d e f i n e   o s P o o l D e f ( n a m e ,   n o ,   t y p e )   \  
 e x t e r n   c o n s t   o s P o o l D e f _ t   o s _ p o o l _ d e f _ # # n a m e  
 # e l s e                                                         / /   d e f i n e   t h e   o b j e c t  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 # d e f i n e   o s P o o l D e f ( n a m e ,   n o ,   t y p e )   \  
 c o n s t   o s P o o l D e f _ t   o s _ p o o l _ d e f _ # # n a m e   =   \  
 {   ( n o ) ,   s i z e o f ( t y p e ) ,   N U L L   }  
 # e l s e  
 # d e f i n e   o s P o o l D e f ( n a m e ,   n o ,   t y p e )   \  
 c o n s t   o s P o o l D e f _ t   o s _ p o o l _ d e f _ # # n a m e   =   \  
 {   ( n o ) ,   s i z e o f ( t y p e ) ,   {   N U L L ,   0 U ,   N U L L ,   0 U ,   N U L L ,   0 U   }   }  
 # e n d i f  
 # e n d i f  
    
 / / /   \ b r i e f   A c c e s s   a   M e m o r y   P o o l   d e f i n i t i o n .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   m e m o r y   p o o l  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s P o o l   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # d e f i n e   o s P o o l ( n a m e )   \  
 & o s _ p o o l _ d e f _ # # n a m e  
    
 / / /   C r e a t e   a n d   I n i t i a l i z e   a   M e m o r y   P o o l   o b j e c t .  
 / / /   \ p a r a m [ i n ]           p o o l _ d e f             m e m o r y   p o o l   d e f i n i t i o n   r e f e r e n c e d   w i t h   \ r e f   o s P o o l .  
 / / /   \ r e t u r n   m e m o r y   p o o l   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s P o o l I d   o s P o o l C r e a t e   ( c o n s t   o s P o o l D e f _ t   * p o o l _ d e f ) ;  
    
 / / /   A l l o c a t e   a   m e m o r y   b l o c k   f r o m   a   M e m o r y   P o o l .  
 / / /   \ p a r a m [ i n ]           p o o l _ i d               m e m o r y   p o o l   I D   o b t a i n   r e f e r e n c e d   w i t h   \ r e f   o s P o o l C r e a t e .  
 / / /   \ r e t u r n   a d d r e s s   o f   t h e   a l l o c a t e d   m e m o r y   b l o c k   o r   N U L L   i n   c a s e   o f   n o   m e m o r y   a v a i l a b l e .  
 v o i d   * o s P o o l A l l o c   ( o s P o o l I d   p o o l _ i d ) ;  
    
 / / /   A l l o c a t e   a   m e m o r y   b l o c k   f r o m   a   M e m o r y   P o o l   a n d   s e t   m e m o r y   b l o c k   t o   z e r o .  
 / / /   \ p a r a m [ i n ]           p o o l _ i d               m e m o r y   p o o l   I D   o b t a i n   r e f e r e n c e d   w i t h   \ r e f   o s P o o l C r e a t e .  
 / / /   \ r e t u r n   a d d r e s s   o f   t h e   a l l o c a t e d   m e m o r y   b l o c k   o r   N U L L   i n   c a s e   o f   n o   m e m o r y   a v a i l a b l e .  
 v o i d   * o s P o o l C A l l o c   ( o s P o o l I d   p o o l _ i d ) ;  
    
 / / /   R e t u r n   a n   a l l o c a t e d   m e m o r y   b l o c k   b a c k   t o   a   M e m o r y   P o o l .  
 / / /   \ p a r a m [ i n ]           p o o l _ i d               m e m o r y   p o o l   I D   o b t a i n   r e f e r e n c e d   w i t h   \ r e f   o s P o o l C r e a t e .  
 / / /   \ p a r a m [ i n ]           b l o c k                   a d d r e s s   o f   t h e   a l l o c a t e d   m e m o r y   b l o c k   t o   b e   r e t u r n e d   t o   t h e   m e m o r y   p o o l .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s   o s P o o l F r e e   ( o s P o o l I d   p o o l _ i d ,   v o i d   * b l o c k ) ;  
    
 # e n d i f     / /   M e m o r y   P o o l   a v a i l a b l e  
    
    
 / /     = = = =   M e s s a g e   Q u e u e   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 # i f   ( d e f i n e d ( o s F e a t u r e _ M e s s a g e Q )   & &   ( o s F e a t u r e _ M e s s a g e Q   ! =   0 ) )     / /   M e s s a g e   Q u e u e   a v a i l a b l e  
      
 / / /   \ b r i e f   C r e a t e   a   M e s s a g e   Q u e u e   D e f i n i t i o n .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   q u e u e .  
 / / /   \ p a r a m                   q u e u e _ s z             m a x i m u m   n u m b e r   o f   m e s s a g e s   i n   t h e   q u e u e .  
 / / /   \ p a r a m                   t y p e                     d a t a   t y p e   o f   a   s i n g l e   m e s s a g e   e l e m e n t   ( f o r   d e b u g g e r ) .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s M e s s a g e Q D e f   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   d e f i n e d   ( o s O b j e c t s E x t e r n a l )     / /   o b j e c t   i s   e x t e r n a l  
 # d e f i n e   o s M e s s a g e Q D e f ( n a m e ,   q u e u e _ s z ,   t y p e )   \  
 e x t e r n   c o n s t   o s M e s s a g e Q D e f _ t   o s _ m e s s a g e Q _ d e f _ # # n a m e  
 # e l s e                                                         / /   d e f i n e   t h e   o b j e c t  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 # d e f i n e   o s M e s s a g e Q D e f ( n a m e ,   q u e u e _ s z ,   t y p e )   \  
 c o n s t   o s M e s s a g e Q D e f _ t   o s _ m e s s a g e Q _ d e f _ # # n a m e   =   \  
 {   ( q u e u e _ s z ) ,   N U L L   }  
 # e l s e  
 # d e f i n e   o s M e s s a g e Q D e f ( n a m e ,   q u e u e _ s z ,   t y p e )   \  
 c o n s t   o s M e s s a g e Q D e f _ t   o s _ m e s s a g e Q _ d e f _ # # n a m e   =   \  
 {   ( q u e u e _ s z ) ,   {   N U L L ,   0 U ,   N U L L ,   0 U ,   N U L L ,   0 U   }   }  
 # e n d i f  
 # e n d i f  
    
 / / /   \ b r i e f   A c c e s s   a   M e s s a g e   Q u e u e   D e f i n i t i o n .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   q u e u e  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s M e s s a g e Q   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # d e f i n e   o s M e s s a g e Q ( n a m e )   \  
 & o s _ m e s s a g e Q _ d e f _ # # n a m e  
    
 / / /   C r e a t e   a n d   I n i t i a l i z e   a   M e s s a g e   Q u e u e   o b j e c t .  
 / / /   \ p a r a m [ i n ]           q u e u e _ d e f           m e s s a g e   q u e u e   d e f i n i t i o n   r e f e r e n c e d   w i t h   \ r e f   o s M e s s a g e Q .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   ( o b t a i n e d   b y   \ r e f   o s T h r e a d C r e a t e   o r   \ r e f   o s T h r e a d G e t I d )   o r   N U L L .  
 / / /   \ r e t u r n   m e s s a g e   q u e u e   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s M e s s a g e Q I d   o s M e s s a g e C r e a t e   ( c o n s t   o s M e s s a g e Q D e f _ t   * q u e u e _ d e f ,   o s T h r e a d I d   t h r e a d _ i d ) ;  
    
 / / /   P u t   a   M e s s a g e   t o   a   Q u e u e .  
 / / /   \ p a r a m [ i n ]           q u e u e _ i d             m e s s a g e   q u e u e   I D   o b t a i n e d   w i t h   \ r e f   o s M e s s a g e C r e a t e .  
 / / /   \ p a r a m [ i n ]           i n f o                     m e s s a g e   i n f o r m a t i o n .  
 / / /   \ p a r a m [ i n ]           m i l l i s e c             \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s   o s M e s s a g e P u t   ( o s M e s s a g e Q I d   q u e u e _ i d ,   u i n t 3 2 _ t   i n f o ,   u i n t 3 2 _ t   m i l l i s e c ) ;  
    
 / / /   G e t   a   M e s s a g e   f r o m   a   Q u e u e   o r   t i m e o u t   i f   Q u e u e   i s   e m p t y .  
 / / /   \ p a r a m [ i n ]           q u e u e _ i d             m e s s a g e   q u e u e   I D   o b t a i n e d   w i t h   \ r e f   o s M e s s a g e C r e a t e .  
 / / /   \ p a r a m [ i n ]           m i l l i s e c             \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   e v e n t   i n f o r m a t i o n   t h a t   i n c l u d e s   s t a t u s   c o d e .  
 o s E v e n t   o s M e s s a g e G e t   ( o s M e s s a g e Q I d   q u e u e _ i d ,   u i n t 3 2 _ t   m i l l i s e c ) ;  
    
 # e n d i f     / /   M e s s a g e   Q u e u e   a v a i l a b l e  
    
    
 / /     = = = =   M a i l   Q u e u e   M a n a g e m e n t   F u n c t i o n s   = = = =  
    
 # i f   ( d e f i n e d ( o s F e a t u r e _ M a i l Q )   & &   ( o s F e a t u r e _ M a i l Q   ! =   0 ) )     / /   M a i l   Q u e u e   a v a i l a b l e  
    
 / / /   \ b r i e f   C r e a t e   a   M a i l   Q u e u e   D e f i n i t i o n .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   q u e u e .  
 / / /   \ p a r a m                   q u e u e _ s z             m a x i m u m   n u m b e r   o f   m a i l s   i n   t h e   q u e u e .  
 / / /   \ p a r a m                   t y p e                     d a t a   t y p e   o f   a   s i n g l e   m a i l   e l e m e n t .  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s M a i l Q D e f   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # i f   d e f i n e d   ( o s O b j e c t s E x t e r n a l )     / /   o b j e c t   i s   e x t e r n a l  
 # d e f i n e   o s M a i l Q D e f ( n a m e ,   q u e u e _ s z ,   t y p e )   \  
 e x t e r n   c o n s t   o s M a i l Q D e f _ t   o s _ m a i l Q _ d e f _ # # n a m e  
 # e l s e                                                         / /   d e f i n e   t h e   o b j e c t  
 # i f   ( o s C M S I S   <   0 x 2 0 0 0 0 U )  
 # d e f i n e   o s M a i l Q D e f ( n a m e ,   q u e u e _ s z ,   t y p e )   \  
 c o n s t   o s M a i l Q D e f _ t   o s _ m a i l Q _ d e f _ # # n a m e   =   \  
 {   ( q u e u e _ s z ) ,   s i z e o f ( t y p e ) ,   N U L L   }  
 # e l s e  
 # d e f i n e   o s M a i l Q D e f ( n a m e ,   q u e u e _ s z ,   t y p e )   \  
 s t a t i c   v o i d   * o s _ m a i l _ p _ # # n a m e [ 2 ] ;   \  
 c o n s t   o s M a i l Q D e f _ t   o s _ m a i l Q _ d e f _ # # n a m e   =   \  
 {   ( q u e u e _ s z ) ,   s i z e o f ( t y p e ) ,   ( & o s _ m a i l _ p _ # # n a m e ) ,   \  
     {   N U L L ,   0 U ,   N U L L ,   0 U ,   N U L L ,   0 U   } ,   \  
     {   N U L L ,   0 U ,   N U L L ,   0 U ,   N U L L ,   0 U   }   }  
 # e n d i f  
 # e n d i f  
    
 / / /   \ b r i e f   A c c e s s   a   M a i l   Q u e u e   D e f i n i t i o n .  
 / / /   \ p a r a m                   n a m e                     n a m e   o f   t h e   q u e u e  
 / / /   \ n o t e   C A N   B E   C H A N G E D :   T h e   p a r a m e t e r   t o   \ b   o s M a i l Q   s h a l l   b e   c o n s i s t e n t   b u t   t h e  
 / / /               m a c r o   b o d y   i s   i m p l e m e n t a t i o n   s p e c i f i c   i n   e v e r y   C M S I S - R T O S .  
 # d e f i n e   o s M a i l Q ( n a m e )   \  
 & o s _ m a i l Q _ d e f _ # # n a m e  
    
 / / /   C r e a t e   a n d   I n i t i a l i z e   a   M a i l   Q u e u e   o b j e c t .  
 / / /   \ p a r a m [ i n ]           q u e u e _ d e f           m a i l   q u e u e   d e f i n i t i o n   r e f e r e n c e d   w i t h   \ r e f   o s M a i l Q .  
 / / /   \ p a r a m [ i n ]           t h r e a d _ i d           t h r e a d   I D   ( o b t a i n e d   b y   \ r e f   o s T h r e a d C r e a t e   o r   \ r e f   o s T h r e a d G e t I d )   o r   N U L L .  
 / / /   \ r e t u r n   m a i l   q u e u e   I D   f o r   r e f e r e n c e   b y   o t h e r   f u n c t i o n s   o r   N U L L   i n   c a s e   o f   e r r o r .  
 o s M a i l Q I d   o s M a i l C r e a t e   ( c o n s t   o s M a i l Q D e f _ t   * q u e u e _ d e f ,   o s T h r e a d I d   t h r e a d _ i d ) ;  
    
 / / /   A l l o c a t e   a   m e m o r y   b l o c k   f o r   m a i l   f r o m   a   m a i l   m e m o r y   p o o l .  
 / / /   \ p a r a m [ i n ]           q u e u e _ i d             m a i l   q u e u e   I D   o b t a i n e d   w i t h   \ r e f   o s M a i l C r e a t e .  
 / / /   \ p a r a m [ i n ]           m i l l i s e c             \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t  
 / / /   \ r e t u r n   p o i n t e r   t o   m e m o r y   b l o c k   t h a t   c a n   b e   f i l l e d   w i t h   m a i l   o r   N U L L   i n   c a s e   o f   e r r o r .  
 v o i d   * o s M a i l A l l o c   ( o s M a i l Q I d   q u e u e _ i d ,   u i n t 3 2 _ t   m i l l i s e c ) ;  
    
 / / /   A l l o c a t e   a   m e m o r y   b l o c k   f o r   m a i l   f r o m   a   m a i l   m e m o r y   p o o l   a n d   s e t   m e m o r y   b l o c k   t o   z e r o .  
 / / /   \ p a r a m [ i n ]           q u e u e _ i d             m a i l   q u e u e   I D   o b t a i n e d   w i t h   \ r e f   o s M a i l C r e a t e .  
 / / /   \ p a r a m [ i n ]           m i l l i s e c             \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t  
 / / /   \ r e t u r n   p o i n t e r   t o   m e m o r y   b l o c k   t h a t   c a n   b e   f i l l e d   w i t h   m a i l   o r   N U L L   i n   c a s e   o f   e r r o r .  
 v o i d   * o s M a i l C A l l o c   ( o s M a i l Q I d   q u e u e _ i d ,   u i n t 3 2 _ t   m i l l i s e c ) ;  
    
 / / /   P u t   a   M a i l   i n t o   a   Q u e u e .  
 / / /   \ p a r a m [ i n ]           q u e u e _ i d             m a i l   q u e u e   I D   o b t a i n e d   w i t h   \ r e f   o s M a i l C r e a t e .  
 / / /   \ p a r a m [ i n ]           m a i l                     p o i n t e r   t o   m e m o r y   w i t h   m a i l   t o   p u t   i n t o   a   q u e u e .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s   o s M a i l P u t   ( o s M a i l Q I d   q u e u e _ i d ,   c o n s t   v o i d   * m a i l ) ;  
    
 / / /   G e t   a   M a i l   f r o m   a   Q u e u e   o r   t i m e o u t   i f   Q u e u e   i s   e m p t y .  
 / / /   \ p a r a m [ i n ]           q u e u e _ i d             m a i l   q u e u e   I D   o b t a i n e d   w i t h   \ r e f   o s M a i l C r e a t e .  
 / / /   \ p a r a m [ i n ]           m i l l i s e c             \ r e f   C M S I S _ R T O S _ T i m e O u t V a l u e   o r   0   i n   c a s e   o f   n o   t i m e - o u t .  
 / / /   \ r e t u r n   e v e n t   i n f o r m a t i o n   t h a t   i n c l u d e s   s t a t u s   c o d e .  
 o s E v e n t   o s M a i l G e t   ( o s M a i l Q I d   q u e u e _ i d ,   u i n t 3 2 _ t   m i l l i s e c ) ;  
    
 / / /   F r e e   a   m e m o r y   b l o c k   b y   r e t u r n i n g   i t   t o   a   m a i l   m e m o r y   p o o l .  
 / / /   \ p a r a m [ i n ]           q u e u e _ i d             m a i l   q u e u e   I D   o b t a i n e d   w i t h   \ r e f   o s M a i l C r e a t e .  
 / / /   \ p a r a m [ i n ]           m a i l                     p o i n t e r   t o   m e m o r y   b l o c k   t h a t   w a s   o b t a i n e d   w i t h   \ r e f   o s M a i l G e t .  
 / / /   \ r e t u r n   s t a t u s   c o d e   t h a t   i n d i c a t e s   t h e   e x e c u t i o n   s t a t u s   o f   t h e   f u n c t i o n .  
 o s S t a t u s   o s M a i l F r e e   ( o s M a i l Q I d   q u e u e _ i d ,   v o i d   * m a i l ) ;  
    
 # e n d i f     / /   M a i l   Q u e u e   a v a i l a b l e  
    
    
 # i f d e f     _ _ c p l u s p l u s  
 }  
 # e n d i f  
    
 # e n d i f     / /   C M S I S _ O S _ H _  